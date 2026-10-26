#include "common.h"
#include "code/Code0022_Smt4.h"

extern "C" {

int FUN_002485d4(void *a, void *b);
int FUN_00283f30(void *a, int b);
int FUN_002e1f1c(u32 a, void *b, int c);

typedef struct Target {
    /* 0x00 */ u16 unk00[8];
    /* 0x10 */ u8 unk10[0x26C];
    /* 0x27C */ u32 unk27C;
    /* 0x280 */ void *unk280;
} Target;

typedef struct Obj {
    /* 0x000 */ u8 unk000[0xCE];
    /* 0x0CE */ u16 unk0CE;
    /* 0x0D0 */ u8 unk0D0[0x1A8];
    /* 0x278 */ s32 unk278;
    /* 0x27C */ void *unk27C;
    /* 0x280 */ void *unk280;
    /* 0x284 */ s32 unk284;
} Obj;

void FUN_0022abe0(Obj *obj, Target *target)
{
    void *source;
    u8 noFirst;

    if (obj->unk278 != 0) {
        FUN_00283f30(target, 1);
        return;
    }
    source = obj->unk27C;
    noFirst = source == NULL;
    if (noFirst) {
        source = obj->unk280;
    }
    if (noFirst && source == NULL) {
        if (obj->unk284 == 0) {
            return;
        }
        FUN_002e1f1c(obj->unk0CE, target, 8);
        return;
    }
    FUN_002485d4(source, target);
}

} /* extern "C" */
