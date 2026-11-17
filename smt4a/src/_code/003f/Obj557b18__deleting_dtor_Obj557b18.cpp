#include "classes/Obj557b18.h"

/* Releases the storage the model body owns. */
Obj557b18::~Obj557b18()
{
    moriModelBodyReleaseOwnedStorage(this);
}
