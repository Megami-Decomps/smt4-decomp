/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001211e8` (_code @ 0x1211e8, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp10; /* 0x10: local_10 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_002e74c4. */
/* Supplied declaration required: FUN_003100ae. */


void FUN_001211e8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = param_1;
  temp_v1 = param_4;
  FUN_003100ae(param_1,*(unsigned int *)(param_1 + 0x10),param_2);
  temp_v1 = romwright_piece_3_1((((unsigned int)(temp_v1) >> 8) & 0xffffffU),(char)temp_v0);
  FUN_002e74c4(param_1,&temp_v1,1,0xffffffff);
  return;
}
