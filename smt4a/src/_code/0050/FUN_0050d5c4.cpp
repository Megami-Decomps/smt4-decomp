/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050d5c4` (_code @ 0x50d5c4, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00460a5c(int *);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_00460a5c. */


void FUN_0050d5c4(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  unsigned char temp_v3;
  unsigned char temp_v4;
  
  piVar4 = (int *)(param_1 - 0x44);
  if (*(char *)(param_1 - 0x38) == '\0') {
    return;
  }
  temp_v0 = 0;
  while (((piVar4[temp_v0 + 0x24] == 0 ||
          (temp_v2 = *(unsigned int *)(piVar4[temp_v0 + 0x24] + 0x1c), temp_v2 < param_2)) || (param_3 < temp_v2)))
  {
    do {
      temp_v0 = temp_v0 + 1;
      if (temp_v0 >= 0x10) goto LAB_0050d634;
    } while (temp_v0 >= 0x10);
  }
  (**(romwright_code **)(*piVar4 + 0xc))(piVar4);
LAB_0050d634:
  temp_v2 = 0;
  do {
    temp_v1 = piVar4[temp_v2 * 3 + 0x4d];
    temp_v4 = temp_v1 <= param_2;
    temp_v3 = param_2 == temp_v1;
    if (!temp_v4 || temp_v3) {
      temp_v4 = param_3 <= temp_v1;
      temp_v3 = temp_v1 == param_3;
    }
    if (!temp_v4 || temp_v3) {
      FUN_00460a5c(piVar4 + temp_v2 * 3 + 0x4d);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 4);
  return;
}

} /* extern "C" */
