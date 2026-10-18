/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ceb8` (_code @ 0x30ceb8, 0x7e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern int FUN_00307cf0(unsigned int **, unsigned int **);
extern int FUN_00307d28(unsigned int **, unsigned int **);
/* Supplied declaration required: FUN_003101ae. */
/* Supplied declaration required: FUN_003101dc. */


int FUN_0030ceb8(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *temp_v1;
  unsigned int *temp_v2;
  unsigned int *temp_v3;
  unsigned int *temp_v4;
  unsigned int *temp_v5;
  unsigned int *temp_v6;
  unsigned int *temp_v7 [3];
  
  if (param_1 != param_2) {
    temp_v5 = *(unsigned int **)(param_1 + 0x10);
    temp_v3 = (unsigned int *)*temp_v5;
    temp_v6 = *(unsigned int **)(param_2 + 0x10);
    temp_v4 = (unsigned int *)*temp_v6;
    while ((temp_v0 = FUN_00307d28(&temp_v3,&temp_v5), temp_v0 != 0 &&
           (temp_v0 = FUN_00307cf0(&temp_v4,&temp_v6), temp_v0 != 0))) {
      temp_v3[3] = temp_v4[3];
      temp_v3[4] = temp_v4[4];
      temp_v3[5] = temp_v4[5];
      temp_v3 = (unsigned int *)*temp_v3;
      temp_v4 = (unsigned int *)*temp_v4;
    }
    if (temp_v4 == temp_v6) {
      temp_v1 = temp_v5;
      temp_v2 = temp_v3;
      FUN_003101ae(temp_v7,param_1,&temp_v2,&temp_v1);
    }
    else {
      temp_v7[0] = temp_v5;
      FUN_003101dc(param_1,temp_v7);
    }
  }
  return param_1;
}
