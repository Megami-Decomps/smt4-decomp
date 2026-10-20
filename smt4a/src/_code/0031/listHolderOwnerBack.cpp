#include "shard/Shard0031.h"

extern "C" {

extern u32 listHolderBack(ListHolder *holder);

void listHolderOwnerBack(ListHolderOwner *owner)
{
    listHolderBack(&owner->holder);
}

} /* extern "C" */
