/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034dad0` (_code @ 0x34dad0, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_0027dc58. */
/* Supplied declaration required: FUN_0027dca0. */
extern int FUN_0027dd20(int, int);


void FUN_0034dad0(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = *(int *)(*(int *)(param_1 + 4) + 0x1e98) + (param_3 + param_2 * 0x40) * 4;
  temp_v0 = FUN_0027dd20(*(int *)(param_1 + 4),temp_v2);
  temp_v1 = *(int *)(param_1 + 4);
  FUN_0027dca0(temp_v1,(int)*(short *)(temp_v2 + 0x62));
  FUN_0027dc58(*(unsigned int *)(param_1 + 4),*(unsigned int *)(temp_v1 + temp_v0 * 4 + 0xc));
  return;
}
