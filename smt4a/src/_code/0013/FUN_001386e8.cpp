#include "romwright_types.h"

extern "C" {

int FUN_001406f0(void);

extern unsigned char g_gameDataBlocks; /* 0x57f698 */

/* Supplied declaration required: FUN_001406f0. */


void FUN_001386e8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  (*(unsigned int *)((unsigned char *)&g_gameDataBlocks + 0x14)) = (*(unsigned int *)((unsigned char *)&g_gameDataBlocks + 0x14)) & ~param_1;
  if ((*(unsigned int *)((unsigned char *)&g_gameDataBlocks + 0x14)) != 0) {
    g_gameDataBlocks = 0;
    FUN_001406f0();
    return;
  }
  g_gameDataBlocks = 1;
  FUN_001406f0();
  return;
}

} /* extern "C" */
