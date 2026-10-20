/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00189c00` (_code @ 0x189c00, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_5_stack;

extern signed char DAT_005c14a0; /* 0x5c14a0 */
extern unsigned char DAT_00647604; /* 0x647604 */

extern int nnFndFindNestedRange(int, unsigned int *);
extern int nn_fnd_detail_GetNextListObject(unsigned char *, int);
extern void nn_fnd_detail_InitList(unsigned int, unsigned short);


void FUN_00189c00(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 1 goto(s) */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int *puVar4;
  unsigned int temp_v2;
  
  *param_1 = param_2;
  param_1[8] = param_5 & 0xff;
  param_1[6] = param_3;
  param_1[7] = param_4;
  nn_fnd_detail_InitList((unsigned int)(param_1 + 3),4);
  if (DAT_005c14a0 == '\0') {
    nn_fnd_detail_InitList((unsigned int)&DAT_00647604,4);
    DAT_005c14a0 = '\x01';
  }
  puVar4 = (unsigned int *)&DAT_00647604;
  temp_v1 = 0;
  do {
    temp_v1 = nn_fnd_detail_GetNextListObject(&DAT_00647604,temp_v1);
    if (temp_v1 == 0) goto LAB_00189ca4;
  } while ((param_1 < *(unsigned int **)(temp_v1 + 0x18)) || (*(unsigned int **)(temp_v1 + 0x1c) <= param_1)
          );
  temp_v0 = nnFndFindNestedRange(temp_v1 + 0xc,param_1);
  if (temp_v0 == 0) {
    temp_v0 = temp_v1;
  }
  puVar4 = (unsigned int *)(temp_v0 + 0xc);
LAB_00189ca4:
  puVar2 = (unsigned int *)((unsigned int)*(unsigned short *)((int)puVar4 + 10) + (int)param_1);
  if (*puVar4 != 0) {
    temp_v2 = puVar4[1];
    puVar2[1] = 0;
    *puVar2 = temp_v2;
    *(unsigned int **)(puVar4[1] + (unsigned int)*(unsigned short *)((int)puVar4 + 10) + 4) = param_1;
    puVar4[1] = (unsigned int)param_1;
    *(short *)(puVar4 + 2) = (short)puVar4[2] + 1;
    return;
  }
  puVar2[1] = 0;
  *puVar2 = 0;
  *puVar4 = (unsigned int)param_1;
  puVar4[1] = (unsigned int)param_1;
  *(short *)(puVar4 + 2) = (short)puVar4[2] + 1;
  return;
}

} /* extern "C" */
