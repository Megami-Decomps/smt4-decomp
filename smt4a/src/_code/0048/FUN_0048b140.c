/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048b140` (_code @ 0x48b140, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00493834(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_004938b8. */


int FUN_0048b140(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  char *pcVar4;
  int temp_v2;
  int uStack_18;
  
  puVar1 = (unsigned int *)&uStack_18;
  uStack_18 = param_4;
  FUN_004938b8();
  temp_v0 = FUN_00493834((unsigned int *)&uStack_18,0);
  temp_v1 = 0;
  if (temp_v1 < (int)puVar1) {
    do {
      pcVar4 = (char *)(temp_v0 + temp_v1 * 0x18);
      temp_v2 = (int)*pcVar4;
      if (temp_v2 == -1) {
        return 0;
      }
      if ((temp_v2 == param_2) && ((unsigned char)pcVar4[1] == param_3)) {
        return temp_v0 + temp_v1 * 0x18;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < (int)puVar1);
  }
  return 0;
}
