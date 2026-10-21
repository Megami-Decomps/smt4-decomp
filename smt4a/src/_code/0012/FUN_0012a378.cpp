/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012a378` (_code @ 0x12a378, 0xaa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineInstanceTableFind(int, unsigned int);
int FUN_002f6be2(int, int *);
int operatorDeleteArrayNullable(int);
int onlineJobCompleteWithResult(int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned int FUN_002e7908(unsigned int *, unsigned int *);
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
/* Supplied declaration required: FUN_002f6be2. */
/* Supplied declaration required: operatorDeleteArrayNullable. */
extern int rangeIsEmpty(void);
/* Supplied declaration required: onlineJobCompleteWithResult. */


void FUN_0012a378(int param_1,int *param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [4];
  unsigned int temp_v5 [2];
  int temp_v6;
  
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x6c));
  if (temp_v0 != 0) {
    param_2[2] = *(int *)(param_1 + 0x80);
    (**(romwright_code **)(*param_2 + 0x54))(param_2,*(unsigned int *)(param_1 + 0x7c));
    temp_v6 = param_1 + 0x100;
    for (temp_v0 = *(int *)(param_1 + 0x130); *(int *)(temp_v6 + 0x34) != temp_v0; temp_v0 = temp_v0 + 0x18
        ) {
      temp_v2 = 0;
      temp_v3 = 0;
      FUN_002f6be2(temp_v0 + 8,&temp_v2);
      FUN_002f6be2(temp_v0 + 0x10,&temp_v3);
      (**(romwright_code **)(*param_2 + 0xc))(temp_v4,param_2,temp_v2,temp_v3);
      operatorDeleteArrayNullable(temp_v2);
      operatorDeleteArrayNullable(temp_v3);
    }
    temp_v0 = rangeIsEmpty();
    if (temp_v0 == 0) {
      (**(romwright_code **)(*param_2 + 0x50))
                (param_2,*(int *)(param_1 + 0x140),
                 *(int *)(param_1 + 0x144) - *(int *)(param_1 + 0x140));
    }
  }
  else {
    temp_v5[0] = 0x80010004;
    temp_v1 = FUN_002e7908((unsigned int *)&temp_v2,temp_v5);
    onlineJobCompleteWithResult(param_1,temp_v1);
  }
  return;
}

} /* extern "C" */
