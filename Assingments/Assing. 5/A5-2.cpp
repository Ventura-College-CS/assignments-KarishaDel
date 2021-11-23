
PostfixExp p1;
p1.printExpression();
p1.setExpression("ab+");
p1.evaluation();

cout << "Enter the Postfix Expression: ";
string PostfixExp;
cin >> PostfixExp;

p1.setExpression(PostfixExp);
cout << "The Entered the Postfix Expression: ";
p1.printExpression();
cout << "The output: " << p1.Evaluation() << endl;
PostfixExpression p2("21+3*");
cout << "The Entered the Postfix Expression: ";
p2.printExpression();
cout << "The output: " << p2.Evaluation() << endl;