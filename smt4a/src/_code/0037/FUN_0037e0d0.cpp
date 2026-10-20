/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037e0d0` (_code @ 0x37e0d0, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026fd50(int, int, int, unsigned int);

extern unsigned char DAT_00588fd0; /* 0x588fd0 */

/* Supplied declaration required: FUN_0026fd50. */


void FUN_0037e0d0(int param_1,unsigned char param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00588fd0 + 0x4));
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x2010) = 1;
  *(unsigned char *)(temp_v0 + 0x2017) = 4;
  FUN_0026fd50(temp_v0 + 0x1390,param_1,*(unsigned short *)(param_1 + 300),param_3);
  *(unsigned char *)(temp_v0 + 0x2024) = param_2;
  *(unsigned char *)(temp_v0 + 0x20b0) = 1;
  *(unsigned char *)(temp_v0 + 0x2025) = 0;
  *(unsigned char *)(temp_v0 + 0x2032) = 1;
  return;
}

} /* extern "C" */
