#include "shard/Shard003E.h"

extern "C" {

extern SummarySource *gameGetSlotTable(void);

void FUN_003e49e8(void)
{
    gameGetSlotTable()->unk2C4E = 0;
}

} /* extern "C" */
