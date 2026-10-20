/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00131844` (_code @ 0x131844, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int lessU16(...);

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern int wordRefsEqual_00308556(int *, unsigned int *);
/* Supplied declaration required: lessU16. */


void FUN_00131844(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5 [2];
  int *piStack_20;
  int iStack_1c;
  unsigned int temp_v6;
  
  temp_v4 = param_2 + 0x19;
  temp_v0 = *(int *)(*(int *)(param_2 + 0x10) + 4);
  temp_v2 = *(int *)(param_2 + 0x10);
  piStack_20 = param_1;
  iStack_1c = param_2;
  temp_v6 = param_3;
  while (temp_v1 = temp_v0, temp_v1 != 0) {
    temp_v0 = lessU16(temp_v4,temp_v1 + 0x10,temp_v6);
    if (temp_v0 != 0) {
      temp_v0 = *(int *)(temp_v1 + 0xc);
    }
    else {
      temp_v0 = *(int *)(temp_v1 + 8);
      temp_v2 = temp_v1;
    }
  }
  temp_v5[0] = *(unsigned int *)(param_2 + 0x10);
  temp_v3 = temp_v2;
  temp_v0 = wordRefsEqual_00308556(&temp_v3,temp_v5);
  if ((temp_v0 != 0) || (temp_v0 = lessU16(temp_v4,temp_v6,temp_v3 + 0x10), temp_v0 != 0)) {
    temp_v3 = *(int *)(param_2 + 0x10);
  }
  *param_1 = temp_v3;
  return;
}

} /* extern "C" */
