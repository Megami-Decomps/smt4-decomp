/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003347e8` (_code @ 0x3347e8, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f290; /* 0x57f290 */

extern int FUN_0026140c(void);
extern int FUN_00481104(unsigned short);


unsigned int FUN_003347e8(int param_1)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = DAT_0057f290;
  if (param_1 != 0) {
    temp_v2 = 0;
    if (DAT_0057f290 != 0) {
      if (((*(short *)(DAT_0057f290 + 0x92bc) == 0) ||
          (temp_v0 = FUN_0026140c(), (*(unsigned char *)(temp_v0 + 0x36) & 2) == 0)) ||
         (temp_v1 = FUN_00481104(*(unsigned short *)(temp_v1 + 0x92bc)), temp_v1 == 0)) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = 1;
      }
    }
    return temp_v2;
  }
  return 0;
}

} /* extern "C" */
