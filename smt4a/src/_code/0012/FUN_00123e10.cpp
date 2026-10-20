/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123e10` (_code @ 0x123e10, 0x56 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int FUN_002e7908(int *, unsigned int *);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
} param_2_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: FUN_002e7908. */


void FUN_00123e10(int *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned char temp_v2 [12];
  int temp_v3;
  int temp_v4;
  
  FUN_002e6e34(temp_v2,param_2 + 0x105c);
  if (*(int *)(param_2 + 0x1050) < 0) {
    temp_v0 = *(int *)(param_2 + 0x1054);
    temp_v1 = *(int *)(param_2 + 0x1058);
    *param_1 = *(int *)(param_2 + 0x1050);
    param_1[1] = temp_v0;
    param_1[2] = temp_v1;
  }
  else {
    if (*(char *)(param_2 + 0x1090) != '\0') {
      puVar2 = (unsigned int *)&temp_v3;
      temp_v3 = 0x10001;
    }
    else {
      puVar2 = (unsigned int *)&temp_v4;
      temp_v4 = 0x80010001;
    }
    FUN_002e7908(param_1,puVar2);
  }
  _ZN9Obj55b28cD1Ev(temp_v2);
  return;
}

} /* extern "C" */
