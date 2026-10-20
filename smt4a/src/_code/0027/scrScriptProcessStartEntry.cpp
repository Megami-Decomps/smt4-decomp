/* NON_MATCHING: romwright 0.5.0 decompilation of `scrScriptProcessStartEntry` (_code @ 0x275f44, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(int, int);

/* Supplied declaration required: sysMemClear. */


unsigned int scrScriptProcessStartEntry(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  if ((-1 < param_2) && (param_2 < *(int *)(*(int *)(param_1 + 0xb0) + 8))) {
    for (temp_v1 = 0; temp_v0 = *(char *)(*(int *)(param_1 + 0xb4) + temp_v1 + param_2 * 0x20),
        *(char *)(param_1 + temp_v1) = temp_v0, temp_v0 != '\0'; temp_v1 = temp_v1 + 1) {
    }
    temp_v2 = *(unsigned int *)(*(int *)(param_1 + 0xb4) + param_2 * 0x20 + 0x18);
    *(unsigned int *)(param_1 + 0x1c) = 0;
    *(unsigned int *)(param_1 + 0x20) = 0;
    *(unsigned int *)(param_1 + 0x24) = 0;
    *(unsigned int *)(param_1 + 0x28) = 0;
    *(unsigned int *)(param_1 + 0x2c) = 0;
    *(unsigned int *)(param_1 + 0x30) = 0;
    *(unsigned int *)(param_1 + 0x34) = 0;
    *(unsigned int *)(param_1 + 0x18) = temp_v2;
    *(unsigned int *)(param_1 + 0x38) = 0;
    sysMemClear(param_1 + 0x3c,0x70);
    *(int *)(param_1 + 200) = param_2;
    *(unsigned int *)(param_1 + 0xcc) = 0;
    *(unsigned int *)(param_1 + 0xd0) = 0;
    return 1;
  }
  return 0;
}

} /* extern "C" */
