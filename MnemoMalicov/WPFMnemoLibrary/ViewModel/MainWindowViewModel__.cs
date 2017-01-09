﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using ValueLibrary.ViewModel;
using System.Collections.ObjectModel;
using ValueLibrary.Model;
using WPFMnemoLibrary.View;
using System.Windows.Controls;
using System.ComponentModel;
using System.Windows.Threading;

namespace WPFMnemoLibrary.ViewModel
{
    public class MainWindowViewModel : ViewModelBase
    {

        private string SelectShema = String.Empty;


        public IntValue mnemoSelector { get; private set; }
        public IntVar mSelector;

        #region Fields

        ReadOnlyCollection<CommandViewModel> _commands;
        //readonly CustomerRepository _customerRepository;
       // ObservableCollection<ViewModelBase> _workspaces;

        #endregion // Fields

        private UserControl _model=new UserControl();
        public UserControl Model { get {return _model;}
            set
            {
                if (_model != value)
                {
                    _model = value;
                    base.OnPropertyChanged("Model");
                }
            }
        }
        #region Constructor
        public MainWindowViewModel()
        {
            base.DisplayName = "Main";
        }

        public void AttachToRemoteControl()
        {
            mSelector = new IntVar("Mnemo");
            mSelector.VarName = "__MNEMO_SELECT";
            mnemoSelector = mSelector.ValState;

            mnemoSelector.PropertyChanged += mnemoSelector_PropertyChanged;
        }

        void mnemoSelector_PropertyChanged(object sender, PropertyChangedEventArgs e)
        {
            var i = mnemoSelector.ValueState;

            if (i < 1 || i > Commands.Count)
            {
                Model = null;

                return;
            }

            Commands[i - 1].Command.Execute(0);
        }

        public MainWindowViewModel(string customerDataFile)
        {
            base.DisplayName ="Main";

           // _customerRepository = new CustomerRepository(customerDataFile);
        }

        #endregion // Constructor

        #region Commands

        /// <summary>
        /// Returns a read-only list of commands 
        /// that the UI can display and execute.
        /// </summary>
        public ReadOnlyCollection<CommandViewModel> Commands
        {
            get
            {
                if (_commands == null)
                {
                    List<CommandViewModel> cmds = this.CreateCommands();
                    _commands = new ReadOnlyCollection<CommandViewModel>(cmds);
                }
                return _commands;
            }
        }

        List<CommandViewModel> CreateCommands()
        {
           return new List<CommandViewModel>
            {
                  new CommandViewModel(
                    "Функ.схема КДУ",
                    new RelayCommand(param => { Model=new KDUFuncView(); SelectShema="Функ.схема КДУ";})),

                new CommandViewModel(
                    "БА ДПО  ",
                    new RelayCommand(param => { Model=new BADPOView(); })),

                new CommandViewModel(
                   "Расположение^ двигателей". Replace("^ ", Environment.NewLine),
                    new RelayCommand(param => { Model=new DvigView();})),

new CommandViewModel(
                    "СОТР   ",
                    new RelayCommand(param => { Model=new SOTRView();})),

                new CommandViewModel(
                    "Управление Пр.12",
                    new RelayCommand(param => { Model=new Pr12View();})),

                  new CommandViewModel(
                    "Управление^ наддувом КДУ". Replace("^ ", Environment.NewLine),
                    new RelayCommand(param => { Model=new NaduvView();})),

                  new CommandViewModel(
                    "СКГС",
                    new RelayCommand(param => { Model=new SUView();})),

                   new CommandViewModel(
                    "СЭП",
                    new RelayCommand(param => { Model=new ViewSEP();})),

                     new CommandViewModel(
                    "Управление КДУ",
                    new RelayCommand(param => { Model=new UpravKDU();})),

                    new CommandViewModel(
                    "Циклограмма^ автоматической^ стыковки". Replace("^ ", Environment.NewLine),
                    new RelayCommand(param => { Model=new ViewCiclogramm();})),

                     new CommandViewModel(
                    "Питание ССВП",
                    new RelayCommand(param => { Model=new PitSSWP();})),

                     new CommandViewModel(
                    "Управление ДПО-Б^ по командам из^ ССВП". Replace("^ ", Environment.NewLine),
                    new RelayCommand(param => { Model=new ViewOtvodPodvod();})),
                   
                    new CommandViewModel(
                    "Распределение шин^ электропитания (ст.)". Replace("^ ", Environment.NewLine),
                    new RelayCommand(param => { Model=new ViewEP();})),
                   
                    new CommandViewModel(
                    "Сигнализация ССВП(ст.)",
                    new RelayCommand(param => { Model=new ViewSIG();}))

            };
        }

        #endregion // Commands

    /*    #region Workspaces

        /// <summary>
        /// Returns the collection of available workspaces to display.
        /// A 'workspace' is a ViewModel that can request to be closed.
        /// </summary>
        public ObservableCollection<WorkspaceViewModel> Workspaces
        {
            get
            {
                if (_workspaces == null)
                {
                    _workspaces = new ObservableCollection<WorkspaceViewModel>();
                    _workspaces.CollectionChanged += this.OnWorkspacesChanged;
                }
                return _workspaces;
            }
        }

        void OnWorkspacesChanged(object sender, NotifyCollectionChangedEventArgs e)
        {
            if (e.NewItems != null && e.NewItems.Count != 0)
                foreach (WorkspaceViewModel workspace in e.NewItems)
                    workspace.RequestClose += this.OnWorkspaceRequestClose;

            if (e.OldItems != null && e.OldItems.Count != 0)
                foreach (WorkspaceViewModel workspace in e.OldItems)
                    workspace.RequestClose -= this.OnWorkspaceRequestClose;
        }

        void OnWorkspaceRequestClose(object sender, EventArgs e)
        {
            WorkspaceViewModel workspace = sender as WorkspaceViewModel;
            workspace.Dispose();
            this.Workspaces.Remove(workspace);
        }

        #endregion // Workspaces
     */

        #region Private Helpers

        void CreateNewCustomer()
        {
           /* Customer newCustomer = Customer.CreateNewCustomer();
            CustomerViewModel workspace = new CustomerViewModel(newCustomer, _customerRepository);
            this.Workspaces.Add(workspace);
            this.SetActiveWorkspace(workspace);*/
        }

        void ShowAllCustomers()
        {
           /* AllCustomersViewModel workspace =
                this.Workspaces.FirstOrDefault(vm => vm is AllCustomersViewModel)
                as AllCustomersViewModel;

            if (workspace == null)
            {
                workspace = new AllCustomersViewModel(_customerRepository);
                this.Workspaces.Add(workspace);
            }

            this.SetActiveWorkspace(workspace);*/
        }

       /* void SetActiveWorkspace(WorkspaceViewModel workspace)
        {
            Debug.Assert(this.Workspaces.Contains(workspace));

            ICollectionView collectionView = CollectionViewSource.GetDefaultView(this.Workspaces);
            if (collectionView != null)
                collectionView.MoveCurrentTo(workspace);
        }*/

        #endregion // Private Helpers
    }
}
