/* NON_MATCHING: retail loads the flag with ldrsb and has a push {r4, lr}/pop {r4, pc} frame; built uses ldrb and a plain bx lr */
#include "common.h"

extern "C" {

typedef struct BtlUiPart {
    /* 0x00 */ u8 unk00[0x8a];
    /* 0x8a */ s8 flag;
} BtlUiPart;

typedef struct BtlUiWorkspace {
    /* 0x0000 */ u8 unk0000[0x7ec0];
    /* 0x7ec0 */ BtlUiPart part;
} BtlUiWorkspace;

typedef struct BtlUi {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ BtlUiWorkspace *workspace;
} BtlUi;

extern BtlUi g_btlUi;

/* True while the battle UI workspace's part flag is set. */
u8 FUN_003ae3f0(void)
{
    BtlUiPart *part = &g_btlUi.workspace->part;

    return part->flag != 0;
}

} /* extern "C" */
