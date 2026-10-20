#include "common.h"

extern "C" {

void operatorDeleteArray(u32 value);
void strDuplicateInto(u32 *member, u32 value);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 member04;
} Holder;

/* Assignment: when the member at 4 differs, releases the old one (if any) and copies the new one through strDuplicateInto; returns `dest`. */
Holder *onlineStringAssign(Holder *dest, const Holder *source)
{
    if (dest->member04 != source->member04) {
        if (dest->member04 != 0) {
            operatorDeleteArray(dest->member04);
        }
        strDuplicateInto(&dest->member04, source->member04);
    }
    return dest;
}

} /* extern "C" */
