/* NON_MATCHING: retail loads the +0x10 word before the +0x14 word */
#include "common.h"

extern "C" {

typedef struct Cursor {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 start;
    /* 0x14 */ u32 end;
} Cursor;

/* True when the cursor has reached its end. */
u32 FUN_0030cad0(Cursor *cursor)
{
    if (cursor->end == cursor->start) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
