#ifndef SET_H
#define SET_H

class Set
{
public:
    Set(int numberOfElements);
    int splittingFind(int i);

private:
    int *parent;
    int n; // number of set elements
}
#endif