/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d854c` (_code @ 0x4d854c, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int controllerSetPosition(unsigned int);
int FUN_003fd7b4(unsigned int);
int FUN_003fd7c0(unsigned int, int, int);
int FUN_003fd924(unsigned int, int, int);
int FUN_003fdb18(unsigned int);
int FUN_0040aad4(int, int);
int FUN_0040ace8(unsigned int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int g_handleRegistry; /* 0x56fcc0 */

/* Supplied declaration required: controllerSetPosition. */
/* Supplied declaration required: FUN_003fd7b4. */
/* Supplied declaration required: FUN_003fd7c0. */
/* Supplied declaration required: FUN_003fd924. */
/* Supplied declaration required: FUN_003fdb18. */
/* Supplied declaration required: FUN_0040aad4. */
/* Supplied declaration required: FUN_0040ace8. */


void FUN_004d854c(int *param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_0040aad4(*param_1,0);
  temp_v0 = *(unsigned int *)(*param_1 + 4);
  if (*param_1 != 0) {
    FUN_003fd924(temp_v0,0,1);
  }
  if (*param_1 != 0) {
    FUN_003fd7c0(*(unsigned int *)(*param_1 + 4),0,2);
  }
  if (*param_1 != 0) {
    controllerSetPosition(*(unsigned int *)(*param_1 + 4));
  }
  if (*param_1 != 0) {
    FUN_003fd7b4(*(unsigned int *)(*param_1 + 4));
  }
  if (*param_1 != 0) {
    FUN_003fdb18(*(unsigned int *)(*param_1 + 4));
  }
  FUN_0040ace8(g_handleRegistry,temp_v0);
  return;
}

} /* extern "C" */
