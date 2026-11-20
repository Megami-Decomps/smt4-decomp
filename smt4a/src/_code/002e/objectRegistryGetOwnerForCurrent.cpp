#include "classes/ObjectRegistry.h"

extern "C" {

RegistryOwner *objectRegistryGetOwnerForCurrent(void)
{
    RegistryHolder *holder = FUN_002ecedc(0xc, FUN_002eb56c());
    return holder != NULL ? holder->owner : NULL;
}

} /* extern "C" */
