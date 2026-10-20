/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001353a2` (_code @ 0x1353a2, 0xf2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(void);
int FUN_003075f2(int, int, int);
int FUN_00307604(...);
int FUN_0030761e(int, unsigned int, unsigned int);
int FUN_0031066a(...);

/* stack frame of param_4: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern int *wordRefMax(int *, unsigned int *);
extern int rt_malloc(void);
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_003075f2. */
/* Supplied declaration required: FUN_00307604. */
/* Supplied declaration required: FUN_0030761e. */
/* Supplied declaration required: FUN_0031066a. */
extern unsigned int bufGrowCapacity(int, int *);


void FUN_001353a2(int *param_1,int param_2,int param_3,int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int *piStack_24;
  int iStack_20;
  int temp_v8;
  int temp_v9;
  
  if (param_3 != param_4) {
    temp_v4 = param_1[1];
    temp_v3 = param_4 - param_3;
    temp_v0 = temp_v4 - *param_1;
    piStack_24 = param_1;
    iStack_20 = param_2;
    temp_v8 = param_3;
    temp_v9 = param_4;
    if ((unsigned int)(param_1[2] - *param_1) >= (unsigned int)(temp_v0 + temp_v3)) {
      param_1[1] = temp_v4 + temp_v3;
      if ((unsigned int)(param_2 + temp_v3) < temp_v4) {
        FUN_00307604(temp_v4 - temp_v3,temp_v4,temp_v4,param_1);
        FUN_0030761e(param_2,temp_v4 - temp_v3,temp_v4);
        param_3 = temp_v9;
      }
      else {
        param_3 = param_3 + (temp_v4 - param_2);
        FUN_0031066a(param_3,param_4,temp_v4,param_1);
        FUN_00307604(param_2,temp_v4,param_2 + temp_v3,param_1);
      }
      FUN_003075f2(temp_v8,param_3,param_2);
    }
    else {
      temp_v7 = bufGrowCapacity(temp_v0,param_1);
      temp_v6 = (param_1[1] - *param_1) + temp_v3;
      piVar2 = (int *)wordRefMax(&temp_v6,(unsigned int *)&temp_v7);
      temp_v0 = *piVar2;
      temp_v1 = rt_malloc();
      FUN_00307604(*param_1,param_2,temp_v1,param_1);
      FUN_0031066a(temp_v8,temp_v9,(param_2 - *param_1) + temp_v1,param_1);
      FUN_00307604(param_2,param_1[1],(param_2 - *param_1) + temp_v3 + temp_v1,param_1);
      temp_v2 = *param_1;
      temp_v5 = param_1[1] - temp_v2;
      for (; temp_v2 != param_1[1]; temp_v2 = temp_v2 + 1) {
      }
      FUN_002e6e14();
      *param_1 = temp_v1;
      param_1[1] = temp_v1 + temp_v5 + temp_v3;
      param_1[2] = temp_v1 + temp_v0;
    }
  }
  return;
}

} /* extern "C" */
