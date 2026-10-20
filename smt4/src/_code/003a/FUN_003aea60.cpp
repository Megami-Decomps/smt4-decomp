#include "common.h"

extern "C" {

extern int FUN_00225220(int block);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ int target;
} Obj;

int FUN_003aea60(Obj *obj)
{
    int target = obj->target;
    int result = FUN_00225220(target + 8);

    if (result != 0) {
        *(u32 *)(target + 0x7e38) = 0;
    }
    return result;
}

} /* extern "C" */
