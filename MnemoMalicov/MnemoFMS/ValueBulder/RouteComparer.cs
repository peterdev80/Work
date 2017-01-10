using PatchMnemoLib.ViewModelRout;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ValueBulder
{
    class RouteComparer: IEqualityComparer<ViewModelRoute>
    {
       
            // Products are equal if their names and product numbers are equal.
            public bool Equals(ViewModelRoute x, ViewModelRoute y)
            {

                //Check whether the compared objects reference the same data.
                if (Object.ReferenceEquals(x, y)) return true;

                //Check whether any of the compared objects is null.
                if (Object.ReferenceEquals(x, null) || Object.ReferenceEquals(y, null))
                    return false;

                //Check whether the products' properties are equal.
                return x.ValuePos == y.ValuePos && x.ValueName == y.ValueName;
            }

            // If Equals() returns true for a pair of objects 
            // then GetHashCode() must return the same value for these objects.

            public int GetHashCode(ViewModelRoute product)
            {
                //Check whether the object is null
                if (Object.ReferenceEquals(product, null)) return 0;

                //Get hash code for the Name field if it is not null.
                int hashProductName = product.ValueName == null ? 0 : product.ValueName.GetHashCode();

                //Get hash code for the Code field.
                int hashProductCode = product.ValuePos.GetHashCode();

                //Calculate the hash code for the product.
                return hashProductName ^ hashProductCode;
            }

        
    }
}
