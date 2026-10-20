/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fb670` (_code @ 0x4fb670, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004102d8(short *, int, int, unsigned int);

extern short *DAT_005712f0; /* 0x5712f0 */

/* Supplied declaration required: FUN_004102d8. */


void FUN_004fb670(short param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  short *psVar1;
  short *psVar2;
  short *psVar3;
  
  psVar2 = DAT_005712f0;
  FUN_004102d8(DAT_005712f0,(int)param_1,0,param_2);
  psVar3 = *(short **)(DAT_005712f0 + 4);
  do {
    psVar1 = psVar3;
    if (psVar1 == (short *)0x0) {
      *(unsigned int *)(psVar2 + 0x14) = param_3;
      *(unsigned char *)(psVar2 + 2) = 0x3f;
      return;
    }
    psVar3 = *(short **)(psVar1 + 6);
  } while ((((char)psVar1[2] != '?') || (*psVar1 != *psVar2)) || (psVar2[1] < 0));
  psVar2[1] = -1;
  *(unsigned int *)(psVar2 + 0x14) = param_3;
  *(unsigned char *)(psVar2 + 2) = 0x3f;
  return;
}

} /* extern "C" */
