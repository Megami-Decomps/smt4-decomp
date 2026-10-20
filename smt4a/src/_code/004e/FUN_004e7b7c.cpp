/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e7b7c` (_code @ 0x4e7b7c, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(int *, int, int, unsigned char *);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp378; /* 0x378: local_378 */
} param_5_stack;

extern unsigned char LAB_003d213c; /* 0x3d213c */

/* Supplied declaration required: qsort. */


int FUN_004e7b7c(unsigned int param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  short *psVar3;
  int aiStack_380 [220];
  
  temp_v0 = 0;
  if (0 < param_4) {
    do {
      aiStack_380[temp_v0 * 2 + 2] = temp_v0;
      temp_v1 = temp_v0 + 1;
      aiStack_380[temp_v0 * 2 + 3] = *(int *)(param_2 + temp_v0 * 0x10 + 0x9e4);
      temp_v0 = temp_v1;
    } while (temp_v1 < param_4);
  }
  if (param_5 <= param_4) {
    qsort(aiStack_380 + 2,param_4,8,&LAB_003d213c);
    aiStack_380[2] = aiStack_380[param_5 * 2];
  }
  psVar3 = (short *)(param_3 + aiStack_380[2] * 4);
  psVar3[1] = psVar3[1] + 1;
  return (int)*psVar3;
}

} /* extern "C" */
