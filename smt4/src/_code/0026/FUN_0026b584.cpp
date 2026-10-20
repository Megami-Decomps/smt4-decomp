#include "romwright_types.h"

extern "C" {

int FUN_002c34f8(int);

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */

/* Supplied declaration required: FUN_002c34f8. */


void FUN_0026b584(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  g_gameDataBlocks = 0;
  (*(unsigned int *)((unsigned char *)&g_gameDataBlocks + 0x10)) = param_1 | (*(unsigned int *)((unsigned char *)&g_gameDataBlocks + 0x10));
  FUN_002c34f8(0);
  return;
}

} /* extern "C" */
