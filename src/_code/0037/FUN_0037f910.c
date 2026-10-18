/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037f910` (_code @ 0x37f910, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002a23fc. */
extern unsigned int FUN_002a2414(void);
/* Supplied declaration required: FUN_002c423c. */
/* Supplied declaration required: FUN_0037b350. */
/* Supplied declaration required: FUN_0037bf28. */
/* Supplied declaration required: FUN_0037f770. */


void FUN_0037f910(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  *(unsigned char *)(param_1 + 0xf) = 1;
  FUN_0037f770(param_1);
  if (*(char *)(param_1 + 0xc) != '\0') {
    temp_v0 = FUN_002a2414();
    FUN_002a23fc(temp_v0,param_1 + 0x44);
    *(unsigned char *)(param_1 + 0xc) = 0;
  }
  temp_v1 = 0;
  do {
    FUN_0037b350(param_1 + temp_v1 * 0xc + 0x130);
    FUN_0037bf28(param_1 + temp_v1 * 0x10 + 0xf0);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  FUN_002c423c(param_1);
  return;
}
