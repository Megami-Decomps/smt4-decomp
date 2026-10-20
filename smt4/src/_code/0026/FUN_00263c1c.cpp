#include "common.h"

extern "C" {

int FUN_002c5c04(void);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ int unk14;
} Obj;

extern Obj *FUN_003100f4(void);

void FUN_00263c1c(void)
{
    int value = FUN_002c5c04();
    Obj *obj = FUN_003100f4();

    obj->unk14 = value;
}

} /* extern "C" */
