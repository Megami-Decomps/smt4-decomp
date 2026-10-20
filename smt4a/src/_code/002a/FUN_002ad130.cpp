/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ad130` (_code @ 0x2ad130, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003d8f24(void);

extern int g_eventTex; /* 0x57f3b0 */

extern int FUN_00203a5c(void);
extern float *FUN_00208bfc(int);
/* Supplied declaration required: FUN_003d8f24. */


unsigned int FUN_002ad130(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  float *pfVar2;
  
  temp_v0 = FUN_00203a5c();
  if (temp_v0 != 0) {
    FUN_003d8f24();
    pfVar2 = (float *)FUN_00208bfc(temp_v0);
    temp_v0 = g_eventTex;
    *(float *)(g_eventTex + 0x90) = *pfVar2 * 30.0f;
    *(float *)(temp_v0 + 0x94) = pfVar2[1] * 30.0f;
  }
  return 0;
}

} /* extern "C" */
