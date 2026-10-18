/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea408` (_code @ 0x2ea408, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_002ea408(int param_1)

{
  char temp_v0;
  
  temp_v0 = *(char *)(param_1 + 0x10);
  if (((temp_v0 != '\x02') && (temp_v0 != '\x03')) && (temp_v0 != '\x04')) {
    return 0;
  }
  return 1;
}
