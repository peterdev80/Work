using PatchMnemoLib;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Data;

namespace ValueBulder
{
   public class ViewObject: ViewModelBase
    {
        
        public string NameVal { get; set; }
        public int PosValue { get; set; }
        public int LenghtValue { get; set; }
        public string NameMarshrut { get; set; }
        public string NameModelValue { get; set; }
        private int _ValueVal;





        public int ValueVal { get { return _ValueVal; } set {  _ValueVal = value; OnPropertyChanged("ValueVal"); } }
    }
}
