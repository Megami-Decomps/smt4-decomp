/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121e38` (_code @ 0x121e38, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00113baa(unsigned int);
int FUN_00121c48(void);
int asdOperatorDeleteArray(void);
int _ZN9Obj5593b8D1Ev(int);
int FUN_002eb624(...);
int FUN_002ecf40(void);

typedef int romwright_code(...);
extern unsigned char DAT_0055b0ec; /* 0x55b0ec */
extern unsigned char DAT_00594a58; /* 0x594a58 */

/* Supplied declaration required: FUN_00113baa. */
extern int FUN_001145a0(int);
/* Supplied declaration required: FUN_00121c48. */
extern int FUN_00129380(int);
/* Supplied declaration required: asdOperatorDeleteArray. */
extern int vectorDestroyWords(int);
/* Supplied declaration required: _ZN9Obj5593b8D1Ev. */
extern int FUN_002eac34(unsigned int);
/* Supplied declaration required: FUN_002eb624. */
/* Supplied declaration required: FUN_002ecf40. */
extern int FUN_002ed250(int);
extern int _ZN9Obj558c00D1Ev(int);
extern int _ZN9Obj55984cD1Ev(int);


void FUN_00121e38(unsigned int *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  *param_1 = (unsigned int)&DAT_0055b0ec;
  FUN_00121c48();
  FUN_00113baa(param_1[0x34]);
  if ((int *)param_1[0x34] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x34] + 4))();
  }
  param_1[0x34] = 0;
  if ((int *)param_1[0x28] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x28] + 4))();
  }
  param_1[0x28] = 0;
  FUN_002ecf40();
  if (param_1[3] != 0) {
    (**(romwright_code **)(*(*(int * *)((unsigned char *)&DAT_00594a58 + 0x50)) + 0xc))();
    param_1[3] = 0;
  }
  if ((int *)param_1[0xc6] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0xc6] + 4))();
    param_1[0xc6] = 0;
  }
  temp_v0 = FUN_002eac34(9);
  if (*(int *)(temp_v0 + 0xa4) == param_1[200]) {
    temp_v0 = FUN_002eac34(9);
    *(unsigned int *)(temp_v0 + 0xa4) = 0;
  }
  temp_v0 = FUN_002eac34(1);
  if (*(int *)(temp_v0 + 0xa4) == param_1[200]) {
    temp_v0 = FUN_002eac34(1);
    *(unsigned int *)(temp_v0 + 0xa4) = 0;
  }
  temp_v0 = FUN_002eac34(8);
  if (*(int *)(temp_v0 + 0xa4) == param_1[200]) {
    temp_v0 = FUN_002eac34(8);
    *(unsigned int *)(temp_v0 + 0xa4) = 0;
  }
  if ((int *)param_1[199] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[199] + 4))();
  }
  if ((int *)param_1[200] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[200] + 4))();
  }
  temp_v1 = 0x394;
  temp_v0 = FUN_002eb624(param_1 + 0xe5);
  temp_v0 = temp_v0 - temp_v1;
  for (temp_v1 = *(int *)(temp_v0 + 0x388); temp_v1 != *(int *)(temp_v0 + 0x38c); temp_v1 = temp_v1 + 8) {
  }
  asdOperatorDeleteArray();
  temp_v1 = 0x358;
  temp_v0 = FUN_002eb624(temp_v0 + 0x358);
  temp_v0 = vectorDestroyWords((temp_v0 - temp_v1) + 0x34c);
  temp_v0 = _ZN9Obj558c00D1Ev(temp_v0 - 0x264);
  temp_v0 = _ZN9Obj55984cD1Ev(temp_v0 - 0x14);
  temp_v0 = FUN_001145a0(temp_v0 - 0x30);
  temp_v0 = FUN_00129380(temp_v0 - 0x50);
  temp_v0 = FUN_002ed250(temp_v0 - 0x14);
  temp_v0 = FUN_002eb624(temp_v0 - 0x30);
  _ZN9Obj5593b8D1Ev(temp_v0 - 0x10);
  return;
}

} /* extern "C" */
