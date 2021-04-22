#include <iostream>
#include <string>
#include <random>
#include <thread>
#include <chrono>

using namespace std;

int main(){
    string s = "hello world";
    string ans = "";
    char letters[] = "abcdefghijklmnopqrstuvwxyz ";
    for(int i = 0; i<s.size(); i++){
        srand(time(NULL));
        while(true){
            char c = letters[rand() % 27];
            std::cout<<ans + c;
            if(c == s.at(i)){
                break;
            } else {
                cout<<endl;
            }
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
        ans+=s.at(i);
    }
}