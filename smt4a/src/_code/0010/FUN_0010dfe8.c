/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010dfe8` (_code @ 0x10dfe8, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_0013266e. */
/* Supplied declaration required: FUN_002f2978. */
extern int FUN_002f7f00(int, unsigned int);
/* Supplied declaration required: FUN_002f825c. */


long long FUN_0010dfe8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int uStack_1c;
  unsigned int uStack_18;
  
  temp_v2 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  if (*(char *)(*(int *)(param_1 + 0x210) + 0x34) == '\0') {
    temp_v0 = FUN_002f825c();
    temp_v1 = FUN_002f825c(param_1 + 0xcc);
    temp_v2 = *(unsigned int *)(param_1 + 0x210);
    FUN_002f2978(param_1 + 0x88,temp_v1 + 0x20,0x10,temp_v0);
    temp_v2 = **(unsigned int **)(param_1 + 0xdc);
    FUN_0013266e(&uStack_1c,param_1 + 0xcc,&temp_v2);
  }
  temp_v1 = FUN_002f7f00(param_1 + 0x160,0);
  if ((temp_v1 != 0) && (*(char *)(*(int *)(param_1 + 0x210) + 0x34) == '\x02')) {
    *(unsigned char *)(*(int *)(param_1 + 0x210) + 0x34) = 0;
    return romwright_piece_4_4(temp_v2,1);
  }
  return (unsigned long long)temp_v2 << 0x20;
}
