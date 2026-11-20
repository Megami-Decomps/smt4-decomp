#include "shard/Shard003E.h"
#include "code/Code003e.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {


void saveSlotTableSetPreferredId(s32 value)
{
    gameGetSlotTable()->preferredId = value;
}

} /* extern "C" */
