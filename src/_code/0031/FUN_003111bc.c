/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003111bc` (_code @ 0x3111bc, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
/* Supplied declaration required: FUN_002a89e4. */
extern int FUN_002a8a08(void);


unsigned int FUN_003111bc(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *param_1;
  if (temp_v1 != 0) {
    if (*(int *)(temp_v1 + 0x670) >= 1) {
      temp_v0 = FUN_002a8a08();
      if (*(char *)(*(int *)(temp_v1 + 0x670) + temp_v0 + 0x9107) < '\0') {
        return 1;
      }
      temp_v0 = FUN_002a8a08();
      temp_v1 = FUN_002a89e4((int)*(char *)(*(int *)(temp_v1 + 0x670) + temp_v0 + 0x9107));
    }
    else {
      if (*(int *)(temp_v1 + 0x674) < 0) {
        return 1;
      }
      if ((short)*(unsigned int *)(temp_v1 + *(int *)(temp_v1 + 0x674) * 8 + 0x738) < 0) {
        return 1;
      }
      temp_v1 = FUN_002a89e4();
    }
    if (temp_v1 != 0) {
      FUN_0028df54(*(unsigned short *)(temp_v1 + 0x46));
    }
  }
  return 1;
}
