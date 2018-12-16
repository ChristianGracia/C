namespace twonumberdivision
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter two numbers:");
            double num1 = double.Parse(Console.ReadLine());
            double num2 = double.Parse(Console.ReadLine());
            double div = num1 / num2;
            Console.WriteLine($"The division of {num1} and {num2} is {div}");
        }
    }
}