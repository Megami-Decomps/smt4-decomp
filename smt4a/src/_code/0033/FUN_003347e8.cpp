/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003347e8` (_code @ 0x3347e8, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_unite; /* 0x57f290 */

extern int FUN_0026140c(void);
extern int flagValueIsPositive(unsigned short);


unsigned int FUN_003347e8(int param_1)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = g_unite;
  if (param_1 != 0) {
    temp_v2 = 0;
    if (g_unite != 0) {
      if (((*(short *)(g_unite + 0x92bc) == 0) ||
          (temp_v0 = FUN_0026140c(), (*(unsigned char *)(temp_v0 + 0x36) & 2) == 0)) ||
         (temp_v1 = flagValueIsPositive(*(unsigned short *)(temp_v1 + 0x92bc)), temp_v1 == 0)) {
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
