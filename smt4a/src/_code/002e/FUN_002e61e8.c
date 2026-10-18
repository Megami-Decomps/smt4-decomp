/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e61e8` (_code @ 0x2e61e8, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_002e6490. */
/* Supplied declaration required: FUN_002e6cc0. */
extern int FUN_00512850(unsigned int);


long long FUN_002e61e8(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v3 = *(unsigned int *)(param_1 + 0x14);
  temp_v0 = *(unsigned int *)(param_1 + 0x10);
  temp_v2 = *(unsigned int *)(param_1 + 0xc);
  if ((temp_v2 & 3) != 0) {
    FUN_002e6cc0(param_1);
    temp_v1 = FUN_00512850(temp_v3);
    if (-1 < temp_v1) {
      if ((int)(temp_v2 << 0x14) < 0) {
        FUN_002e6490(temp_v0);
      }
      FUN_002e6354(param_1,0x48);
      *(unsigned int *)(param_1 + 0x4c) = *(unsigned int *)(param_1 + 0x4c) & 0xfffffffe;
      return (unsigned long long)temp_v0 << 0x20;
    }
  }
  return romwright_piece_4_4(temp_v0,0xffffffff);
}
