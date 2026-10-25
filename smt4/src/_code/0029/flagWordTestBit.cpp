#include "gamedata/FlagBitTests.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ u16 flags;
} Obj;

/* Whether bit `bit` of the flag word at +0x44 is set. */
u8 flagWordTestBit(const void *record, u32 bit)
{
    const Obj *obj = static_cast<const Obj *>(record);

    return ((u32)obj->flags & (1 << (bit & 0xff))) != 0;
}

} /* extern "C" */
