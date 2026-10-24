/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129288` (_code @ 0x129288, 0x5a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001291fc(unsigned int *);
int FUN_00130a5c(int *, int *, int *, int *);
int asdOperatorDeleteArray(...);
int _ZN9Obj559608D1Ev(int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_00559054; /* 0x559054 */

/* Supplied declaration required: FUN_001291fc. */
/* Supplied declaration required: FUN_00130a5c. */
/* Supplied declaration required: asdOperatorDeleteArray. */
extern int FUN_002f5966(unsigned int *);
/* Supplied declaration required: _ZN9Obj559608D1Ev. */


void FUN_00129288(unsigned int *param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int temp_v1;
  int temp_v2;
  int uStack_10;
  
  *param_1 = (unsigned int)&DAT_00559054;
  temp_v1 = param_2;
  temp_v2 = param_3;
  uStack_10 = param_4;
  FUN_001291fc(param_1);
  piVar3 = (int *)(param_1 + 0x10);
  temp_v0 = param_1[0x14];
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned int *)(temp_v0 + 8);
    temp_v2 = temp_v0;
    FUN_00130a5c(&uStack_10,piVar3,&temp_v1,&temp_v2);
    temp_v0 = param_1[0x14];
    *(unsigned int *)(temp_v0 + 0xc) = param_1[0x11];
    param_1[0x11] = temp_v0;
    while (piVar2 = (int *)*piVar3, piVar2 != (int *)0x0) {
      *piVar3 = *piVar2;
      asdOperatorDeleteArray(piVar2[2]);
      asdOperatorDeleteArray(piVar2);
    }
  }
  temp_v0 = FUN_002f5966(param_1 + 4);
  _ZN9Obj559608D1Ev(temp_v0 - 0x10);
  return;
}

} /* extern "C" */
