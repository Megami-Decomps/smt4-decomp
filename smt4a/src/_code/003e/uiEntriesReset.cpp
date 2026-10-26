#include "common.h"
#include "code/Code003e_Smt4a.h"

extern "C" {

struct Entry { u32 value; s32 index; };
struct Owner { u8 unk0000[0x201c]; Entry entries[42]; };

void uiEntriesReset(Owner *owner)
{
    for (s32 i = 0; i < 42; i++) {
        owner->entries[i].value = 0;
        owner->entries[i].index = -1;
    }
}

} /* extern "C" */
