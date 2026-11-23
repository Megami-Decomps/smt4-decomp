#include "AsdSDK/AsdMemCopy.h"
#include "common.h"

extern "C" {

extern u8 *gameGetFlagBlock(void);

void flagBlockCopyRecord(void *record)
{
    u8 *base = gameGetFlagBlock();

    __aeabi_memcpy(base + 0x100, record, 0x44);
}

} /* extern "C" */
