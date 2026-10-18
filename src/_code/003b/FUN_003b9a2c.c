/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b9a2c` (_code @ 0x3b9a2c, 0x120 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002874e4. */
/* Supplied declaration required: FUN_00291a5c. */
/* Supplied declaration required: FUN_00291be8. */
/* Supplied declaration required: FUN_00291c3c. */
/* Supplied declaration required: FUN_00295e48. */
extern int FUN_00295e74(void);
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002aea7c. */
/* Supplied declaration required: FUN_002b85bc. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_003bbbd8. */
/* Supplied declaration required: FUN_003bbd1c. */


void FUN_003b9a2c(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0xd90) != 0) {
    FUN_002a755c();
    *(unsigned int *)(param_1 + 0xd90) = 0;
  }
  if (*(int *)(param_1 + 0xd88) != 0) {
    FUN_002c4360();
    *(unsigned int *)(param_1 + 0xd88) = 0;
  }
  if (*(int *)(param_1 + 0xd8c) != 0) {
    FUN_002c4360();
    *(unsigned int *)(param_1 + 0xd8c) = 0;
  }
  if (*(int *)(param_1 + 0xd84) != 0) {
    FUN_002a755c();
    *(unsigned int *)(param_1 + 0xd84) = 0;
  }
  if (*(int *)(param_1 + 0xd7c) != 0) {
    FUN_002c4360();
    *(unsigned int *)(param_1 + 0xd7c) = 0;
  }
  if (*(int *)(param_1 + 0xd80) != 0) {
    FUN_002c4360();
    *(unsigned int *)(param_1 + 0xd80) = 0;
  }
  FUN_003bbbd8(param_1 + 0x9c);
  FUN_003bbd1c(param_1 + 0xd58);
  FUN_00291c3c();
  temp_v0 = FUN_00295e74();
  if (temp_v0 != 0) {
    FUN_00295e48(0);
  }
  FUN_002b85bc(3);
  FUN_00291a5c();
  FUN_002874e4();
  FUN_00291be8();
  FUN_002aea7c(0x21);
  return;
}
