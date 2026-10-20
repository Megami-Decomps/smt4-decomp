/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001215cc` (_code @ 0x1215cc, 0x86 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7908(int *, unsigned int *);
int vectorCopyHeader(int *, unsigned char [12]);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002f6be2(int, int *);
int operatorDeleteArrayNullable(int);

typedef int romwright_code(...);
/* stack frame of param_2: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern unsigned int FUN_0010b7f8(void);
/* Supplied declaration required: FUN_002e7908. */
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: vectorCopyHeader. */
/* Supplied declaration required: onlineInstanceTableFind. */
/* Supplied declaration required: FUN_002f6be2. */
/* Supplied declaration required: operatorDeleteArrayNullable. */


void FUN_001215cc(int *param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7 [12];
  int temp_v8;
  
  temp_v0 = FUN_0010b7f8();
  *(unsigned int *)(param_2 + 0x6c) = temp_v0;
  FUN_002f6be2(param_2 + 0x70,&temp_v2);
  (**(romwright_code **)(**(int **)(param_2 + 0x6c) + 8))
            (&temp_v4,*(int **)(param_2 + 0x6c),temp_v2,*(unsigned char *)(param_2 + 0x78));
  operatorDeleteArrayNullable(temp_v2);
  if (temp_v4 >= 0) {
    (**(romwright_code **)(**(int **)(param_2 + 0x8c) + 8))
              (*(int **)(param_2 + 0x8c),*(unsigned int *)(param_2 + 0x6c));
    temp_v1 = onlineInstanceTableGetCurrent();
    onlineInstanceTableFind(temp_v1,*(unsigned int *)(param_2 + 0x68));
    if (temp_v1 != 0) {
      (**(romwright_code **)(**(int **)(param_2 + 0x6c) + 0x24))(temp_v7);
      vectorCopyHeader(&temp_v4,temp_v7);
      if (temp_v4 < 0) {
        *param_1 = temp_v4;
        param_1[1] = temp_v5;
        param_1[2] = temp_v6;
        return;
      }
      puVar3 = (unsigned int *)&temp_v8;
      temp_v8 = 0x10001;
    }
    else {
      puVar3 = (unsigned int *)&temp_v3;
      temp_v3 = 0x80010004;
    }
    FUN_002e7908(param_1,puVar3);
  }
  else {
    *param_1 = temp_v4;
    param_1[1] = temp_v5;
    param_1[2] = temp_v6;
  }
  return;
}

} /* extern "C" */
