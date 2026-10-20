/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e18d4` (_code @ 0x1e18d4, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025ca80(int, int);
int asdModelSlotSetColor(int, int);
int FUN_00263670(int, int);
int FUN_002f5084(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int asdModelBankGetModel(int, unsigned int);
/* Supplied declaration required: FUN_0025ca80. */
/* Supplied declaration required: asdModelSlotSetColor. */
/* Supplied declaration required: FUN_00263670. */
extern int FUN_002cb7e0(int, unsigned int);
/* Supplied declaration required: FUN_002f5084. */


void FUN_001e18d4(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(param_1 + 200);
  if (temp_v1 != 0) {
    temp_v0 = param_1;
    if (temp_v1 == 1) {
      temp_v0 = *(int *)(param_1 + 0xc4);
    }
    if ((temp_v1 == 1 && temp_v0 == 0) &&
       (temp_v1 = FUN_002cb7e0((int)(short)*(unsigned int *)(param_1 + 0xcc),0), temp_v1 != 0)) {
      FUN_00263670((int)(short)*(unsigned int *)(param_1 + 0xcc),0);
      FUN_0025ca80((int)(short)*(unsigned int *)(param_1 + 0xcc),0);
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0xc4) == 1) {
      FUN_002f5084(*(unsigned int *)(param_1 + 0x10c));
      return;
    }
    if ((*(int *)(param_1 + 0xc4) == 0) &&
       (temp_v1 = asdModelBankGetModel((int)(short)*(unsigned int *)(param_1 + 0xcc),0), temp_v1 != 0)) {
      asdModelSlotSetColor((int)(short)*(unsigned int *)(param_1 + 0xcc),0);
      return;
    }
  }
  return;
}

} /* extern "C" */
