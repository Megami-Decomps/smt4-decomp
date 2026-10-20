#include "common.h"

extern "C" {

int FUN_00296ee0(void *obj, int state);
int FUN_002b8838(int id);
extern int FUN_0019e0c0(u32 value);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ s8 unk020;
    /* 0x021 */ u8 unk021[8];
    /* 0x029 */ u8 unk029;
    /* 0x02A */ u8 unk02A[0x62A];
    /* 0x654 */ u32 unk654;
} Obj;

void FUN_00397514(Obj *obj)
{
    if (FUN_0019e0c0(obj->unk654) != 2) {
        return;
    }
    FUN_00296ee0(obj, 2);
    if (obj->unk029 != 0) {
        FUN_002b8838(0x97);
        return;
    }
    if ((obj->unk020 != 2) && (obj->unk020 != 6)) {
        FUN_002b8838(0x95);
        return;
    }
    FUN_002b8838(0x96);
}

} /* extern "C" */
