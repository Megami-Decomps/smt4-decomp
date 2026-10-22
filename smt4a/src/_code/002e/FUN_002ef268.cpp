/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ef268` (_code @ 0x2ef268, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00108548(int *);
int FUN_00134f44(int, int, int **);
int _ZN9Obj55b28cC1EPv(unsigned char [12], int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int FUN_002eaba4(int, int *);
int pairCopyIfNotNull(int, int);
int FUN_002efb9e(int, unsigned int, int, int);
int FUN_002efbd8(int *);

typedef int romwright_code(...);
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
} param_2_stack;

extern unsigned char DAT_005949d8; /* 0x5949d8 */

/* Supplied declaration required: FUN_00108548. */
/* Supplied declaration required: FUN_00134f44. */
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: FUN_002eaba4. */
extern int FUN_002eb5f4(void);
/* Supplied declaration required: pairCopyIfNotNull. */
/* Supplied declaration required: FUN_002efb9e. */
/* Supplied declaration required: FUN_002efbd8. */


void FUN_002ef268(int *param_1,int param_2)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned long long temp_v3;
  unsigned char temp_v4 [12];
  int *temp_v5;
  int temp_v6;
  
  param_1[0x30] = param_2;
  temp_v0 = FUN_002eb5f4();
  _ZN9Obj55b28cC1EPv(temp_v4,temp_v0 + 0x394);
  temp_v0 = FUN_002eb5f4();
  temp_v6 = param_1[0x1e];
  temp_v1 = *(int *)(temp_v0 + 0x38c);
  temp_v5 = param_1;
  if (temp_v1 != *(int *)(temp_v0 + 0x390)) {
    *(int *)(temp_v0 + 0x38c) = temp_v1 + 8;
    pairCopyIfNotNull(temp_v0 + 0x388,temp_v1);
  }
  else {
    FUN_00134f44(temp_v0 + 0x388,temp_v1,&temp_v5);
  }
  _ZN9Obj55b28cD1Ev(temp_v4);
  temp_v3 = (**(romwright_code **)(*param_1 + 0x2c))(param_1);
  temp_v2 = (unsigned int)((unsigned long long)temp_v3 >> 0x20);
  if (((int)temp_v3 != 0) ||
     (temp_v3 = (**(romwright_code **)(*param_1 + 0x30))(param_1),
     temp_v2 = (unsigned int)((unsigned long long)temp_v3 >> 0x20), (int)temp_v3 != 0)) {
    FUN_002efb9e((*(int *)((unsigned char *)&DAT_005949d8 + 0x4)) + 0x160,temp_v2,0,0x100);
    if ((param_2 != 2) && (param_2 != 3)) {
      FUN_00108548(param_1);
    }
    (**(romwright_code **)(*param_1 + 0x58))(param_1,4);
    FUN_002efbd8(param_1);
    piVar2 = (int *)param_1[0x1c];
    if (piVar2 != (int *)0x0) {
      (**(romwright_code **)(*piVar2 + 0xc))(piVar2,param_1,param_2);
    }
    (**(romwright_code **)(*param_1 + 0x50))(param_1);
    FUN_002eaba4(param_1[1],param_1);
  }
  else if (((char)param_1[0x2f] == '\x01') || ((char)param_1[0x2f] == '\x03')) {
    (**(romwright_code **)(*param_1 + 0x58))(param_1,0);
  }
  return;
}

} /* extern "C" */
