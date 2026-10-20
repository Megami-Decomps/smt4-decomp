/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b1d8` (_code @ 0x10b1d8, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f44ec(...);

/* stack frame of param_2: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

/* Supplied declaration required: FUN_002f44ec. */
extern int FUN_002f44fc(int *, unsigned int *);
extern int FUN_002f450c(int *, unsigned int *);


unsigned int FUN_0010b1d8(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7 [2];
  int iStack_1c;
  int uStack_18;
  
  temp_v0 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  temp_v3 = *(int *)(param_1 + 0x14);
  iStack_1c = param_1;
  uStack_18 = param_2;
  while (temp_v2 = temp_v0, temp_v2 != 0) {
    temp_v0 = FUN_002f44ec(param_1 + 0x1d,temp_v2 + 0x10,&uStack_18);
    if (temp_v0 != 0) {
      temp_v0 = *(int *)(temp_v2 + 0xc);
    }
    else {
      temp_v0 = *(int *)(temp_v2 + 8);
      temp_v3 = temp_v2;
    }
  }
  temp_v7[0] = *(unsigned int *)(param_1 + 0x14);
  temp_v5 = temp_v3;
  temp_v0 = FUN_002f44fc(&temp_v5,temp_v7);
  if ((temp_v0 != 0) ||
     (temp_v0 = FUN_002f44ec(param_1 + 0x1d,&uStack_18,temp_v5 + 0x10), temp_v4 = temp_v5,
     temp_v0 != 0)) {
    temp_v4 = *(int *)(param_1 + 0x14);
  }
  temp_v6 = *(unsigned int *)(param_1 + 0x14);
  temp_v0 = FUN_002f450c(&temp_v4,(unsigned int *)&temp_v6);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned int *)(temp_v4 + 0x14);
  }
  return temp_v1;
}

} /* extern "C" */
