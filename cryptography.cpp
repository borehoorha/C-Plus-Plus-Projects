#include <iostream>
#include <string>
#include <algorithm>
#include<conio.h>//console input output

using namespace std;

string encrypt(string s1, int n);
string decrypt(string s1, int n);

int main(){
  string whattodo;
  wronginput:
    cout<<"What do you wanna do \nEncrypt or Decrypt \n-->";
  cin>>whattodo;
  string abc;
  int n;
  if(whattodo=="encrypt" || whattodo=="Encrypt" || whattodo=="e"){
        cout << "Input any integer b/w 1 to 5 and then your string/plaintext: ";
        cin>>n;
        cin>>abc;
        string enc = encrypt(abc, n);
        cout << "\nEncrypted text is: " << enc << endl;
        getch();
    }
    else if(whattodo=="decrypt" || whattodo=="Decrypt" || whattodo=="d"){
        
        cout << "Enter the Special key then your string: ";
        cin>>n;
        cin>>abc;
        string dec = decrypt(abc, n);
        cout << "\nDecrypted text is: " << dec << endl;
        getch();
    }else{
        goto wronginput;
    }
  return 0;
}



string encrypt(string s1, int n){
  string enc="";
  for(int i=0;i<s1.size();i++){
    char ch = s1[i] + i + n;
    enc += ch;
    n++;
  }
  return enc;
}
      
string decrypt(string s1, int n){
  string enc="";
  for(int i=0;i<s1.size();i++){
    char ch = s1[i] - i - n;
    enc += ch;
    n++;
  }
  return enc;
}
