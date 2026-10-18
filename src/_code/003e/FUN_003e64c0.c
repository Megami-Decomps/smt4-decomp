/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e64c0` (_code @ 0x3e64c0, 0x6 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bd808. */
/* Supplied declaration required: FUN_002c5df8. */
extern int func_0x003e8614(int);
extern unsigned int func_0x003e8620(int, int);
extern int func_0x003e862c(int, int);


unsigned int FUN_003e64c0(int *param_1,unsigned char *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v4 = 0;
  temp_v0 = *(unsigned char *)*param_1;
  if (temp_v0 >= 2) {
    temp_v0 = 3;
  }
  *param_2 = temp_v0;
  *(unsigned int *)(param_2 + 4) = *(unsigned int *)(*param_1 + 0x14);
  *(unsigned int *)(param_2 + 8) = *(unsigned int *)(*param_1 + 4);
  param_2[1] = *(char *)(*param_1 + 1) == '\x01';
  *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(*param_1 + 8);
  *(unsigned int *)(param_2 + 0x10) = *(unsigned int *)(*param_1 + 0xc);
  for (; temp_v4 < *(int *)(*param_1 + 0x14); temp_v4 = temp_v4 + 1) {
    if (temp_v4 < 2) {
      temp_v1 = func_0x003e862c(*param_1,temp_v4);
      if (*(int *)(temp_v1 + 0xc) != 0) {
        temp_v2 = func_0x003e8614(temp_v1);
        FUN_002c5df8(param_2 + temp_v4 * 0x30 + 0x18,temp_v2,0x26);
        FUN_002bd808(param_2 + temp_v4 * 0x30 + 0x3e,temp_v2 + 0x26);
      }
      temp_v3 = func_0x003e8620(temp_v1,param_1[1]);
      *(unsigned int *)(param_2 + temp_v4 * 0x30 + 0x14) = temp_v3;
    }
  }
  return 1;
}
