#include "common.h"

extern "C" {

extern const u8 DAT_0055c6e4[];  /* vtable */
void asdMemFree(void *memory);
void FUN_001a6928(void *self, s32 flag);
void FUN_002e3494(void *memory);

typedef struct Object55c6e4 {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 unk04[0x1C];
    /* 0x20 */ void *bufferA;
    /* 0x24 */ u8 unk24[0x24];
    /* 0x48 */ void *bufferB;
    /* 0x4C */ void *bufferC;
} Object55c6e4;

/* Destructor: restores the vtable, runs FUN_001a6928, then frees the three buffers; returns `self`. */
Object55c6e4 *destroyObj0055c6e4(Object55c6e4 *self)
{
    self->vtbl = DAT_0055c6e4;
    FUN_001a6928(self, 1);
    if (self->bufferC != NULL) {
        FUN_002e3494(self->bufferC);
        self->bufferC = NULL;
    }
    if (self->bufferB != NULL) {
        asdMemFree(self->bufferB);
        self->bufferB = NULL;
    }
    if (self->bufferA != NULL) {
        asdMemFree(self->bufferA);
        self->bufferA = NULL;
    }
    return self;
}

} /* extern "C" */
