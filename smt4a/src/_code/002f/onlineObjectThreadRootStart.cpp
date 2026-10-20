/* NON_MATCHING: romwright 0.5.0 decompilation of `onlineObjectThreadRootStart` (_code @ 0x2f4ba8, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00110334(...);
int FUN_002e9e60(...);
int FUN_002f8b88(...);

extern int DAT_005949b8; /* 0x5949b8 */

/* Supplied declaration required: FUN_00110334. */
/* Supplied declaration required: FUN_002e9e60. */
/* Supplied declaration required: FUN_002f8b88. */


unsigned int onlineObjectThreadRootStart(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  if (param_2 == 0) {
    param_2 = DAT_005949b8;
  }
  *(int *)(param_1 + 0x18) = param_2;
  if (**(int **)(param_1 + 0xc) != 0) {
    FUN_002e9e60("D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Platform/Core/ObjectThreadRoot.cpp"
                 ,0x170,0xe000000e,0);
    return 0;
  }
  *(unsigned char *)(param_1 + 0x1d) = 0;
  *(unsigned char *)(param_1 + 0x1c) = 1;
  FUN_00110334(param_1);
  while (*(char *)(param_1 + 0x1d) == '\0') {
    FUN_002f8b88(1);
  }
  return 1;
}

} /* extern "C" */
