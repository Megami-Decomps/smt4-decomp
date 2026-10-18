/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a11f0` (_code @ 0x3a11f0, 0x188 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_00230cc0. */
/* Supplied declaration required: FUN_002332e8. */
extern unsigned int FUN_0023360c(unsigned int *);
extern unsigned int *FUN_00233718(unsigned int *);
/* Supplied declaration required: FUN_00240d5c. */
/* Supplied declaration required: FUN_0029e924. */
/* Supplied declaration required: FUN_003a0f88. */
/* Supplied declaration required: FUN_003a1d04. */
/* Supplied declaration required: FUN_003a1f00. */
/* Supplied declaration required: FUN_003a21b8. */
/* Supplied declaration required: FUN_003a2960. */


void FUN_003a11f0(unsigned int *param_1)

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
    FUN_00230cc0(param_1 + 0xe0,10,0);
    temp_v4 = param_1[2] != 4;
    puVar8 = param_1 + 0x272a;
    temp_v1 = FUN_0029e924(puVar8);
    puVar3 = (unsigned int *)FUN_00233718(puVar8);
    puVar7 = (unsigned int *)0x0;
    puVar4 = puVar3;
    if (0 < (int)puVar3) {
      do {
        if ((temp_v4) || (puVar4 = (unsigned int *)FUN_00240d5c(puVar8), puVar4 != puVar7)) {
          puVar4 = param_1;
          FUN_003a21b8(param_1,(int)puVar7 + 1,0,temp_v1 + (int)puVar7);
        }
        puVar7 = (unsigned int *)((int)puVar7 + 1);
      } while ((int)puVar7 < (int)puVar3);
    }
    if (!temp_v4) {
      puVar4 = (unsigned int *)param_1[0x272c];
    }
    if (!temp_v4 && 0 < (int)puVar4) {
      temp_v2 = FUN_0023360c(puVar8);
      temp_v1 = FUN_00240d5c(puVar8);
      FUN_003a21b8(param_1,temp_v1 + 1,1,temp_v2);
    }
    temp_v2 = FUN_00240d5c(puVar8);
    temp_v3 = FUN_0029e924(puVar8);
    FUN_002332e8(param_1[0x217],temp_v3,temp_v2);
    (**(romwright_code **)(*(int *)param_1[0x217] + 0x10))((int *)param_1[0x217],temp_v0);
  }
  else if ((temp_v0 & 0x200) != 0) {
    FUN_003a2960(param_1);
  }
  else if ((temp_v0 & 0x400) != 0) {
    FUN_003a1d04(param_1);
  }
  else if ((temp_v0 & 0x800) != 0) {
    FUN_003a1f00(param_1);
  }
  if ((*param_1 & 0x1000) == 0) {
    return;
  }
  FUN_003a0f88(param_1);
  return;
}
