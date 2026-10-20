/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00311158` (_code @ 0x311158, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);
int FUN_002a8740(...);

/* Supplied declaration required: FUN_0028dcb0. */
/* Supplied declaration required: FUN_002a8740. */
extern int FUN_002a8764(void);


unsigned int FUN_00311158(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *param_1;
  if (temp_v1 != 0) {
    if (*(int *)(temp_v1 + 0x670) >= 1) {
      temp_v0 = FUN_002a8764();
      if (*(char *)(*(int *)(temp_v1 + 0x670) + temp_v0 + 0x9107) < '\0') {
        return 1;
      }
      temp_v0 = FUN_002a8764();
      temp_v1 = FUN_002a8740((int)*(char *)(*(int *)(temp_v1 + 0x670) + temp_v0 + 0x9107));
    }
    else {
      if (*(int *)(temp_v1 + 0x674) < 0) {
        return 1;
      }
      if ((short)*(unsigned int *)(temp_v1 + *(int *)(temp_v1 + 0x674) * 8 + 0x738) < 0) {
        return 1;
      }
      temp_v1 = FUN_002a8740();
    }
    if (temp_v1 != 0) {
      FUN_0028dcb0(*(unsigned short *)(temp_v1 + 0x46));
    }
  }
  return 1;
}

} /* extern "C" */
