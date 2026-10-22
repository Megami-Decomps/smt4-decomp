/* NON_MATCHING: prologue scheduling only: retail stores the 0x40 flag before loading the text pointer; armcc here hoists the load above the store. */
#include "addon/aocMain.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"

namespace {
struct AocEntryPanel {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x418];
    /* 0x41C */ AsdText *text;
};
}

extern "C" {

extern AocMain *g_aocMain;
void asdMemFreeSlot(void *block);
AsdText *asdTextCreate(u32 flags);
void FUN_002bd82c(AsdText *text, u32 color);
void positionStateSet(AsdText *text, u32 first, u32 second, f32 scale);
u32 FUN_0023478c(AocMain *main, s32 index);
void asdTextDrawDirectoryEntry(AsdText *text, u32 font, s32 mode, s32 x, s32 y, u32 directory, s32 index);
void FUN_0038abbc(AocEntryPanel *panel, u32 entry, u32 arg2, u32 arg3);

/* Rebuild the panel's text for a directory entry and show the entry. */
void FUN_0027ea28(AocEntryPanel *panel, s32 index, u32 arg2, u32 arg3)
{
    panel->flags |= 0x40;
    if (panel->text != NULL) {
        asdMemFreeSlot(panel->text);
        panel->text = NULL;
    }
    panel->text = asdTextCreate(0);
    FUN_002bd82c(panel->text, 0x320202ff);
    positionStateSet(panel->text, 0, 0x646464ff, 0.0f);
    asdTextDrawDirectoryEntry(panel->text, 3, -1, 0, 3, FUN_0023478c(g_aocMain, -1), index);
    FUN_0038abbc(panel, FUN_0023478c(g_aocMain, index), arg2, arg3);
}

} /* extern "C" */
