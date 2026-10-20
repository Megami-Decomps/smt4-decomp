/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fd394` (_code @ 0x2fd394, 0x7e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineSockAddrCopy(unsigned int);
int FUN_0030f06c(...);

/* stack frame of param_3: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

/* Supplied declaration required: onlineSockAddrCopy. */
extern int wordRefsEqual_0030f05c(int *, unsigned int *);
/* Supplied declaration required: FUN_0030f06c. */


unsigned int FUN_002fd394(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5 [2];
  int iStack_20;
  unsigned int uStack_1c;
  unsigned int temp_v6;
  
  temp_v4 = 0;
  temp_v0 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  temp_v1 = *(int *)(param_1 + 0x14);
  iStack_20 = param_1;
  uStack_1c = param_2;
  temp_v6 = param_3;
  while (temp_v2 = temp_v0, temp_v2 != 0) {
    temp_v0 = FUN_0030f06c(param_1 + 0x1d,temp_v2 + 0x10,param_2);
    if (temp_v0 != 0) {
      temp_v0 = *(int *)(temp_v2 + 0xc);
    }
    else {
      temp_v0 = *(int *)(temp_v2 + 8);
      temp_v1 = temp_v2;
    }
  }
  temp_v5[0] = *(unsigned int *)(param_1 + 0x14);
  temp_v3 = temp_v1;
  temp_v0 = wordRefsEqual_0030f05c(&temp_v3,temp_v5);
  if ((temp_v0 != 0) ||
     (temp_v1 = FUN_0030f06c(param_1 + 0x1d,param_2,temp_v3 + 0x10), temp_v0 = temp_v3, temp_v1 != 0)) {
    temp_v0 = *(int *)(param_1 + 0x14);
  }
  if (temp_v0 != *(int *)(param_1 + 0x14)) {
    *(unsigned int *)(temp_v0 + 0x50) = *(unsigned int *)(param_1 + 0x20);
    onlineSockAddrCopy(temp_v6);
    temp_v4 = 1;
  }
  return temp_v4;
}

} /* extern "C" */
