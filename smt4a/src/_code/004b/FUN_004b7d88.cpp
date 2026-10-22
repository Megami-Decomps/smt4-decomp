/* NON_MATCHING: The native predicates merge the two default-cue state checks that retail duplicates. */
#include "common.h"
struct SoundCueContext {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ s16 kind;
};
extern "C" {
bool gameFlagIsSet(u32);
u8 gameDataFlagTestBit(u32);
void sysPlaySe(u32);

void FUN_004b7d88(const SoundCueContext* context)
{
    s16 kind;
    if (gameFlagIsSet(0x40C) != 0) {
        u8 alternate = gameDataFlagTestBit(0x76);
        kind = context->kind;
        if (alternate != 0) {
            if (kind == 4) {
                sysPlaySe(0xEA);
                return;
            }
            if (kind != 3) {
                sysPlaySe(0x45);
                return;
            }
            sysPlaySe(0xEB);
            return;
        }
    } else {
        kind = context->kind;
    }
    if (kind == 4) {
        sysPlaySe(0xEA);
        return;
    }
    if (kind != 3) {
        sysPlaySe(0x43);
        return;
    }
    sysPlaySe(0xEB);
}
}
