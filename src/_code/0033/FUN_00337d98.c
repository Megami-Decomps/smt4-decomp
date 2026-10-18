/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00337d98` (_code @ 0x337d98, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a8a08(void);


char FUN_00337d98(void)

{
  int temp_v0;
  char temp_v1;
  
  temp_v0 = FUN_002a8a08();
  temp_v1 = -1 < *(char *)(temp_v0 + 0x9108);
  if (-1 < *(char *)(temp_v0 + 0x9109)) {
    temp_v1 = temp_v1 + '\x01';
  }
  if (-1 < *(char *)(temp_v0 + 0x910a)) {
    temp_v1 = temp_v1 + '\x01';
  }
  return temp_v1;
}
