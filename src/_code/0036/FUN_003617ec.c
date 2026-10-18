/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003617ec` (_code @ 0x3617ec, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;


unsigned int FUN_003617ec(int param_1,int param_2,int param_3)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (*(unsigned int *)(param_1 + 0x10) != 0) {
    if (*(unsigned int *)(param_1 + 0x10) < 3) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = 0xffffffff;
    }
    return temp_v0;
  }
  temp_v0 = ((unsigned int)*(unsigned short *)(param_1 + 0x20) * 2 + 5) & 0xfffffffc;
  temp_v1 = (((unsigned int)*(unsigned short *)(param_1 + 0x22) * 0xa6 + 3) & 0xfffffffc) + temp_v0;
  if (param_2 != 0) {
    temp_v1 = temp_v1 + 0x44;
  }
  if (param_3 != 0) {
    temp_v1 = temp_v1 + 0xa46c;
  }
  if ((*(unsigned int *)(param_1 + 0x1c) & 1) != 0) {
    temp_v0 = temp_v0 + 0x44;
  }
  if ((*(unsigned int *)(param_1 + 0x1c) & 2) != 0) {
    temp_v0 = temp_v0 + 0xa46c;
  }
  if (temp_v0 <= temp_v1) {
    temp_v0 = temp_v1;
  }
  return (temp_v0 + 0xfff) & 0xfffff000;
}
