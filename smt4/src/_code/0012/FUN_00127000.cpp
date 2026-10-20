/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00127000` (_code @ 0x127000, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ad9e8(int **, int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_10: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_10_stack;

/* Supplied declaration required: FUN_002ad9e8. */
extern int FUN_002bb99c(unsigned int, int *);


void FUN_00127000(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8,
                 unsigned int param_9,unsigned int param_10)

{
/* irregular: 1 native warning(s); review required */
  int **ppiVar1;
  int temp_v0;
  int *temp_v1;
  int temp_v2;
  unsigned int uStack_24;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v4 = param_5;
  ppiVar1 = &temp_v1;
  temp_v2 = param_3;
  uStack_24 = param_4;
  temp_v3 = param_2;
  FUN_002ad9e8(ppiVar1,&temp_v2,param_6,param_7,param_8,param_9,param_10);
  if ((-1 < (int)ppiVar1) && (temp_v0 = FUN_002bb99c(param_1,temp_v1), temp_v0 < 0)) {
    (**(romwright_code **)(*temp_v1 + 0x30))();
  }
  return;
}

} /* extern "C" */
