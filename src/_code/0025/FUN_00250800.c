/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00250800` (_code @ 0x250800, 0xbc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern short *DAT_00434290; /* 0x434290 */

/* Supplied declaration required: FUN_00226b2c. */


void FUN_00250800(short param_1,unsigned int param_2,short *param_3,int param_4,int param_5,
                 unsigned int param_6,short param_7)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  short temp_v0;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  
  psVar2 = DAT_00434290;
  FUN_00226b2c(DAT_00434290,(int)param_1,0,param_2);
  if (param_5 != 0) {
    psVar4 = *(short **)(DAT_00434290 + 4);
    do {
      do {
        psVar3 = psVar4;
        if (psVar3 == (short *)0x0) goto LAB_00250894;
        psVar4 = *(short **)(psVar3 + 6);
      } while ((char)psVar3[2] != '1');
      temp_v0 = *psVar3;
      if (temp_v0 == *psVar2) {
        psVar3 = *(short **)(psVar3 + 0x16);
      }
    } while ((temp_v0 != *psVar2 || psVar3 != param_3) || (psVar2[1] < 0));
    psVar2[1] = -1;
  }
LAB_00250894:
  *(unsigned char *)(psVar2 + 2) = 0x31;
  *(short **)(psVar2 + 0x16) = param_3;
  *(unsigned int *)(psVar2 + 0x26) = param_6;
  if (param_4 != 0) {
    psVar2[0x14] = 1;
    psVar2[0x15] = 0;
  }
  psVar2[0x12] = param_7;
  return;
}
