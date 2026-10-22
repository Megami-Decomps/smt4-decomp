/* NON_MATCHING: only the halfword clear at 0x4BC differs: retail addresses it from work + 0x400 (shared with the 0x4BE argument), the build pools the 0x4BC offset. */
#include "common.h"

extern "C" {

typedef struct ButtonHelpSprite {
    /* 0x00 */ u8 data[0x8C];
} ButtonHelpSprite;

typedef struct ButtonHelpSlot {
    /* 0x00 */ u8 kind; /* 0: none */
    /* 0x01 */ u8 unk01[3];
} ButtonHelpSlot;

typedef struct ButtonHelpWork {
    /* 0x000 */ u8 unk000[0xC];
    /* 0x00C */ u32 unk0C;
    /* 0x010 */ u32 unk10;
    /* 0x014 */ u8 unk014[0x20];
    /* 0x034 */ ButtonHelpSprite sprites[6];
    /* 0x37C */ u8 unk37C[0x118];
    /* 0x494 */ ButtonHelpSlot slots[6];
    /* 0x4AC */ u16 labels[6];
    /* 0x4B8 */ u32 unk4B8;
    /* 0x4BC */ u16 unk4BC;
    /* 0x4BE */ u8 unk4BE[8];
    /* 0x4C6 */ u8 unk4C6;
} ButtonHelpWork;

typedef struct ButtonHelpGlobals {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ ButtonHelpWork *work;
} ButtonHelpGlobals;

extern ButtonHelpGlobals g_buttonHelp;

void FUN_002bee58(ButtonHelpSprite *sprite, s32 mode);
u16 FUN_002aa024(s32 table, s32 id);
void FUN_002ae028(void *value);

/* Resets the button help: clears its six sprites and looks up the label text of each button kind. */
void FUN_001385f8(void)
{
    ButtonHelpWork *work = g_buttonHelp.work;

    for (s32 i = 0; i < 6; i++) {
        FUN_002bee58(&work->sprites[i], 0);
        switch (work->slots[i].kind) {
        case 0:
            break;
        case 7:
            work->labels[i] = FUN_002aa024(0x12, 0x73);
            break;
        case 8:
            work->labels[i] = FUN_002aa024(0x12, 0x59);
            break;
        case 9:
            work->labels[i] = FUN_002aa024(0x12, 0x85);
            break;
        default:
            work->labels[i] = FUN_002aa024(0x12, i + 0x1F);
            break;
        }
    }
    work->unk4B8 = 0;
    work->unk4BC = 0;
    FUN_002ae028(work->unk4BE);
    work->unk4C6 = 0;
    g_buttonHelp.work->unk0C = 0;
    g_buttonHelp.work->unk10 = 1;
}

} /* extern "C" */
