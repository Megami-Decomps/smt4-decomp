/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d9af8` (_code @ 0x3d9af8, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0034ad94(int);

/* Supplied declaration required: FUN_0034ad94. */


unsigned int FUN_003d9af8(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  do {
    temp_v1 = param_1 + temp_v0 * 0x28;
    if ((*(int *)(temp_v1 + 0x1ac) == param_2) && (*(int *)(temp_v1 + 0x1b0) != 0)) {
      FUN_0034ad94(*(int *)(temp_v1 + 0x1b0));
      if (*(int *)(*(int *)(temp_v1 + 0x1b0) + 8) != 0) {
        return 1;
      }
      return 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x32);
  temp_v0 = 0;
  while ((temp_v1 = param_1 + temp_v0 * 0x10, *(int *)(temp_v1 + 0x964) != param_2 ||
         (*(int *)(temp_v1 + 0x968) == 0))) {
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x6d) {
      return 1;
    }
  }
  FUN_0034ad94(*(int *)(temp_v1 + 0x968));
  if (*(int *)(*(int *)(temp_v1 + 0x968) + 8) != 0) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
