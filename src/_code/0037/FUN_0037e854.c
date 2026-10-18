/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037e854` (_code @ 0x37e854, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_00235a08. */
/* Supplied declaration required: FUN_00235ddc. */
/* Supplied declaration required: FUN_002a23fc. */
extern unsigned int FUN_002a2414(void);
/* Supplied declaration required: FUN_002c423c. */
/* Supplied declaration required: FUN_0037e5e0. */


void FUN_0037e854(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    temp_v0 = FUN_002a2414();
    FUN_002a23fc(temp_v0,param_1 + 0x44);
    *(unsigned char *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    if (*(char *)(*(int *)(param_1 + 0x98) + 0xc6) != '\0') {
      FUN_0037e5e0(param_1);
      FUN_00235a08(*(unsigned int *)(param_1 + 0x98));
      if (*(int *)(param_1 + 0x98) == 0) {
        *(unsigned int *)(param_1 + 0x98) = 0;
        FUN_002c423c(param_1);
        return;
      }
    }
    FUN_00235ddc(*(unsigned int *)(param_1 + 0x98));
  }
  *(unsigned int *)(param_1 + 0x98) = 0;
  FUN_002c423c(param_1);
  return;
}
