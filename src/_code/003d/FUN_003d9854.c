/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d9854` (_code @ 0x3d9854, 0xe8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_0033a06c. */
/* Supplied declaration required: FUN_0033a250. */


void FUN_003d9854(int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  char temp_v2;
  char temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v0 = *(char *)(param_3 + 4);
  temp_v1 = *(char *)(param_3 + 5);
  temp_v2 = *(char *)(param_3 + 6);
  temp_v3 = *(char *)(param_3 + 7);
  temp_v5 = *(int *)(param_3 + 0xc);
  param_3 = (unsigned int)*(unsigned short *)(param_3 + 8) + param_3;
  *(unsigned int *)(param_2 + 0x1ea4) = 0;
  *(unsigned int *)(param_2 + 0x1ea8) = 0;
  *(unsigned int *)(param_2 + 0x1eac) = 0;
  *(unsigned int *)(param_2 + 0x1eb0) = 0;
  *(unsigned int *)(param_2 + 0x1eb4) = 0;
  *(unsigned int *)(param_2 + 0x1eb8) = 0;
  *(unsigned int *)(param_2 + 0x1ebc) = 0;
  if ((int)temp_v3 + (((short)(temp_v0 - 0x30) * 1000 + temp_v1 * 100 + temp_v2 * 10) - 0x14d0) == 0x44c) {
    FUN_002bcf58((unsigned int *)(param_2 + 0x1ea4),param_3,0x118);
    param_3 = param_3 + 0x118;
  }
  temp_v4 = (temp_v5 - 0x118U) / 0x18;
  if (*(unsigned int *)(param_1 + 4) < temp_v4) {
    temp_v4 = *(unsigned int *)(param_1 + 4);
  }
  FUN_002bcf58(*(unsigned int *)(param_2 + 0x1fbc),param_3,temp_v4 * 0x18);
  FUN_0033a250(param_2);
  FUN_0033a06c(param_2);
  return;
}
