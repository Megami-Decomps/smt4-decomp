#include "common.h"
#include "code/Code003f_Smt4a.h"

extern "C" {

typedef struct Actor {
    /* 0x000 */ u8 flags;
    /* 0x001 */ u8 unk001[0x111];
    /* 0x112 */ u16 flagsA;
    /* 0x114 */ u16 flagsB;
} Actor;

Actor *FUN_001568f8(void);

/* Sets bit 0x10 of the current actor's flagsA (when `first` is nonzero) or flagsB, unless the actor is flagged 8. */
void FUN_003f2aac(u32 unused0, u32 unused1, s32 first)
{
    Actor *actor = FUN_001568f8();

    if ((actor->flags & 8) == 0 && actor != NULL) {
        if (first != 0) {
            actor->flagsA |= 0x10;
        } else {
            actor->flagsB |= 0x10;
        }
    }
}

} /* extern "C" */
