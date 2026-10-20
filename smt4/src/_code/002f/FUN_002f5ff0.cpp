#include "common.h"

extern "C" {

int FUN_002f6314(void);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x564];
    /* 0x564 */ int state;
} Obj;

u32 FUN_002f5ff0(Obj **owner)
{
    if (*owner != NULL) {
        if ((*owner)->state == 2) {
            return 1;
        }
    } else {
        FUN_002f6314();
    }
    return 0;
}

} /* extern "C" */
