/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f575c` (_code @ 0x3f575c, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *DAT_0044e918; /* 0x44e918 */
extern unsigned int *DAT_0044e91c; /* 0x44e91c */


unsigned int FUN_003f575c(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)&DAT_0044e918;
  if (DAT_0044e918 != (romwright_code *)0x0) {
    puVar2 = DAT_0044e91c;
  }
  if (!(DAT_0044e918 != (romwright_code *)0x0 && puVar2 != (unsigned int *)0x0)) {
    temp_v0 = 0;
  }
  else {
    puVar2 = (unsigned int *)(*DAT_0044e918)(0x1c);
    temp_v0 = 0;
    if (puVar2 != (unsigned int *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = param_2;
      puVar2[6] = param_3;
      *param_1 = (unsigned int)puVar2;
      temp_v0 = 1;
    }
  }
  return temp_v0;
}

} /* extern "C" */
