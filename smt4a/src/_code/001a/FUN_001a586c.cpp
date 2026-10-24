/* NON_MATCHING: only register numbering of the two live arguments differs (retail: owner in r5, source in r4, source offset added after owner's) */
/* Runs FUN_001b6668 on the two sub-objects at +0xC / +0x108, then FUN_001a5894 (placed right after, so the last call is a linker NOP). */
#include "common.h"

struct ListOwner {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u8 list[4];
};

struct ListSource {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ u8 list[4];
};

extern "C" {
void FUN_001b6668(u8 *destination, u8 *source);
void FUN_001a5894(ListOwner *owner, ListSource *source);

void FUN_001a586c(ListOwner *owner, ListSource *source)
{
    FUN_001b6668(owner->list, source->list);
    FUN_001a5894(owner, source);
}
}
