#include "common.h"
#include "util/CalleeContracts.h"

extern "C" {

extern struct {
    u8 unk00[0x10];
    u8 unk10;
    u8 unk11[3];
} DAT_004d9758[];

u8 FUN_002c2a04(int index)
{
    return DAT_004d9758[index].unk10;
}

} /* extern "C" */
