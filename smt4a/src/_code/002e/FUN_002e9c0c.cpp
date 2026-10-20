/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9c0c` (_code @ 0x2e9c0c, 0x4e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9aa8(...);
int FUN_002e9e1e(...);
int FUN_002e9e60(...);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_002e9aa8. */
/* Supplied declaration required: FUN_002e9e1e. */
/* Supplied declaration required: FUN_002e9e60. */


unsigned int FUN_002e9c0c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*(char *)(param_1 + 0x10) != '\x01') {
    if (*(char *)(param_1 + 0x10) != '\0') {
      FUN_002e9aa8(param_1,0);
      *(unsigned int *)(param_1 + 0x58) = 0;
      *(unsigned int *)(param_1 + 0x5c) = 0;
      FUN_002e9e1e(param_1 + 0x14);
      if (*(int **)(param_1 + 0x50) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(param_1 + 0x50) + 4))();
        *(unsigned int *)(param_1 + 0x50) = 0;
      }
      *(unsigned int *)(param_1 + 0x48) = 0;
      *(unsigned int *)(param_1 + 0x4c) = 0;
    }
    return 1;
  }
  FUN_002e9e60("D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/CallContext.cpp",
               0xdb,0xe000000e,0);
  return 0;
}

} /* extern "C" */
