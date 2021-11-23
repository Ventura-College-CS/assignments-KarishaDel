#include "Stack.hpp"
#include <iostream>
using namespace std;

int isOperator(char );
int precedence(char );

int main()
{
	string 	infix = "a+b+c*d";

	Stack<char, 10> stack;

	for(int i=0; i< infix.size(); i++ )
	{
		if (  ! isOperator( infix[i] ) )  
		{
			cout << infix[i] << "\t";
		}
		else
		{
			while ( (!stack.isEmpty()) && ( precedence( infix[i] ) <= precedence( stack.topEl() ) ) )
			{
				cout << stack.pop() << "\t" ;
			}
			stack.push(infix[i]);
		}
	}		
	while( !stack.isEmpty())
	{
		cout << stack.pop() << "\t";
	}	
}

int precedence(char op)
{
	switch (op)
	{
	case '+':
	case '-':
		return 5;
	case '*':
	case '/':
		return 10;
	default:
		cout << "Undefined Operator \n";
		exit(0);
	}
}

int isOperator(char c)
{
	switch(c)
	{
		case '+':
		case '-':
		case '*':
		case '/':
			return 1;
		default:
			return 0;
	}
}
/*
#include "Stack.hpp"
#include <iostream>
using namespace std;

int isOperator(char );
int precedence(char );

int main()
{
	string 	infix = "a+b+c*d";

	Stack<char, 10> stack;

    for(int i=0; i< infix.size(); i++)
    {
       if (!isOperator(infix[i])) //print char a b c d
       {
           cout << infix[i] << "\t";
       } 
       else
       {
           while ( (!stack.isEmpty()) && (precedence( infix[i])) <= precedence (stack.topEl() ) ) ) //compare until the hughest presedence is founf then pop or print it 
           {
               cout << stack.pop() << "\t";
           }
           stack.push(infix[i]);
       }
    }
    while ( !stack.isEmpty())
    {
        cout << stack.pop() << "\t";
    }

}

int precedence(char op)
{
	switch (op)
	{
	case '+':
	case '-':
		return 5;
	case '*':
	case '/':
		return 10;
	default:
		cout << "Undefined Operator \n";
		exit(0);
	}
}
int isOperator (char c)
{
    switch(c)
    {
        case '+':
        case '-':
        case '*':
        case '/':
            return 1;
        default:
        return 0;    
    }
}
*/