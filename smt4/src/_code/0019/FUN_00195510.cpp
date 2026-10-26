#include "shard/GameDataBlocks.h"
#include "code/Code0019_Smt4.h"

extern "C" {

void FUN_00195510(u8 value)
{
    g_gameDataBlocks.saveBlock->unk24BB0 = value;
}

} /* extern "C" */
