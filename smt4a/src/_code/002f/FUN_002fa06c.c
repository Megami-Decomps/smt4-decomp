/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fa06c` (_code @ 0x2fa06c, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

unsigned int FUN_002fa06c(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  if (((param_1 == 0) || (temp_v0 = *(int *)(param_1 + 0x1c), temp_v0 == 0)) ||
     (((temp_v1 = *(int *)(temp_v0 + 4), temp_v1 != 0x2a &&
       (((temp_v1 != 0x45 && (temp_v1 != 0x49)) && (temp_v1 != 0x5b)))) &&
      (((temp_v1 != 0x67 && (temp_v1 != 0x71)) && (temp_v1 != 0x29a)))))) {
    return 0xfffffffe;
  }
  if (*(int *)(temp_v0 + 8) != 0) {
    (**(romwright_code **)(param_1 + 0x24))(*(unsigned int *)(param_1 + 0x28));
  }
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0x44) != 0) {
    (**(romwright_code **)(param_1 + 0x24))(*(unsigned int *)(param_1 + 0x28));
  }
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0x40) != 0) {
    (**(romwright_code **)(param_1 + 0x24))(*(unsigned int *)(param_1 + 0x28));
  }
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0x38) != 0) {
    (**(romwright_code **)(param_1 + 0x24))(*(unsigned int *)(param_1 + 0x28));
  }
  (**(romwright_code **)(param_1 + 0x24))(*(unsigned int *)(param_1 + 0x28),*(unsigned int *)(param_1 + 0x1c));
  *(unsigned int *)(param_1 + 0x1c) = 0;
  if (temp_v1 != 0x71) {
    return 0;
  }
  return 0xfffffffd;
}
