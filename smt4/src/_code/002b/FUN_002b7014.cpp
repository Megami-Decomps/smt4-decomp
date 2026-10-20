#include "common.h"

extern "C" {

int asdModelAdvanceCommandCursor(int bytes);

extern struct {
    u32 unk0;
    int count;
} DAT_004729e0;

void FUN_002b7014(void)
{
    asdModelAdvanceCommandCursor(DAT_004729e0.count << 2);
    DAT_004729e0.unk0 = 0;
    DAT_004729e0.count = 0;
}

} /* extern "C" */
