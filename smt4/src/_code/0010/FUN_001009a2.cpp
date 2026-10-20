/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001009a2` (_code @ 0x1009a2, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int *FUN_002c6a50(void);


unsigned int FUN_001009a2(unsigned char *param_1,unsigned int param_2,unsigned int param_3)

{
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  
  piVar1 = (int *)FUN_002c6a50();
  temp_v1 = *piVar1;
  if (*(char *)(temp_v1 + 0x101) == '\x01') {
    temp_v0 = (*(romwright_code *)(temp_v1 + *(int *)(temp_v1 + 0x107) + 0x107))(param_1,param_2,param_3);
    return temp_v0;
  }
  if ((param_2 < 0x100) && (*(char *)(temp_v1 + param_2) != '\0')) {
    *param_1 = (char)param_2;
    return 1;
  }
  return 0xffffffff;
}

} /* extern "C" */
