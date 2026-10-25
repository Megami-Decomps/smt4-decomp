#include "classes/Obj557ec0.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" void asdCecShutdown(void);

/* Frees both icon packs and closes the CEC module. */
Obj557ec0::~Obj557ec0()
{
    asdMemFree(reinterpret_cast<void *>(icon48));
    asdMemFree(reinterpret_cast<void *>(icon40));
    asdCecShutdown();
}
