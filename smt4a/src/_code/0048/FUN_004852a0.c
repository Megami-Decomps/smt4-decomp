/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004852a0` (_code @ 0x4852a0, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00163aa4. */
extern unsigned int FUN_001654d8(int);
/* Supplied declaration required: FUN_00167458. */
/* Supplied declaration required: FUN_004853fc. */


void FUN_004852a0(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_00167458(param_1 + 800,0);
  FUN_00163aa4(param_1 + 0x3ac);
  temp_v0 = FUN_001654d8(param_1 + 800);
  *(unsigned int *)(param_1 + 0xa4) = temp_v0;
  *(unsigned int *)(param_1 + 0xac) = temp_v0;
  if ((*(char *)(param_1 + 0x3aa) != '\0') && (*(char *)(param_1 + 0x436) != '\0')) {
    FUN_004853fc(param_1,2);
    return;
  }
  return;
}
