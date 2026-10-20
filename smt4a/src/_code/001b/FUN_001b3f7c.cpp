/* NON_MATCHING: register choice differs (retail reuses r1 for src+16 and r0 for the constant 2) */
/* Initialises the object from `src`: clears its slots, takes the two words at src+4/+8 and a data pointer at src+0x10, runs ifTouchRegionRemove once per recorded entry, clears the entry count and sets the 6-byte handle to all ones. */
#include "common.h"

extern "C" {

struct Obj00152530 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 unk04;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u32 slot[12];
    /* 0x38 */ u32 srcWord1;
    /* 0x3c */ u32 srcWord2;
    /* 0x40 */ u8 unk40[0xc];
    /* 0x4c */ u8 mode;
    /* 0x4d */ u8 unk4d[3];
    /* 0x50 */ void *data;
    /* 0x54 */ s32 handle;
    /* 0x58 */ u16 handleTag;
    /* 0x5a */ s16 entryCount;
};

struct Src00152530 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 word1;
    /* 0x08 */ u32 word2;
    /* 0x0c */ u8 unk0c[4];
};

void ifTouchRegionRemove(void);
void ARM_common_memset4_6(void *dst, u32 value);

void FUN_001b3f7c(Obj00152530 *obj, Src00152530 *src)
{
    s32 i;

    obj->unk04 = 0;
    obj->slot[3] = 0;
    obj->slot[2] = 0;
    obj->slot[1] = 0;
    obj->slot[0] = 0;
    obj->slot[7] = 0;
    obj->slot[6] = 0;
    obj->slot[5] = 0;
    obj->slot[4] = 0;
    obj->slot[11] = 0;
    obj->slot[10] = 0;
    obj->slot[9] = 0;
    obj->slot[8] = 0;
    obj->srcWord1 = src->word1;
    obj->srcWord2 = src->word2;
    obj->data = src + 1;
    obj->mode = 2;
    if (obj->entryCount > 0) {
        i = 0;
        do {
            ifTouchRegionRemove();
            i++;
        } while (i < obj->entryCount);
    }
    obj->entryCount = 0;
    ARM_common_memset4_6(&obj->handle, -1);
}

}
