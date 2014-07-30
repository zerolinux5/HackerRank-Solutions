#include <iostream>
#include <string>

using namespace std;

int findPal(string input)
{
	int oneOdd = 0;
	while(input.size() != 0){
		char charE = input.at(0);
		int charNum = 1;
		input.erase(input.begin());
		while(input.find(charE) != std::string::npos){
			input.erase(input.begin() + input.find(charE));
			charNum++;
		}

		if(charNum % 2 != 0){
			if(oneOdd == 0){
				oneOdd = 1;
			} else {
				return 0;
			}
		}
	}
	return 1;
}


int main() {
   
    string s;
    cin>>s;
     
    int flag = findPal(s);
    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string 
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
