/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea00c` (_code @ 0x2ea00c, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(...);
int FUN_002e6e34(int *, int);
int _ZN9Obj55b28cD1Ev(int *);
int _ZN9Obj55859c12freeResourceEv(unsigned int *);
int FUN_002e9e1e(int *);
int FUN_002e9f00(unsigned int *, int);
int sharedRefInitEmpty(unsigned int *);

typedef int romwright_code(...);
extern unsigned char DAT_005585a4; /* 0x5585a4 */

/* Supplied declaration required: asdOperatorDeleteArray. */
extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: _ZN9Obj55859c12freeResourceEv. */
/* Supplied declaration required: FUN_002e9e1e. */
/* Supplied declaration required: FUN_002e9f00. */
/* Supplied declaration required: sharedRefInitEmpty. */


void FUN_002ea00c(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int *piVar3;
  int *piVar4;
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  *param_1 = (unsigned int)&DAT_005585a4;
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  temp_v0 = FUN_002e6e26();
  if (temp_v0 != 0) {
    temp_v0 = FUN_002e6e26();
    FUN_002e6e34(&uStack_20,temp_v0 + 0x58);
    if (*(char *)(param_1 + 4) == '\x01') {
      FUN_002e9f00(param_1,4);
    }
    if (param_1[0x11] != 0) {
      _ZN9Obj55859c12freeResourceEv(param_1);
    }
    _ZN9Obj55b28cD1Ev(&uStack_20);
  }
  if ((int *)param_1[0x14] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x14] + 4))();
    param_1[0x14] = 0;
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  for (temp_v0 = param_1[0xb]; temp_v0 != param_1[0xc]; temp_v0 = temp_v0 + 4) {
  }
  asdOperatorDeleteArray();
  piVar4 = (int *)(param_1 + 5);
  if (param_1[9] != 0) {
    FUN_002e9e1e(piVar4);
    puVar2 = (unsigned int *)param_1[9];
    *puVar2 = param_1[6];
    param_1[6] = (unsigned int)puVar2;
    while (piVar3 = (int *)*piVar4, piVar3 != (int *)0x0) {
      *piVar4 = *piVar3;
      asdOperatorDeleteArray(piVar3[2]);
      asdOperatorDeleteArray(piVar3);
    }
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  sharedRefInitEmpty(param_1);
  return;
}

} /* extern "C" */
