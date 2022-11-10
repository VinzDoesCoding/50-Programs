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
            cout<<"Invalid ";
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
void Digitcount()
{
            int number;

            cout << "Enter an integer number between 1 & 99999: ";
            cin >> number;

            if (number >= 10000 && number <= 99999)
                 {
                        cout << "its a five digit number!";
                
    }
            else if (number >= 1000 && number <= 9999)
                 {
                        cout << "Its a four digit number!";
                
    }
            else if (number >= 100 && number <= 999)
                 {
                        cout << "Its a three digit number!";
                
    }
            else if (number >= 10 && number <= 99)
                 {
                        cout << "Its a two digit number!";
                
    }
            else
                 {
                            cout << "its a single digit number!";
                    
        }
    }
void Stringlength()
{
    char str1[50];
    int i, l = 0;
    cout << "\n\n Find the length of a string:\n";
    cout << "---------------------------------\n";
    cout << " Input a string: ";
    cin >> str1;
    for (i = 0; str1[i] != '\0'; i++) {
        l++;
    }
    cout << "The string contains " << l << " number of characters." << endl;
    cout << "So, the length of the string " << str1 << " is:" << l << endl;
}
void Dispwordfivex()
{
    int i,word;
    cout<< "Input a word/phrase: ";
    cin >> word;
    for (i = 1; i <= 5; ++i) {
        cout << word;
    }
}
void Hcf()
{
        int i, num1, num2, min, Hcf=1;

        cout<<"Enter any two numbers:";
        cin>>num1;
        cin>>num2;
        min = (num1<num2) ? num1 : num2;
     
        for(i=1;  i<=min;  i++)
             {
                if(num1%i==0 && num2%i==0)
                    {
                        Hcf = i;
             
        }              
    }       
        cout<<"HCF of "<<num1<< " and "<< num2<< " is: " <<Hcf;
}
void Halftriangle()
{
    int i,j,rows,k=1;
    cout << "\n\n Display such a pattern like right angle triangle with number increased by 1:\n";
    cout << "---------------------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
            cout<<k++<<" ";
        cout<<endl;
    }
}
void Invhalftriangle()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void Numpyramid()
{
    int i,j,n;
    cout << "\n\n Display a pattern using odd number of numbers, the first and last number of each row is 1:\n";
    cout << "-----------------------------------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> n;
    for(i=0; i<=n; i++)
    {
        /* print blank spaces */
        for(j=1; j<=n-i; j++)
            cout<<" ";
        /* Display number in ascending order upto middle*/
        for(j=1; j<=i; j++)
            cout<<j;

        /* Display  number in reverse order after middle */
        for(j=i-1; j>=1; j--)
            cout<<j;
        cout<<endl;
    }
}
void Pascaltriangle()
{
    int row,c=1,blk,i,j;
    cout << "\n\n Display the Pascal's triangle lime right angle triangle:\n";
    cout << "-------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> row;
    for(i=0; i<row; i++)
    {
        for(j=0; j<=i; j++)
        {
            if (j==0||i==0)
                c=1;
            else
                c=c*(i-j+1)/j;
            cout<<c<<"   ";
        }
        cout<<endl;
    }
}
void Pascalpyramid()
{
    int row,c=1,blk,i,j;
    cout << "\n\n Display the Pascal's pyramid:\n";
    cout << "-----------------------------------\n";
    cout << " Input number of rows: ";
    cin >> row;
    for(i=0; i<row; i++)
    {
        for(blk=1; blk<=row-i; blk++)
            cout<<"  ";
        for(j=0; j<=i; j++)
        {
            if (j==0||i==0)
                c=1;
            else
                c=c*(i-j+1)/j;
            cout<<c<<"   ";
        }
    }
}
void Diamond()
{
    int i,j,r;
    cout << "\n\n Display the pattern like a diamond:\n";
    cout << "----------------------------------------\n";
    cout << " Input number of rows (half of the diamond): ";
    cin >> r;
    for(i=0; i<=r; i++)
    {
        for(j=1; j<=r-i; j++)
            cout<<" ";
        for(j=1; j<=2*i-1; j++)
            cout<<"*";
        cout<<endl;
    }
    for(i=r-1; i>=1; i--)
    {
        for(j=1; j<=r-i; j++)
            cout<<" ";
        for(j=1; j<=2*i-1; j++)
            cout<<"*";
        cout<<endl;;
    }
}
void Starpyramid()
{
    int i,j,n;
    cout << "\n\n Display such a pattern like a pyramid containing odd number of asterisk in each row:\n";
    cout << "-----------------------------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> n;
    for(i=0; i<n; i++)
    {
        for(j=1; j<=n-i; j++)
            cout<<" ";
        for(j=1; j<=2*i-1; j++)
            cout<<"*";
        cout<<endl;
    }
}
void Remalp()
{
    string line;
        int i;
        cout << "Enter any string :: ";
        cin>>line;
        cout << "\nThe Original String is :: " << line<<endl;
        int len = line.size();
        for(i=0; i<len; ++i)
             {
                if (!((line[i]>='a' && line[i]<='z') || (line[i]>='A' && line[i]<='Z')))
                    {
                        line[i]='\0';
                    
        }
            
    }      cout << "\nAfter Removing Characters, String is :: " << line<<endl;
}
void Arsize()
{
        int i,a[50],size;
        cout<<"Enter array size( Max:50 ) :: ";
        cin>>size;
            cout<<"\nEnter array elements :: \n";
            for(i=0;  i<size;  i++)
                 {
                cout<<"\nEnter arr["<<i<<"] Element :: ";
                        cin>>a[i];
                
    }
      cout<<"\nStored Data in Array :: \n\n";
      for(i=0; i<size; i++)
           {
          cout<<" "<<a[i]<<" ";
          
    }
        int  largest=a[0];
            for (i=0; i<size; i++)
             {
                        if(a[i]>largest)
                            {
                                    largest=a[i];
                            
        }
                
    }          cout<<"\n\nLargest Element in an Array :: "<<largest<<endl;
}
void Flarray()
{
        int i,a[50],size;
        cout<<"Enter array size( Max:50 ) :: ";
        cin>>size;
            cout<<"\nEnter array elements :: \n";
            for(i=0;  i<size;  i++)
                 {
                cout<<"\nEnter arr["<<i<<"] Element :: ";
                        cin>>a[i];
                
    }      cout<<"\nFirst number in the Array :: "<<a[0]<<endl;
        cout<<"\nLast number in the Array :: "<<a[size-1]<<endl;
}
void Uparray()
{
        int i,j,temp,a[50],size;
        cout<<"Enter array size( Max:50 ) :: ";
        cin>>size;
            cout<<"\nEnter array elements :: \n";
            for(i=0;  i<size;  i++)
                 {
                cout<<"\nEnter arr["<<i<<"] Element :: ";
                        cin>>a[i];
                
    }    cout<<"\nStored Data Before Sorting In Array :: \n\n";
      for(i=0; i<size; i++)
           {
          cout<<" "<<a[i]<<" ";
          
    }
     for(i=0; i<size; i++)
          {
             for(j=0; j<size-i-1; j++)
                 {
                     if(a[j]>a[j+1])
                         {
                             temp=a[j];
                             a[j]=a[j+1];
                             a[j+1]=temp;
                         
            }
                 
        }
         
    }   cout<<"\n\nStored Data After Sorting In Array :: \n\n";
     for(i=0; i<size; i++)
           {
          cout<<" "<<a[i]<<" ";
          
    }
}
void Downarray()
{
        int i,j,a[50],size,temp;
        cout<<"Enter array size( Max:50 ) :: ";
        cin>>size;
            cout<<"\nEnter array elements :: \n";
            for(i=0;  i<size;  i++)
                 {
                cout<<"\nEnter arr["<<i<<"] Element :: ";
                        cin>>a[i];
                
    }
        cout<<"\nData before sorting :: \n\n";
        for(i=0; i<size; i++)
             {
              cout<<" "<<a[i]<<" ";
            
    }
        for(i=0; i<size; i++)
             {
            for(j=0; j<size-i-1; j++)
                {
                if(a[j]>a[j+1])
                    {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    
            }
                
        }
            
    }
        cout<<"\n\nData after sorting :: \n\n";
        for(j=size-1; j>=0 ; j--)
             {
            cout<<" "<<a[j]<<" ";
            
    }
}
void Addtwomatrix()
{
            int arr1[5][5], arr2[5][5], arr3[5][5], sub, i, j,m,n;
        cout<<"Enter size of matrix ( Max:5 ) :: ";
        cin>>m;
        cout<<"\nEnter Elements to Matrix A Below :: \n";
        for(i=0; i<m; i++)
             {
                for(j=0; j<m; ++j)
                    {
                        cout<<"\nEnter arr1["<<i<<"]["<<j<<"] Element :: ";
                        cin>>arr1[i][j];
                    
        }
            
    } cout<<"\nEnter Elements to Matrix B Below :: \n";
        for(i=0; i<m; i++)
             {
                for(j=0; j<m; ++j)
                    {
                        cout<<"\nEnter arr2["<<i<<"]["<<j<<"] Element :: ";
                        cin>>arr2[i][j];
                    
        }

            
    }
    cout<<"\nAdding Matrix ( A + B ) ..... \n";
            for(i=0;  i<m;  i++)
                 {
                        for(j=0;  j<m;  j++)
                            {
                                    arr3[i][j]=arr1[i][j]+arr2[i][j];
                            
        }
                
    }
    cout<<"\nAfter Addition, Matrix C is :: \n";
            for (i = 0;  i < m;  ++i)
                 {
                    for (j = 0;  j < m;  ++j)
                        {
                            cout<<"\t"<<arr3[i][j];
                        
        }
                    printf("\n\n");
                
    }
}
void Finddup()
{
        int i,j,a[50],size;
        cout<<"Enter array size( Max:50 ) :: ";
        cin>>size;
            cout<<"\nEnter array elements :: \n";
            for(i=0;  i<size;  i++)
                 {
                cout<<"\nEnter arr["<<i<<"] Element :: ";
                        cin>>a[i];
                
    }
      cout<<"\nStored Data in Array :: \n\n";
      for(i=0; i<size; i++)
           {
          cout<<" "<<a[i]<<" ";
          
    }
    cout<<"\n\nDuplicate Values in Given Array are :: \n\n";
      for(i=0;  i<size;  i++)
            {
            for(j=i+1; j<size; j++)
                {
                if(a[i]==a[j])
                    {
                    cout<<" "<<a[i]<<" ";
                    
            }
               
        }
           
    }
}
void Sumpair()
{
    int array1[] = {1, 5, 7, 5, 8, 9, 11, 12};
    int s1 = sizeof(array1)/sizeof(array1[0]);
    cout << "Original array: ";

    for (int i=0; i < s1; i++)
        cout << array1[i] <<" ";
    int i, sum = 12, ctr = 0;
    cout <<"\nArray pairs whose sum equal to 12: ";

    for (int i=0; i<s1; i++)
        for (int j=i+1; j<s1; j++)
            if (array1[i]+array1[j] == sum)
            {
                cout << "\n" << array1[i] << "," << array1[j];
                ctr++;
            }
    cout <<"\nNumber of pairs whose sum equal to 12: ";
    cout << ctr;
}
void Repeatnum()
{
    int nums[] = {1, 2, 3, 5, 5, 7, 8, 8, 9, 9, 2};
    int i, j;
    int size = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (i = 0; i < size; i++)
        cout << nums[i] <<" ";
    cout  << "\nRepeating elements: ";
    for(i = 0; i < size; i++)
        for(j = i+1; j < size; j++)
            if(nums[i] == nums[j])
                cout <<  nums[i] << " ";
}
void Oddevenarray()
{
    int arr[20],even[20],odd[20],t,j=0,k=0,size2;

    cout<<"Enter array size( Max:50 ) :: ";
    cin>>size2;
    cout<<"\nEnter array elements :: \n";
    for(t=0; t<size2; t++)
    {
        cout<<"\nEnter arr["<<t<<"] Element :: ";
        cin>>arr[t];
    }

    cout<<"\nStored Data in Array :: \n\n";
    for(t=0; t<size2; t++)
    {
        cout<<" "<<arr[t]<<" ";
    }

    for(t=0; t<size2; t++)
    {
        if(arr[t]%2==0)
        {
            even[j]=arr[t];
            j++;
        }
        else
        {
            odd[k]=arr[t];
            k++;
        }
    }
    cout<<"\n\nEven Elements in Array are :: \n\n";
    for(t=0; t<j ; t++)
    {
        cout<<" "<<even[t]<<" ";
    }

    cout<<"\n\nOdd Elements in Array are :: \n\n";
    for(t=0; t<k; t++)
    {
        cout<<" "<<odd[t]<<" ";
    }
    cout<<"\n";
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
        case 20:
            Digitcount();
            break;
        case 21:
            Stringlength();
            break;
        case 22:
            Dispwordfivex();
            break;
        case 23:
            Hcf();
            break;
        case 24:
            Halftriangle();
            break;
        case 25:
            Invhalftriangle();
            break;
        case 26:
            Numpyramid();
            break;
        case 27:
            Pascaltriangle();
            break;
        case 28:
            Pascalpyramid();
            break;
        case 29:
            Diamond();
            break;
        case 30:
            Starpyramid();
            break;
        case 31:
            Remalp();
            break;
        case 32:
            Arsize();
            break;
        case 33:
            Flarray();
            break;
        case 34:
            Uparray();
            break;
        case 35:
            Downarray();
            break;
        case 36:
            Addtwomatrix();
            break;
        case 37:
            Finddup();
            break;
        case 38:
            Sumpair();
            break;
        case 39:
            Repeatnum();
            break;
        case 40:
            Oddevenarray();
            break;
        default:
            cout<<"invalid";
            break;
        }
        cout<<"\nWould you like to go back to main menu?[Y/N]: ";
        cin>>confirm;
    } while(confirm == "Y");

    _getch();
    system("pause");

}