/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a1594` (_code @ 0x3a1594, 0xe8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp1E; /* 0x1e: local_1e */
    unsigned short sp20; /* 0x20: local_20 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: FUN_0023088c. */
/* Supplied declaration required: FUN_0026e8a0. */
/* Supplied declaration required: FUN_00295ea8. */
/* Supplied declaration required: FUN_0029c0fc. */
extern int FUN_002ae64c(short);
extern int FUN_003a6598(short);


void FUN_003a1594(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v4 = param_4;
  FUN_00295ea8(*(unsigned int *)(param_1 + 0x15d20));
  FUN_0029c0fc(0x1f,*(unsigned int *)(param_1 + 0x15d20));
  temp_v2 = 0;
  if (*(short *)(param_1 + 0x15d1c) != 0) {
    do {
      temp_v1 = param_1 + temp_v2 * 6;
      temp_v0 = *(short *)(temp_v1 + 0x9d1e);
      temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 0x9d20);
      if (temp_v0 == 0) {
        return;
      }
      temp_v1 = FUN_002ae64c(temp_v0);
      if (temp_v1 != 10) {
        temp_v4 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v4 + 2)),temp_v0) & 0xfc00ffff;
        FUN_0023088c(&temp_v4,temp_v3,0);
      }
      else {
        temp_v1 = FUN_003a6598(temp_v0);
        FUN_0026e8a0(temp_v1 * temp_v3);
        temp_v4 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v4 + 2)),temp_v0) & 0xfc00ffff;
        FUN_0023088c(&temp_v4,-temp_v3,0);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x15d1c));
  }
  return;
}
