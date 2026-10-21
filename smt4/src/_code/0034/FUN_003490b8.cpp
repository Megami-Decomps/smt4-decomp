/* NON_MATCHING: retail packed state stores or parameter lifetime differs. */
#include "common.h"

struct FlagEntry { u8 flags; u8 value; u8 unk02[2]; };
struct FlagBlock {
    /* 0x000 */ u8 unk00[0x200];
    /* 0x200 */ FlagEntry entries[1];
};
extern "C" FlagBlock *gameGetFlagBlock();
/* Toggles the optional value and enables its entry flag. */
extern "C" void FUN_003490b8(u32 index)
{
    FlagEntry *entry = &gameGetFlagBlock()->entries[index];
    entry->value = entry->value ? entry->value + 1 : 2;
    entry->flags |= 0x40;
}
