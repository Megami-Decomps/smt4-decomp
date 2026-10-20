/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fde5c` (_code @ 0x2fde5c, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030fb26(unsigned int *);

extern unsigned char DAT_0055b2e0; /* 0x55b2e0 */

extern int FUN_002e760a(unsigned int);
extern unsigned int FUN_002e7634(void);
/* Supplied declaration required: FUN_0030fb26. */


unsigned int * FUN_002fde5c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  *param_1 = (unsigned int)&DAT_0055b2e0;
  temp_v0 = FUN_002e760a(0x20);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_002e7634();
  }
  param_1[2] = temp_v1;
  FUN_0030fb26(param_1);
  return param_1;
}

} /* extern "C" */
