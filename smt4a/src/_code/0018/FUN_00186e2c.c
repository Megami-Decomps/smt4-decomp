/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00186e2c` (_code @ 0x186e2c, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_0019eb14. */
/* Supplied declaration required: FUN_0019ec04. */
extern unsigned int *FUN_001a777c(int);
/* Supplied declaration required: FUN_001a77ac. */
extern unsigned int *FUN_001a7818(int);
extern unsigned int *FUN_001a7848(int);
/* Supplied declaration required: FUN_001a78bc. */


void FUN_00186e2c(unsigned int *param_1,int param_2)

{
/* irregular: irregular input(s): in_s0; 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int in_s0;
  
  temp_v1 = *(int *)(param_2 + 8);
  *param_1 = *(unsigned int *)(temp_v1 + 0x58);
  param_1[1] = *(unsigned int *)(temp_v1 + 0x68);
  param_1[2] = *(unsigned int *)(temp_v1 + 0x78);
  temp_v0 = *(unsigned int *)(*(int *)(temp_v1 + 8) + 0xb4);
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 == 2) {
        puVar2 = (unsigned int *)FUN_001a777c(temp_v1);
        param_1[0xe] = *puVar2;
        param_1[0xf] = puVar2[1];
        param_1[0x10] = puVar2[2];
        FUN_0019ec04(param_1);
      }
    }
    else {
      puVar2 = (unsigned int *)FUN_001a7848(temp_v1);
      param_1[3] = *puVar2;
      param_1[4] = puVar2[1];
      param_1[5] = puVar2[2];
      puVar2 = (unsigned int *)FUN_001a7818(temp_v1);
      param_1[6] = *puVar2;
      param_1[7] = puVar2[1];
      param_1[8] = puVar2[2];
    }
  }
  else {
    puVar2 = (unsigned int *)FUN_001a7848(temp_v1);
    param_1[3] = *puVar2;
    param_1[4] = puVar2[1];
    param_1[5] = puVar2[2];
    FUN_001a78bc(temp_v1);
    param_1[0xd] = in_s0;
    FUN_0019eb14(param_1);
  }
  FUN_001a77ac(temp_v1,param_1 + 9,param_1 + 0xc,param_1 + 10,param_1 + 0xb);
  param_1[9] = (float)param_1[9] * 57.295776f;
  return;
}
