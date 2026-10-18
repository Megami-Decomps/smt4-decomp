/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00238ca8` (_code @ 0x238ca8, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;


void FUN_00238ca8(int *param_1)

{
  int temp_v0;
  unsigned char temp_v1 [8];
  
  (**(romwright_code **)(*param_1 + 8))(param_1,param_1[1],10,8,temp_v1);
  temp_v0 = (**(romwright_code **)(*param_1 + 0x30))(param_1,param_1 + 4,0x18c,param_1[1],1,0x14);
  if (-1 < temp_v0) {
    (**(romwright_code **)(*param_1 + 0x34))(param_1,param_1 + 4,0x18c,temp_v1,param_1[1],1,0x12);
  }
  return;
}
