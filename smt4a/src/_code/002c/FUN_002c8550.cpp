/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c8550` (_code @ 0x2c8550, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0021af2c(void);

extern unsigned char DAT_00588fd0; /* 0x588fd0 */

/* Supplied declaration required: FUN_0021af2c. */


void FUN_002c8550(int param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  
  temp_v1 = (*(int *)((unsigned char *)&DAT_00588fd0 + 0x4));
  temp_v0 = *(char *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x2017);
  *(char *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x2017) = (char)param_1;
  if (temp_v0 != '\t') {
    if (temp_v0 != '\b') {
      return;
    }
    if (param_1 == 8) {
      return;
    }
  }
  else if (param_1 == 9) {
    return;
  }
  *(unsigned int *)(temp_v1 + 0x1374) = 0;
  FUN_0021af2c();
  *(unsigned char *)(temp_v1 + 0x2014) = 0;
  return;
}

} /* extern "C" */
