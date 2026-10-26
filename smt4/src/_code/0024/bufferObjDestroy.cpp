#include "common.h"
#include "code/Code0024_Smt4.h"

extern "C" {

int bufferDestroyOwnedPair(void);
int bufferReleaseOwnedPair(void);
int asdMemFreeNonNull(void);
int asdTextureRelease(void);
int asdMemFree(void *ptr);

typedef struct Obj {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ void *buffer;
    /* 0x08 */ u8 unk08[0xC];
    /* 0x14 */ s32 unk14;
} Obj;

void bufferObjDestroy(Obj *obj)
{
    if (obj->unk00 != 0) {
        bufferReleaseOwnedPair();
        if (obj->unk00 != 0) {
            bufferDestroyOwnedPair();
            asdMemFreeNonNull();
        }
    }
    if (obj->unk14 != 0) {
        asdTextureRelease();
    }
    asdMemFree(obj->buffer);
    asdMemFree(obj);
}

} /* extern "C" */
