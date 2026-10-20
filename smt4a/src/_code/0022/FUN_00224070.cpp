#include "common.h"

extern "C" {

void FUN_002e6dd4(u8 *block, s32 size);

typedef struct PopupState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 unk08[0x10];
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u8 unk24;
    /* 0x25 */ u8 name[0x48];
    /* 0x6D */ u8 unk6D[0x43];
    /* 0xB0 */ u32 unkB0;
    /* 0xB4 */ u32 unkB4;
    /* 0xB8 */ u32 unkB8;
    /* 0xBC */ u32 unkBC;
    /* 0xC0 */ u32 unkC0;
    /* 0xC4 */ u32 unkC4;
    /* 0xC8 */ u32 unkC8;
    /* 0xCC */ u32 unkCC;
    /* 0xD0 */ u32 unkD0;
    /* 0xD4 */ u32 unkD4;
    /* 0xD8 */ u32 unkD8;
    /* 0xDC */ u32 unkDC;
    /* 0xE0 */ u32 unkE0;
    /* 0xE4 */ u32 unkE4;
    /* 0xE8 */ u32 unkE8;
    /* 0xEC */ u32 unkEC;
    /* 0xF0 */ u32 unkF0;
} PopupState;
extern PopupState *g_popupState;

/* Clears the popup state: the leading words, the 0x48-byte block at 0x25 and the 17 words from 0xB0 on. */
void FUN_00224070(void)
{
    PopupState *popup;

    popup = g_popupState;
    g_popupState->unk00 = 0;
    popup->unk04 = 0;
    popup->unk18 = 0;
    popup->unk20 = 0;
    popup->unk1C = 0;
    FUN_002e6dd4(popup->name, 0x48);
    popup = g_popupState;
    g_popupState->unkB0 = 0;
    popup->unkB4 = 0;
    popup->unkB8 = 0;
    popup->unkBC = 0;
    popup->unkC0 = 0;
    popup->unkC4 = 0;
    popup->unkC8 = 0;
    popup->unkCC = 0;
    popup->unkD0 = 0;
    popup->unkD4 = 0;
    popup->unkD8 = 0;
    popup->unkDC = 0;
    popup->unkE0 = 0;
    popup->unkE4 = 0;
    popup->unkE8 = 0;
    popup->unkEC = 0;
    popup->unkF0 = 0;
}

} /* extern "C" */
