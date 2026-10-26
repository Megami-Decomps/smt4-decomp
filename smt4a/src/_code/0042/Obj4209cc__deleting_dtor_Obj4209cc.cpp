#include "classes/Obj4209cc.h"

extern "C" void asdOperatorDelete(void *block);

inline void Obj4209cc::operator delete(void *block)
{
    asdOperatorDelete(block);
}

/* Destroys the owned resources; the deleting variant then frees the allocation. */
Obj4209cc::~Obj4209cc()
{
    destroyResources();
}
