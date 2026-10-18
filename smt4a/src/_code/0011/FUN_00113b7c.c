/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00113b7c` (_code @ 0x113b7c, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned short FUN_00113afc(int, unsigned int);


void FUN_00113b7c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned short temp_v0 [2];
  int iStack_18;
  int temp_v1;
  int uStack_10;
  int uStack_c;
  
  if (*(int *)(param_1 + 8) != 0) {
    iStack_18 = param_1;
    temp_v1 = param_2;
    uStack_10 = param_3;
    uStack_c = param_4;
    temp_v0[0] = FUN_00113afc(param_1,param_2);
    (**(romwright_code **)(**(int **)(param_1 + 8) + 0x30))
              (*(int **)(param_1 + 8),&temp_v1,&uStack_10,temp_v0,&uStack_c);
  }
  return;
}
