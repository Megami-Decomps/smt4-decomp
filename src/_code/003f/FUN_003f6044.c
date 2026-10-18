/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f6044` (_code @ 0x3f6044, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern romwright_code *DAT_0044e960; /* 0x44e960 */
extern unsigned int *DAT_0044e964; /* 0x44e964 */


unsigned int FUN_003f6044(int *param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  
  puVar1 = (unsigned int *)&DAT_0044e960;
  if (DAT_0044e960 != (romwright_code *)0x0) {
    puVar1 = DAT_0044e964;
  }
  if (!(DAT_0044e960 != (romwright_code *)0x0 && puVar1 != (unsigned int *)0x0)) {
    temp_v0 = 0;
  }
  else {
    temp_v1 = (*DAT_0044e960)(0x28);
    temp_v0 = 0;
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 0x10) = 0;
      *(unsigned int *)(temp_v1 + 0x14) = 0;
      *(unsigned int *)(temp_v1 + 0x18) = 0;
      *(unsigned int *)(temp_v1 + 0x1c) = param_2;
      *(unsigned int *)(temp_v1 + 0x20) = param_3;
      *param_1 = temp_v1;
      temp_v0 = 1;
    }
  }
  return temp_v0;
}
