//
//  main.cpp
//  HW4_E24056409
//
//  Created by CHIH-YI LU on 2018/6/1.
//  Copyright © 2018年 CHIH-YI LU. All rights reserved.
//

#include <iostream>
using namespace std;

class tree;
struct node;

struct node{
    int keyvalue;
    node *parend;
    node *left;
    node *right;
};
class tree{
private:
    node root;
	int height;
public:
    //製作tree
    tree(char []);      //1.by file
    tree(int);          //2.by random
    //功能
    void print();       //要畫出樹的形狀(表示出level、左右關係即可)
    void preorder();    //以Preorder輸出
    void inorder();     //以Inorder輸出
    void postorder();   //以Postorder輸出
    void breadth();		//以Breadth-first traversal輸出(順序由左上到右下)
	void insert();		//插入子節點
    //實作function
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
