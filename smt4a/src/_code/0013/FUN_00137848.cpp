#include "romwright_types.h"

extern "C" {

int FUN_00146cd0(unsigned int);

extern unsigned char g_gameDataBlocks; /* 0x57f698 */

/* Supplied declaration required: FUN_00146cd0. */


void FUN_00137848(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_00146cd0((*(unsigned int *)((unsigned char *)&g_gameDataBlocks + 0xc)));
  return;
}

} /* extern "C" */
