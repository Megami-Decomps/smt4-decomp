/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036f22c` (_code @ 0x36f22c, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f3b0; /* 0x57f3b0 */

extern int FUN_00163e40(int);
extern int FUN_0031be60(int);


unsigned int FUN_0036f22c(void)

{
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = DAT_0057f3b0;
  if (DAT_0057f3b0 == 0) {
    temp_v1 = 0;
  }
  else {
    temp_v3 = 0;
    do {
      temp_v4 = *(int *)(temp_v0 + temp_v3 * 4 + 0x4c);
      if (((temp_v4 != 0) && (temp_v2 = FUN_00163e40(temp_v4), temp_v2 != 0)) &&
         (temp_v4 = FUN_0031be60(temp_v4), temp_v4 == 0)) {
        return 0;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x10);
    temp_v1 = 1;
  }
  return temp_v1;
}
