                      EXPERIMENT 1
AIM- To installing visual studio code and performing few coding in C++

THEORY- Visual Studio Code, also commonly referred to as VS Code, is a source-code editor developed by Microsoft for Windows, Linux, macOS and web browsers. Visual Studio Code is a code editor redefined and optimized for building and debugging modern web and cloud applications.

ALGORITHM- 

1)Start

2)Open your web browser, go to the visual studio code website.

3)We will download VS code in window  in the website.
   
4)We have installed the VS code. We will start coding.

5)We will install code Runner to run C++ in the VS code itself.

6)Now we will download a MinGW to run the code in C++.

7)Then we will can start coding without a problem in the VS code.

8)Stop


PERFORMANCE/HANDS ON:- Video to download VS code
![image](https://github.com/user-attachments/assets/5bbbb051-1941-41df-a91e-0e874d2ce314)

Code:-
Hello world
```
#include <iostream>

int main() {
    std::cout << "Hello World!";
    return 0;
}
```
Average
```
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float num[100], sum=0.0, average;

    cout << "Enter the numbers of data: ";
    cin >> n;

    while (n > 100 || n <= 0)
    {
        cout << "Error! number should in range of (1 to 100)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }

    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    cout << "Average = " << average;

    return 0;
}
```
sum
```
#include <iostream>
using namespace std;

int main() {

  int first_number, second_number, sum;
    
  cout << "Enter two integers: ";
  cin >> first_number >> second_number;

  // sum of two numbers in stored in variable sumOfTwoNumbers
  sum = first_number + second_number;

  // prints sum 
  cout << first_number << " + " <<  second_number << " = " << sum;     

  return 0;
}
```

OUTPUT:-
![image](https://github.com/user-attachments/assets/e0d7afa9-4576-4d46-8cb4-7541a1ce8617)

2)


CONCLUSION- We will learn how to download and run few codes in the Visual Studio code in C++.
