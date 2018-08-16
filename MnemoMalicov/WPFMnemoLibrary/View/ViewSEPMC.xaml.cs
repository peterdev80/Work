﻿using PatchMnemoLib.ViewModel;
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

namespace WPFMnemoLibrary.View
{
    /// <summary>
    /// Логика взаимодействия для ViewSEPMC.xaml
    /// </summary>
    public partial class ViewSEPMC : UserControl
    {
        public ViewSEPMC()
        {
            InitializeComponent();
            ViewModelEditor vmb = Vb0.DataContext as ViewModelEditor;
            vmb.MC.Canva = MC_Back;
            ViewModelEditor vm = Vb1.DataContext as ViewModelEditor;
            vm.MC.Canva = MC;
        }
    }
}
