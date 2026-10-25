#include "shard/Shard003E.h"
#include "battle/btlDebug.h"

extern "C" {

extern SummarySource *gameGetSlotTable(void);

u8 FUN_003e48bc(void)
{
    if (gameGetSlotTable()->unk2C4E < 8) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
