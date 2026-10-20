/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b250` (_code @ 0x10b250, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00131238(int [2], int, int *);

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_00131238. */


void FUN_0010b250(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0 [2];
  int temp_v1;
  unsigned int temp_v2;
  int iStack_18;
  unsigned int temp_v3;
  unsigned int uStack_10;
  
  temp_v2 = 0;
  temp_v1 = param_2;
  iStack_18 = param_1;
  temp_v3 = param_2;
  uStack_10 = param_3;
  FUN_00131238(temp_v0,param_1 + 4,&temp_v1);
  *(unsigned int *)(temp_v0[0] + 0x14) = param_3;
  return;
}

} /* extern "C" */
