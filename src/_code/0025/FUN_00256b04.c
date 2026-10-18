/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00256b04` (_code @ 0x256b04, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern short *DAT_00434290; /* 0x434290 */

/* Supplied declaration required: FUN_00226b2c. */


void FUN_00256b04(short param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  short *psVar1;
  short *psVar2;
  short *psVar3;
  
  psVar2 = DAT_00434290;
  FUN_00226b2c(DAT_00434290,(int)param_1,0,param_2);
  psVar3 = *(short **)(DAT_00434290 + 4);
  do {
    psVar1 = psVar3;
    if (psVar1 == (short *)0x0) {
      *(unsigned char *)(psVar2 + 2) = 0x34;
      return;
    }
    psVar3 = *(short **)(psVar1 + 6);
  } while ((((char)psVar1[2] != '4') || (*psVar1 != *psVar2)) || (psVar2[1] < 0));
  psVar2[1] = -1;
  *(unsigned char *)(psVar2 + 2) = 0x34;
  return;
}
