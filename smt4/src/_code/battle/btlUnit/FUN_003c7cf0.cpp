/* NON_MATCHING: retail addresses the 0x18-byte record fields as byte offsets from a register base (mov rN,#off; add rN,rN,idx*0x18), keeps r5/r6 live and uses a different frame; struct-index form here compiles to immediate offsets and a smaller frame */
#include "common.h"

extern "C" {

typedef struct EffectRecord {
    /* 0x00 */ s16 id;
    /* 0x02 */ s16 sub;
    /* 0x04 */ u8 paramA;
    /* 0x05 */ u8 paramB;
    /* 0x06 */ u8 paramC;
    /* 0x07 */ u8 paramD;
    /* 0x08 */ s16 paramE;
    /* 0x0A */ s16 paramF;
    /* 0x0C */ f32 scale;
    /* 0x10 */ u8 color[4];
    /* 0x14 */ u8 fadeBias;
    /* 0x15 */ u8 secondColorLow;
    /* 0x16 */ u8 strength;
    /* 0x17 */ u8 tint;
} EffectRecord;

typedef struct EffectOwner {
    /* 0x00 */ u8 unk00[0xA0];
    /* 0xA0 */ EffectRecord *records;
} EffectOwner;

int FUN_002e23c0(EffectOwner *owner, u32 colorA, u32 fade, u32 colorB);
int FUN_00340334(EffectOwner *owner, u32 a, u32 b, u32 c, u32 d, s32 e, s32 f, f32 scale);

extern u32 DAT_00439cf8;
extern u8 DAT_00439ce0;
extern u8 DAT_00439ce1;
extern u8 DAT_00439ce2;

/* Applies the effect record matching (id, sub): forwards its parameters and colors and sets the global tint colors. */
void FUN_003c7cf0(EffectOwner *owner, s32 id, s32 sub)
{
    s32 i = 0;
    EffectRecord *records = owner->records;
    while (records[i].id != -1) {
        if (records[i].id == id && records[i].sub == sub) {
            FUN_00340334(owner, records[i].paramA, records[i].paramB, records[i].paramC, records[i].paramD,
                         records[i].paramE, records[i].paramF, records[i].scale);
            records = owner->records;
            u32 colorBase = (records[i].color[0] << 24) | (records[i].color[1] << 16) | (records[i].color[2] << 8);
            FUN_002e23c0(owner, colorBase | records[i].color[3], records[i].fadeBias | 0xFFFFFF00u,
                         colorBase | records[i].secondColorLow);
            s32 strength = owner->records[i].strength * 255;
            s32 level = strength / 255;
            DAT_00439cf8 = (level << 24) + ((strength / 255) << 16) + ((strength / 255) << 8) + 0xFF;
            u8 tint = owner->records[i].tint;
            DAT_00439ce0 = (s16)tint * 199 / 255;
            DAT_00439ce1 = (s16)tint * 150 / 255;
            DAT_00439ce2 = tint * 36 / 255;
            return;
        }
        if (++i >= 0x50) {
            return;
        }
    }
}

} /* extern "C" */
