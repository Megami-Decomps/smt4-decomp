/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00462998` (_code @ 0x462998, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameEnableFloatSettings(int);
int FUN_00463230(void);

/* Supplied declaration required: gameEnableFloatSettings. */
/* Supplied declaration required: FUN_00463230. */


void FUN_00462998(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_00463230();
  *(unsigned char *)(param_1 + 0x5d) = 0;
  *(unsigned int *)(param_1 + 0x60) = 0x3f800000;
  *(unsigned char *)(param_1 + 0x5e) = 0x40;
  *(unsigned int *)(param_1 + 100) = 0;
  *(unsigned int *)(param_1 + 0x68) = 0;
  *(unsigned int *)(param_1 + 0x6c) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x88) = 0x3f800000;
  *(unsigned char *)(param_1 + 0x91) = 0x40;
  *(unsigned char *)(param_1 + 0x92) = 0;
  *(unsigned char *)(param_1 + 0x94) = 0;
  *(unsigned char *)(param_1 + 0x95) = 0;
  *(unsigned char *)(param_1 + 0x93) = 0x7f;
  gameEnableFloatSettings(param_1 + 0x78);
  *(unsigned char *)(param_1 + 0x5c) = 0;
  *(unsigned int *)(param_1 + 0x9c) = 0;
  *(unsigned char *)(param_1 + 0x5f) = 0xff;
  *(unsigned char *)(param_1 + 0xa0) = 0;
  *(unsigned char *)(param_1 + 0xa2) = 0;
  *(unsigned char *)(param_1 + 0xa3) = 0;
  *(unsigned char *)(param_1 + 0xa1) = 1;
  return;
}

} /* extern "C" */
