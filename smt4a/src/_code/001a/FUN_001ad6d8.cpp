/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ad6d8` (_code @ 0x1ad6d8, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0059dbc4; /* 0x59dbc4 */


void FUN_001ad6d8(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0059dbc4;
  temp_v1 = DAT_0059dbc4 + 0x594;
  *(int *)(DAT_0059dbc4 + 0x80) = DAT_0059dbc4 + 0x88;
  *(int *)(temp_v0 + 0x84) = temp_v1;
  return;
}

} /* extern "C" */
