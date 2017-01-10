using System;
using System.Collections.Generic;
using System.Configuration;
using System.Data;
using System.Linq;
using System.Windows;

namespace FrmMnemo
{
    /// <summary>
    /// Логика взаимодействия для App.xaml
    /// </summary>
    public partial class App : Application
    {
        private void App_Startup(object sender, StartupEventArgs e)
        {
            WPFForm win;
            if (e.Args.Length > 0)
            {
               
                win = new WPFForm(e.Args[0].ToString());
            }
            else
            {
                win = new WPFForm();
            }
            win.Show();
        }
    }
}
