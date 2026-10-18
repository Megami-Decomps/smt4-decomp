/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eb06c` (_code @ 0x3eb06c, 0xa0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_0037b350. */


void FUN_003eb06c(int param_1,unsigned int param_2,unsigned int param_3)

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
  while (((piVar4[temp_v0 + 0x23] == 0 ||
          (temp_v2 = *(unsigned int *)(piVar4[temp_v0 + 0x23] + 0x1c), temp_v2 < param_2)) || (param_3 < temp_v2)))
  {
    do {
      temp_v0 = temp_v0 + 1;
      if (temp_v0 >= 0x10) goto LAB_003eb0dc;
    } while (temp_v0 >= 0x10);
  }
  (**(romwright_code **)(*piVar4 + 0xc))(piVar4);
LAB_003eb0dc:
  temp_v2 = 0;
  do {
    temp_v1 = piVar4[temp_v2 * 3 + 0x4c];
    temp_v4 = temp_v1 <= param_2;
    temp_v3 = param_2 == temp_v1;
    if (!temp_v4 || temp_v3) {
      temp_v4 = param_3 <= temp_v1;
      temp_v3 = temp_v1 == param_3;
    }
    if (!temp_v4 || temp_v3) {
      FUN_0037b350(piVar4 + temp_v2 * 3 + 0x4c);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 4);
  return;
}
