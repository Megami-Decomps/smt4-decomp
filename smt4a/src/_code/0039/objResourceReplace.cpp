#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ u32 ref;
} Holder;

extern void handleBlockRefDrop(u32 ref);
extern u32 FUN_00221f20(u32 ref);

/* Drops the holder's current reference and replaces it with the processed `ref`. */
void objResourceReplace(Holder *holder, u32 ref)
{
    if (holder->ref != 0) {
        handleBlockRefDrop(holder->ref);
    }
    holder->ref = FUN_00221f20(ref);
}

} /* extern "C" */
