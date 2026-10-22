#ifndef ASD_EFFECT_POLY_TEX_PIVOT_H
#define ASD_EFFECT_POLY_TEX_PIVOT_H
#include "common.h"
struct EffectPolyTexPivot {
    u8 unk000[0x30]; // 0x000
    u8 parameters[0x10C]; // 0x030
    u32 unk13C; // 0x13C
    u32 sharedHandle; // 0x140
    u32 blockReference; // 0x144
};
#endif
