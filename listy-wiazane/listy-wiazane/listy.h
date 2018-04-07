#pragma once

extern struct node;
void show(node* H);
void add(node* &H, int x);
void readFile(char *filen, node *&H);
int swapPrev(node* &H, int x);
int swapNext(node* &H, int x);
void insert(node* &H, int x, int pos);
void rm(node* &H, int x);
void rmVal(node* &H, int x);