/* NON_MATCHING: retail invokes SVC 0x24 directly; the required __svc construct is disallowed. */
#include "romwright_types.h"

extern "C" {

int FUN_002e3140(void);
int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002e3140. */


unsigned int FUN_0035d83c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_1 + 0x44);
  if (temp_v0 != 0) {
    software_interrupt(0x24);
    if ((int)temp_v0 < 0) {
      FUN_002e3140();
    }
    if ((temp_v0 & 0x3ff) == 0x3fe) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
