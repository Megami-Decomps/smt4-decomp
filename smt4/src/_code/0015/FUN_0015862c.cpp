/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015862c` (_code @ 0x15862c, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

/* WARNING: Removing unreachable block (ram,0x00158694) */

unsigned int FUN_0015862c(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (*(char *)(param_1 + param_3 * 0xc + 0x138) == '\0') {
    temp_v0 = 0;
  }
  else {
    temp_v2 = 0;
    do {
      if (param_2 == 0) break;
      if ((((param_2 & 1) != 0) && (temp_v2 < 0x10)) &&
         (temp_v1 = *(int *)(param_1 + temp_v2 * 4 + 0x8c), temp_v1 != 0)) {
        (*(romwright_code *)0x37d6fc)(temp_v1,param_3);
      }
      temp_v2 = temp_v2 + 1;
      param_2 = param_2 >> 1;
    } while (temp_v2 < 0x10);
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
