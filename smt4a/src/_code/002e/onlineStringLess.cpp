/* NON_MATCHING: romwright 0.5.0 decompilation of `onlineStringLess` (_code @ 0x2e9854, 0x4a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineStringDestroy(int *);

extern unsigned char LAB_002e98a0; /* 0x2e98a0 */

extern unsigned int wstrcmpU16(void);
extern int onlineStringConstruct(unsigned int *, unsigned char *);
/* Supplied declaration required: onlineStringDestroy. */


unsigned int onlineStringLess(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

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
      temp_v0 = wstrcmpU16();
      return temp_v0 >> 0x1f;
    }
    param_2 = onlineStringConstruct((unsigned int *)&uStack_18,&LAB_002e98a0);
  }
  else {
    param_1 = onlineStringConstruct((unsigned int *)&uStack_18,&LAB_002e98a0);
  }
  temp_v0 = onlineStringLess(param_1,param_2, /* unrecovered */ 0, /* unrecovered */ 0);
  onlineStringDestroy(&uStack_18);
  return temp_v0;
}

} /* extern "C" */
