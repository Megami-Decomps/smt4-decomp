/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00397cc0` (_code @ 0x397cc0, 0x98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_00291a5c. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002aea7c. */
/* Supplied declaration required: FUN_002aeb2c. */
/* Supplied declaration required: FUN_002b9008. */
/* Supplied declaration required: FUN_002c0128. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c4450. */


void FUN_00397cc0(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  
  FUN_00291a5c();
  if (0 < *(short *)(param_1 + 0x93e)) {
    temp_v0 = 0;
    do {
      FUN_002b9008();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)(param_1 + 0x93e));
    FUN_002c4450(param_1 + 0x820,0x11e,0xffffffff);
    *(unsigned short *)(param_1 + 0x93e) = 0;
  }
  FUN_002aeb2c(0x2e,0);
  FUN_002aea7c(0x2e);
  FUN_002a755c(*(unsigned int *)(param_1 + 0x654));
  FUN_002c4360(*(unsigned int *)(param_1 + 0x650));
  FUN_002c4360(*(unsigned int *)(param_1 + 0x64c));
  FUN_002c0128();
  return;
}
