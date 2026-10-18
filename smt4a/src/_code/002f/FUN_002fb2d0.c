/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb2d0` (_code @ 0x2fb2d0, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int FUN_002fb30c(unsigned int **, unsigned int *);


void FUN_002fb2d0(int param_1,int param_2,int param_3,unsigned int param_4)

{
  int *piVar1;
  int temp_v0;
  unsigned int *temp_v1;
  int temp_v2;
  unsigned int uStack_18;
  
  temp_v1 = *(unsigned int **)(param_1 + 0x14);
  uStack_18 = param_4;
  while( 1 ) {
    do {
      temp_v1 = (unsigned int *)*temp_v1;
      temp_v2 = *(unsigned int *)(param_1 + 0x14);
      temp_v0 = FUN_002fb30c(&temp_v1,(unsigned int *)&temp_v2);
      if (temp_v0 == 0) {
        return;
      }
      piVar1 = (int *)temp_v1[2];
    } while (piVar1[1] < param_2);
    if (param_3 < piVar1[1]) break;
    (**(romwright_code **)(*piVar1 + 8))(piVar1,param_4);
  }
  return;
}
