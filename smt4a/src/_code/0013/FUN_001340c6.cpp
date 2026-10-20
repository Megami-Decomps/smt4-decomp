/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001340c6` (_code @ 0x1340c6, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00135ae4(int, int, unsigned int);
int FUN_00135b4a(int, unsigned int, unsigned int);
int FUN_002e6e14(...);
int FUN_0030798e(unsigned int, int, unsigned int, int *);
int FUN_003079ae(...);
int FUN_003079c6(...);
int vectorCount8_0030fcf6(...);

/* stack frame of param_4: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern unsigned int FUN_001321fc(int *);
/* Supplied declaration required: FUN_00135ae4. */
/* Supplied declaration required: FUN_00135b4a. */
extern int *wordRefMax(int *, unsigned int *);
/* Supplied declaration required: FUN_002e6e14. */
extern int FUN_00307984(int *, int, int);
/* Supplied declaration required: FUN_0030798e. */
/* Supplied declaration required: FUN_003079ae. */
/* Supplied declaration required: FUN_003079c6. */
/* Supplied declaration required: vectorCount8_0030fcf6. */
extern unsigned int vectorGrowCapacity_0030fcfe(unsigned int, int *);


void FUN_001340c6(int *param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piStack_24;
  int temp_v9;
  int iStack_1c;
  unsigned int temp_v10;
  
  if (param_3 != 0) {
    piStack_24 = param_1;
    temp_v9 = param_2;
    iStack_1c = param_3;
    temp_v10 = param_4;
    temp_v0 = vectorCount8_0030fcf6();
    temp_v1 = FUN_001321fc(param_1);
    temp_v6 = param_3 * 8;
    if (temp_v1 >= (unsigned int)(temp_v0 + param_3)) {
      temp_v1 = param_1[1];
      temp_v2 = temp_v6 + temp_v9;
      param_1[1] = temp_v1 + temp_v6;
      if (temp_v2 < temp_v1) {
        temp_v0 = temp_v1 + param_3 * -8;
        FUN_003079c6(temp_v0,temp_v1,temp_v1,param_1);
        FUN_00135ae4(temp_v9,temp_v0,temp_v1);
        temp_v1 = temp_v2;
      }
      else {
        FUN_0030798e(temp_v1,param_3 - ((int)(temp_v1 - temp_v9) >> 3),temp_v10,param_1);
        FUN_003079c6(temp_v9,temp_v1,temp_v2,param_1);
      }
      FUN_00135b4a(temp_v9,temp_v1,temp_v10);
    }
    else {
      temp_v3 = vectorCount8_0030fcf6(param_1);
      temp_v8 = vectorGrowCapacity_0030fcfe(temp_v3,param_1);
      temp_v7 = vectorCount8_0030fcf6(param_1);
      temp_v7 = temp_v7 + param_3;
      piVar5 = (int *)wordRefMax(&temp_v7,(unsigned int *)&temp_v8);
      temp_v0 = *piVar5;
      temp_v4 = FUN_00307984(param_1,temp_v0,*param_1);
      FUN_003079c6(*param_1,temp_v9,temp_v4,param_1);
      FUN_0030798e(((temp_v9 - *param_1) & 0xfffffff8U) + temp_v4,param_3,temp_v10,param_1);
      FUN_003079c6(temp_v9,param_1[1],(((temp_v9 - *param_1) >> 3) + param_3) * 8 + temp_v4,param_1)
      ;
      temp_v5 = vectorCount8_0030fcf6(param_1);
      FUN_003079ae(param_1,*param_1,param_1[1]);
      FUN_002e6e14(*param_1);
      *param_1 = temp_v4;
      param_1[1] = temp_v5 * 8 + temp_v4 + temp_v6;
      param_1[2] = temp_v0 * 8 + temp_v4;
    }
  }
  return;
}

} /* extern "C" */
