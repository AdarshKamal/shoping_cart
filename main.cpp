#include <iostream>
#include "datamodel.h"

main()
{
    Product p(1, "apple", 26);
    cout << p.getDisplayName();

    Items fruit(p, 3);
    cout << fruit.getItemInfo();
    return 0;
}