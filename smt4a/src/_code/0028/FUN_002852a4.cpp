/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002852a4` (_code @ 0x2852a4, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_saveLoadThread; /* 0x57f6c8 */

extern int FUN_0035d83c(void);


unsigned int FUN_002852a4(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if ((*(int *)((unsigned char *)&g_saveLoadThread + 0x8)) != 0) {
    temp_v0 = FUN_0035d83c();
    if (((temp_v0 == 0) && (*(char *)((*(int *)((unsigned char *)&g_saveLoadThread + 0x8)) + 0x54) != '\0')) &&
       (*(int *)((*(int *)((unsigned char *)&g_saveLoadThread + 0x8)) + 0xc) == 2)) {
      temp_v1 = 1;
    }
    else {
      temp_v1 = 0;
    }
  }
  return temp_v1;
}

} /* extern "C" */
