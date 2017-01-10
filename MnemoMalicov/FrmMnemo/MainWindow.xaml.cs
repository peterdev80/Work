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
using WPFMnemoLibrary.View;

namespace FrmMnemo
{
    /// <summary>
    /// Логика взаимодействия для MainWindow.xaml
    /// </summary>
    public partial class WPFForm : Window
    {
        public WPFForm()
        {
            InitializeComponent();
            UserControl view = new UserControl1();
            view = new SUView();
            this.cont.Content = view;
        }
        public WPFForm(string patch)
            : this()
        {
            this.Height = SystemParameters.PrimaryScreenHeight - 24;
            this.Width = SystemParameters.PrimaryScreenWidth;
            this.Left = 0;
            this.Top = 24;
            
            UserControl view=new UserControl1();
            switch (patch)
            {
                case "SOTR": view = new SOTRView(); break;
                case "Pr12": view = new Pr12View(); break;
                case "BADPO":view = new BADPOView(); break;
                case "Dvig":view = new DvigView(); break;
                case "Naduv":view = new NaduvView();break;
                case "Su": view = new SUView(); break;
			    case "sep":view =new ViewSEP();break;
				case "ukdu":view=new UpravKDU();break;
				case "CiclTK": view=new ViewCiclogramm();break;
                case "PitSSWP": view = new PitSSWP(); break;
                case "Otvod": view = new ViewOtvodPodvod(); break;
                case "fkdu": view = new KDUFuncView(); break;
                case "STD": view = new STDView(); break;

            } 

            this.cont.Content = view;
            
            





        }
       
    }
}
