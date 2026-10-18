/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eefc4` (_code @ 0x2eefc4, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_0010ae04. */
/* Supplied declaration required: FUN_002eb588. */
/* Supplied declaration required: FUN_002eee88. */
extern int FUN_002ef01c(unsigned int);
/* Supplied declaration required: FUN_002ef8f8. */


void FUN_002eefc4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v2 = param_3;
  temp_v3 = param_4;
  FUN_002eee88(param_1 + 0x9c);
  piVar1 = (int *)FUN_002eee88(param_1 + 0x9c,param_2);
  temp_v0 = *piVar1;
  FUN_0010ae04();
  if (temp_v0 != 0) {
    temp_v1 = FUN_002ef01c(*(unsigned int *)(param_1 + 4));
    if (*(char *)(temp_v1 + 0x70) == '\0') {
      FUN_002eb588(&temp_v2);
      *(unsigned int *)(param_1 + 0xd8) = temp_v2;
      *(unsigned int *)(param_1 + 0xdc) = temp_v3;
    }
    FUN_002ef8f8(param_1,temp_v0);
  }
  return;
}
