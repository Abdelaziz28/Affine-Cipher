/*affine cipher program 0
made by Ahmed Muhammed Ahmed
ID 20210030*/
#include <iostream>
using namespace std;

int main()
{
    int x,i,a,b,c,strLength;
    string str;
    a = 5;      //these are the parameters introduced in the problem sheet
    b = 8;  
    c = 21;
    cout<<"Enter a string:\t";
    getline(cin, str);
    strLength = str.length() ;
    cout<<"please choose one of the following options:\n";  //input 1 or 2 to choose which operation will be done
    cout<<"1 = Encryption \n";
    cout<<"2 = Decryption \n";
    cin>>x;
    switch(x){
        case 1:
            for(i=0; (i<=strLength);i++)
                if (str[i]!=char(32)){
               
                    if ((a*c) % 26 ==1 ){      //parameters above can be changed as long as they satisfy this equation
                        str[i]=((a*toupper(str[i])+b-65)%26)+65;}} //(toupper) makes every letter uppercase as lowercase letters have different ASCII numbers 

                else {continue;}
            cout<<"\n Encrypted string: "<<str<<endl;
            break;
                
        
        case 2:
            for(i=0; (i<=strLength );i++)

                if (str[i]!=char(32)){
                    if ((a*c) % 26 ==1 ){  
                        str[i]=(((c*(toupper(str[i])-65-b))%26) +26)%26 + 65;   //equation is made this way to solve the negative modulo problem
                    }}
                else{continue;}
            cout<<"\n Decrypted string:"<<str<<endl;
            break;
                
        default:
            cout<<"\nInvalid Input \n";     //if the input for the case isn't 1 or 2 this pops out
    }
    return 0;

}