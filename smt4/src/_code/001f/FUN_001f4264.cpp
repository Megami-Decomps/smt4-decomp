/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f4264` (_code @ 0x1f4264, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00257e74(void);

extern int g_eventTex; /* 0x43ded0 */

extern float *FUN_0018f654(int);
/* Supplied declaration required: FUN_00257e74. */
extern int FUN_002580b4(void);


unsigned int FUN_001f4264(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  float *pfVar2;
  unsigned char temp_v1;
  
  temp_v0 = FUN_002580b4();
  if (temp_v0 != 0) {
    FUN_00257e74();
    pfVar2 = (float *)FUN_0018f654(temp_v0);
    temp_v0 = g_eventTex;
    temp_v1 = 0;
    if (*pfVar2 == 0.0f) {
      temp_v1 = pfVar2[1] == 0.0f;
    }
    if (!temp_v1) {
      *(float *)(g_eventTex + 0x60) = *pfVar2 * 30.0f;
      *(float *)(temp_v0 + 100) = pfVar2[1] * 30.0f;
    }
  }
  return 0;
}

} /* extern "C" */
