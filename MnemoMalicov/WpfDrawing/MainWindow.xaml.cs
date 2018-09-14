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
using PatchMnemoLib;
using System.Diagnostics;
using PatchMnemoLib.ViewModel;
using PatchMnemoLib.Model;


namespace WpfDrawing
{
    /// <summary>
    /// Логика взаимодействия для MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        ViewModelEditor vm;
        public MainWindow()
        {
           // var dc = VariablesDataContext.GetNamedContext("mnemo");
           // dc.VariablesChannelName = "VarModel";
           // dc.Manager = Manager.GetAPI("mnemo", Guid.Parse("B7BC704A-3000-4B17-8AD4-823EF6A4D892"));
            InitializeComponent();
             vm = stackPanel1.DataContext as ViewModelEditor;
            vm.MC.Canva=MC;
            vm.MC.PropertyChanged += new System.ComponentModel.PropertyChangedEventHandler(MC_PropertyChanged);
            //vm.MC = this.MC;

           
        }

        void MC_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
        {
            if (e.PropertyName == "SelectedGraphics")
            {
                if (vm.MC.SelectedViewModelGraphics != null)
                    // vm.MC.SelectedViewModelGraphics.ReDraw();
                    vm.MC.RedrawPos();
                
            }
        }

        private void button3_Click(object sender, RoutedEventArgs e)
        {
          


        }

        private void MC_MouseLeftButtonDown(object sender, MouseButtonEventArgs e)
        {
          /*  var p=e.GetPosition(this.MC);
            var x = MC.GetVisual(p) as PathMnemo;
            if (x != null)
                MC.SelectedGraphics = x.Name;
            else
                MC.SelectedGraphics = "Null";*/

        }

        private void button4_Click(object sender, RoutedEventArgs e)
        {
           // if (MC.SelectedGraphics != "Null")
            {
               
            }

        }
        ScaleTransform st = new ScaleTransform(1.5d, 1.5d);
        private void button1_Click(object sender, RoutedEventArgs e)
        {

          //  ScaleTransform st = new ScaleTransform(1.5d, 1.5d);
            st.ScaleX += 0.1d;
            st.ScaleY += 0.1d;
            MC.LayoutTransform = st;
           /* MC.Width += 100;
            MC.Height += 100;*/
        }

        private void button2_Click(object sender, RoutedEventArgs e)
        {
            st.ScaleX -= 0.1d;
            st.ScaleY -= 0.1d;
            MC.LayoutTransform = st;
           

        }

        private void btnsave_Click(object sender, RoutedEventArgs e)
        {
            ViewModelEditor vm = stackPanel1.DataContext as ViewModelEditor;
            vm.MC.SaveCanvas("asa");

           // MC.SaveCanvas();
        }
      //  ViewModelRouted vmrrr;
        private void btnload_Click(object sender, RoutedEventArgs e)
        {
           /* vmrrr = new ViewModelRouted(MC);
            MC.LoadCanvas();
            vmrrr.LoadResource("testRouted.xml");*/

        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
           /* PatchMnemoLib.Model.StatesPatch cl = new PatchMnemoLib.Model.StatesPatch();
            cl.AddState("m1",4, new PatchMnemoLib.Model.PropClass("m1", new List<Pen>{new Pen(),new Pen(),new Pen(),new Pen()}));
            cl.AddState("m2", 4, new PatchMnemoLib.Model.PropClass("m2",new List<Pen> { new Pen(), new Pen(), new Pen(), new Pen() }));
            cl.AddState("m3", 2, new PatchMnemoLib.Model.PropClass("m3",new List<Pen> { new Pen(), new Pen() }));
            cl.SetState(1, "m1");
            cl.GetState();
            cl.SetState(1, "m2");
            cl.GetState();
            cl.SetState(1, "m3");
            cl.GetState();
            cl.SetState(0, "m1");
            cl.GetState();
            cl.SetState(0, "m2");
            ViewModelRouted r = new ViewModelRouted();*/






          //  viewModelMnemoAnimPen.Instance.SaveResource("my2.xml");

        /*  Pen p2 = viewModelMnemoAnimPen.Instance.GetPen("pRed");
Pen p=  ((PatchMnemoLib.Model.StatePatch)cl.GetState()).MPen;*/
       
        
        
        
        
        }
       // ViewModelRoute vmr;
        //ViewModelRoute vmr2;
        private void btnload444_Click(object sender, RoutedEventArgs e)
        {
           /* List<Route> Routds = new List<Route>();
            var a1 = new Route();
            var a2 = new Route();
            a1.Name = ("Маршрут 1");
            a1.NameGraphics.Add("l0");
            a1.NameGraphics.Add("l1");
            a1.NamePen.Add("pRed");
            a1.NamePen.Add("pen3");
            a1.NamePen.Add("pen1");
            Routds.Add(a1);
            a2.Name = ("Маршрут 2");
            a2.NameGraphics.Add("l0");
            a2.NameGraphics.Add("l1");
            a2.NameGraphics.Add("l2");
            a2.NamePen.Add("pRed");
            a2.NamePen.Add("pAnimBlue");
           

            Routds.Add(a2);

           // vmr= new ViewModelRoute(a1, MC);
           // vmr2 = new ViewModelRoute(a2, MC);
           // vmr.ValueInt = 1;
            vmr.BindingValue();
            vmr2.BindingValue2();*/
        }

        private void btnload4444_Click(object sender, RoutedEventArgs e)
        {

          //  ViewModelEditor vm = stackPanel1.DataContext as ViewModelEditor;
            
            //indicator

            /* if (vmr.ValueInt == 3) vmr.ValueInt = -1;
             vmr.ValueInt++;*/
        }

        private void btnload44444_Click(object sender, RoutedEventArgs e)
        {
            string superstring="";
            foreach (var el in vm.MC.AllPatch)
            {
                if (el.TVisual == 1)
                    superstring = superstring + Environment.NewLine + string.Format("<Path Data=\"{0}\"  Name=\"{1}\" Stroke=\"Black\" />", ((GraphicsPatch)el.GetGP()).GData, ((GraphicsPatch)el.GetGP()).Name);
            }

            
            /* if (vmr2.ValueInt == 2) vmr2.ValueInt = -1;
            vmr2.ValueInt++;*/

        }

     
    }
}
