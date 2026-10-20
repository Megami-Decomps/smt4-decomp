#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x57f698 */


unsigned int FUN_00239294(void)

{
  return (*(unsigned int *)((unsigned char *)&g_gameDataBlocks + 0x10));
}

} /* extern "C" */
