/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010c804` (_code @ 0x10c804, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int vectorCopyHeader(unsigned int, unsigned char [12]);
int FUN_002ee4d2(int);
int FUN_002f6740(...);

/* stack frame of param_5: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_5_stack;

extern unsigned char LAB_0010c8c1; /* 0x10c8c1 */

extern unsigned int FUN_002e7908(unsigned int, unsigned int *);
/* Supplied declaration required: vectorCopyHeader. */
/* Supplied declaration required: FUN_002ee4d2. */
/* Supplied declaration required: FUN_002f6740. */


void FUN_0010c804(unsigned int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int param_5)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1 [2];
  int temp_v2;
  unsigned char temp_v3 [12];
  unsigned int uStack_24;
  int iStack_20;
  int iStack_1c;
  unsigned int *temp_v4;
  
  temp_v2 = 0x10001;
  uStack_24 = param_1;
  iStack_20 = param_2;
  iStack_1c = param_3;
  temp_v4 = param_4;
  temp_v0 = FUN_002e7908(param_1,(unsigned int *)&temp_v2);
  if (param_3 != 0) {
    *(int *)(param_2 + 0x94) = param_3;
    *(unsigned int *)(param_2 + 0x98) = *temp_v4;
    temp_v1[0] = param_2;
    FUN_002f6740(temp_v3,*(unsigned int *)(param_2 + 0x90),&LAB_0010c8c1,temp_v1,param_5);
    vectorCopyHeader(temp_v0,temp_v3);
  }
  else {
    FUN_002f6740(temp_v3,*(unsigned int *)(param_2 + 0x90),0,temp_v4,param_5);
    vectorCopyHeader(temp_v0,temp_v3);
    FUN_002ee4d2(param_2);
  }
  return;
}

} /* extern "C" */
