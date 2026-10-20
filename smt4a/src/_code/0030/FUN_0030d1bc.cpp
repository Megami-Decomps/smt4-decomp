/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030d1bc` (_code @ 0x30d1bc, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030c6e4(int, int);
int vectorDestroyRangeStride32(int *, int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_0030c6e4. */
/* Supplied declaration required: vectorDestroyRangeStride32. */


void FUN_0030d1bc(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = *param_1;
  temp_v1 = param_1[1];
  temp_v2 = temp_v1;
  temp_v3 = temp_v0;
  if (temp_v0 != temp_v1) {
    for (; temp_v2 != temp_v1; temp_v2 = temp_v2 + 0x20) {
      FUN_0030c6e4(temp_v3,temp_v2);
      temp_v3 = temp_v3 + 0x20;
    }
    vectorDestroyRangeStride32(param_1,temp_v3,param_1[1]);
    param_1[1] = param_1[1] - ((temp_v1 - temp_v0) & 0xffffffe0U);
  }
  return;
}

} /* extern "C" */
