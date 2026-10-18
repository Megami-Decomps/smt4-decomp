/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a49e4` (_code @ 0x2a49e4, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int DAT_0057f574; /* 0x57f574 */

extern int FUN_001654d8(int);
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_002a1f60. */
/* Supplied declaration required: FUN_002e13dc. */


void FUN_002a49e4(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_s0; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  float in_s0;
  
  temp_v0 = DAT_0057f574;
  *(unsigned char *)(DAT_0057f574 + 0x31) = 0;
  if (param_1 != 0) {
    *(unsigned char *)(temp_v0 + 0x31) = 1;
    FUN_002a1f60(*(unsigned int *)(temp_v0 + 0x328),3,0xffffffff,0,3,param_1,param_2);
    FUN_002e13dc(*(unsigned int *)(temp_v0 + 0x328));
    if ((int)in_s0 >= 0x43a68000) {
      *(unsigned char *)(temp_v0 + 0x32) = 1;
      *(int *)(temp_v0 + 0x14) = (int)in_s0;
    }
    else {
      *(unsigned char *)(temp_v0 + 0x32) = 0;
    }
    FUN_00184758(temp_v0 + 0x16c,2,0);
    temp_v1 = FUN_001654d8(temp_v0 + 0x16c);
    *(int *)(temp_v0 + 0x18) = temp_v1;
    *(int *)(temp_v0 + 0x1c) = temp_v1 + *(int *)(temp_v0 + 0x14) + 0x2a;
    if (*(int *)(temp_v0 + 8) == 3) {
      *(unsigned int *)(temp_v0 + 8) = 2;
    }
    *(unsigned int *)(temp_v0 + 0x10) = 0x1e;
  }
  return;
}
