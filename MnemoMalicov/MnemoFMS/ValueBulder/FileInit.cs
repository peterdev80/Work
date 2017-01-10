using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ValueBulder
{
    [Serializable]
    public class FileInit
    {
        public List<String> SerFile { get; set; }
        public List<string> RoutFile { get; set; }
        public FileInit()
        {
            SerFile = new List<string>();
            RoutFile = new List<string>();
           
        }
        public String Ser { get; set; }
        public String Rout { get; set;}
       
    }
}
