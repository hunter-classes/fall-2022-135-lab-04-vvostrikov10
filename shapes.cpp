/*
Author: Vladislav Vostrikov
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 4

Has functions that print different shapes
*/
#include <string>

std::string box(int w, int h){
    std::string ans = "";
    std::string l = "";
    int i;
    for(i=0; i < w; i++){
        l += "*";
    }
    if (l.length() != 0){
        l += "\n";
    }
    for(i=0; i < h; i++){
        ans += l;
    }
    return ans;
}

std::string checkerboard(int w, int h){
    std::string ans = "";
    std::string l1 = "";
    std::string l2 = "";
    int i;
    for(i=0; i < w; i++){
        if (i % 2 == 0){
            l1 += "*";
            l2 += " ";
        }
        else{
            l1 += " ";
            l2 += "*";    
        }
    }
    if (w != 0){
        l1 += "\n";
        l2 += "\n";
    }
    for(i=0; i < h; i++){
        if (i % 2 == 0){
            ans += l1;
        }
        else{
            ans += l2;
        }
    }
    return ans;
}

std::string cross(int s){
    std::string ans = "";
    int i, j;
    std::string l;
    for (i=0; i < s; i++){
        l="";
        for(j=0; j < s; j++){
            if (i == j || i + j == s-1){
                l += "*";
            }
            else{
                l += " ";
            }
        }
        l += "\n";
        ans += l;
    }
    return ans;
}

std::string lowerTriangle(int s){
    std::string ans = "";
    std::string l = "";
    int i;
    for(i=0; i < s; i++){
        l += "*";
        ans += l;
        ans += "\n"; 
    }
    return ans;
}

std::string upperTriangle(int s){
    std::string ans = "";
    std::string l = "";
    int i;
    for(i=0; i < s; i++){
        l += "*";
    }
    l += "\n";
    for(i=0; i < s; i++){
        ans += l;
        l[i] = ' ';
    }
    return ans;
}

std::string trapezoid(int w, int h){
    if ((w % 2 == 1 && w / 2 + 1 < h) || (w % 2 == 0 && w / 2 < h)){
        return "Impossible shape!\n";
    }
    int i;
    std::string l = "";
    std::string ans = "";
    for(i = 0; i < w; i++){
        l += "*";
    }
    l += "\n";
    for(i = 0; i < h; i++){
        ans += l;
        l[i] = ' ';
        l[w - 1 -i] = ' ';
    }
    return ans;
}

std::string detailedCheckerboard(int w, int h){
    std::string ans = "";
    std::string l1 = "";
    std::string l2 = "";
    int i;
    int c = 0;
    int a = 0;
    for(i = 0; i < w; i++){
        if ((i / 3 + a) % 2 == 0){
            l1 += "*";
            l2 += " ";
        }
        else{
            l1 += " ";
            l2 += "*";    
        }
    }
    if (w != 0){
        l1 += "\n";
        l2 += "\n";
    }
    for(i = 0; i < h; i++){
        if ((i / 3 + a) % 2 == 0){
            ans += l1;
        }
        else{
            ans += l2; 
        }
    }
    return ans;
}