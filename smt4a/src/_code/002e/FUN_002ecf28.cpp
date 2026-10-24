#include "classes/ObjectRegistry.h"

extern "C" {

RegistryOwner *FUN_002ecf28(void)
{
    RegistryHolder *holder = FUN_002ecedc(0xc, FUN_002eb56c());
    return holder != NULL ? holder->owner : NULL;
}

} /* extern "C" */
