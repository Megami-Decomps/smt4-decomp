/* NON_MATCHING: retail uses `ldr r0, [r0]` where armcc emits `ldr r0, [r0]`. */
#include "common.h"

extern "C" {

struct Entry { u8 unk000[0x23b]; s8 state; u8 unk23c[0x1cc]; };
struct EntryOwner { u8 unk0000[0x1ffc]; Entry *entries; };

s32 uiEntryGetState(EntryOwner *owner, s32 index)
{
    return owner->entries[index].state;
}

} /* extern "C" */
