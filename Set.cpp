#include "Set.h"
using namespace std;

Set::Set(numberOfElements)
{
    if (numberOfElements < 2)
        throw "Must have at least 2 elements.";
    n = numberOfElements;
    parent = new int[n];
    fill(parent, parent + n, -1);
}

int Set::splittingFind(int i)
{
    for (int r = i; parent[r] >= 0; r = parent[r])
    {
        if (parent[r] < 0)
            continue;
        int count = 0;
        int gran = r;
        while (count < 2)
        { // find to former grandparent
            gran = gran[gran];
            count++;
        }
        parent[r] = gran;
    }
    return r;
}
