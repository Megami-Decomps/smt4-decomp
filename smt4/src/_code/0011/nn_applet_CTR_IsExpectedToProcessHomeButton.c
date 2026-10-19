/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_IsExpectedToProcessHomeButton` (_code @ 0x11014c, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0011d2b0(void);
extern int FUN_002c12d0(void);


unsigned char nn_applet_CTR_IsExpectedToProcessHomeButton(void)

{
  unsigned char temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_0011d2b0();
  if ((temp_v1 != 0) || (temp_v1 = FUN_002c12d0(), temp_v0 = 0, temp_v1 != 0)) {
    temp_v0 = 1;
  }
  return temp_v0;
}
