#include <bits/stdc++.h>
using namespace std;

int Add(string numbers)
{

    if (numbers == "")
    {
        return 0;
    }

    else
    {
        if(numbers.find(",") == -1)
        {
            return stoi(numbers);
        }
        else{

            int ans = 0;
            string str; 
            vector<string> v1;

            for(int i=0; i<numbers.length(); i++)
            {
                if(numbers[i] == ',' && numbers[i+1] == '\n' && (i+1) < numbers.length())
                {
                    cout << "Input not valid!";
                    exit(0);
                }
                     
                if(numbers[i] == '\n')
                    continue;

                if(numbers[i] == ',')
                {
                    v1.push_back(str);
                    str = "";
                    continue;
                }
                str = str + numbers[i];
            }
            if(str != "")
                v1.push_back(str);

            for(auto number: v1)
            {
                ans += stoi(number);
            }
            return ans;
        }
    }
}

int main()
{
    cout << Add("1,2");
    return 0;       
}
