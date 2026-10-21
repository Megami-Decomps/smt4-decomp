#include "common.h"

extern "C" {

extern int mwmofilterDeblockerCreate(void);

typedef struct Obj {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ u8 unk06;
    /* 0x07 */ u8 unk07[0x51];
    /* 0x58 */ u32 unk58;
    /* 0x5C */ u32 unk5C;
} Obj;

u8 mwmofilterDeblockerInit(Obj *obj)
{
    int result = mwmofilterDeblockerCreate();

    if (result != 0) {
        obj->unk58 = 0;
        obj->unk5C = 0;
        obj->unk06 = 0;
    }
    return result != 0;
}

} /* extern "C" */
