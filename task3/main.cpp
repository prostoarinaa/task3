/*Задача #2: Написать функцию, которая будет удалять все, что расположено внутри скобок и сами скобки , возвращая очищенный текст (скобки могут быть вложенными). При разработке алгоритма решения нужно учесть, что открывающая скобка должна обязательно иметь закрывающую.
 Example: “(лишнее(лиш)(нее)) Баги баги баги (лишнее(лишнее(лишнее))) вот бы это были машинки, но нехватает ()()() буковки (Г)г еще одной”
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string str, s = "";
       int k = 0 ,count1 = 0,count2 = 0;
       
       getline(cin, str);
       for (int i = 0; i < str.size(); i++) {
           if (str[i] == '(')
               count1++;
           else if (str[i] == ')')
               count2++;
       }
   // cout <<count1<<count2;
       for (int i = 0; i < str.size(); i++) {
           
           if (str[i] == '(')
               k++;
           else {
               if (str[i] == ')')
                   k--;
               else if (k == 0)
                   s += str[i];
           }
       }
    if (count1 != count2) {
        cout << "ERROR" << endl;
        
    }
    else
       cout << endl << s << endl;
    return 0;
}
 

//
//class Phrase {
//public:
//    string OldPhrase;
//    string NewPhrase;
//
//    struct Pair {
//        int pos1;
//        int pos2;
//    };
//
//        int skob(string a, int i, char c,int l)
//        {
//            for(int j=i;j<l;j++)
//                if (a[j]==c){
//
//            return j;
//            }
//            return -1;
//        };
//
//        void del(string a, char b, char c)
//        {
//        int l=a.size();
//        for(int i=0;i<l;i++){
//            if(a[i]==b){
//            int f=skob(a,i,c,l);
//
//            if(f==-1)
//            cout<<"oshibka vvoda";
//                int raz=f-i+1;
//                cout<<raz<<" ";
//            for(int k=i;k<l;k++)
//                a[k]=a[k+raz];
//
//        }
//        }
//        };
//};
////            Pair pair;
////            int k;
////            vector <char> vpair;
////            for (auto i = 0;i < OldPhrase.size();i++) {
////                if (k != 1) {
////                    if ( OldPhrase[i] != '(') {
////                        vpair.push_back(OldPhrase[i]);
////                        k = 0;
////                    }
////                    else
////                        k = 1;
////                }
////                if (k == 1) {
////                    if ( OldPhrase[i] == '(') {
////                        vpair.push_back(OldPhrase[i]);
////                }
////                if ( OldPhrase[i] == '(' && vpair[vpair.size()-1].pos2 != -1) {
////                    pair.pos1 = i;
////                    pair.pos2 = -1;
////                    vpair.push_back(pair);
////                }
////                else if (OldPhrase[i] == ')' && vpair[vpair.size()-1].pos2 == -1) {
////                    vpair[vpair.size()-1].pos2 = i;
////                }
//
//
////         char token1 = '[', token2 = ']';
////           size_t pos1 = 0, pos2 = 0;
////
////           while ( (pos1 = OldPhrase.find(token1, pos1)) != std::string::npos &&
////                   (pos2 = OldPhrase.find(token2, pos1 + 1)) != std::string::npos )
////               OldPhrase.erase( pos1, pos2 - pos1 + 1 );
////
//
//
//
////    void Cout()
////    {
////        for (int i = 0; i < NewPhrase.size(); i++) {
////            cout << NewPhrase[i];
////        }
////        cout << endl;
////    }
////};
//
//int main() {
//    Phrase phrase;
//        cin >> phrase.OldPhrase;
//        phrase.del(phrase.OldPhrase, '(',')');
//        //phrase.Cout();
