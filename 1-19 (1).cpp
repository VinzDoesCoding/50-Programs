#include <iostream>
#include<string>
#include<math.h>
#include<conio.h>
#define CUBE(x) (x*x*x)
#define MAX_LENGTH 100
char name[50];
using namespace std;
void displaymenu()
{
    cout<<"=======================================\n";
    cout<<" \t\tMAIN MENU \t \n ";
    cout<<"=======================================\n";
    cout<<" 1-10 Basic Calculations\n";
    cout<<" 11-20 If/Switch case statements\n";
    cout<<" 21-30 Loops \n";
    cout<<" 31-40 Arrays and Functions \n";
    cout<<" 41-50 Object oriented programs  \n";
}
void Add()
{
    cout << "\nSum of two numbers\n";

    int n, m, sum;

    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a number: ";
    cin >> m;

    sum = n + m;

    cout << "The sum is: " << sum;
}
void Mul()
{
    cout << "\nMultiplication of two numbers\n";

    int n, m, mul;

    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a number: ";
    cin >> m;

    mul = n * m;

    cout << "The result is: " << mul;
}
void Dif()
{
    cout << "\nDifference of two numbers\n";

    int n, m, dif;

    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a number: ";
    cin >> m;

    dif = n - m;

    cout << "The result is: " << dif;
}
void Div()
{
    cout << "Division of two numbers\n";

    int n, m, div;

    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a number: ";
    cin >> m;

    div = n / m;

    cout << "The result is: " << div;
}
void Nrp()
{
    cout << "Raise any number X to the power N\n";

    int x,n,result;

    cout<<"Enter value of X :: ";
    cin>>x;
    cout<<"Enter value of N :: ";
    cin>>n;

    result=pow(x,n);

    cout<<"\nThe Power of Number [ "<<x<<" ^ "<<n<<" ] = "<<result<<"\n";
}
void Cube()
{
    cout << "\nFind Cube of numbers using Macros\n";

    int n,cube;

    cout<<"Enter any positive number :: ";
    cin>>n;

    cube=CUBE(n);

    cout<<"\nThe Cube of Entered Number [ "<<n<<" ] is :: [ "<<cube<<" ]\n";
}
void Sumave()
{
    cout << "\nFind Sum and average of 3 numbers\n";

    float a,b,c,sum,avg;
    cout<<"Enter 1st number :: ";
    cin>>a;
    cout<<"Enter 2nd number :: ";
    cin>>b;
    cout<<"Enter 3rd number :: ";
    cin>>c;

    sum=a+b+c;

    avg=sum/3;

    cout<<"\nThe SUM of 3 Numbers [ "<<a<<" + "<<b<<" + "<<c<<" ] = "<<sum<<"\n";
    cout<<"\nThe AVERAGE of 3 Numbers [ "<<a<<", "<<b<<", "<<c<<" ] = "<<avg<<"\n";
}
void Cuberoot()
{
    cout << "Find the cube root of a number\n";

    int num;
    double ans;

    cout<<"Enter number which u want to find cube root :: ";
    cin>>num;

    ans=(double)pow((double)num,(double)1/(double)3);

    cout<<"\nCube Root of [ "<<num<<" ] is :: "<<ans<<"\n";
}
void Inchfeetyardinch()
{
    cout << "Inches to Feet, yards and inches \n";

    int y,f,i;
    cout<<"Enter Inches to Convert ::";
    cin>>i;

    y=i/432;
    i=i%432;
    f=i/12;
    i=i%12;

    cout<<"\nAfter Conversion from inches to feet, yards and inches :: \n";
    cout<<"\nYards = "<<y<<"\n\nFeet = "<<f<<"\n\nInches = "<<i<<"\n";
}
void Poundkilo()
{
    cout << "lbs to kg\n";

    float kilogram,pound;

    cout<<"Enter pound: ";
    cin>>pound;

    kilogram=pound*.454;

    cout<<pound<<" pound = "<<kilogram<<" kg";
}
void Ifcalcu()
{
    int num1, num2;
    char op;

    cout <<"Enter first number:";
    cin >> num1;
    cout <<"Enter operator:";
    cin >> op;
    cout <<"Enter second number";
    cin >> num2;
    int result;
    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        result = num1 / num2;
    } else {
        cout << "Invalid Operator";
    }
    cout << result;
}
void Switchcalcu()
{
    char op;
    double num1, num2;

    cout << "Enter operator: ";
    cin >> op;

    cout << "Enter 1rst number: ";
    cin >> num1;

    cout << "Enter 2nd number: ";
    cin >> num2;

    switch(op)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
    default:
        cout << "Error! operator is not correct";
        break;
    }
}
void Oddeven()
{
    int n;
    cout << "Odd or Even\n";
    cout << "Enter an integer: ";
    cin >> n;

    if ( n % 2 == 0)
        cout << n << " is even.";
    else
        cout << n << " is odd.";
}
void Largenum()
{
    cout << "Largest number\n";

    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if (n1 >= n2)
    {
        if (n1 >= n3)
            cout << "Largest number: " << n1;
        else
            cout << "Largest number: " << n3;
    }
    else
    {
        if (n2 >= n3)
            cout << "Largest number: " << n2;
        else
            cout << "Largest number: " << n3;
    }
}
void Equalnot()
{
    cout << "Equal or Not\n";

    int int1, int2;

    printf("Input two integers : ");
    scanf("%d %d", &int1, &int2);

    if (int1 == int2)
        printf("They are equal\n");
    else
        printf("They are not equal\n");
}
void Voting()
{
    char name[MAX_LENGTH]= {0};
    int age;

    cout<<"Enter name of the person: ";
    cin >> name;
    cout<<"Enter age: ";
    cin>>age;
    cout<<"\n";
    
    if(age>=13 && age<=19)
    {
        cout<<"Person is Teenager"<<endl;
    }
    else
    {
        cout<<"Person is not a Teenager"<<endl;
    }

    if(age>=18)
    {
        cout<<"Personl is eligible for voting"<<endl;
    }
    else
    {
        cout<<"Person is not eligible for voating"<<endl;
    }
}
void Vowel()
{
    char c;
    cout <<"Enter a alphabet:";
    cin >> c;
    c=tolower(c);
    switch (c)
    {
    case 'a':
        cout <<"You entered a, its a vowel"<<endl;
        break;
    case 'e':
        cout <<"You entered e, its a vowel"<<endl;
        break;
    case 'i':
        cout <<"You entered i, its a vowel"<<endl;
        break;
    case 'o':
        cout <<"You entered o, its a vowel"<<endl;
        break;
    case 'u':
        cout <<"You entered u, its a vowel"<<endl;
        break;
    default:
        cout <<"You entered consonant";
    }
}
void Numword()
{
    int n;
    cout<<"Enter the Number= ";
    cin>>n;
     
    if ((n >=0) && (n<=10))
        switch(n)
        {
        case 1:
            cout<<"one ";
            break;
        case 2:
            cout<<"two ";
            break;
        case 3:
            cout<<"three ";
            break;
        case 4:
            cout<<"four ";
            break;
        case 5:
            cout<<"five ";
            break;
        case 6:
            cout<<"six ";
            break;
        case 7:
            cout<<"seven ";
            break;
        case 8:
            cout<<"eight ";
            break;
        case 9:
            cout<<"nine ";
            break;
        case 0:
            cout<<"zero ";
            break;
        case 10:
            cout<<"ten ";
            break;
        default:
            cout<<"tttt ";
            break;
        }
}
void Numrom()
{
   int n;
    cout<<"Enter the Number= ";
    cin>>n;
     
    if ((n >=0) && (n<=10))
        switch(n)
        {
        case 1:
            cout<<"Roman Numerals: I ";
            break;
        case 2:
            cout<<"Roman Numerals: II ";
            break;
        case 3:
            cout<<"Roman Numerals: III ";
            break;
        case 4:
            cout<<"Roman Numerals: IV ";
            break;
        case 5:
            cout<<"Roman Numerals: V ";
            break;
        case 6:
            cout<<"Roman Numerals: VI ";
            break;
        case 7:
            cout<<"Roman Numerals: VII ";
            break;
        case 8:
            cout<<"Roman Numerals: VIII ";
            break;
        case 9:
            cout<<"Roman Numerals: IX ";
            break;
        case 10:
            cout<<"Roman Numerals: X ";
            break;
        default:
            cout<<"Invalid";
            break;
        }
}
int main()
{
    string st[20];
    int itemcount = 0;
    displaymenu();
    int yourchoice;
    string confirm;
    do
    {   cout<<"\nEnter your choice(1-50):";
        cin>>yourchoice;
        switch (yourchoice)
        {
        case 1:
            Add();
            break;
        case 2:
            Dif();
            break;
        case 3:
            Mul();
            break;
        case 4:
            Div();
            break;
        case 5:
            Nrp();
            break;
        case 6:
            Cube();
            break;
        case 7:
            Sumave();
            break;
        case 8:
            Cuberoot();
            break;
        case 9:
            Inchfeetyardinch();
            break;
        case 10:
            Poundkilo();
            break;
        case 11:
            Ifcalcu();
            break;
        case 12:
            Switchcalcu();
            break;
        case 13:
            Oddeven();
            break;
        case 14:
            Largenum();
            break;
        case 15:
            Equalnot();
            break;
        case 16:
            Voting();
            break;
        case 17:
            Vowel();
            break;
        case 18:
            Numword();
            break;
        case 19:
            Numrom();
            break;
        default:
            cout<<"invalid";
            break;
        }
        cout<<"\nWould you like to go back to main menu?[Y/N]: ";
        cin>>confirm;
    } while(confirm == "Y");

    system("pause");

}