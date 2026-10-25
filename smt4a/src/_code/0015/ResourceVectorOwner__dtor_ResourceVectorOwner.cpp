/* NON_MATCHING: file close uses a base-subobject writeback that retail does not use. */
#include "shard/ResourceVectorOwner.h"
#include "classes/Obj55813c.h"
extern "C" {
void FUN_00157110(ResourceVectorOwner *owner);
void asdMemFree(void *allocation);
}

// The vector's destructor releases its allocation after these owned resources are closed.
ResourceVectorOwner::~ResourceVectorOwner()
{
    FUN_00157110(this);
    if (storage.data != NULL) {
        asdMemFree(storage.data);
        storage.data = NULL;
        storage.size = 0;
        storage.cursor = 0;
        storage.capacity = 0;
    }
    if (storage.file != NULL) {
        storage.file->Close();
        delete storage.file;
        storage.file = NULL;
    }
}
