/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea714` (_code @ 0x2ea714, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_flagBlock; /* 0x594958 */

extern int FUN_002e6e26(void);


int FUN_002ea714(void)

{
  int temp_v0;
  
  if ((*(signed char *)((unsigned char *)&g_flagBlock + 0x11)) != '\0') {
    temp_v0 = FUN_002e6e26();
    return temp_v0 + 0x88;
  }
  temp_v0 = FUN_002e6e26();
  return temp_v0 + 0x58;
}

} /* extern "C" */
