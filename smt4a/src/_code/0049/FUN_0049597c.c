/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049597c` (_code @ 0x49597c, 0x188 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_002a482c. */
/* Supplied declaration required: FUN_0031d174. */
/* Supplied declaration required: FUN_0049339c. */
/* Supplied declaration required: FUN_004957b4. */
/* Supplied declaration required: FUN_00497874. */
/* Supplied declaration required: FUN_00497a6c. */
/* Supplied declaration required: FUN_00497d20. */
/* Supplied declaration required: FUN_004986b0. */
extern unsigned int FUN_004cfe4c(unsigned int *);
extern unsigned int *FUN_004d0040(unsigned int *);
/* Supplied declaration required: FUN_004d0a8c. */


void FUN_0049597c(unsigned int *param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned char temp_v4;
  
  temp_v0 = *param_1;
  if ((temp_v0 & 0x100) != 0) {
    temp_v0 = param_1[0xe8];
    FUN_0049339c(param_1 + 0xe9,10,0);
    temp_v4 = param_1[2] != 4;
    puVar8 = param_1 + 0x27e2;
    temp_v1 = FUN_002a482c(puVar8);
    puVar3 = (unsigned int *)FUN_004d0040(puVar8);
    puVar7 = (unsigned int *)0x0;
    puVar4 = puVar3;
    if (0 < (int)puVar3) {
      do {
        if ((temp_v4) || (puVar4 = (unsigned int *)FUN_0031d174(puVar8), puVar4 != puVar7)) {
          puVar4 = param_1;
          FUN_00497d20(param_1,(int)puVar7 + 1,0,temp_v1 + (int)puVar7);
        }
        puVar7 = (unsigned int *)((int)puVar7 + 1);
      } while ((int)puVar7 < (int)puVar3);
    }
    if (!temp_v4) {
      puVar4 = (unsigned int *)param_1[0x27e4];
    }
    if (!temp_v4 && 0 < (int)puVar4) {
      temp_v2 = FUN_004cfe4c(puVar8);
      temp_v1 = FUN_0031d174(puVar8);
      FUN_00497d20(param_1,temp_v1 + 1,1,temp_v2);
    }
    temp_v2 = FUN_0031d174(puVar8);
    temp_v3 = FUN_002a482c(puVar8);
    FUN_004d0a8c(param_1[0x2cf],temp_v3,temp_v2);
    (**(romwright_code **)(*(int *)param_1[0x2cf] + 0x10))((int *)param_1[0x2cf],temp_v0);
  }
  else if ((temp_v0 & 0x200) != 0) {
    FUN_004986b0(param_1);
  }
  else if ((temp_v0 & 0x400) != 0) {
    FUN_00497874(param_1);
  }
  else if ((temp_v0 & 0x800) != 0) {
    FUN_00497a6c(param_1);
  }
  if ((*param_1 & 0x1000) == 0) {
    return;
  }
  FUN_004957b4(param_1);
  return;
}
