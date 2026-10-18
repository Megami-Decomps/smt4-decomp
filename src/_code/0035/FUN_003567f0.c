/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003567f0` (_code @ 0x3567f0, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_00420b00; /* 0x420b00 */

extern int FUN_002a4528(void);


int FUN_003567f0(unsigned int *param_1)

{
  int temp_v0;
  
  param_1[2] = 0;
  temp_v0 = 0;
  *param_1 = (unsigned int)"壘5嗄5喸5";
  do {
    if ((int *)param_1[temp_v0 + 3] != (int *)0x0) {
      (**(romwright_code **)(*(int *)param_1[temp_v0 + 3] + 0x2c))();
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 5);
  param_1[0x3d] = (unsigned int)&DAT_00420b00;
  if (param_1[0x46] != 0) {
    param_1[0x46] = 0;
  }
  temp_v0 = FUN_002a4528();
  *(unsigned char **)(temp_v0 - 0x3c) = &DAT_00420b00;
  if (*(int *)(temp_v0 - 0x18) != 0) {
    *(unsigned int *)(temp_v0 - 0x18) = 0;
  }
  temp_v0 = FUN_002a4528();
  return temp_v0 - 0xb8;
}
