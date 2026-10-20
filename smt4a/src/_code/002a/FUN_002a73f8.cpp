/* Returns the signed byte at +0x2012 of the object the global points to. */
#include "common.h"

extern "C" {

struct Obj002a73f8 {
    /* 0x0000 */ u8 unk0000[0x2012];
    /* 0x2012 */ s8 value;
};

struct Global002a73f8 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Obj002a73f8 *obj;
};

extern Global002a73f8 DAT_00588fd0;

s32 FUN_002a73f8(void)
{
    return DAT_00588fd0.obj->value;
}

}
