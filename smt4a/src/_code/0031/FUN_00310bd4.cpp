/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310bd4` (_code @ 0x310bd4, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_0030a9b6(int, int, int);
extern int wordRefsEqual_0030aa7a(int *, unsigned int *);


unsigned long long FUN_00310bd4(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v4 = param_1 + 0x19;
  temp_v0 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  temp_v2 = *(int *)(param_1 + 0x10);
  temp_v3 = param_2;
  temp_v5 = param_4;
  while (temp_v1 = temp_v0, temp_v1 != 0) {
    temp_v0 = FUN_0030a9b6(temp_v4,temp_v1 + 0x10,param_2);
    if (temp_v0 != 0) {
      temp_v0 = *(int *)(temp_v1 + 0xc);
    }
    else {
      temp_v0 = *(int *)(temp_v1 + 8);
      temp_v2 = temp_v1;
    }
  }
  temp_v5 = *(unsigned int *)(param_1 + 0x10);
  temp_v3 = temp_v2;
  temp_v0 = wordRefsEqual_0030aa7a(&temp_v3,(unsigned int *)&temp_v5);
  if ((temp_v0 == 0) && (temp_v0 = FUN_0030a9b6(temp_v4,param_2,temp_v3 + 0x10), temp_v0 == 0)) {
    return romwright_piece_4_4(temp_v3,temp_v3);
  }
  return romwright_piece_4_4(temp_v3,*(unsigned int *)(param_1 + 0x10));
}

} /* extern "C" */
