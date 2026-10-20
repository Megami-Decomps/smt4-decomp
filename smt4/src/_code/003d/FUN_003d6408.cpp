#include "common.h"

extern "C" {

int FUN_002a043c(int value, int flag);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x730];
    /* 0x730 */ int value;
} Obj;

void FUN_003d6408(Obj *obj)
{
    if (obj->value != 0) {
        FUN_002a043c(obj->value, 0);
        return;
    }
}

} /* extern "C" */
