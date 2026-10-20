#include "romwright_types.h"

extern "C" {

int FUN_002c34f8(void);

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */

/* Supplied declaration required: FUN_002c34f8. */


void FUN_002c5758(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  (*(unsigned int *)((unsigned char *)&g_gameDataBlocks + 0x10)) = (*(unsigned int *)((unsigned char *)&g_gameDataBlocks + 0x10)) & ~param_1;
  if ((*(unsigned int *)((unsigned char *)&g_gameDataBlocks + 0x10)) != 0) {
    g_gameDataBlocks = 0;
    FUN_002c34f8();
    return;
  }
  g_gameDataBlocks = 1;
  FUN_002c34f8();
  return;
}

} /* extern "C" */
