#include "common.h"

extern "C" {

void FUN_002e98d4(u32 value);
void FUN_0030ff80(u32 *member, u32 value);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 member04;
} Holder;

/* Assignment: when the member at 4 differs, releases the old one (if any) and copies the new one through FUN_0030ff80; returns `dest`. */
Holder *FUN_002e9598(Holder *dest, const Holder *source)
{
    if (dest->member04 != source->member04) {
        if (dest->member04 != 0) {
            FUN_002e98d4(dest->member04);
        }
        FUN_0030ff80(&dest->member04, source->member04);
    }
    return dest;
}

} /* extern "C" */
