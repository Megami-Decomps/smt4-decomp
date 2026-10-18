/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011778e` (_code @ 0x11778e, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_002f9dd4. */


void FUN_0011778e(int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = romwright_piece_3_1((int)((unsigned int)param_4 >> 8),*(unsigned char *)(param_2 + 0x26));
  temp_v0 = temp_v1;
  FUN_002f9dd4(param_1,&temp_v0);
  if (param_1 != (int *)0x0) {
    (**(romwright_code **)(*param_1 + 0x10))();
  }
  return;
}
