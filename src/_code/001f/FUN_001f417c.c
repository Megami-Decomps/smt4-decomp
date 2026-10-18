/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f417c` (_code @ 0x1f417c, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043ded0; /* 0x43ded0 */

extern float *FUN_0018f554(int);
/* Supplied declaration required: FUN_002580a8. */
extern int FUN_002582e8(void);


unsigned int FUN_001f417c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  float *pfVar2;
  unsigned char temp_v1;
  
  temp_v0 = FUN_002582e8();
  if (temp_v0 != 0) {
    FUN_002580a8();
    pfVar2 = (float *)FUN_0018f554(temp_v0);
    temp_v0 = DAT_0043ded0;
    temp_v1 = 0;
    if (*pfVar2 == 0.0f) {
      temp_v1 = pfVar2[1] == 0.0f;
    }
    if (!temp_v1) {
      *(float *)(DAT_0043ded0 + 0x60) = *pfVar2 * 30.0f;
      *(float *)(temp_v0 + 100) = pfVar2[1] * 30.0f;
    }
  }
  return 0;
}
