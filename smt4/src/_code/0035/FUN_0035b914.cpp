#include "common.h"

struct Obj4345c8 {
    u8 unk00[0x10];
    u32 count;
    u32 limit;
};

extern "C" s32 lexerReadHexDigits(Obj4345c8 *obj, s32 arg, s32 mode);

/* Counts one step; reports 6 when the limit is reached, else continues in lexerReadHexDigits with mode 4. */
extern "C" s32 FUN_0035b914(Obj4345c8 *obj, s32 arg)
{
    obj->count++;
    if (obj->count == obj->limit) {
        return 6;
    }
    return lexerReadHexDigits(obj, arg, 4);
}
