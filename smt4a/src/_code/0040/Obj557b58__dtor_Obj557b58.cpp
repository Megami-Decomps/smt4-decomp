#include "classes/Obj557b58.h"

/* Deletes every item, then frees the array. */
Obj557b58::~Obj557b58()
{
    std::vector<Obj557b58Item *>::iterator end = items.end();
    for (std::vector<Obj557b58Item *>::iterator it = items.begin(); it != end; ++it) {
        Obj557b58Item *item = *it;
        if (item != NULL) {
            delete item;
        }
    }
    items.clear();
}
