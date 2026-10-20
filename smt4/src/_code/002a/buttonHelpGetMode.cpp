#include "common.h"

extern "C" {

typedef struct HelpBlock {
    /* 0x000 */ u8 unk000[0x4CA];
    /* 0x4CA */ u8 mode;
} HelpBlock;

typedef struct HelpHolder {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ HelpBlock *block;
} HelpHolder;

extern HelpHolder g_buttonHelp;

/* Returns the button help's mode byte, or 0 when there is no button help. */
u8 buttonHelpGetMode(void)
{
    if (g_buttonHelp.block == NULL) {
        return 0;
    }
    return g_buttonHelp.block->mode;
}

} /* extern "C" */
