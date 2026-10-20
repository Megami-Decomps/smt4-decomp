#include "shard/Shard0035.h"

extern "C" {

extern void asdMemFree(void *ptr);
extern void asdTextureRelease(void *p);

/* Frees the pieces of a work-area reference. */
void work20RefFree(Work20Ref *ref)
{
    Work20 *first = ref->first;

    if (first->unk20 != 0) {
        asdMemFree((void *)first->unk20);
    }
    asdMemFree(first->unk08);
    asdMemFree(ref->first);
    asdTextureRelease(ref->unk0C);
    asdMemFree(ref);
}

} /* extern "C" */
