/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00337b64` (_code @ 0x337b64, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002a8764(void);


char FUN_00337b64(void)

{
  int temp_v0;
  char temp_v1;
  
  temp_v0 = FUN_002a8764();
  temp_v1 = -1 < *(char *)(temp_v0 + 0x9108);
  if (-1 < *(char *)(temp_v0 + 0x9109)) {
    temp_v1 = temp_v1 + '\x01';
  }
  if (-1 < *(char *)(temp_v0 + 0x910a)) {
    temp_v1 = temp_v1 + '\x01';
  }
  return temp_v1;
}

} /* extern "C" */
