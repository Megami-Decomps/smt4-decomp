/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042bb70` (_code @ 0x42bb70, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_0055839c; /* 0x55839c */

extern int FUN_001af814(void);


int FUN_0042bb70(unsigned int *param_1)

{
  int temp_v0;
  
  param_1[2] = 0;
  temp_v0 = 0;
  *param_1 = (unsigned int)"꫄BꞘBꛘB";
  do {
    if ((int *)param_1[temp_v0 + 3] != (int *)0x0) {
      (**(romwright_code **)(*(int *)param_1[temp_v0 + 3] + 0x30))();
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 5);
  param_1[0x3d] = (unsigned int)&DAT_0055839c;
  if (param_1[0x46] != 0) {
    param_1[0x46] = 0;
  }
  temp_v0 = FUN_001af814();
  *(unsigned char **)(temp_v0 - 0x3c) = &DAT_0055839c;
  if (*(int *)(temp_v0 - 0x18) != 0) {
    *(unsigned int *)(temp_v0 - 0x18) = 0;
  }
  temp_v0 = FUN_001af814();
  return temp_v0 - 0xb8;
}

} /* extern "C" */
