/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026f174` (_code @ 0x26f174, 0x8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0026f240; /* 0x26f240 */
extern unsigned char LAB_0026f248; /* 0x26f248 */

/* Supplied declaration required: FUN_0024f060. */
/* Supplied declaration required: FUN_00296de0. */
/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_002bd1b0. */
/* Supplied declaration required: FUN_002bd25c. */


void FUN_0026f174(unsigned int *param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0 [68];
  
  if (param_1 == (unsigned int *)0x0) {
    return;
  }
  FUN_00296de0(*param_1,2,0xffffffff,0,0,param_2 + 0xe);
  if (*(short *)(param_2 + 0x48) != 0) {
    FUN_002bd25c();
    FUN_002bd1b0();
  }
  else {
    FUN_0024f060(temp_v0,&LAB_0026f240);
  }
  FUN_00296de0(param_1[1],2,0xffffffff,0,0,temp_v0);
  if ((*(unsigned char *)(param_2 + 0x20) & 2) != 0) {
    FUN_002bcf58(temp_v0,&LAB_0026f248,0x13);
    FUN_00296de0(param_1[2],2,0xffffffff,0,0,temp_v0);
  }
  *(unsigned char *)(param_1 + 3) = 1;
  return;
}
