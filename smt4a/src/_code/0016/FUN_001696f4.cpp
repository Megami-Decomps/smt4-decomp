#include "common.h"
#include "shard/FUN_001696f4.h"

extern "C" {

typedef struct Global63fd88 {
    /* 0x000 */ u8 unk000[0x1C8];
    /* 0x1C8 */ u32 unk1C8;
} Global63fd88;
extern Global63fd88 g_asdGxPresets;

/* Returns the word at 0x1C8 of the global at 0x63FD88. */
u32 FUN_001696f4(void)
{
    return g_asdGxPresets.unk1C8;
}

} /* extern "C" */
