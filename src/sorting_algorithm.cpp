#include "declarations.h"

using namespace std;

vector<string> parts;
vector<Word> words;

Word::Word(string line, int line_num, int word_num, string plugin_type){
    word = line;
    line = line_num;
    wordnum = word_num;
    type = plugin_type;
}

string Word::get_word(){
    return word;
}
int Word::get_line(){
    return line;
}
int Word::get_wordnum(){
    return wordnum;
}
string Word::get_type(){
    return type;
}

void sorting_algorithm(string char_word, int line, int wordnum){
    cout << date_time() << " [SORT_ALGORITHM]: Entered function." << endl;
    
    Word *word;

    parts.push_back("Noun");
    parts.push_back("Adjective");
    parts.push_back("Verb");


    int i = 0, j = 0;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3500; j++){
            if (char_word == parts_speech[i][j]){
                word = new Word(char_word, line, wordnum, parts.at(i));
                words.push_back(*word);
                
                cout << date_time() << "[SORT_ALGORITHM]: New word created " << word << endl;
            }
            else {
                // string type = plugin(word);
                // Word word(word, line, wordnum, type);
                // words.push_back(word);

                cout << date_time() << "[SORT_ALGORITHM]: No new word created for word: " << char_word << endl;
                cout << date_time() << "[SORT_ALGORITHM]: At this point parts_speech was: " << parts_speech[i][j] << endl;
                
            }
        }
    }

<<<<<<< HEAD:src/sorting_algorithm.cpp
    cout << date_time() << " [SORT_ALGORITHM]: Exiting function." << endl;
=======
<<<<<<< HEAD
    if (word != parts_speech[i][j]){
        
    }

    line = i;
    wordnum = j;
    cout << line << endl;
    cout << wordnum << endl;
=======
    Word newword = words.at(0);
    cout << newword.get_word() << endl;
>>>>>>> 980cf0e12a8e23ce4abafeaad88858d9db034e5e

    cout << date_time() << " [SORTALGORITHM]: Exiting function." << endl;
>>>>>>> 0b257437593952eb1cc2bd56103dc1832cb6083d:src/SortAlgorithm.cpp
}
