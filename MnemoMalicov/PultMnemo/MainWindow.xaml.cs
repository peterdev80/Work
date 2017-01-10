
using PatchMnemoLib.ViewModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using ValueModel.BaseModel;
using WPFMnemoLibrary.Model;

namespace PultMnemo
{
    /// <summary>
    /// Логика взаимодействия для MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            /*var dc = VariablesDataContext.GetNamedContext("mnemo");
            dc.VariablesChannelName = "VarModel";
            dc.Manager = Manager.GetAPI("mnemo", Guid.Parse("B7BC704A-3000-4B17-8AD4-823EF6A4D892"));
          */  InitializeComponent();
            var trmp=LinkInpuLinux.Instance;
            this.PreviewKeyDown +=
            (sender, e) =>
            {

                if (e.Key.ToString() == "V")
                {



                  
                    var val = ViewModelVariableList.Instance;
                    var d = ((BitIntVar)val.GetVariable("__UKDU_1").VarM).Dispatcher;


                    d.Invoke(new Action(() => ((BitIntVar)val.GetVariable("__MNEMO_RES_51").VarM).VarBitInt = 2));
                }
            };
        }
        private bool IsToggle;

        public object ViewModelVariableLists { get; private set; } //узнать зачем поле нужно,

        private void Expander_PreviewMouseLeftButtonDown(object sender, MouseButtonEventArgs e)
        {
            if (!IsToggle)
            {
               
                GridLengthConverter myGridLengthConverter = new GridLengthConverter();
                GridLength gl1 = (GridLength)myGridLengthConverter.ConvertFromString("30");
                Column1.Width = gl1;
                IsToggle = true;
                BrdMenu.Visibility = Visibility.Hidden;
            }
            else
            {
                //  da.To = 10;
                //  da.Duration = TimeSpan.FromSeconds(1);
                //  Column1.BeginAnimation(ColumnDefinition.WidthProperty, da);
                GridLengthConverter myGridLengthConverter = new GridLengthConverter();
                GridLength gl1 = (GridLength)myGridLengthConverter.ConvertFromString("170");
                Column1.Width = gl1;
                IsToggle = false;
                BrdMenu.Visibility = Visibility.Visible;
            }
        }
    }
}
