/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001346ee` (_code @ 0x1346ee, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(void);
int vectorCount4_002f33ac(...);
int vectorGrowCapacity_00307860(unsigned int, int *);
int FUN_00307872(...);
int FUN_00307888(...);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern int rt_malloc(void);
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: vectorCount4_002f33ac. */
/* Supplied declaration required: vectorGrowCapacity_00307860. */
/* Supplied declaration required: FUN_00307872. */
/* Supplied declaration required: FUN_00307888. */


void FUN_001346ee(int *param_1,unsigned int *param_2,int param_3,unsigned int *param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int *puVar8;
  unsigned int *puVar9;
  
  if (param_3 != 0) {
    temp_v0 = vectorCount4_002f33ac();
    if ((unsigned int)((param_1[2] - *param_1) >> 2) >= (unsigned int)(temp_v0 + param_3)) {
      puVar8 = (unsigned int *)param_1[1];
      puVar2 = param_2 + param_3;
      param_1[1] = (int)(puVar8 + param_3);
      if (puVar2 < puVar8) {
        puVar9 = puVar8 + -param_3;
        FUN_00307888(puVar9,puVar8,puVar8,param_1);
        while (param_2 != puVar9) {
          puVar9 = puVar9 + -1;
          puVar8 = puVar8 + -1;
          *puVar8 = *puVar9;
        }
        for (; param_2 != puVar2; param_2 = param_2 + 1) {
          *param_2 = *param_4;
        }
      }
      else {
        FUN_00307872(puVar8,param_3 - (((int)puVar8 - (int)param_2) >> 2),param_4,param_1);
        FUN_00307888(param_2,puVar8,puVar2,param_1);
        for (; param_2 != puVar8; param_2 = param_2 + 1) {
          *param_2 = *param_4;
        }
      }
    }
    else {
      temp_v0 = vectorCount4_002f33ac(param_1);
      temp_v1 = vectorCount4_002f33ac(param_1);
      temp_v2 = vectorGrowCapacity_00307860(temp_v1,param_1);
      if (temp_v2 < (unsigned int)(temp_v0 + param_3)) {
        temp_v0 = vectorCount4_002f33ac(param_1);
        temp_v0 = temp_v0 + param_3;
      }
      else {
        temp_v1 = vectorCount4_002f33ac(param_1);
        temp_v0 = vectorGrowCapacity_00307860(temp_v1,param_1);
      }
      temp_v3 = rt_malloc();
      FUN_00307888(*param_1,param_2,temp_v3,param_1);
      FUN_00307872((((int)param_2 - *param_1) & 0xfffffffcU) + temp_v3,param_3,param_4,param_1);
      FUN_00307888(param_2,param_1[1],((((int)param_2 - *param_1) >> 2) + param_3) * 4 + temp_v3,
                   param_1);
      temp_v4 = vectorCount4_002f33ac(param_1);
      for (temp_v5 = *param_1; temp_v5 != param_1[1]; temp_v5 = temp_v5 + 4) {
      }
      asdOperatorDeleteArray();
      *param_1 = temp_v3;
      param_1[1] = temp_v4 * 4 + temp_v3 + param_3 * 4;
      param_1[2] = temp_v0 * 4 + temp_v3;
    }
  }
  return;
}

} /* extern "C" */
