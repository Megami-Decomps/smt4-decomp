/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00398b80` (_code @ 0x398b80, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_00297178. */
/* Supplied declaration required: FUN_002b9220. */
extern unsigned int FUN_002bef7c(int);
/* Supplied declaration required: FUN_002bf9f0. */


void FUN_00398b80(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_002b9220(param_1 + 0x708,0);
  FUN_002bf9f0();
  temp_v0 = FUN_002bef7c(param_1 + 0x708);
  *(unsigned int *)(param_1 + 0xa4) = temp_v0;
  *(unsigned int *)(param_1 + 0xac) = temp_v0;
  if ((*(char *)(param_1 + 0x792) != '\0') && (*(char *)(param_1 + 0x81e) != '\0')) {
    FUN_00297178(param_1,2);
    return;
  }
  return;
}
