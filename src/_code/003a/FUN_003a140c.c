/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a140c` (_code @ 0x3a140c, 0x188 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_00230e54. */
/* Supplied declaration required: FUN_0023347c. */
extern unsigned int FUN_002337a0(unsigned int *);
extern unsigned int *FUN_002338ac(unsigned int *);
/* Supplied declaration required: FUN_00240e8c. */
/* Supplied declaration required: FUN_0029ebc4. */
/* Supplied declaration required: FUN_003a11a4. */
/* Supplied declaration required: FUN_003a1f20. */
/* Supplied declaration required: FUN_003a211c. */
/* Supplied declaration required: FUN_003a23d4. */
/* Supplied declaration required: FUN_003a2b7c. */


void FUN_003a140c(unsigned int *param_1)

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
    temp_v0 = param_1[0xdf];
    FUN_00230e54(param_1 + 0xe0,10,0);
    temp_v4 = param_1[2] != 4;
    puVar8 = param_1 + 0x272a;
    temp_v1 = FUN_0029ebc4(puVar8);
    puVar3 = (unsigned int *)FUN_002338ac(puVar8);
    puVar7 = (unsigned int *)0x0;
    puVar4 = puVar3;
    if (0 < (int)puVar3) {
      do {
        if ((temp_v4) || (puVar4 = (unsigned int *)FUN_00240e8c(puVar8), puVar4 != puVar7)) {
          puVar4 = param_1;
          FUN_003a23d4(param_1,(int)puVar7 + 1,0,temp_v1 + (int)puVar7);
        }
        puVar7 = (unsigned int *)((int)puVar7 + 1);
      } while ((int)puVar7 < (int)puVar3);
    }
    if (!temp_v4) {
      puVar4 = (unsigned int *)param_1[0x272c];
    }
    if (!temp_v4 && 0 < (int)puVar4) {
      temp_v2 = FUN_002337a0(puVar8);
      temp_v1 = FUN_00240e8c(puVar8);
      FUN_003a23d4(param_1,temp_v1 + 1,1,temp_v2);
    }
    temp_v2 = FUN_00240e8c(puVar8);
    temp_v3 = FUN_0029ebc4(puVar8);
    FUN_0023347c(param_1[0x217],temp_v3,temp_v2);
    (**(romwright_code **)(*(int *)param_1[0x217] + 0x10))((int *)param_1[0x217],temp_v0);
  }
  else if ((temp_v0 & 0x200) != 0) {
    FUN_003a2b7c(param_1);
  }
  else if ((temp_v0 & 0x400) != 0) {
    FUN_003a1f20(param_1);
  }
  else if ((temp_v0 & 0x800) != 0) {
    FUN_003a211c(param_1);
  }
  if ((*param_1 & 0x1000) == 0) {
    return;
  }
  FUN_003a11a4(param_1);
  return;
}
