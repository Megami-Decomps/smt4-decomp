#include "common.h"

extern "C" {

typedef struct AsdGxPresets {
    /* 0x000 */ u8 unk000[0x1C8];
    /* 0x1C8 */ s32 current;
    /* 0x1CC */ s32 pending;
} AsdGxPresets;

extern AsdGxPresets g_asdGxPresets;

/* Requests preset `value` unless it is already the current one. */
void asdGxPresetRequest(s32 value)
{
    if (g_asdGxPresets.current != value) {
        g_asdGxPresets.pending = value;
    }
}

}
