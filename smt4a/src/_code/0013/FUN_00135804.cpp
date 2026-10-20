/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00135804` (_code @ 0x135804, 0xee bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(int);
int vectorCount4_002ff8c6(int *);
int FUN_002ff8ce(int, int, int, int *);
int FUN_0030758e(int, int, int);
int vectorCount4_003075ca(int *);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern int *wordRefMax(unsigned int *, unsigned int *);
extern int rt_malloc(void);
/* Supplied declaration required: asdOperatorDeleteArray. */
extern unsigned int vectorGrowCapacity_002ff8b4(unsigned int, int *);
/* Supplied declaration required: vectorCount4_002ff8c6. */
/* Supplied declaration required: FUN_002ff8ce. */
/* Supplied declaration required: FUN_0030758e. */
/* Supplied declaration required: vectorCount4_003075ca. */


int * FUN_00135804(int *param_1,int *param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8 [2];
  
  if (param_2 != param_1) {
    temp_v0 = vectorCount4_002ff8c6(param_2);
    temp_v1 = vectorCount4_003075ca(param_1);
    if (temp_v1 < temp_v0) {
      temp_v2 = vectorCount4_002ff8c6(param_1);
      temp_v8[0] = vectorGrowCapacity_002ff8b4(temp_v2,param_1);
      temp_v7 = vectorCount4_002ff8c6(param_2);
      piVar4 = (int *)wordRefMax((unsigned int *)&temp_v7,temp_v8);
      temp_v3 = *piVar4;
      temp_v4 = rt_malloc();
      FUN_002ff8ce(*param_2,param_2[1],temp_v4,param_1);
      temp_v6 = *param_1;
      for (temp_v5 = temp_v6; temp_v5 != param_1[1]; temp_v5 = temp_v5 + 4) {
      }
      vectorCount4_003075ca(param_1);
      asdOperatorDeleteArray(temp_v6);
      *param_1 = temp_v4;
      temp_v5 = vectorCount4_002ff8c6(param_2);
      param_1[1] = temp_v5 * 4 + *param_1;
      temp_v5 = *param_1 + temp_v3 * 4;
    }
    else {
      temp_v0 = vectorCount4_002ff8c6(param_1);
      temp_v1 = vectorCount4_002ff8c6(param_2);
      if (temp_v0 < temp_v1) {
        temp_v5 = vectorCount4_002ff8c6(param_1);
        temp_v5 = temp_v5 * 4;
        FUN_0030758e(*param_2,*param_2 + temp_v5,*param_1);
        temp_v3 = vectorCount4_002ff8c6(param_2);
        param_1[1] = temp_v3 * 4 + *param_1;
        FUN_002ff8ce(*param_2 + temp_v5,param_2[1],*param_1 + temp_v5,param_1);
        return param_1;
      }
      temp_v5 = FUN_0030758e(*param_2,param_2[1],*param_1);
      for (; temp_v5 != param_1[1]; temp_v5 = temp_v5 + 4) {
      }
      temp_v5 = vectorCount4_002ff8c6(param_2);
      temp_v5 = temp_v5 * 4 + *param_1;
      param_1[1] = temp_v5;
    }
    param_1[2] = temp_v5;
  }
  return param_1;
}

} /* extern "C" */
