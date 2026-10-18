/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_IsExpectedToProcessHomeButton` (_code @ 0x147350, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0015a3c0(void);
extern int FUN_0015a430(void);


unsigned int nn_applet_CTR_IsExpectedToProcessHomeButton(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0015a430();
  if ((temp_v0 != 0) || (temp_v0 = FUN_0015a3c0(), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}
