/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00334374` (_code @ 0x334374, 0xe4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002409dc. */
/* Supplied declaration required: FUN_00240ac0. */
/* Supplied declaration required: FUN_0027e964. */
/* Supplied declaration required: FUN_00297704. */
/* Supplied declaration required: FUN_002b087c. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002c4b30. */


void FUN_00334374(unsigned int *param_1,int param_2)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [128];
  
  temp_v0 = param_2;
  FUN_0027e964(param_2,1);
  if (-1 < temp_v0) {
    *(unsigned int *)(param_2 + 0x44a0) = *(unsigned int *)(param_2 + 0x44a0) | 0x4000000;
    temp_v1 = (unsigned int)*(unsigned short *)(*(int *)(param_2 + 0x1fc0) + temp_v0 * 0x288 + 0xce);
    FUN_002b087c();
    FUN_002c4b30(temp_v2,0x80);
    FUN_002be7fc(temp_v2,"battle/arngmt/%02d_%02d.earg",*(unsigned char *)(temp_v1 + 0x9e),
                 *(unsigned char *)(temp_v1 + 0x9f));
    FUN_00297704(temp_v2,(int *)(param_2 + 0x1e88),0);
    *param_1 = 3;
    if (*(int *)(param_2 + 0x1e88) != 0) {
      *param_1 = 4;
      FUN_00240ac0(param_1,param_2);
    }
    return;
  }
  *param_1 = 7;
  FUN_002409dc(param_1,param_2);
  return;
}
