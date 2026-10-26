#include "classes/Obj4208c4.h"

extern "C" {
void objectPoolDestroy(Obj4208c4 *object);
int asdMemFreeNonNull(void *block);
}

inline void Obj4208c4::operator delete(void *block)
{
    asdMemFreeNonNull(block);
}

/* Destroys the animation lists the pool owns. */
Obj4208c4::~Obj4208c4()
{
    objectPoolDestroy(this);
}
