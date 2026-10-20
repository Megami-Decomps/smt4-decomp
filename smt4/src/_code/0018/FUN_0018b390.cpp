/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018b390` (_code @ 0x18b390, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00297488(int);

/* Supplied declaration required: FUN_00297488. */
extern int FUN_00297514(int);


unsigned int FUN_0018b390(int param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  int temp_v0;
  float in_s0;
  
  switch(*(unsigned char *)(*(int *)(param_1 + 0x1c) + param_1 + 0x1f)) {
  case 0:
  case 2:
    temp_v0 = FUN_00297514(param_1);
    if (temp_v0 != 0) {
      temp_v0 = *(int *)(param_1 + 0x18) + 1;
      *(int *)(param_1 + 0x18) = temp_v0;
      return 1;
    }
    break;
  case 1:
  case 3:
    FUN_00297488(param_1);
    if (in_s0 != 0.0f) {
      temp_v0 = *(int *)(param_1 + 0x18) + 1;
      *(int *)(param_1 + 0x18) = temp_v0;
      return 1;
    }
  }
  temp_v0 = *(int *)(*(int *)(param_1 + 0xb8) +
                  (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0x18) * 4 + 2) *
                  0x20 + 0x18);
  *(int *)(param_1 + 0x18) = temp_v0;
  return 1;
}

} /* extern "C" */
