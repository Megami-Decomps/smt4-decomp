/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4cd6` (_code @ 0x2f4cd6, 0x56 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00121fb0(int, unsigned int, int);
int wordRefCompare(...);
int rt_memcpy(unsigned int, unsigned int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: FUN_00121fb0. */
/* Supplied declaration required: FUN_002f4cd6. */
/* Supplied declaration required: wordRefCompare. */
/* Supplied declaration required: rt_memcpy. */


void FUN_002f4cd6(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  
  if (param_3 != 0) {
    temp_v2 = *(unsigned int *)(param_1 + 0x14);
    temp_v0 = wordRefCompare(param_1 + 0x18,&temp_v2);
    piVar3 = (int *)(param_1 + 0x14);
    if (param_3 <= temp_v0) {
      rt_memcpy(*(unsigned int *)(param_1 + 0x14),param_2,param_3);
      *piVar3 = *piVar3 + param_3;
      return;
    }
    temp_v2 = *(unsigned int *)(param_1 + 0xc);
    temp_v1 = wordRefCompare(piVar3,&temp_v2);
    FUN_00121fb0(param_1,temp_v1 + param_3,0);
    FUN_002f4cd6(param_1,param_2,param_3);
  }
  return;
}

} /* extern "C" */
