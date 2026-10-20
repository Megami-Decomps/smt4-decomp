/* NON_MATCHING: the constant 1 stored to `released` is built in r1; retail reuses r0 (the dead argument register). */
#include "common.h"

extern "C" {

typedef struct Resource {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u8 released;
    /* 0x19 */ u8 unk19[3];
    /* 0x1C */ void *buffer;
} Resource;

int FUN_0027e974(void);
int asdMemFreeNonNull(void);
int FUN_002c5700(void);

/* Marks the resource released and frees its buffer. */
void FUN_0020ece4(Resource **handle)
{
    Resource *res = *handle;

    res->released = 1;
    if (res->buffer != NULL) {
        FUN_002c5700();
        if (res->buffer != NULL) {
            FUN_0027e974();
            asdMemFreeNonNull();
            res->buffer = NULL;
        }
    }
}

} /* extern "C" */
