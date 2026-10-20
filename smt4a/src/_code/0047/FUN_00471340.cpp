/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00471340` (_code @ 0x471340, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(void);
int FUN_002e3494(void);

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_002e3494. */


void FUN_00471340(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  
  temp_v1 = 0;
  piVar3 = (int *)(param_1 + 0x450);
  if (0 < *(int *)(param_1 + 0x448)) {
    do {
      temp_v2 = temp_v1 * 0x10 + 4;
      if (*(int *)(*(int *)(param_1 + 0x450) + temp_v2) != 0) {
        asdMemFree();
        *(unsigned int *)(*piVar3 + temp_v2) = 0;
      }
      if (*(int *)(*(int *)(param_1 + 0x450) + temp_v1 * 0x10) != 0) {
        asdMemFree();
        *(unsigned int *)(*piVar3 + temp_v1 * 0x10) = 0;
      }
      temp_v2 = temp_v1 * 0x10;
      temp_v0 = temp_v1 * 0x10;
      temp_v1 = temp_v1 + 1;
      *(unsigned char *)(*(int *)(param_1 + 0x450) + temp_v2 + 0xc) = 0;
      *(unsigned char *)(*piVar3 + temp_v0 + 0xd) = 0;
    } while (temp_v1 < *(int *)(param_1 + 0x448));
  }
  if (*(int *)(param_1 + 0x450) != 0) {
    FUN_002e3494();
    *piVar3 = 0;
  }
  *(unsigned int *)(param_1 + 0x448) = 0;
  return;
}

} /* extern "C" */
