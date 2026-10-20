/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003105b0` (_code @ 0x3105b0, 0xba bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(void);
int FUN_003075f2(...);
int FUN_0031066a(...);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int *wordRefMax(int **, unsigned int *);
extern int rt_malloc(int);
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: FUN_003075f2. */
/* Supplied declaration required: FUN_0031066a. */
extern unsigned int bufGrowCapacity(int, int *);


unsigned long long FUN_003105b0(int *param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int *temp_v6;
  int temp_v7;
  unsigned int uStack_18;
  
  temp_v6 = param_2;
  if (param_2 != param_1) {
    temp_v0 = *param_2;
    temp_v3 = *param_1;
    temp_v1 = param_2[1] - temp_v0;
    temp_v7 = param_3;
    uStack_18 = param_4;
    if ((unsigned int)(param_1[2] - temp_v3) < temp_v1) {
      temp_v7 = bufGrowCapacity(param_1[1] - temp_v3,param_1);
      temp_v6 = (int *)(param_2[1] - *param_2);
      piVar2 = (int *)wordRefMax(&temp_v6,(unsigned int *)&temp_v7);
      temp_v5 = *piVar2;
      temp_v0 = rt_malloc(temp_v5);
      FUN_0031066a(*param_2,param_2[1],temp_v0,param_1);
      for (temp_v3 = *param_1; temp_v3 != param_1[1]; temp_v3 = temp_v3 + 1) {
      }
      asdOperatorDeleteArray();
      *param_1 = temp_v0;
      temp_v2 = *param_2;
      temp_v3 = param_2[1];
      param_1[2] = temp_v0 + temp_v5;
      param_1[1] = (temp_v3 - temp_v2) + temp_v0;
    }
    else {
      temp_v4 = param_1[1] - temp_v3;
      if (temp_v4 >= temp_v1) {
        temp_v0 = FUN_003075f2(temp_v0,param_2[1]);
        for (; temp_v0 != param_1[1]; temp_v0 = temp_v0 + 1) {
        }
        temp_v0 = (param_2[1] - *param_2) + *param_1;
        param_1[1] = temp_v0;
        param_1[2] = temp_v0;
      }
      else {
        FUN_003075f2(temp_v0,temp_v0 + temp_v4);
        param_1[1] = (param_2[1] - *param_2) + *param_1;
        FUN_0031066a(*param_2 + temp_v4,param_2[1],*param_1 + temp_v4,param_1);
      }
    }
  }
  return romwright_piece_4_4(temp_v6,param_1);
}

} /* extern "C" */
