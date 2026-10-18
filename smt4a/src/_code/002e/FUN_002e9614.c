/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9614` (_code @ 0x2e9614, 0x5e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_0030ad32. */
/* Supplied declaration required: FUN_003103fa. */


unsigned long long FUN_002e9614(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int uStack_10;
  
  temp_v3 = param_2;
  if (param_1 != param_2) {
    temp_v4 = *(int *)(param_1 + 0x10);
    temp_v3 = *(int *)(temp_v4 + 8);
    uStack_10 = param_4;
    FUN_003103fa(&uStack_10,param_1,&temp_v3,&temp_v4);
    temp_v2 = param_1;
    FUN_0030ad32(param_1,*(unsigned int *)(*(int *)(param_2 + 0x10) + 4),
                 *(unsigned int *)(param_1 + 0x10));
    *(int *)(*(int *)(param_1 + 0x10) + 4) = temp_v2;
    temp_v1 = *(int *)(param_1 + 0x10);
    if (temp_v2 == 0) {
      *(int *)(temp_v1 + 8) = temp_v1;
      *(int *)(*(int *)(param_1 + 0x10) + 0xc) = *(int *)(param_1 + 0x10);
    }
    else {
      do {
        temp_v0 = temp_v2;
        temp_v2 = *(int *)(temp_v0 + 8);
      } while (temp_v2 != 0);
      *(int *)(temp_v1 + 8) = temp_v0;
      temp_v2 = *(int *)(*(int *)(param_1 + 0x10) + 4);
      do {
        temp_v1 = temp_v2;
        temp_v2 = *(int *)(temp_v1 + 0xc);
      } while (temp_v2 != 0);
      *(int *)(*(int *)(param_1 + 0x10) + 0xc) = temp_v1;
    }
    *(unsigned int *)(param_1 + 0x14) = *(unsigned int *)(param_2 + 0x14);
  }
  return romwright_piece_4_4(temp_v3,param_1);
}
