#include "shard/Shard003E.h"

extern "C" {

extern SummarySource *FUN_001ab888(void);

u8 FUN_003e48bc(void)
{
    if (FUN_001ab888()->unk2C4E < 8) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
