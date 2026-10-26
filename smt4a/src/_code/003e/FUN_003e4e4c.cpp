#include "shard/Shard003E.h"
#include "code/Code003e.h"

extern "C" {

extern SummarySource *gameGetSlotTable(void);

void FUN_003e4e4c(s32 value)
{
    gameGetSlotTable()->unk2C4C = value;
}

} /* extern "C" */
