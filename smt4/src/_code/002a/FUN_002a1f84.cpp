#include "common.h"

extern "C" {

int FUN_0015e3bc(int item, u32 value);

typedef struct Obj {
    /* 0x00 */ int items[2];
    /* 0x08 */ int count;
    /* 0x0C */ u8 unk0C[0x17];
    /* 0x23 */ s8 value;
} Obj;

void FUN_002a1f84(Obj *obj, u32 value)
{
    int item;
    int i = 0;

    if (i < obj->count) {
        do {
            item = obj->items[i];
            if (item != 0) {
                FUN_0015e3bc(item, value);
            }
            i = i + 1;
        } while (i < obj->count);
    }
    obj->value = (s8)value;
}

} /* extern "C" */
