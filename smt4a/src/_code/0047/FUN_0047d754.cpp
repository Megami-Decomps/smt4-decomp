/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047d754` (_code @ 0x47d754, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a0d08(unsigned int *);
int FUN_002e3140(void);
int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001a0d08. */
/* Supplied declaration required: FUN_002e3140. */


unsigned int FUN_0047d754(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*param_1 != 0) {
    temp_v0 = *param_1;
    software_interrupt(0x24);
    if ((int)temp_v0 < 0) {
      FUN_002e3140();
    }
    if ((temp_v0 & 0x3ff) == 0x3fe) {
      return 0;
    }
  }
  software_interrupt(0x24);
  if ((int)*param_1 < 0) {
    FUN_002e3140();
  }
  *(unsigned char *)(param_1 + 1) = 1;
  FUN_001a0d08(param_1);
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  return 1;
}

} /* extern "C" */
