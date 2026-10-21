/* NON_MATCHING: compiler hoists the global work load and predicates the selected-entry stores instead of branching. */
#include "common.h"
extern "C" {
struct PopupEntry {
    u8 unk00[0x0C];
    u8 active;
    u8 unk0D;
    u8 selected;
    u8 unk0F[3];
    u16 kind;
    u8 unk14[0x28];
};
extern struct {
    PopupEntry entries[64];
    u8 unkF00[0x0C];
    u8 changed;
    u8 unkF0D[3];
    s32 selected;
    u8 unkF14[0x2C];
    u8 requested;
} *DAT_00581280;
/* Marks active entries of kind 16 and updates the current selection. */
void FUN_003130cc(void)
{
    for (s32 index = 0; index < 64; ++index) {
        PopupEntry *entry = &DAT_00581280->entries[index];
        if (entry->active != 0) {
            if (entry->kind != 16) {
                entry->selected = 0;
            } else {
                entry->selected = 1;
                DAT_00581280->selected = index;
                DAT_00581280->requested = 1;
                DAT_00581280->changed = 1;
            }
        }
    }
}
}
