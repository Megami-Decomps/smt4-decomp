/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f8e58` (_code @ 0x2f8e58, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030f490(int *, int *, int *, int *);
int FUN_0030f90c(unsigned char [8], int, unsigned int [2]);
int FUN_0030facc(int, int);

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
} param_2_stack;

/* Supplied declaration required: FUN_0030f490. */
/* Supplied declaration required: FUN_0030f90c. */
/* Supplied declaration required: FUN_0030facc. */


void FUN_002f8e58(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0 [2];
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [8];
  int iStack_18;
  int temp_v5;
  
  temp_v2 = *(unsigned int *)(param_1 + 0x138);
  temp_v1 = *(unsigned int *)(param_1 + 0x130);
  iStack_18 = param_1;
  temp_v5 = param_2;
  FUN_0030f490(&temp_v3,&temp_v1,&temp_v2,&temp_v5);
  temp_v0[0] = temp_v3;
  FUN_0030f90c(temp_v4,param_1 + 300,temp_v0);
  FUN_0030facc(param_1,temp_v5);
  return;
}

} /* extern "C" */
