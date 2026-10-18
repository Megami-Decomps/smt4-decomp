/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018b110` (_code @ 0x18b110, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_00297920. */
/* Supplied declaration required: FUN_002a0de8. */


unsigned int FUN_0018b110(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  romwright_code *pcVar2;
  int temp_v1;
  
  temp_v1 = *param_1;
  pcVar2 = *(romwright_code **)(temp_v1 + *(int *)(temp_v1 + 0xd28) * 4 + 8);
  if ((pcVar2 != (romwright_code *)0x0) && (temp_v0 = (*pcVar2)(temp_v1), temp_v0 == 2)) {
    if (*(int *)(temp_v1 + 0xd2c) != -1) {
      *(unsigned int *)(temp_v1 + 0xd24) = *(unsigned int *)(temp_v1 + 0xd28);
      *(int *)(temp_v1 + 0xd28) = *(int *)(temp_v1 + 0xd2c);
      *(unsigned int *)(temp_v1 + 0xd2c) = 0xffffffff;
    }
  }
  temp_v0 = *(int *)(temp_v1 + 0xd28);
  if ((0 < temp_v0) && (temp_v0 != 0xd && temp_v0 != 0xf)) {
    FUN_002a0de8();
    FUN_00297920(*(unsigned int *)(temp_v1 + 0xbc));
  }
  return 0;
}
