#include "common.h"
#include "shard/W6_W6Match3_EffectColor.h"

extern "C" {

typedef struct Global63fd88 {
    /* 0x000 */ u8 unk000[0x1C0];
    /* 0x1C0 */ u32 unk1C0;
} Global63fd88;
extern Global63fd88 g_asdGxPresets;

/* Returns the word at 0x1C0 of the global at 0x63FD88. */
u32 FUN_00144eec(void)
{
    return g_asdGxPresets.unk1C0;
}

} /* extern "C" */
