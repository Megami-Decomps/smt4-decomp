/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129072` (_code @ 0x129072, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int FUN_0030cf8c(int, unsigned int [2]);
int FUN_0030cfae(int *, int, int *);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: FUN_0030cf8c. */
extern int wordRefsDiffer_0030cf9e(unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_0030cfae. */


void FUN_00129072(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [12];
  int temp_v3;
  unsigned int temp_v4 [2];
  int iStack_14;
  int uStack_10;
  
  iStack_14 = param_1;
  uStack_10 = param_2;
  FUN_002e6e34(temp_v2,param_1 + 0x24);
  FUN_0030cfae(&temp_v1,param_1 + 0x54,&uStack_10);
  temp_v3 = temp_v1;
  temp_v1 = *(unsigned int *)(param_1 + 100);
  temp_v0 = wordRefsDiffer_0030cf9e((unsigned int *)&temp_v3,(unsigned int *)&temp_v1);
  if (temp_v0 != 0) {
    temp_v4[0] = temp_v3;
    FUN_0030cf8c(param_1 + 0x54,temp_v4);
  }
  _ZN9Obj55b28cD1Ev(temp_v2);
  return;
}

} /* extern "C" */
