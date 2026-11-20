#include "classes/Obj557dcc.h"

/* Releases every owned resource list and entry before the pointer vector is destroyed. */
Obj557dcc::~Obj557dcc()
{
    std::vector<ResourceListOwnerEntry *>::iterator end = entries.end();
    for (std::vector<ResourceListOwnerEntry *>::iterator item = entries.begin(); item != end; ++item) {
        delete *item;
    }
    entries.clear();
}
