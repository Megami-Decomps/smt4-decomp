#include "shard/W4_W4Match6b_GameDataBlock.h"
#include <stddef.h>
#include "code/Code0026.h"

extern "C" {



int FUN_002613f0(int index)

{
  u32 *words = (u32 *)g_gameDataBlocks.saveBlock;
  words += index * (s32)(sizeof(GameSavedPairA) / sizeof(u32));
  return (s32)words + (s32)offsetof(GameSavedPairTableA, entries);
}

} /* extern "C" */
