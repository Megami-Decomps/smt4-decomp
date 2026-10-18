/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00120e68` (_code @ 0x120e68, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern int FUN_001419bc(unsigned int, int *);
/* Supplied declaration required: FUN_002b5070. */


unsigned int FUN_00120e68(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3 [2];
  int temp_v4;
  int temp_v5;
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
    temp_v0 = 0;
  }
  else {
    temp_v2 = 0;
    temp_v1 = FUN_001419bc(param_2,temp_v3);
    if (temp_v1 != 0) {
      temp_v2 = temp_v5 + temp_v3[0] + temp_v4;
    }
    FUN_002b5070(param_1 + 8,param_3,param_4,0x2c);
    *(int *)(param_1 + 0x34) = param_4 + temp_v2 * -0x2c;
    *(int *)(param_1 + 0x30) = param_4;
    temp_v0 = 1;
    *(unsigned int *)(param_1 + 0x2c) = param_3;
    *(unsigned char *)(param_1 + 0x38) = 1;
  }
  return temp_v0;
}
