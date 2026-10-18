/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002adc20` (_code @ 0x2adc20, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fd4; /* 0x588fd4 */

extern unsigned int FUN_00192748(unsigned int);
extern unsigned int FUN_00192798(void);
extern unsigned int FUN_001a6f60(int, unsigned int);


unsigned int FUN_002adc20(unsigned int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = DAT_00588fd4;
  if (DAT_00588fd4 != 0) {
    if (*(int *)(DAT_00588fd4 + 0x20cc) == 0) {
      return 0;
    }
    temp_v1 = *(int *)(DAT_00588fd4 + 0x20bc);
    if (temp_v1 != 0) {
      param_2 = *(int *)(DAT_00588fd4 + 0x20b8);
    }
    if (temp_v1 == 0 || param_2 == 0) {
      return 0;
    }
    if (*(int *)(DAT_00588fd4 + 0x20c0) == 0) {
      temp_v2 = FUN_001a6f60(temp_v1,0);
      temp_v3 = FUN_00192798();
      *(unsigned int *)(temp_v0 + 0x20c0) = temp_v3;
      temp_v2 = FUN_00192748(temp_v2);
      *(unsigned int *)(temp_v0 + 0x20c4) = temp_v2;
    }
  }
  return 1;
}
