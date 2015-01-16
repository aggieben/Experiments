using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.InteropServices;

namespace UnicodeThingsClient
{
    using UnicodeThings;
    class Program
    {
        static void Main(string[] args)
        {
            var testString = "testing: Δ, Й, ק, م, ๗, あ, 叶, 葉, and 말.";
            var len = UnicodeThings.utf8_strlen(testString);
            Console.WriteLine("Length in C#: {0}", testString.Length);
            Console.WriteLine("Lenth from UnicodeThingsCLR: {0}", len);

            len = utf8_strlen(testString);
            Console.WriteLine("Length from UnicodeThings: {0}", len);
        }

        [DllImport("UnicodeThings.dll", 
            ExactSpelling = true,
            EntryPoint = "?utf8_strlen@unicode_things@@YAIPBD@Z")]
        public static extern uint utf8_strlen(string s);
    }
}
