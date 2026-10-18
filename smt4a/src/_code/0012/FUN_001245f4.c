/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001245f4` (_code @ 0x1245f4, 0x6e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_001035ec(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0012d4e8. */
/* Supplied declaration required: FUN_0030ec74. */
/* Supplied declaration required: FUN_0030eca8. */
extern int *FUN_0030ecc4(void);
/* Supplied declaration required: FUN_0030ed04. */


unsigned long long
FUN_001245f4(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int temp_v1;
  int *piVar5;
  unsigned int *puStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  temp_v1 = -1;
  puStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  FUN_0030ed04(&puStack_20,*param_1,6);
  temp_v0 = FUN_001035ec(*param_2,0xffffffff);
  if (temp_v0 != -1) {
    piVar2 = (int *)FUN_0030ecc4();
    piVar5 = (int *)*piVar2;
    piVar3 = piVar5 + piVar2[1] * 2;
    for (; piVar3 != piVar5; piVar5 = piVar5 + 2) {
      if (*piVar5 == -1) {
        *piVar5 = temp_v0;
        FUN_0030ec74(piVar5 + 1,param_3);
        temp_v1 = ((int)piVar5 - *piVar2) >> 3;
        FUN_0030eca8(&puStack_20);
        return romwright_piece_4_4(puStack_20,temp_v1);
      }
    }
    FUN_0012d4e8(piVar2,piVar2[1] + 1);
    piVar5 = (int *)((*piVar2 + piVar2[1] * 8) - 8);
    *piVar5 = temp_v0;
    FUN_0030ec74(piVar5 + 1,param_3);
    temp_v1 = ((int)piVar5 - *piVar2) >> 3;
  }
  FUN_0030eca8(&puStack_20);
  return romwright_piece_4_4(puStack_20,temp_v1);
}
