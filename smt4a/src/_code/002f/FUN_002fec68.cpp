/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fec68` (_code @ 0x2fec68, 0x5a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int *FUN_002e4e86(int *, unsigned int *);
extern unsigned int *rt_malloc(void);


unsigned long long FUN_002fec68(int param_1,int param_2)

{
  int *piVar1;
  int temp_v0;
  unsigned int *puVar3;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v3 = 0;
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  temp_v4 = 0x20;
  temp_v2 = param_2;
  piVar1 = (int *)FUN_002e4e86(&temp_v2,(unsigned int *)&temp_v4);
  temp_v0 = *piVar1;
  puVar3 = (unsigned int *)rt_malloc();
  *(unsigned int **)(param_1 + 4) = puVar3;
  for (temp_v1 = temp_v2; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
    if (puVar3 != (unsigned int *)0x0) {
      *puVar3 = temp_v3;
    }
    puVar3 = puVar3 + 1;
  }
  temp_v1 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 8) = temp_v1 + temp_v2 * 4;
  *(int *)(param_1 + 0xc) = temp_v1 + temp_v0 * 4;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(int *)(param_1 + 0x1c) = param_2;
  *(unsigned int *)(param_1 + 0x18) = 0;
  return romwright_piece_4_4(temp_v2,param_1);
}

} /* extern "C" */
