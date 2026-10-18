/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c8778` (_code @ 0x2c8778, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_0057f28c; /* 0x57f28c */

/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */
/* Supplied declaration required: FUN_003d2150. */


void FUN_002c8778(unsigned short param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = DAT_0057f28c;
  *(unsigned short *)(DAT_0057f28c + 0xcca) = param_1;
  *(unsigned int *)(temp_v0 + 0x934) = 0;
  FUN_00184758(temp_v0 + 0x34,1,0);
  FUN_00184c00(temp_v0 + 0x34,8,0);
  if (temp_v0 != 0) {
    FUN_00184758(temp_v0 + 0x5ac,7,0);
    FUN_00184c00(temp_v0 + 0x5ac,0xb,0);
    FUN_00184758(temp_v0 + 0x638,8,0);
    FUN_00184c00(temp_v0 + 0x638,0xb,0);
    FUN_001846d0(temp_v0 + 0x6c4,6);
    FUN_001846d0(temp_v0 + 0x750,7);
    FUN_001846d0(temp_v0 + 0x7dc,8);
    *(unsigned short *)(temp_v0 + 0x816) = 2;
    FUN_001846d0(temp_v0 + 0x868,10);
    *(unsigned int *)(temp_v0 + 0xd48) = 0;
    *(unsigned int *)(temp_v0 + 0xd4c) = 0;
  }
  temp_v0 = DAT_0057f28c;
  temp_v1 = *(unsigned int *)(DAT_0057f28c + 4);
  *(unsigned int *)(DAT_0057f28c + 4) = 0x11;
  *(unsigned int *)(temp_v0 + 8) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  FUN_001681cc(0x1a);
  FUN_003d2150(0x10000ca);
  return;
}
