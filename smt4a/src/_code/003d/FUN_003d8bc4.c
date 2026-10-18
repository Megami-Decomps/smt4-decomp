/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d8bc4` (_code @ 0x3d8bc4, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_0057f56c; /* 0x57f56c */

/* Supplied declaration required: FUN_001846d0. */


void FUN_003d8bc4(unsigned char param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057f56c;
  *(unsigned char *)(DAT_0057f56c + 0x12) = param_1;
  *(unsigned int *)(temp_v0 + 700) = 0;
  if (*(int *)(temp_v0 + 0x14) != 6) {
    *(unsigned int *)(temp_v0 + 8) = 1;
    FUN_001846d0(temp_v0 + 0x3c);
    return;
  }
  *(unsigned int *)(temp_v0 + 8) = 5;
  FUN_001846d0(temp_v0 + 0x3c,0);
  FUN_001846d0(temp_v0 + 0x154,3);
  *(unsigned int *)(temp_v0 + 0x2c8) = *(unsigned int *)(temp_v0 + 0x2c0);
  return;
}
