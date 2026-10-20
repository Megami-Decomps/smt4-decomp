/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032cf50` (_code @ 0x32cf50, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern float *FUN_00164a9c(void);


void FUN_0032cf50(void)

{
  float *pfVar1;
  float temp_v0;
  
  pfVar1 = (float *)FUN_00164a9c();
  if (pfVar1 != (float *)0x0) {
    if (*(char *)(pfVar1 + 9) == '\0') {
      temp_v0 = *pfVar1;
      if (*pfVar1 <= pfVar1[2]) {
        temp_v0 = pfVar1[2];
      }
      *pfVar1 = temp_v0;
      return;
    }
    pfVar1[1] = 10.0f;
    *(unsigned char *)(pfVar1 + 9) = 0;
    pfVar1[2] = 0.0f;
    *pfVar1 = 0.0f;
  }
  return;
}

} /* extern "C" */
