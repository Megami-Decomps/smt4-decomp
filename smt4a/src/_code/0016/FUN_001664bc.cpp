#include "common.h"

extern "C" {

typedef struct Block5b3fe4 {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 count;
} Block5b3fe4;
extern Block5b3fe4 DAT_005b3fe4;

void asdModelAdvanceCommandCursor(s32 size);

/* Releases the block (count words) through asdModelAdvanceCommandCursor and clears both fields. */
void FUN_001664bc(void)
{
    asdModelAdvanceCommandCursor(DAT_005b3fe4.count << 2);
    DAT_005b3fe4.unk00 = 0;
    DAT_005b3fe4.count = 0;
}

} /* extern "C" */
