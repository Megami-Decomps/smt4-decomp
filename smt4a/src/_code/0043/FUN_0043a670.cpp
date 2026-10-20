/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043a670` (_code @ 0x43a670, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysFatalBreak(void);
int software_interrupt(int);

extern signed char DAT_005c0b48; /* 0x5c0b48 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern int FUN_0016f864(unsigned int);
extern int FUN_0016f988(int *, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: sysFatalBreak. */
extern unsigned int wstrlen(unsigned int);
extern int FUN_0043ab50(void);


unsigned int FUN_0043a670(int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_005c0b48 != '\0') {
    return 1;
  }
  temp_v0 = FUN_0016f864(0);
  if (temp_v0 < 0) {
    sysFatalBreak();
  }
  temp_v1 = wstrlen(param_2);
  temp_v0 = FUN_0016f988(param_1,param_2,temp_v1,1);
  if (temp_v0 < 0) {
    if (temp_v0 == -0x2fbfe7cc) {
      return 0;
    }
    if (temp_v0 < 0) {
      sysFatalBreak();
    }
  }
  temp_v0 = FUN_0043ab50();
  if (temp_v0 < 0) {
    software_interrupt(0x23);
    if (*param_1 < 0) {
      sysFatalBreak();
    }
    return 0;
  }
  DAT_005c0b48 = 1;
  return 1;
}

} /* extern "C" */
