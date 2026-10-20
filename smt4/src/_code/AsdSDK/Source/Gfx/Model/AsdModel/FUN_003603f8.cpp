/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003603f8` (_code @ 0x3603f8, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdFatalError(void);
int software_interrupt(int);

extern signed char DAT_00471ba8; /* 0x471ba8 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern int asdModelForwardChecked(int *, unsigned int, unsigned int, unsigned int);
extern int FUN_002c1398(unsigned int);
extern unsigned int libc_strlen(unsigned int);
/* Supplied declaration required: asdFatalError. */
extern int FUN_003608d8(void);


unsigned int FUN_003603f8(int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_00471ba8 != '\0') {
    return 1;
  }
  temp_v0 = FUN_002c1398(0);
  if (temp_v0 < 0) {
    asdFatalError();
  }
  temp_v1 = libc_strlen(param_2);
  temp_v0 = asdModelForwardChecked(param_1,param_2,temp_v1,1);
  if (temp_v0 < 0) {
    if (temp_v0 == -0x2fbfe7cc) {
      return 0;
    }
    if (temp_v0 < 0) {
      asdFatalError();
    }
  }
  temp_v0 = FUN_003608d8();
  if (temp_v0 < 0) {
    software_interrupt(0x23);
    if (*param_1 < 0) {
      asdFatalError();
    }
    return 0;
  }
  DAT_00471ba8 = 1;
  return 1;
}

} /* extern "C" */
