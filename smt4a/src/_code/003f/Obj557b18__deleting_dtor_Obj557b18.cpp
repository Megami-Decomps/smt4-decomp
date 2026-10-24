#include "classes/Obj557b18.h"

struct MoriModelBody;
extern "C" void moriModelBodyReleaseOwnedStorage(MoriModelBody *body);

/* Releases the storage the model body owns. */
Obj557b18::~Obj557b18()
{
    moriModelBodyReleaseOwnedStorage(reinterpret_cast<MoriModelBody *>(this));
}
