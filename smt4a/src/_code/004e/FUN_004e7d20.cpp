/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e7d20` (_code @ 0x4e7d20, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010063a(unsigned int *, int, int, unsigned char *);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp388; /* 0x388: local_388 */
} param_2_stack;

extern unsigned char LAB_003d213c; /* 0x3d213c */
extern unsigned int DAT_00571190; /* 0x571190 */
extern unsigned int DAT_00571194; /* 0x571194 */

/* Supplied declaration required: FUN_0010063a. */
extern int FUN_004ee568(int *);


void FUN_004e7d20(int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  short *psVar4;
  unsigned int *puVar5;
  int temp_v2;
  unsigned int temp_v3 [220];
  
  puVar1 = *(unsigned int **)(*param_1 + 0x1ffc);
  temp_v2 = 0x6d;
  psVar4 = (short *)((int)puVar1 + 0x6e);
  puVar5 = puVar1 + 0x96;
  temp_v0 = 0;
  do {
    temp_v1 = temp_v0;
    if ((*puVar1 & DAT_00571190) != 0 || (puVar1[1] & DAT_00571194) != 0) {
      temp_v1 = temp_v0 + 1;
      temp_v3[temp_v0 * 2 + 2] = (int)*psVar4;
      temp_v3[temp_v0 * 2 + 3] = *puVar5;
    }
    temp_v2 = temp_v2 - 1;
    puVar1 = puVar1 + 0x102;
    psVar4 = psVar4 + 0x204;
    puVar5 = puVar5 + 0x102;
    temp_v0 = temp_v1;
  } while (temp_v2 != 0);
  if (temp_v1 >= param_2) {
    FUN_0010063a(temp_v3 + 2,temp_v1,8,&LAB_003d213c);
    temp_v0 = FUN_004ee568(param_1);
    temp_v3[2] = temp_v3[param_2 * 2];
  }
  else {
    temp_v0 = FUN_004ee568(param_1);
  }
  *(unsigned char *)(temp_v3[2] + temp_v0 + 0x38) = 1;
  return;
}

} /* extern "C" */
