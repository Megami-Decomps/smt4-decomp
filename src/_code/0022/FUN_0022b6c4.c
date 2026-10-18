/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022b6c4` (_code @ 0x22b6c4, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00233240. */
extern int FUN_0023360c(int);
/* Supplied declaration required: FUN_002a5ed0. */
/* Supplied declaration required: FUN_002af5c0. */


void FUN_0022b6c4(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  *(unsigned char *)(param_1 + 0x631) = 0;
  *(unsigned char *)(param_1 + 0x632) = 0;
  *(unsigned int *)(param_1 + 0xc58) = 0;
  *(unsigned int *)(param_1 + 0xc5c) = 0;
  temp_v1 = 0;
  *(unsigned int *)(param_1 + 0xcb8) = 0;
  do {
    FUN_002af5c0(param_1 + temp_v1 * 0x8c + 0x654,0);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 10);
  FUN_00233240(param_1 + 0xa8,0);
  FUN_00233240(param_1 + 0xa8,1);
  temp_v1 = FUN_0023360c(param_1);
  temp_v0 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + temp_v1 * 4 + 0x530) + 0x5a);
  temp_v1 = temp_v0 + 1;
  temp_v2 = param_1 + temp_v1;
  *(int *)(param_1 + 0xc64) = temp_v1;
  *(unsigned int *)(param_1 + 0xc60) = temp_v0 + 2;
  if (*(char *)(temp_v2 + 0xc78) == '\0') {
    FUN_002a5ed0(0x2a);
    *(unsigned char *)(temp_v2 + 0xc78) = 1;
  }
  return;
}
