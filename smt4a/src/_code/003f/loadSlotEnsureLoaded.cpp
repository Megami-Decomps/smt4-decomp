/* NON_MATCHING: romwright 0.5.0 decompilation of `loadSlotEnsureLoaded` (_code @ 0x3f86f8, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013c174(unsigned int, int, int);

extern unsigned int uRam005e2288; /* 0x5e2288 */

/* Supplied declaration required: FUN_0013c174. */


unsigned int loadSlotEnsureLoaded(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (param_1 >= 0x50) {
    return 0;
  }
  temp_v0 = param_1 * 0x10;
  if (*(int *)(temp_v0 + 0x5e2218) == 0) {
    if (*(char *)(temp_v0 + 0x5e2220) != '\0') {
      return 0;
    }
    temp_v1 = *(unsigned int *)(temp_v0 + 0x5e2214);
    if (param_1 != 7) {
      FUN_0013c174(temp_v1,temp_v0 + 0x5e221c,0);
      *(unsigned int *)(temp_v0 + 0x5e2218) = temp_v1;
    }
    else {
      FUN_0013c174(temp_v1,0x5e228c,1);
      uRam005e2288 = temp_v1;
    }
  }
  return 1;
}

} /* extern "C" */
