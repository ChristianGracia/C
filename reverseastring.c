using System;
using System.Text;

public static class ReverseAString
{
    public static string Reverse(string input)
    {
        var charray = input.ToCharArray();
        var sb = new StringBuilder();
       for (int i = charray.Length - 1; i >= 0; i-- )
        {
            sb.Append(charray[i]);
        }
        return sb.ToString();
    }
}