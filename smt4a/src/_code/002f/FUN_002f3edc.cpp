/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f3edc` (_code @ 0x2f3edc, 0x66 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int lessU32(...);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: lessU32. */


void FUN_002f3edc(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = *(int *)(param_2 + 0x10);
  temp_v1 = *(int *)(*(int *)(param_2 + 0x10) + 4);
  while (temp_v1 != 0) {
    temp_v0 = lessU32(param_2 + 0x19,temp_v1 + 0x10,param_3);
    if (temp_v0 != 0) {
      temp_v1 = *(int *)(temp_v1 + 0xc);
    }
    else {
      temp_v2 = temp_v1;
      temp_v1 = *(int *)(temp_v1 + 8);
    }
  }
  temp_v1 = *(int *)(*(int *)(param_2 + 0x10) + 4);
  temp_v0 = *(int *)(param_2 + 0x10);
  while (temp_v3 = temp_v1, temp_v3 != 0) {
    temp_v1 = lessU32(param_2 + 0x19,param_3,temp_v3 + 0x10);
    if (temp_v1 != 0) {
      temp_v1 = *(int *)(temp_v3 + 8);
      temp_v0 = temp_v3;
    }
    else {
      temp_v1 = *(int *)(temp_v3 + 0xc);
    }
  }
  *param_1 = temp_v2;
  param_1[1] = temp_v0;
  return;
}

} /* extern "C" */
