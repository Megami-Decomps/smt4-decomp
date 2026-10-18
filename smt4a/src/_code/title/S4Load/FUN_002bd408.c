/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd408` (_code @ 0x2bd408, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_00589154; /* 0x589154 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_00237210. */


void FUN_002bd408(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_00589154;
  if (DAT_00589154[0xaa] != 0) {
    FUN_0019a5a0();
  }
  if (puVar1[0xab] != 0) {
    FUN_0019a5a0();
  }
  if (puVar1[0xac] != 0) {
    FUN_0019c364();
  }
  if (puVar1[5] != 0) {
    FUN_0019a5a0();
    puVar1[5] = 0;
  }
  FUN_00237210(puVar1[0xae]);
  FUN_001631d0(*puVar1,0);
  *(unsigned char *)(puVar1 + 1) = 1;
  if (DAT_00589154 != (unsigned int *)0x0) {
    FUN_0019a5a0();
    DAT_00589154 = (unsigned int *)0x0;
  }
  return;
}
