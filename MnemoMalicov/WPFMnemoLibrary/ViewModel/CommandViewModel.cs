﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

using System.Windows.Input;

namespace WPFMnemoLibrary.ViewModel
{
    public class CommandViewModel : ViewModelBase
    {
        public CommandViewModel(string displayName, ICommand command)
        {
            if (command == null)
                throw new ArgumentNullException("command");

            base.DisplayName = displayName;
            this.Command = command;
        }

        public ICommand Command { get; private set; }

        bool _state;
        public bool StateCommand
        {
            get { return _state; }
            set
            {
                if (_state == value) return;
                _state = value;
                base.OnPropertyChanged("StateCommand");
            }
        }
    }
}
