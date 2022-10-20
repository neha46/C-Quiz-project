// this  program is for quiz project
#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
using namespace std;
struct student{
    char name[20];
    char roll[20];
    int marks,random;
} ;
student st;


  void c()
                    { char choice;

                    st.marks=0;
                    int i=0,arr[4];
                    while(i<5)
                    {
                        back:
                        st.random=rand()%6;
                        for(int j=0;j<6;j++){
                        if( st.random== arr[j])
                        {
                             goto back;
                        }
                    }
                    arr[i]=st.random;
                    switch(st.random)
                    {
                        case 0:
                        cout<<i+1<<".Who is the father of C language?\n"<<endl;
                        cout<<"A. Steve Jobs"<<endl;
                         cout<<"B.James Gosling"<<endl;
                          cout<<"C. Dennis Ritchie"<<endl;
                           cout<<"D. Rasmus Lerdorf"<<endl;
                           choice=getch();

                           if(choice=='c'||choice=='C')
                           {
                                cout<<"\n yes your answer is correct\n\n"<<endl;
                                st.marks++;
                           }
                           else
                           {

                               cout<<"\n"<<choice<<" is incorrect\n\n"<<endl;
                           }
                           break;

                           case 1:

                           cout<<i+1<<". How is the 3rd element in an array accessed based on pointer notation?\n"<<endl;
                           cout<<"A. *(a+3) "<<endl;
                          cout<<"B.  *a+3"<<endl;
                          cout<<"C. *(*a+3)"<<endl;
                         cout<<"D. &(a+3)"<<endl;
                           choice=getch();

                           if(choice=='a'||choice=='A')
                           {
                                cout<<"\n yes your answer is correct\n\n"<<endl;
                                st.marks++;
                           }
                           else
                           {

                               cout<<"\n Your answer is incorrect\n\n"<<endl;
                           }
                           break;

                           case 2:

                            cout<< i+1<<". How are String represented in memory in C?\n"<<endl;
                           cout<<"A. an array of characters "<<endl;
                          cout<<"B.  the object of some class"<<endl;
                          cout<<"C. same as other primitive data types"<<endl;
                         cout<<"D. linked list of characters"<<endl;
                           choice=getch();

                           if(choice=='a'||choice=='A')
                           {
                                cout<<"\n yes your answer is correct\n\n"<<endl;
                                st.marks++;
                           }
                           else
                           {

                               cout<<"\n Your answer is incorrect\n\n"<<endl;
                           }
                           break;

                           case 3:

                             cout<<i+1<<". In which of the following languages is function overloading not possible?\n"<<endl;
                           cout<<"A. c++ "<<endl;
                          cout<<"B. c"<<endl;
                          cout<<"C. python"<<endl;
                         cout<<"D. java"<<endl;
                           choice=getch();

                           if(choice=='b'||choice=='B')
                           {
                                cout<<"\n yes your answer is correct\n\n"<<endl;
                                st.marks++;
                           }
                           else
                           {

                               cout<<"\n Your answer is incorrect\n\n"<<endl;
                           }

                           break;


                           case 4:
                           cout<<i+1<<". Which of the following are correct file opening modes in C?\n"<<endl;
                           cout<<"A. r "<<endl;
                          cout<<"B. rb"<<endl;
                          cout<<"C. w"<<endl;
                         cout<<"D. all"<<endl;
                           choice=getch();

                           if(choice=='d'||choice=='D')
                           {
                                cout<<"\n yes your answer is correct\n\n"<<endl;
                                st.marks++;
                           }
                           else
                           {

                               cout<<"\n Your answer is incorrect\n\n"<<endl;
                           }
                           break;
                    }
                    i++;

                    }
                    }
    void cpp()
                    {char choice;

                    st.marks=0;
                    int i=0,arr[4];
                    while(i<5)
                    {
                        back:
                        st.random=rand()%6;
                        for(int j=0;j<6;j++){
                        if( st.random== arr[j])
                        {
                             goto back;
                        }
                    }
                    arr[i]=st.random;
                        switch(st.random)
                        {
                        case 0:
                        cout<<i+1<<". Which of the following data type is supported in C++ but not in C?\n"<<endl;
                        cout<<"A.  int "<<endl;
                         cout<<"B. bool"<<endl;
                          cout<<"C. double"<<endl;
                           cout<<"D. float"<<endl;
                           choice=getch();

                           if(choice=='b'||choice=='B')
                           {
                                cout<<"\n yes your answer is correct\n\n"<<endl;
                                st.marks++;
                           }
                           else
                           {

                               cout<<"\n Your answer is incorrect\n\n"<<endl;
                           }
                           break;

                           case 1:


                           cout<<i+1<<". Extension of C++ language\n"<<endl;
                        cout<<"A.  .c "<<endl;
                         cout<<"B. .js"<<endl;
                          cout<<"C. .cpp"<<endl;
                           cout<<"D. .html"<<endl;
                           choice=getch();

                           if(choice=='c'||choice=='C')
                           {
                                cout<<"\n yes your answer is correct\n\n"<<endl;
                                st.marks++;
                           }
                           else
                           {

                               cout<<"\n Your answer is incorrect\n\n"<<endl;
                           }
                           break;

                           case 2:

                           cout<<i+1<<". Identify the incorrect constructor type.?\n"<<endl;
                        cout<<"A.  parameterized constructor "<<endl;
                         cout<<"B. friend constructor"<<endl;
                          cout<<"C. copy constructor"<<endl;
                           cout<<"D. default constructor"<<endl;
                           choice=getch();

                           if(choice=='b'||choice=='B')
                           {
                                cout<<"\n yes your answer is correct\n\n"<<endl;
                                st.marks++;
                           }
                           else
                           {

                               cout<<"\n Your answer is incorrect\n\n"<<endl;
                           }
                           break;

                           case 3:

                             cout<<i+1<<". C++ uses which approach?\n."<<endl;
                        cout<<"A.  top-down "<<endl;
                         cout<<"B. right-left"<<endl;
                          cout<<"C. bottom-up"<<endl;
                           cout<<"D. left-right"<<endl;
                           choice=getch();

                           if(choice=='c'||choice=='C')
                           {
                                cout<<"\n yes your answer is correct\n\n"<<endl;
                                st.marks++;
                           }
                           else
                           {

                               cout<<"\n Your answer is incorrect\n\n"<<endl;
                           }
                           break;
                           case 4:

                             cout<<i+1<<". Size of wchat_t is?\n."<<endl;
                        cout<<"A.  2 "<<endl;
                         cout<<"B. 4"<<endl;
                          cout<<"C. depends upon bits"<<endl;
                           cout<<"D. 2 and 4"<<endl;

                           choice=getch();

                           if(choice=='c'||choice=='C')
                           {
                                cout<<"\n yes your answer is correct\n\n"<<endl;
                                st.marks++;
                           }
                           else
                           {

                               cout<<"\n Your answer is incorrect\n\n"<<endl;
                           }
                           break;
                        }
                        i++;
                        }

                    }
                void Python()

                { char choice;

                    st.marks=0;
                    int i=0,arr[4];
                    while(i<5)
                    {
                        back:
                        st.random=rand()%6;
                        for(int j=0;j<6;j++){
                        if( st.random== arr[j])
                        {
                             goto back;
                        }
                    }
                    arr[i]=st.random;
                        switch(st.random)
                        {
                        case 0:
                        cout<<i+1<<". What is the maximum length of a Python identifier?\n"<<endl;
                        cout<<"A. NO fixed length is  specified"<<endl;
                         cout<<"B. 32"<<endl;
                          cout<<"C. 16"<<endl;
                           cout<<"D. 128"<<endl;
                           choice=getch();

                           if(choice=='a'||choice=='A')
                           {
                                cout<<"\n yes your answer is correct\n\n"<<endl;
                                st.marks++;
                           }
                           else
                           {

                               cout<<"\n Your answer is incorrect\n\n"<<endl;
                           }
                           break;

                           case 1:


                           cout<<i+1<<". Which of the following statements are used in Exception Handling in Python?\n"<<endl;
                        cout<<"A. all"<<endl;
                         cout<<"B. try"<<endl;
                          cout<<"C. catch"<<endl;
                           cout<<"D. finally"<<endl;
                           choice=getch();

                           if(choice=='a'||choice=='A')
                           {
                                cout<<"\n yes your answer is correct\n\n"<<endl;
                                st.marks++;
                           }
                           else
                           {

                               cout<<"\n Your answer is incorrect\n\n"<<endl;
                           }
                           break;

                        case 2:
                           cout<<i+1<<".Which of the following concepts is not a part of Python?\n"<<endl;
                        cout<<"A. loops"<<endl;
                         cout<<"B. dynamic typing"<<endl;
                          cout<<"C. array"<<endl;
                           cout<<"D. pointers"<<endl;
                           choice=getch();

                           if(choice=='d'||choice=='D')
                           {
                                cout<<"\n yes your answer is correct\n\n"<<endl;
                                st.marks++;
                           }
                           else
                           {

                               cout<<" \n Your answer is incorrect\n\n"<<endl;
                           }
                           break;

                           case 3:


                           cout<<i+1<<". How is a code block indicated in Python?\n"<<endl;
                        cout<<"A.  Brackets"<<endl;
                         cout<<"B. parenthesis"<<endl;
                          cout<<"C. indentation"<<endl;
                           cout<<"D. space"<<endl;
                           choice=getch();

                           if(choice=='c'||choice=='C')
                           {
                                cout<<"\n yes your answer is correct\n\n"<<endl;
                                st.marks++;
                           }
                           else
                           {

                               cout<<"\n Your answer is incorrect\n\n"<<endl;
                           }
                           break;


                           case  4:
                     cout<<i+1<<". What will be the output of the following code snippet?\n\t\t print(type(5 / 2))\n\t\t print(type(5 // 2))\n"<<endl;
                        cout<<"A. float and int"<<endl;
                         cout<<"B. int and int"<<endl;
                          cout<<"C. int and float"<<endl;
                           cout<<"D. float and double"<<endl;

                           choice=getch();

                           if(choice=='a'||choice=='A')
                           {
                                cout<<"\n yes your answer is correct\n\n"<<endl;
                                st.marks++;
                           }
                           else
                           {

                               cout<<"\n Your answer is incorrect\n\n"<<endl;
                           }
                           break;
                        }
                           i++;
                }
                }

                void java()
                {
                   char choice;

                    st.marks=0;
                    int i=0,arr[4];
                    while(i<5)
                    {
                        back:
                        st.random=rand()%6;
                        for(int j=0;j<6;j++){
                        if( st.random== arr[j])
                        {
                             goto back;
                        }
                    }
                    arr[i]=st.random;
                        switch(st.random)
                        {
                            case 0:
                cout<<i+1<<". What is the size of float and double in java?\n"<<endl;
                        cout<<"A.32 and 32 "<<endl;
                         cout<<"B. 32 and 64"<<endl;
                          cout<<"C. 64 and 64"<<endl;
                           cout<<"D. 64 and 32"<<endl;
                           choice=getch();

                           if(choice=='b'||choice=='B')
                           {
                                cout<<"\n yes your answer is correct\n\n"<<endl;
                                st.marks++;
                           }
                           else
                           {

                               cout<<"\n Your answer is incorrect\n\n"<<endl;
                           }
                           break;
                           case 1:

                            cout<<i+1<<". Number of primitive data types in Java are?\n"<<endl;
                        cout<<"A. 6"<<endl;
                         cout<<"B. 7"<<endl;
                          cout<<"C. 9"<<endl;
                           cout<<"D. 8"<<endl;
                           choice=getch();

                           if(choice=='d'||choice=='D')
                           {
                                cout<<"\n yes your answer is correct\n\n"<<endl;
                                st.marks++;
                           }
                           else
                           {

                               cout<<"\n Your answer is incorrect\n\n"<<endl;
                           }
                           break;
                           case 2:


                            cout<<i+1<<". Automatic type conversion is possible in which of the possible cases\n"<<endl;
                        cout<<"A.long to int "<<endl;
                         cout<<"B. int into int"<<endl;
                          cout<<"C. int into long"<<endl;
                           cout<<"D. long to long"<<endl;
                           choice=getch();

                           if(choice=='c'||choice=='C')
                           {
                                cout<<"\n yes your answer is correct\n\n"<<endl;
                                st.marks++;
                           }
                           else
                           {

                               cout<<"\n Your answer is incorrect\n\n"<<endl;
                           }
                           break;
                           case 3:

                            cout<<i+1<<". When an array is passed to a method, what does the method receive\n"<<endl;
                        cout<<"A. The reference of array "<<endl;
                         cout<<"B. a copy of array"<<endl;
                          cout<<"C. length of array"<<endl;
                           cout<<"D. size of array"<<endl;
                           choice=getch();

                           if(choice=='a'||choice=='A')
                           {
                                cout<<"\n yes your answer is correct\n\n"<<endl;
                                st.marks++;
                           }
                           else
                           {

                               cout<<"\n Your answer is incorrect\n\n"<<endl;
                           }
                           break;
                           case 4:

                            cout<<i+1<<".  java contains\n"<<endl;
                        cout<<"A. PVM "<<endl;
                         cout<<"B. JVM"<<endl;
                          cout<<"C. browser"<<endl;
                           cout<<"D. kit"<<endl;
                           choice=getch();

                           if(choice=='b'||choice=='B')
                           {
                                cout<<"\n yes your answer is correct\n\n"<<endl;
                                st.marks++;
                           }
                           else
                           {

                               cout<<"\n Your answer is incorrect\n\n"<<endl;
                           }
                           break;
                        }
                        i++;
                    }
                }
                void Html()
                {
                    char choice;

                    st.marks=0;
                    int i=0,arr[4];
                    while(i<5)
                    {
                        back:
                        st.random=rand()%6;
                        for(int j=0;j<6;j++){
                        if( st.random== arr[j])
                        {
                             goto back;
                        }
                    }
                    arr[i]=st.random;
                        switch(st.random)
                        {
                            case 0:
                     cout<<i+1<<". How many sizes of headers are available in HTML by default?\n"<<endl;
                        cout<<"A. 3 "<<endl;
                         cout<<"B.  8"<<endl;
                          cout<<"C. 2"<<endl;
                           cout<<"D. 6"<<endl;
                           choice=getch();

                           if(choice=='d'||choice=='D')
                           {
                                cout<<"\n yes your answer is correct\n\n"<<endl;
                                st.marks++;
                           }
                           else
                           {

                               cout<<"\n Your answer is incorrect\n\n"<<endl;
                           }
                           break;
                           case 1:

                           cout<<i+1<<". biggest heading in html?\n"<<endl;
                        cout<<"A .h2 "<<endl;
                         cout<<"B. h3 "<<endl;
                          cout<<"C. h1"<<endl;
                           cout<<"D. h6"<<endl;
                           choice=getch();

                           if(choice=='c'||choice=='C')
                           {
                                cout<<"\n yes your answer is correct\n\n"<<endl;
                                st.marks++;
                           }
                           else
                           {

                               cout<<"\n Your answer is incorrect\n\n"<<endl;
                           }
                           break;
                           case 2:

                           cout<<i+1<<". We enclose HTML tags within?\n"<<endl;
                        cout<<"A. { }"<<endl;
                         cout<<"B.  ( )"<<endl;
                          cout<<"C. ' ' "<<endl;
                           cout<<"D. < >"<<endl;
                           choice=getch();

                           if(choice=='d'||choice=='D')
                           {
                                cout<<"\n yes your answer is correct\n\n"<<endl;
                                st.marks++;
                           }
                           else
                           {

                               cout<<"\n Your answer is incorrect\n\n"<<endl;
                           }
                           break;
                           case 3:

                           cout<<i+1<<". How to display preformatted text in HTML?\n"<<endl;
                        cout<<"A. <pr>"<<endl;
                         cout<<"B. <h1> "<<endl;
                          cout<<"C. < br >"<<endl;
                           cout<<"D. < pre >"<<endl;
                           choice=getch();

                           if(choice=='d'||choice=='D')
                           {
                                cout<<"\n yes your answer is correct\n\n"<<endl;
                                st.marks++;
                           }
                           else
                           {

                               cout<<"\n Your answer is incorrect\n\n"<<endl;
                           }
                           break;
                           case 4:

                           cout<<i+1<<". Which of the following tags doesn’t require a closing tag?\n"<<endl;
                        cout<<"A. <hr> "<<endl;
                         cout<<"B.  <br>"<<endl;
                          cout<<"C. <p>"<<endl;
                           cout<<"D. A and B"<<endl;
                           choice=getch();

                           if(choice=='d'||choice=='D')
                           {
                                cout<<"\n yes your answer is correct\n"<<endl;
                                st.marks++;
                           }
                           else
                           {

                               cout<<"\n Your answer is incorrect"<<endl;
                           }
                           break;}
                           i++;
                    }

                }
            void result()
{

    float p=0;
    p=(100*st.marks)/6;
    cout<<"\t\t Student name: "<<st.name<<endl;
    cout<<"\t\t Student no: "<<st.roll<<endl;
    cout<<"\t\t Marks: "<<st.marks<<"out of  5 \n\n"<<endl;
    cout<<"\t\t percentage: "<<p<<"%\n"<<endl;
if(p>=50)
    cout<<"\t\t status: Pass "<<endl;
else
    cout<<"\t\t status Fail "<<endl;

}
int main()
{ char lang,press;
         do
            {cout<<"\t\t\t**************************************\t\t\t\n"<<endl;
            cout<<"\t\t\t\tQuiz System\t\t\t\t"<<endl;
            cout<<"\t\t\t*************************************\t\t\t\n\n"<<endl;

            cout<<"\t\tEnter name:";
            gets(st.name);
            cout<<"\t\tEnter roll no:";
            gets(st.roll);
            system(" cls");
            cout<<"***************Marks less than 50%  considered as fail***********\t\t"<<endl;
            cout<<"\t"<<endl;
            cout<<"Select the language in which you are comfortable"<<endl;
            cout<<"\t\t 1.C programing"<<endl;
            cout<<"\t\t 2.C ++"<<endl;
            cout<<"\t\t 3.Python"<<endl;
            cout<<"\t\t 4.Java"<<endl;
            cout<<"\t\t 5.HTML"<<endl;


            lang=getch();
            system("cls");
                switch(lang)
                {
                case '1':
                    cout<<"***********************C Quiz*************************\n"<<endl;
                        c();
                        system("cls");
                        cout<<"\t\t\t Quiz result\t\t\n\n"<<endl;
                        result();
                        break;
                case '2':
                            cout<<"***********************C++ Quiz*************************\n"<<endl;
                        cpp();
                        system("cls");
                          cout<<"\t\t\t Quiz result\t\t\n\n"<<endl;
                        result();
                        break;
                case '3':
                    cout<<"***********************Python Quiz*************************\n"<<endl;
                        Python();
                         system("cls");
                          cout<<"\t\t\t Quiz result\t\t\n\n"<<endl;
                          result();
                        break;
                case '4':
                    cout<<"***********************JAVA Quiz*************************\n"<<endl;
                        java();
                         system("cls");
                          cout<<"\t\t\t Quiz result\t\t\n\n"<<endl;
                        result();
                        break;
                case '5':
                    cout<<"*********************** HTML Quiz*************************\n"<<endl;
                        Html();
                         system("cls");
                          cout<<"\t\t\t Quiz result\t\t\n\n"<<endl;
                        result();
                        break;
                default:
                    cout<<"invalid input"<<endl;
                    break;
            }
             cout<<"press Y to continue  and enter any key to terminate\n"<<endl;
        press=getch();
            system("cls");


     }
        while(press=='y'||press=='Y');

}



