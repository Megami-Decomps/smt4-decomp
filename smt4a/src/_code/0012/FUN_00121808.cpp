/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121808` (_code @ 0x121808, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineInstanceTableFind(int, unsigned int);
int vectorResizeBytes(...);
int FUN_002f7824(int *);
int rangeIsEmpty(...);

typedef int romwright_code(...);
/* stack frame of param_2: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern int *_ZN12OnlineResultC1ERKj(int *, int *);
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
/* Supplied declaration required: vectorResizeBytes. */
/* Supplied declaration required: FUN_002f7824. */
/* Supplied declaration required: rangeIsEmpty. */


int * FUN_00121808(int *param_1,int param_2)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  int *temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9 [2];
  int *temp_v10;
  int iStack_18;
  
  piVar3 = &temp_v2;
  temp_v3 = (int *)(param_2 + 0x7c);
  temp_v10 = param_1;
  iStack_18 = param_2;
  temp_v0 = rangeIsEmpty();
  if (temp_v0 != 0) goto LAB_0012184e;
  while( 1 ) {
    temp_v0 = (**(romwright_code **)(**(int **)(param_2 + 0x8c) + 0x14))
                      (*(int **)(param_2 + 0x8c),*(unsigned int *)(param_2 + 0x7c),
                       temp_v3[1] - *temp_v3);
    temp_v1 = onlineInstanceTableGetCurrent();
    onlineInstanceTableFind(temp_v1,*(unsigned int *)(param_2 + 0x68));
    if (temp_v1 == 0) {
      temp_v2 = -0x7ffefffc;
      piVar3 = (int *)_ZN12OnlineResultC1ERKj(temp_v10,piVar3);
      return piVar3;
    }
    if (temp_v0 == 0) break;
    FUN_002f7824(temp_v3);
LAB_0012184e:
    temp_v4 = 0;
    vectorResizeBytes(temp_v3,*(unsigned int *)(param_2 + 0x90),0);
    temp_v2 = temp_v3[1] - *temp_v3;
    (**(romwright_code **)(**(int **)(param_2 + 0x6c) + 0x30))
              (&temp_v5,*(int **)(param_2 + 0x6c),*(unsigned int *)(param_2 + 0x7c),&temp_v4);
    if (temp_v5 < 0) {
      *temp_v10 = temp_v5;
      temp_v10[1] = temp_v6;
      temp_v10[2] = temp_v7;
      return temp_v10 + 3;
    }
    vectorResizeBytes(temp_v3,temp_v4,0);
    temp_v0 = rangeIsEmpty(temp_v3);
    if (temp_v0 != 0) {
      temp_v0 = (**(romwright_code **)(**(int **)(param_2 + 0x6c) + 0x44))();
      if (temp_v0 != 0) {
        temp_v8 = 0x10001;
        piVar3 = &temp_v8;
      }
      else {
        temp_v9[0] = 0x80050016;
        piVar3 = (int *)temp_v9;
      }
      piVar3 = (int *)_ZN12OnlineResultC1ERKj(temp_v10,piVar3);
      return piVar3;
    }
  }
  temp_v2 = -0x7ffaffea;
  piVar3 = &temp_v2;
  piVar3 = (int *)_ZN12OnlineResultC1ERKj(temp_v10,piVar3);
  return piVar3;
}

} /* extern "C" */
