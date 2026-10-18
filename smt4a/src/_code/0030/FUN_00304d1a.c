/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00304d1a` (_code @ 0x304d1a, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_001344c4. */
/* Supplied declaration required: FUN_001345a0. */
extern int FUN_002ed28c(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_00303698. */
/* Supplied declaration required: FUN_0030d02e. */
/* Supplied declaration required: FUN_0030d03c. */
/* Supplied declaration required: FUN_0030d052. */


unsigned long long FUN_00304d1a(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v2 = param_1;
  temp_v3 = param_2;
  temp_v4 = param_3;
  temp_v5 = param_4;
  FUN_0030d052(param_2);
  temp_v0 = FUN_002ed28c(param_1,&temp_v2);
  if (temp_v0 != 0) {
    FUN_001345a0(param_2,temp_v2);
    for (temp_v1 = 0; temp_v1 < temp_v2; temp_v1 = temp_v1 + 1) {
      if (*(char *)(param_1 + 4) != '\0') {
        return romwright_piece_4_4(temp_v3,temp_v2);
      }
      temp_v3 = 0;
      temp_v4 = 0;
      temp_v5 = 0;
      FUN_00303698(param_1,&temp_v3);
      if (*(char *)(param_1 + 4) != '\0') {
        FUN_0030d052();
        FUN_0030d03c(&temp_v3);
        break;
      }
      temp_v0 = *(int *)(param_2 + 4);
      if (temp_v0 != *(int *)(param_2 + 8)) {
        *(int *)(param_2 + 4) = temp_v0 + 0xc;
        FUN_0030d02e(param_2,temp_v0);
      }
      else {
        FUN_001344c4(param_2,temp_v0,&temp_v3);
      }
      FUN_0030d03c(&temp_v3);
    }
  }
  return romwright_piece_4_4(temp_v3,temp_v2);
}
