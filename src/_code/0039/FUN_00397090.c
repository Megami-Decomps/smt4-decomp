/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00397090` (_code @ 0x397090, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_003970f0; /* 0x3970f0 */
extern unsigned char LAB_00397108; /* 0x397108 */

/* Supplied declaration required: FUN_0029bddc. */


void FUN_00397090(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)&LAB_003970f0;
  FUN_0029bddc(&LAB_003970f0,0x1c0);
  *(unsigned int **)(param_1 + 0x98) = puVar1;
  *puVar1 = *puVar1 | 2;
  *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
  puVar1 = (unsigned int *)&LAB_00397108;
  FUN_0029bddc(&LAB_00397108,0x1c0);
  *(unsigned int **)(param_1 + 0x9c) = puVar1;
  *puVar1 = *puVar1 | 2;
  *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
  return;
}
