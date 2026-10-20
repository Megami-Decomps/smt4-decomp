#include "common.h"
#include "shard/S3UiLookup.h"

extern "C" {

void FUN_0040683c(UiLookupObj *obj);

/* Binds the object to its owner, then fills it in with FUN_0040683c (the function that follows). */
void FUN_00406834(UiLookupObj *obj, UiOwner *owner)
{
    obj->owner = owner;
    FUN_0040683c(obj);
}

} /* extern "C" */
