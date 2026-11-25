/* NON_MATCHING: the stream close matches; retail restores the owner pointer before destroying the vector, while armcc uses the saved owner and pre-indexes it to the vector. */
#include "shard/ResourceVectorOwner.h"
#include "classes/Obj55813c.h"
extern "C" {
void FUN_00157110(ResourceVectorOwner *owner);
void asdMemFree(void *allocation);
}

/* Closes the pack's resources before the vector releases its allocation. */
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
    Obj55813c *stream = storage.file;
    if (stream != NULL) {
        if ((stream->handle & ~1u) != 0) {
            if (stream->handle & 1) {
                sysFatalBreak();
            }
            vcallSlot12IfValid(stream->handle & ~1u);
            stream->handle = 0;
        }
        delete storage.file;
        storage.file = NULL;
    }
}
