#include "shard/Shard004D.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {


u32 FUN_004d05b4(void)
{
    return *(u32 *)gameGetSlotTable();
}

} /* extern "C" */
