/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00285774` (_code @ 0x285774, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00230b9c(int, unsigned int, int);

extern int g_statusDown; /* 0x588fe8 */

/* Supplied declaration required: FUN_00230b9c. */


void FUN_00285774(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  
  temp_v0 = g_statusDown;
  FUN_00230b9c(1,0xffffffff,0);
  temp_v1 = g_statusDown;
  *(unsigned int *)(g_statusDown + 0x524) = 0;
  puVar3 = (unsigned int *)(temp_v1 + 0x518);
  temp_v2 = *puVar3;
  *puVar3 = 1;
  *(unsigned int *)(temp_v1 + 0x51c) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x520) = 3;
  return;
}

} /* extern "C" */
