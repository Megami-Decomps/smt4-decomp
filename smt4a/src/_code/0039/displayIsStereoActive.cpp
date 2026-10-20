#include "shard/Shard0039.h"

extern "C" {

typedef struct DisplayState {
    /* 0x000 */ u8 unk000[0x1C8];
    /* 0x1C8 */ s32 mode;
} DisplayState;

extern DisplayState g_asdGxPresets;
extern s32 nngxIsStereoVisionAllowed(void);

/* True when the display mode is 1 and stereoscopic 3D is allowed. */
u32 displayIsStereoActive(void)
{
    if (g_asdGxPresets.mode == 1 && nngxIsStereoVisionAllowed() != 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
