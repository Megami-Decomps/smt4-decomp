#include "classes/Obj420a1c.h"

/* Frees both icon packs and shuts the CEC module down. */
Obj420a1c::~Obj420a1c()
{
    asdMemFree(icon48);
    asdMemFree(icon40);
    asdCecShutdown();
}
