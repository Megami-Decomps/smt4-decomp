/* Starts the mode-10 popup when the scroll position passes the entry's height (adjusted per direction) and a candidate exists. */
#include "common.h"

extern "C" {

typedef struct {
    s32 mode;      /* 0x00 */
    s32 unk04;     /* 0x04 */
    s32 unk08[3];  /* 0x08 */
    s32 handle;    /* 0x14 */
    s32 candidate; /* 0x18 */
} PopupState;

typedef struct {
    u8 unk00[8];   /* 0x00 */
    u16 height;    /* 0x08 */
} PopupEntry;

typedef struct {
    u8 unk00[300]; /* 0x00 */
    u16 id;        /* 0x12c */
} PopupCandidate;

extern PopupState *g_popupState;

s32 randRange(u32 id);
PopupCandidate *saveSlotFindSelected(void);
PopupEntry *FUN_0015fa74(u32 a, u32 b);
s32 gameFlagIsSet(u32 flag);
s32 gameDataBlocksGetTableFlag(void);
s32 FUN_002d8b58(u32 kind, u16 id);
f32 FUN_004a00f4(s32 index);

void popupTryStartScrollPrompt(u32 arg1, u32 arg2)
{
    s32 adjust;
    s32 scrollY;
    PopupEntry *entry;
    PopupCandidate *candidate;

    if (g_popupState->mode != 0) {
        return;
    }

    adjust = 0;
    switch (gameDataBlocksGetTableFlag()) {
    case 1:
        adjust = -12;
        break;
    case 2:
        adjust = 12;
        break;
    case 3:
        adjust = -20;
        break;
    case 4:
        adjust = 16;
        break;
    }

    entry = FUN_0015fa74(arg1, arg2);
    scrollY = (s32)FUN_004a00f4(2);
    if (scrollY < entry->height + adjust) {
        candidate = saveSlotFindSelected();
        if (candidate != NULL) {
            if (gameFlagIsSet(0x1a2) == 0 || randRange(99) + 1 > 50) {
                g_popupState->mode = 10;
                g_popupState->unk04 = 0;
                g_popupState->candidate = candidate->id;
                g_popupState->handle = FUN_002d8b58(3, candidate->id);
            }
        }
    }
}

} /* extern "C" */
