/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00271010` (_code @ 0x271010, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00271064(void);

extern int g_deferredMapModels; /* 0x447e58 */

/* Supplied declaration required: FUN_00271064. */


void FUN_00271010(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = g_deferredMapModels;
  *(unsigned char *)(g_deferredMapModels + 0xe3c) = 0;
  if (param_1 == 0) {
    temp_v1 = 0;
    do {
      temp_v0 = temp_v1 + 1;
      temp_v1 = g_deferredMapModels + temp_v1 * 0x38;
      if (*(char *)(temp_v1 + 0xc) != '\0') {
        *(unsigned char *)(temp_v1 + 0xe) = 0;
      }
      temp_v1 = temp_v0;
    } while (temp_v0 < 0x40);
    return;
  }
  if (*(char *)(temp_v1 + 0xe0c) != '\0') {
    FUN_00271064();
    return;
  }
  return;
}

} /* extern "C" */
