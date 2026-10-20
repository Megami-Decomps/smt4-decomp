/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00409f80` (_code @ 0x409f80, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(void);
int FUN_002a1ca0(void);
int FUN_002e3328(unsigned int *);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_00557bf0; /* 0x557bf0 */

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002a1ca0. */
/* Supplied declaration required: FUN_002e3328. */


void FUN_00409f80(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00557bf0;
  if (param_1[2] != 0) {
    FUN_002a1ca0();
    param_1[2] = 0;
  }
  if (param_1[1] != 0) {
    FUN_0019a5a0();
    param_1[1] = 0;
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[5] + 4))();
    param_1[5] = 0;
  }
  FUN_002e3328(param_1);
  return;
}

} /* extern "C" */
