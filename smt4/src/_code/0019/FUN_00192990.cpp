/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00192990` (_code @ 0x192990, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrPopFloat(int);

/* Supplied declaration required: scrPopFloat. */
extern int scrPopInt(int);


unsigned int FUN_00192990(int param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  float in_s0;
  
  switch(*(unsigned char *)(*(int *)(param_1 + 0x1c) + param_1 + 0x1f)) {
  case 0:
  case 2:
    temp_v0 = scrPopInt(param_1);
    if (temp_v0 == 0) {
      temp_v1 = 1;
      break;
    }
    temp_v1 = 0;
    break;
  case 1:
  case 3:
    scrPopFloat(param_1);
    if (in_s0 != 0.0f) {
      temp_v1 = 0;
      break;
    }
    temp_v1 = 1;
    break;
  default:
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    return 1;
  }
  *(unsigned char *)(*(int *)(param_1 + 0x1c) + param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v1;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return 1;
}

} /* extern "C" */
