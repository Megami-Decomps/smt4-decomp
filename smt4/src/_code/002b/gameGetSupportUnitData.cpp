#include "romwright_types.h"
#include "shard/gameGetSupportUnitData.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */


int gameGetSupportUnitData(void)

{
  return (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x9198;
}

} /* extern "C" */
