using fmslapi.Bindings.WPF;
using PatchMnemoLib.ViewModel;
using PatchMnemoLib.ViewModelRout;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Collections.Specialized;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Xml.Serialization;
using ValueModel.BaseModelCommand;
using ValueModel.BaseType;

namespace ValueBulder
{
    /// <summary>
    /// Логика взаимодействия для TablValue.xaml
    /// </summary>
    public partial class TablValue : UserControl
    {

        private ObservableCollection<ViewModelRoute> _Routs = new ObservableCollection<ViewModelRoute>();
      
        public TablValue()
        {
            InitializeComponent();
           
        }
        public ObservableCollection<ViewModelRoute> Routs { get { return _Routs; } set { _Routs = value; CreateViewObject(); } }
        public ViewModelVariableList VL;

        private void CreateViewObject()
        {


            ObservableCollection<ViewObject> ValuesList = new ObservableCollection<ViewObject>();
            var DistinctRl = _Routs.OrderBy(x => x.ValueName).Distinct(new RouteComparer());

         
            Root.DataContext = DistinctRl;



        }

        private void CreateViewObjectFind()
        {
          
            var DistinctRl= _Routs.OrderBy(x => x.ValueName).Distinct(new RouteComparer());

            if (tbObmen.Text != "")
            { 


                DistinctRl = DistinctRl.Where(x => x.ValueName == tbObmen.Text);//OrderBy(x => x.ValueName).Distinct(new RouteComparer());
            }
            if (tbPos.Text!="")
                DistinctRl = DistinctRl.Where(x => x.ValuePos == Int32.Parse(tbPos.Text));//OrderBy(x => x.ValueName).Distinct(new RouteComparer());
            if (tbName.Text != "")
                DistinctRl = DistinctRl.Where(x => x.Name == (tbName.Text));//OrderBy(x => x.ValueName).Distinct(new RouteComparer());


            Root.DataContext = DistinctRl;



        }
        private int findMaxValue(int bits)
        {
            return (int)Math.Pow(2, bits)-1;

        }
        private List<BitVector32.Section> mask;
        private List<BitVector32.Section> GetMask()
        {
            if (mask == null)
            {
                string valn = ln.Content.ToString();
                var varN = ViewModelVariableList.Instance.GetVariable(valn);
 mask = new List<BitVector32.Section>();
                mask.Add(BitVector32.CreateSection((short)findMaxValue(varN.Mask[0])));
                for (int i = 1; i < varN.Mask.Count; i++)
                    mask.Add(BitVector32.CreateSection((short)findMaxValue(varN.Mask[i]), mask[i - 1]));
            }
            return mask;
        }
        private void Button_Click(object sender, RoutedEventArgs e)
        {

           string valn = ln.Content.ToString();
          
           
            int bits = int.Parse(lbit.Content.ToString());

        var bitsl = new BitVector32((int) VariablesDataContext.GetNamedContext("mnemo").VariablesChannel.GetIntVariable(valn).Value);
            //int myBit1=BitVector32.CreateMask();
            int valInput = 0;
                int.TryParse(wEdit.Text, out valInput);

            if (valInput > GetMask()[bits].Mask)
            { valInput = 0; wEdit.Text = "0"; }
                bitsl[GetMask()[bits]] = valInput;
            VHCommands.ComIntK("mnemo", valn, bitsl.Data);
            wEdit.Text = "0";
        }

        private void l0_SelectionChanged(object sender, SelectionChangedEventArgs e)
        {
            mask = null;
            int bits = int.Parse(lbit.Content.ToString());
            lmax.Content = GetMask()[bits].Mask;
          
         




        }

        private void Button_Click_1(object sender, RoutedEventArgs e)
        {

            CreateViewObjectFind();
        }

        private void Button_Click_2(object sender, RoutedEventArgs e)
        {
            tbObmen.Text = "";
            tbPos.Text = "";
            tbName.Text = "";
            CreateViewObject();

        }
    }
}
