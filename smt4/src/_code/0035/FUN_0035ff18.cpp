/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035ff18` (_code @ 0x35ff18, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned short uRam004e8282; /* 0x4e8282 */
extern unsigned char DAT_004ead10; /* 0x4ead10 */
extern float fRam004ead14; /* 0x4ead14 */
extern float fRam004ead18; /* 0x4ead18 */

extern int FUN_002bb274(void);


void FUN_0035ff18(char *param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  float in_s0;
  float temp_v1;
  
  if (*param_1 == '\0') {
    return;
  }
  *(float *)(param_1 + 8) = in_s0;
  if (DAT_004ead10 != '\0') {
    temp_v1 = fRam004ead14 * in_s0;
    fRam004ead18 = in_s0;
    temp_v0 = FUN_002bb274();
    if (temp_v0 != 0) {
      puVar2 = *(unsigned int **)((unsigned int)uRam004e8282 * 4 + 0x4e8004);
      puVar2[1] = (unsigned int)temp_v1;
      *puVar2 = *puVar2 | 0x10000;
    }
    return;
  }
  return;
}

} /* extern "C" */
