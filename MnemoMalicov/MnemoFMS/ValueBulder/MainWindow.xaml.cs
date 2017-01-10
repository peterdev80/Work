using fmslapi;
using fmslapi.Bindings.WPF;
using PatchMnemoLib.ViewModel;
using System;
using System.Collections.Generic;
using System.Diagnostics;
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

namespace ValueBulder
{
    /// <summary>
    /// Логика взаимодействия для MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {

        private FileInit Fi;
        public MainWindow()
        {
            var dc = VariablesDataContext.GetNamedContext("mnemo");
            dc.VariablesChannelName = "VarModel";
            dc.Manager = Manager.GetAPI("mnemo", Guid.Parse("B7BC704A-3000-4B17-8AD4-823EF6A4D892"));
            InitializeComponent();
           /* Fi = new FileInit(); 
            Fi.Ser = "SerializationSEP_MC.xml";
            Fi.Rout = "RoutedSEP_MC.xml";
            Fi.SerFile.Add("SerializationSEP_MC.xml");
            Fi.RoutFile.Add("RoutedSEP_MC.xml");
            XmlSerializer xmlFormat = new XmlSerializer(typeof(FileInit));
            using (Stream fstream = new FileStream("FileIni.xml", FileMode.Create, FileAccess.Write, FileShare.None))
            {
                xmlFormat.Serialize(fstream, Fi);
            }*/
               XmlSerializer xmlFormat = new XmlSerializer(typeof(FileInit));
               using (Stream fstram = File.OpenRead("FileIni.xml"))
               {
                   Fi = (FileInit)xmlFormat.Deserialize(fstram);
               }
              ((ViewModelEditor)root.DataContext).RShema = "pack://application:,,,/ResourceFiles;component/Data/" + Fi.Ser;
               ((ViewModelEditor)root.DataContext).RRout = "pack://application:,,,/ResourceFiles;component/Data/" + Fi.Rout;
           
            vm = root.DataContext as ViewModelEditor;
            vm.MC.Canva = MC;
            elem.Routs = vm.Routed.RoutList;
        }
        TableValue tv;
        ViewModelEditor vm;
        private void button_Click(object sender, RoutedEventArgs e)
        {
           /* tv = new TableValue(vm.Routed.RoutList);

            l0.ItemsSource = tv.ValuesList;
                       // tv.vmr.AllPatch;
         /*  foreach (var x in tv.RL)
            {
                Debug.WriteLine(x.ValueName);

            }*/




        }
    }
}
