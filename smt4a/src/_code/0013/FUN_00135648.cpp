/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00135648` (_code @ 0x135648, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(...);
int FUN_002eb414(int, int, int);
int vectorGrowCapacity_002ff8b4(unsigned int, int *);
int vectorCount4_002ff8c6(...);
int FUN_0030759c(...);
int FUN_003075b6(int, int, unsigned int);
int vectorCount4_003075ca(...);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: FUN_002eb414. */
/* Supplied declaration required: vectorGrowCapacity_002ff8b4. */
/* Supplied declaration required: vectorCount4_002ff8c6. */
/* Supplied declaration required: FUN_0030759c. */
/* Supplied declaration required: FUN_003075b6. */
/* Supplied declaration required: vectorCount4_003075ca. */
extern int allocArrayWords(int *, int, int);


void FUN_00135648(int *param_1,int param_2,int param_3,int param_4)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  
  if (param_3 != param_4) {
    temp_v7 = (param_4 - param_3) >> 2;
    temp_v0 = vectorCount4_002ff8c6(param_1);
    temp_v1 = vectorCount4_003075ca(param_1);
    if (temp_v1 >= (unsigned int)(temp_v0 + temp_v7)) {
      temp_v1 = param_1[1];
      temp_v8 = temp_v7 * 4 + param_2;
      param_1[1] = temp_v1 + temp_v7 * 4;
      if (temp_v8 < temp_v1) {
        temp_v0 = temp_v1 + temp_v7 * -4;
        FUN_0030759c(temp_v0,temp_v1,temp_v1,param_1);
        FUN_003075b6(param_2,temp_v0,temp_v1);
        temp_v0 = param_4;
      }
      else {
        temp_v0 = param_3 + ((int)(temp_v1 - param_2) >> 2) * 4;
        FUN_0030759c(temp_v0,param_4,temp_v1,param_1);
        FUN_0030759c(param_2,temp_v1,temp_v8,param_1);
      }
      FUN_002eb414(param_3,temp_v0,param_2);
    }
    else {
      temp_v0 = vectorCount4_002ff8c6(param_1);
      temp_v2 = vectorCount4_002ff8c6(param_1);
      temp_v1 = vectorGrowCapacity_002ff8b4(temp_v2,param_1);
      if (temp_v1 < (unsigned int)(temp_v0 + temp_v7)) {
        temp_v0 = vectorCount4_002ff8c6(param_1);
        temp_v0 = temp_v0 + temp_v7;
      }
      else {
        temp_v2 = vectorCount4_002ff8c6(param_1);
        temp_v0 = vectorGrowCapacity_002ff8b4(temp_v2,param_1);
      }
      temp_v3 = allocArrayWords(param_1,temp_v0,*param_1);
      FUN_0030759c(*param_1,param_2,temp_v3,param_1);
      FUN_0030759c(param_3,param_4,((param_2 - *param_1) & 0xfffffffcU) + temp_v3,param_1);
      FUN_0030759c(param_2,param_1[1],(((param_2 - *param_1) >> 2) + temp_v7) * 4 + temp_v3,param_1);
      temp_v4 = vectorCount4_002ff8c6(param_1);
      temp_v6 = *param_1;
      for (temp_v5 = temp_v6; temp_v5 != param_1[1]; temp_v5 = temp_v5 + 4) {
      }
      vectorCount4_003075ca(param_1);
      asdOperatorDeleteArray(temp_v6);
      *param_1 = temp_v3;
      param_1[1] = temp_v4 * 4 + temp_v3 + temp_v7 * 4;
      param_1[2] = temp_v0 * 4 + temp_v3;
    }
  }
  return;
}

} /* extern "C" */
