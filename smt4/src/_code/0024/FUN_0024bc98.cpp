/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024bc98` (_code @ 0x24bc98, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_sprintf(unsigned int, int);

/* Supplied declaration required: libc_sprintf. */


void FUN_0024bc98(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (param_2 == 0) {
    libc_sprintf(param_1,0x24bd34);
    return;
  }
  if (param_2 == 1) {
    libc_sprintf(param_1,0x24bd44);
    return;
  }
  if (param_2 != 2) {
    if (param_2 != 3) {
      if (param_2 == 4) {
        libc_sprintf(param_1,0x24bd5c);
        return;
      }
      if (param_2 == 5) {
        libc_sprintf(param_1,0x24bd68);
        return;
      }
      if (param_2 == 6) {
        libc_sprintf(param_1,0x24bd7c);
        return;
      }
      if (param_2 == 7) {
        libc_sprintf(param_1,0x24bd98);
        return;
      }
      if (param_2 != 8) {
        return;
      }
    }
    libc_sprintf(param_1,0x24bd1c);
    return;
  }
  libc_sprintf(param_1,0x24bd98);
  return;
}

} /* extern "C" */
