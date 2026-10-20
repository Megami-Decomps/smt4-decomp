/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a76c4` (_code @ 0x3a76c4, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ab854(...);
int scrSetResult(int);

/* Supplied declaration required: FUN_001ab854. */
extern int FUN_001ab888(void);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_003a76c4(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *param_1;
  if (temp_v1 != 0) {
    if (*(int *)(temp_v1 + 0x9b8) >= 1) {
      temp_v0 = FUN_001ab888();
      if (*(char *)(*(int *)(temp_v1 + 0x9b8) + temp_v0 + 0x1c9f) < '\0') {
        return 1;
      }
      temp_v0 = FUN_001ab888();
      temp_v1 = FUN_001ab854((int)*(char *)(*(int *)(temp_v1 + 0x9b8) + temp_v0 + 0x1c9f));
    }
    else {
      if (*(int *)(temp_v1 + 0x9bc) < 0) {
        return 1;
      }
      if ((short)*(unsigned int *)(temp_v1 + *(int *)(temp_v1 + 0x9bc) * 8 + 0xa80) < 0) {
        return 1;
      }
      temp_v1 = FUN_001ab854();
    }
    if (temp_v1 != 0) {
      scrSetResult(*(unsigned short *)(temp_v1 + 0x62));
    }
  }
  return 1;
}

} /* extern "C" */
