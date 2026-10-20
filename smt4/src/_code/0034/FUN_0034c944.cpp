/* NON_MATCHING: register allocation: retail keeps the result in r0 (pair copied to r2); built keeps the result in r1 */
#include "common.h"

extern "C" {

typedef struct Gauge {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ f32 limit;
    /* 0x3C */ u8 unk3C[0xC];
    /* 0x48 */ f32 value;
} Gauge;

typedef struct GaugePair {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ Gauge *first;
    /* 0x18 */ u8 unk18[8];
    /* 0x20 */ Gauge *second;
    /* 0x24 */ u8 unk24[8];
    /* 0x2C */ s32 mode;
} GaugePair;

/* In mode 5: 1 while neither gauge's value has passed its limit, else 0; 0 in any other mode. */
u32 FUN_0034c944(GaugePair *pair)
{
    u32 ok;

    if (pair->mode != 5) {
        return 0;
    }
    ok = 1;
    if (pair->first != NULL && pair->first->limit < pair->first->value) {
        ok = 0;
    }
    if (pair->second != NULL && pair->second->limit < pair->second->value) {
        return 0;
    }
    return ok;
}

} /* extern "C" */
