/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae1ac` (_code @ 0x3ae1ac, 0x160 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00340c7c(int, int);

extern int DAT_005f15fc; /* 0x5f15fc */
extern int DAT_005f1600; /* 0x5f1600 */

/* Supplied declaration required: FUN_00340c7c. */


void FUN_003ae1ac(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  if (temp_v0 == 0) {
    return;
  }
  if (*(char *)(temp_v0 + 0x40) != '\0') {
    return;
  }
  if (DAT_005f15fc != 0x27) {
    if (DAT_005f15fc != 0x20) {
      if ((DAT_005f15fc == 0x1c || DAT_005f15fc == 0x1d) ||
         (DAT_005f15fc == 0x1e || DAT_005f15fc == 0x1f)) {
        *(unsigned int *)(*(int *)(*(int *)(temp_v0 + 0xd0) + 0x14) + 0x20) = 0x99000000;
        FUN_00340c7c(0x100,0x30000);
        *(unsigned char *)(temp_v0 + 0x40) = 1;
        return;
      }
    }
    else if (DAT_005f1600 == 1) {
      *(unsigned int *)(*(int *)(*(int *)(temp_v0 + 0xd0) + 0x14) + 0x20) = 0xaa000000;
      FUN_00340c7c(0x100,0x30000);
      *(unsigned char *)(temp_v0 + 0x40) = 1;
      return;
    }
  }
  else if ((DAT_005f1600 == 8 || DAT_005f1600 == 9) ||
          ((DAT_005f1600 == 10 || DAT_005f1600 == 0xb) || DAT_005f1600 == 6)) {
    *(unsigned int *)(*(int *)(*(int *)(temp_v0 + 0xd0) + 0x14) + 0x20) = 0xaa000000;
    FUN_00340c7c(0x100,0x30000);
    *(unsigned char *)(temp_v0 + 0x40) = 1;
    return;
  }
  *(unsigned int *)(*(int *)(*(int *)(temp_v0 + 0xd0) + 0x14) + 0x20) = 0x66000000;
  FUN_00340c7c(0x100,0x30000);
  *(unsigned char *)(temp_v0 + 0x40) = 1;
  return;
}

} /* extern "C" */
