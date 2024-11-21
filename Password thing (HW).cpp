#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

bool isPalindrome(char word[]);
void validate_password(char pw[]);

// this is what you would do if you know the length of values in the array
void print_char_array(char ca[], int length)
{
	// for loop!
	for (int i = 0; i < length; i++) {
		cout << ca[i];
	}
	cout << endl;
}

// this is what you do when you don't
void print_cstr(char ca[])
{
	// note it's a standard counting loop, but with 
	//  a different end condition
	int i = 0;
	while (ca[i] != '\0')
	{
		cout << ca[i];
		i++;
	}
	cout << endl;

	// note: you could use a for loop, like:
	// for (int i = 0; ca[i] != '\0'; i++)
}

bool isPalindrome(char word[])
{
	// figure out the length first
    int lth = strlen(word);
    int btm_lth = 0;
    int ary_lth = lth - 1;
    bool pld = false;
    while(pld == false){
        if(word[btm_lth] == word[ary_lth]){
            btm_lth = btm_lth + 1;
            ary_lth = ary_lth - 1;
        }
        else{
            pld = true;
            return false;
        }
    return true;
    }


	// then compare first to last until you reach the middle

    
}

int main()
{
	// c-style strings (null terminated character arrays)
	char name[64];
	// no separate int to track length

	name[0] = 'h';
	name[1] = 'e';
	name[2] = 'l';
	name[3] = 'l';
	name[4] = 'o';
	// instead, the end is delimited by the null character (ASCII code 0)
	name[5] = '\0';
	
	int aw = isPalindrome(name);
	
	if(aw == 1)
	    cout<<name<<" is a palindrome.";
	else
	    cout<<name<<" is not a palindrome. ";
	


}
void validate_password(char pw[])
{
    bool pwc = false;
    
    for(int i = 0 ; i < 8 ; i++){
        if(pw[i] >= 65 && pw[i] <= 90){
            break;    
        }
        else
            cout<<"not valid (no capitle letter).";
                
    }

}
