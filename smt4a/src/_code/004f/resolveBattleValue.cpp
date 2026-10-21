#include "shard/Shard004F.h"

extern "C" {

typedef struct HalfAt10Rec {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s16 unk10;
} HalfAt10Rec;

extern void btlGetMainState(void);
extern u32 btlScriptUnitHasFlags(void);
extern s32 FUN_004f59b0(u32 a);
extern HalfAt10Rec *FUN_004f7aa4(u32 a, u32 b);

s32 resolveBattleValue(u32 a, u32 b)
{
    s32 result;
    HalfAt10Rec *rec;

    btlGetMainState();
    if (btlScriptUnitHasFlags() != 0) {
        result = 5;
    } else {
        rec = FUN_004f7aa4(a, b);
        result = 0;
        if (rec != NULL) {
            result = rec->unk10;
        }
        if (rec == NULL || result == 0) {
            return FUN_004f59b0(a);
        }
    }
    return result;
}

} /* extern "C" */
