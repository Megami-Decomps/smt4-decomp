#include "romwright_types.h"
#include "shard/gameGetOptions.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x57f698 */


int gameGetOptions(void)

{
  return (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x1d30;
}

} /* extern "C" */
