/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011fe6c` (_code @ 0x11fe6c, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055aca0; /* 0x55aca0 */
extern unsigned char DAT_0055adc0; /* 0x55adc0 */

extern int FUN_002ea0e4(unsigned int *);


void FUN_0011fe6c(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055adc0;
  *(unsigned char *)(param_1 + 1) = 0;
  temp_v0 = FUN_002ea0e4(param_1 + 2);
  *(unsigned char **)(temp_v0 - 8) = &DAT_0055aca0;
  return;
}

} /* extern "C" */
