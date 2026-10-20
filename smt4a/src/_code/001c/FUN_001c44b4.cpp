/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c44b4` (_code @ 0x1c44b4, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nngxCheckVramBank(...);

/* Supplied declaration required: nngxCheckVramBank. */


unsigned int FUN_001c44b4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (param_1 == 0x20000) {
    temp_v1 = nngxCheckVramBank();
    if (temp_v1 == 0) {
      temp_v0 = 0x1f000000;
    }
    else {
      temp_v0 = 0x1f180000;
    }
    return temp_v0;
  }
  if (param_1 != 0x30000) {
    temp_v0 = 0;
  }
  else {
    temp_v1 = nngxCheckVramBank(0x30000);
    if (temp_v1 == 0) {
      temp_v0 = 0x1f300000;
    }
    else {
      temp_v0 = 0x1f380000;
    }
  }
  return temp_v0;
}

} /* extern "C" */
