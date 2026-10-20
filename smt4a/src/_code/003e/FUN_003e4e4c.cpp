#include "shard/Shard003E.h"

extern "C" {

extern SummarySource *gameGetSlotTable(void);

void FUN_003e4e4c(u16 value)
{
    gameGetSlotTable()->unk2C4C = value;
}

} /* extern "C" */
