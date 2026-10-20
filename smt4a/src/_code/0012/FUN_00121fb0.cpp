/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121fb0` (_code @ 0x121fb0, 0x6a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012201a(int, int *, int);
int asdOperatorDeleteArray(int);
int FUN_002f4c9c(int);
int FUN_002f4cd6(int, int, unsigned int);
int FUN_0030fe20(int, unsigned int);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

/* Supplied declaration required: FUN_0012201a. */
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: FUN_002f4c9c. */
/* Supplied declaration required: FUN_002f4cd6. */
/* Supplied declaration required: FUN_0030fe20. */
extern int wordRefCompare(int, unsigned int *);
extern int __aeabi_uidivmod(unsigned int, int);


void FUN_00121fb0(int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3 [2];
  int iStack_24;
  unsigned int uStack_20;
  int iStack_1c;
  unsigned int temp_v4;
  
  temp_v3[0] = *(unsigned int *)(param_1 + 0xc);
  iStack_24 = param_1;
  uStack_20 = param_2;
  iStack_1c = param_3;
  temp_v4 = param_4;
  temp_v0 = wordRefCompare(param_1 + 0x18,temp_v3);
  temp_v0 = temp_v0 / 2;
  if (temp_v0 != 0) {
    temp_v1 = __aeabi_uidivmod(param_2,temp_v0);
    param_2 = temp_v0 * (temp_v1 + 1);
  }
  if (param_2 < 10) {
    param_2 = 10;
  }
  temp_v2 = *(unsigned int *)(param_1 + 0xc);
  temp_v0 = param_1;
  FUN_002f4c9c(param_1);
  FUN_0030fe20(param_1,param_2);
  if (param_3 != 0) {
    FUN_002f4cd6(param_1,param_3,temp_v4);
  }
  FUN_0012201a(param_1,&temp_v2,temp_v0);
  asdOperatorDeleteArray(temp_v2);
  return;
}

} /* extern "C" */
