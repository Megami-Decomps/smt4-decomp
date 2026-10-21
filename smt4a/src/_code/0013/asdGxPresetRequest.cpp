#include "shard/W6_W6Match3_GxPresetResumeState.h"

extern "C" {

extern GxPresetResumeState g_asdGxPresets;

/* Requests preset `value` unless it is already the current one. */
void asdGxPresetRequest(s32 value)
{
    if (g_asdGxPresets.current != value) {
        g_asdGxPresets.pending = value;
    }
}

}
