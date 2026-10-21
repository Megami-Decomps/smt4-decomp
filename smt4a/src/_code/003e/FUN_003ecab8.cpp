/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ecab8` (_code @ 0x3ecab8, 0x200 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001568f8(int, int);
int dataTable00FindById(void);
int FUN_00348f74(void);
int FUN_003f0e20(int, int);
void btlEnemyDrawCalcVerticalOffset(unsigned int, int *, float);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

/* Supplied declaration required: FUN_001568f8. */
extern int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: dataTable00FindById. */
extern unsigned int dataTableFileGetTable(int, unsigned int);
/* Supplied declaration required: FUN_00348f74. */
extern unsigned int stateEntryFindById(int, unsigned int);
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: btlEnemyDrawCalcVerticalOffset. */


void FUN_003ecab8(int param_1,int param_2,int param_3)

{
/* irregular: 1 goto(s); 5 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  int temp_v5;
  float temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  float temp_v9;
  
  temp_v5 = *(int *)(param_1 + 0x1ed4) + param_2 * 0x1d0;
  if ((*(unsigned int *)(temp_v5 + 0x50) & 0x200000) != 0) {
    temp_v5 = param_1;
    FUN_001568f8(param_1,param_2);
    temp_v0 = *(unsigned short *)(temp_v5 + 2);
    if (*(int *)(param_1 + 0x2294) != 0) {
      temp_v1 = dataTableFileGetTable(*(int *)(param_1 + 0x2294),0);
      temp_v5 = dataTableGetEntries();
      temp_v2 = dataTableGetCount(temp_v1);
      temp_v3 = 0;
      if (temp_v3 < temp_v2) {
        do {
          if ((int)*(short *)(temp_v5 + temp_v3 * 0x38) == (unsigned int)temp_v0) {
            return;
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < temp_v2);
      }
    }
  }
  else {
    temp_v6 = 2.0f;
    if (((*(unsigned int *)(temp_v5 + 0x50) & 0x10) == 0) || (param_3 != 0)) {
      temp_v2 = param_1;
      FUN_003f0e20(param_1,(int)*(short *)(temp_v5 + 0x6a));
      if (temp_v2 != 0) {
        temp_v3 = 0;
        do {
          temp_v4 = temp_v2 + temp_v3 * 2;
          if (*(short *)(temp_v5 + 0x6a) == *(short *)(temp_v4 + 8)) {
LAB_003ecbc0:
            if (-1 < temp_v3) {
              temp_v5 = param_1;
              FUN_001568f8(param_1,param_2);
              temp_v1 = stateEntryFindById(param_1,*(unsigned int *)(temp_v5 + temp_v3 * 4 + 0xc));
              btlEnemyDrawCalcVerticalOffset(temp_v1,&temp_v7,
                  *(float *)(*(int *)(param_1 + 0x1ed4) + param_2 * 0x1d0 + 0x40));
              return;
            }
            break;
          }
          if (*(short *)(temp_v5 + 0x6a) == *(short *)(temp_v4 + 10)) {
            temp_v3 = temp_v3 + 1;
            goto LAB_003ecbc0;
          }
          temp_v3 = temp_v3 + 2;
        } while (temp_v3 < 0x32);
      }
      temp_v3 = 0;
      temp_v5 = param_1;
      FUN_001568f8(param_1,param_2);
      temp_v1 = stateEntryFindById(param_1,*(unsigned int *)(temp_v5 + temp_v3 * 4 + 0xc));
      btlEnemyDrawCalcVerticalOffset(temp_v1,&temp_v7,
          *(float *)(*(int *)(param_1 + 0x1ed4) + param_2 * 0x1d0 + 0x40));
    }
    else {
      puVar5 = *(unsigned int **)(param_1 + 0x1ec4);
      FUN_00348f74();
      temp_v7 = *puVar5;
      temp_v8 = puVar5[1];
      temp_v9 = (float)puVar5[2] + temp_v6;
      FUN_001568f8(param_1,param_2);
      dataTable00FindById();
    }
  }
  return;
}

} /* extern "C" */
