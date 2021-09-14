/*Задача #2: Написать функцию, которая будет удалять все, что расположено внутри скобок и сами скобки , возвращая очищенный текст (скобки могут быть вложенными). При разработке алгоритма решения нужно учесть, что открывающая скобка должна обязательно иметь закрывающую.
 Example: “(лишнее(лиш)(нее)) Баги баги баги (лишнее(лишнее(лишнее))) вот бы это были машинки, но нехватает ()()() буковки (Г)г еще одной”
*/

#include <iostream>
#include <algorithm>
using namespace std;
class Phrase {
public:
    string OldPhrase;
    string NewPhrase;

    string ClearPhrase1(string OldPhrase)
    {
     //   string timestr = 0;
         char token1 = '[', token2 = ']';
           size_t pos1 = 0, pos2 = 0;
        
           while ( (pos1 = OldPhrase.find(token1, pos1)) != std::string::npos &&
                   (pos2 = OldPhrase.find(token2, pos1 + 1)) != std::string::npos )
               OldPhrase.erase( pos1, pos2 - pos1 + 1 );
        
           return OldPhrase;
    };

    void Cout()
    {
        for (int i = 0; i < NewPhrase.size(); i++) {
            cout << NewPhrase[i];
        }
        cout << endl;
    }
};

int main() {
    Phrase phrase;
        cin >> phrase.OldPhrase;
        phrase.NewPhrase = phrase.ClearPhrase1(phrase.OldPhrase);
        phrase.Cout();
    return 0;
}
