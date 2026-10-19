/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9854` (_code @ 0x2e9854, 0x4a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_002e98a0; /* 0x2e98a0 */

extern unsigned int FUN_002e92e4(void);
extern int FUN_002e9300(unsigned int *, unsigned char *);
/* Supplied declaration required: FUN_002e9318. */


unsigned int FUN_002e9854(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int uStack_18;
  unsigned int uStack_14;
  
  if (*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) {
    return 0;
  }
  uStack_18 = param_3;
  uStack_14 = param_4;
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_2 + 4) != 0) {
      temp_v0 = FUN_002e92e4();
      return temp_v0 >> 0x1f;
    }
    param_2 = FUN_002e9300((unsigned int *)&uStack_18,&LAB_002e98a0);
  }
  else {
    param_1 = FUN_002e9300((unsigned int *)&uStack_18,&LAB_002e98a0);
  }
  temp_v0 = FUN_002e9854(param_1,param_2, /* unrecovered */ 0, /* unrecovered */ 0);
  FUN_002e9318(&uStack_18);
  return temp_v0;
}
