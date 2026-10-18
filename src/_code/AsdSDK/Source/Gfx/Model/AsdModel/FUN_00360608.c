/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00360608` (_code @ 0x360608, 0xa0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00471ba8; /* 0x471ba8 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002bce48. */
extern int FUN_002c153c(int *, unsigned int, unsigned int, unsigned int);
extern int FUN_002c1570(unsigned int);
extern unsigned int FUN_002c3290(unsigned int);
extern int FUN_00360ae8(void);


unsigned int FUN_00360608(int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_00471ba8 != '\0') {
    return 1;
  }
  temp_v0 = FUN_002c1570(0);
  if (temp_v0 < 0) {
    FUN_002bce48();
  }
  temp_v1 = FUN_002c3290(param_2);
  temp_v0 = FUN_002c153c(param_1,param_2,temp_v1,1);
  if (temp_v0 < 0) {
    if (temp_v0 == -0x2fbfe7cc) {
      return 0;
    }
    if (temp_v0 < 0) {
      FUN_002bce48();
    }
  }
  temp_v0 = FUN_00360ae8();
  if (temp_v0 < 0) {
    software_interrupt(0x23);
    if (*param_1 < 0) {
      FUN_002bce48();
    }
    return 0;
  }
  DAT_00471ba8 = 1;
  return 1;
}
