# Strings

**Initialize Strings**

    #include <string>

**Concatenate Strings**

    int main() {
        string str1, str2;

        str1 = "abc";
        str2 = "def";

        cout<< str1 + str2 <<endl;
        
        return 0;
    }

**Reading Strings**

cin skips leading whitespace and stops at the next whitespace so to read an entire sentence when need to use getline instead:

    getline(cin, str);

**Indexing Strings**

    int main() {
        string str;
        char ch;

        cout<<str[0]<<" "<<str[1]...

        ch = str[3];

        return 0;
    }

**Slicing Strings**

Use .substr(index, length) method to slice a string and get a substring.

    int main() {
        string str1, str2;

        str1 = "abcdefg";

        str2 = str.substr(3, 2);

        return 0;
    }

**Length**

This methods gets the length of a string.

    str.length();

### Printing Backwards

    int main() {
        string username;

        cout<<"Enter Name:"<<endl;
        getline(cin, username);

        for (int ind = username.length() - 1; ind >= 0; ind--) {
            cout<<username[ind];
        }

        return 0;
    }

**Comparing Strings and Lexicographical Order**

==, !=, <, >

    str1 == str2;
    str1 != str2;
    str1.lenth() > str2.length;
    str1.lenth() < str2.length;

If you compare str1 to str 2 using > or < without the length method, then the compiler evaluates the statement using lexographical order meaning the compiler will iterate through the string and compare each individual character's ascii value.

**First Word Introduction**

Write a program that reads from the user 3 words and prints the one that comes first in alphabetical orer.

    int main() {
        string word1, word2, word3;
        
        cout<<"enter 3 words separated by a space"<<endl;
        cin>>word1>>word2>>word3;

        if (word1 <= word2 && word1 <= word3) {
            cout<<word1<<endl;
        }
        else if (word2 <= word1  && word2 <= word3) {
            cout<<word2<<endl;
        }
        else {
            cout<<word3<<endl;
        }

        return 0;
    }

**Searching in a String**

.find(search term) will return starting index of what you search for. If the search term is not present in the string then the find method returns npos and if the search term is present more than once, the method will only return the starting index of where it first appears.

    string str = "abcdefg";

    str.find("de");

An extension of the find method is .find(search term, index), which searches for the first occurence of the search term after the specified index.

    string str = "abcdefgde";

    str.find("de"); // returns 3
    str.find("de",4); // returns 7



