/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001330e8` (_code @ 0x1330e8, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001330e8_arg1 fn_001330e8_arg1;
struct fn_001330e8_arg1 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x8];
    int field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
};

extern int FUN_001321c2(int *, unsigned int);


void FUN_001330e8(int *param_1,fn_001330e8_arg1 *param_2,int *param_3,unsigned int param_4)

{
  int temp_v0;
  int *piVar2;
  int *piVar3;
  
  while( 1 ) {
    temp_v0 = FUN_001321c2(param_3,param_4);
    piVar2 = (int *)*param_3;
    if (temp_v0 == 0) break;
    piVar3 = (int *)param_2->field_0x10;
    if (piVar2 != piVar3) {
      piVar3 = (int *)*piVar2;
      *(int **)piVar2[1] = piVar3;
      *(int *)(*piVar2 + 4) = piVar2[1];
      param_2->field_0x14 = param_2->field_0x14 - 1;
      *piVar2 = (int)param_2->field_0x4;
      param_2->field_0x4 = piVar2;
    }
    *param_3 = (int)piVar3;
  }
  *param_1 = (int)piVar2;
  return;
}
