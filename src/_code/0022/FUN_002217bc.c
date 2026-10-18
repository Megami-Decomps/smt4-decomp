/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002217bc` (_code @ 0x2217bc, 0x10c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0047e500; /* 0x47e500 */

/* Supplied declaration required: FUN_00262934. */
/* Supplied declaration required: FUN_002aa568. */
/* Supplied declaration required: FUN_002bd75c. */
/* Supplied declaration required: FUN_002c4938. */


void FUN_002217bc(unsigned int param_1)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int *piVar3;
  int temp_v1;
  
  temp_v1 = 0;
  piVar3 = (int *)0x4332a0;
  do {
    piVar1 = piVar3 + 1;
    FUN_002aa568(piVar1,param_1);
    if (piVar1 == (int *)0x0) goto LAB_002218b8;
    temp_v1 = temp_v1 + 1;
    piVar3 = piVar3 + 0x13;
  } while (temp_v1 < 0x1a);
  piVar3 = (int *)0x47d200;
  temp_v1 = 0;
  if (temp_v1 < DAT_0047e500) {
    do {
      if (*piVar3 != 0) {
        piVar1 = piVar3 + 1;
        FUN_002aa568(piVar1,param_1);
        if (piVar1 == (int *)0x0) {
          if (*piVar3 != 0) {
            return;
          }
          break;
        }
      }
      temp_v1 = temp_v1 + 1;
      piVar3 = piVar3 + 0x13;
    } while (temp_v1 < DAT_0047e500);
  }
  if (DAT_0047e500 < 0x40) {
    FUN_002c4938(DAT_0047e500 * 0x4c + 0x47d200,0x4c);
    FUN_00262934(DAT_0047e500 * 0x4c + 0x47d204,param_1,0x40);
    temp_v0 = 0;
    FUN_002bd75c();
    *(unsigned int *)(DAT_0047e500 * 0x4c + 0x47d200) = temp_v0;
    DAT_0047e500 = DAT_0047e500 + 1;
  }
  return;
LAB_002218b8:
  if (*piVar3 != 0) {
    return;
  }
  if (DAT_0047e500 < 0x40) {
    FUN_002c4938(DAT_0047e500 * 0x4c + 0x47d200,0x4c);
    FUN_00262934(DAT_0047e500 * 0x4c + 0x47d204,param_1,0x40);
    temp_v0 = 0;
    FUN_002bd75c();
    *(unsigned int *)(DAT_0047e500 * 0x4c + 0x47d200) = temp_v0;
    DAT_0047e500 = DAT_0047e500 + 1;
  }
  return;
}
