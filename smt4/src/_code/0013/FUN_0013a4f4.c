/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a4f4` (_code @ 0x13a4f4, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_5_stack;

extern signed char DAT_00472a70; /* 0x472a70 */
extern unsigned char DAT_004eac44; /* 0x4eac44 */

extern int FUN_00146d08(int, unsigned int *);
extern int nn_fnd_detail_GetNextListObject(unsigned char *, int);
/* Supplied declaration required: nn_fnd_detail_InitList. */


void FUN_0013a4f4(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int *puVar4;
  unsigned int temp_v2;
  
  *param_1 = param_2;
  param_1[8] = param_5 & 0xff;
  param_1[6] = param_3;
  param_1[7] = param_4;
  nn_fnd_detail_InitList(param_1 + 3,4);
  if (DAT_00472a70 == '\0') {
    nn_fnd_detail_InitList(&DAT_004eac44,4);
    DAT_00472a70 = '\x01';
  }
  puVar4 = (unsigned int *)&DAT_004eac44;
  temp_v1 = 0;
  do {
    temp_v1 = nn_fnd_detail_GetNextListObject(&DAT_004eac44,temp_v1);
    if (temp_v1 == 0) goto LAB_0013a598;
  } while ((param_1 < *(unsigned int **)(temp_v1 + 0x18)) || (*(unsigned int **)(temp_v1 + 0x1c) <= param_1)
          );
  temp_v0 = FUN_00146d08(temp_v1 + 0xc,param_1);
  if (temp_v0 == 0) {
    temp_v0 = temp_v1;
  }
  puVar4 = (unsigned int *)(temp_v0 + 0xc);
LAB_0013a598:
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
