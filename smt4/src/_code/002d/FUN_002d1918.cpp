#include "common.h"

extern "C" {

int FUN_001f71b4(void);
int FUN_0024ad88(u32 obj);
int objectBufferFree(void);
int asdMemFree(int ptr);

typedef struct Sub {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
} Sub;

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ Sub *sub;
    /* 0x2C */ int unk2C;
    /* 0x30 */ int unk30;
} Obj;

void FUN_002d1918(Obj *obj)
{
    Sub *sub;

    if (obj->unk2C != 0) {
        FUN_001f71b4();
    }
    if (obj->sub != NULL) {
        sub = obj->sub;
        FUN_0024ad88(sub->unk10);
        FUN_0024ad88(sub->unk14);
        asdMemFree((int)sub);
    }
    if (obj->unk30 != 0) {
        objectBufferFree();
    }
    asdMemFree((int)obj);
}

} /* extern "C" */
