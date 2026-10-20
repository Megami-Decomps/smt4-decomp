/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002adc20` (_code @ 0x2adc20, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fd0; /* 0x588fd0 */

extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
extern unsigned int FUN_001a6f60(int, unsigned int);


unsigned int FUN_002adc20(unsigned int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00588fd0 + 0x4));
  if ((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) != 0) {
    if (*(int *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x20cc) == 0) {
      return 0;
    }
    temp_v1 = *(int *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x20bc);
    if (temp_v1 != 0) {
      param_2 = *(int *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x20b8);
    }
    if (temp_v1 == 0 || param_2 == 0) {
      return 0;
    }
    if (*(int *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x20c0) == 0) {
      temp_v2 = FUN_001a6f60(temp_v1,0);
      temp_v3 = dataTableGetEntries();
      *(unsigned int *)(temp_v0 + 0x20c0) = temp_v3;
      temp_v2 = dataTableGetCount(temp_v2);
      *(unsigned int *)(temp_v0 + 0x20c4) = temp_v2;
    }
  }
  return 1;
}

} /* extern "C" */
