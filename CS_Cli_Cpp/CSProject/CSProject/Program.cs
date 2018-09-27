//Program.cs
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using CliDll;

namespace CSProject
{
    class Program
    {
        static void Main(string[] args)
        {
            Arith arith = new Arith();
            int back1 = arith.AddCli(1, 2);
            Console.WriteLine(back1.ToString());
            int back2 = arith.SubCli(3, 4);
            Console.WriteLine(back2.ToString());
            int back3 = arith.MulCli(4, 5);
            Console.WriteLine(back3.ToString());
            int back4 = arith.DivCli(8, 4);
            Console.WriteLine(back4.ToString());
            Console.ReadLine();
        }
    }
}