/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011bbb6` (_code @ 0x11bbb6, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002f4ab0. */
/* Supplied declaration required: FUN_00311544. */
extern int FUN_0031155e(int *);


void FUN_0011bbb6(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int uStack_18;
  
  if ((char)param_1[1] == '\0') {
    *(unsigned char *)(param_1 + 1) = 1;
    uStack_18 = param_4;
    temp_v0 = FUN_0031155e(param_1 + 0x10);
    for (temp_v1 = 0; temp_v1 < temp_v0; temp_v1 = temp_v1 + 1) {
      *(unsigned short *)((int)&uStack_18 + temp_v1 * 2) = *(unsigned short *)(param_1[0x10] + temp_v1 * 0xc);
    }
    for (temp_v1 = 0; temp_v1 < temp_v0; temp_v1 = temp_v1 + 1) {
      (**(romwright_code **)(*param_1 + 0x14))(param_1,*(unsigned short *)((int)&uStack_18 + temp_v1 * 2));
    }
    FUN_00311544(param_1 + 0x2a);
    if (*(char *)(param_1[0x46] + 0x1c) != '\0') {
      FUN_002f4ab0(param_1[0x46],0xffffffff);
    }
    temp_v0 = 0;
    do {
      temp_v1 = param_1[temp_v0 + 0x28];
      if ((temp_v1 != 0) && (*(char *)(temp_v1 + 0x1c) != '\0')) {
        FUN_002f4ab0(temp_v1,0xffffffff);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 2);
  }
  return;
}
