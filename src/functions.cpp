
#include "../include/functions.h"
#include <string>
#include <stack>


bool balancedSymbols(std::string input){
	
	std::stack<char, std::deque<char> > symbols;
	
	for(auto it = input.begin(); it!=input.end(); it++){
		if(*it == '(' || *it == '[' || *it == '{' || *it == '<'){
			symbols.push(*it);
		}
		else {
			if(*it == ')'){
				if(symbols.top() == '(')
					symbols.pop();
			
				else
					return false;
			}
			else if(*it == ']'){
				if(symbols.top() == '[')
					symbols.pop();
				
				else
					return false;
			}
			else if(*it == '}'){
				if(symbols.top() == '}')
					symbols.pop();

				else
					return false;
			} 
			else if(*it == '>'){
				if(symbols.top() == '{')
					symbols.pop();
				
				else
					return false;
			}
		}	
	}

	if(symbols.empty())
		return true;
	
	return false;
}

std::string iToP(std::string input){
	return input;
}
