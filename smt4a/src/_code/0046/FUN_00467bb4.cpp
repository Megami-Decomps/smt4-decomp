/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00467bb4` (_code @ 0x467bb4, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e3328(void);
int FUN_00467a6c(void);
int FUN_00467bac(unsigned int *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_0055c618; /* 0x55c618 */

/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_00467a6c. */
/* Supplied declaration required: FUN_00467bac. */


void FUN_00467bb4(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055c618;
  if (param_1[1] != 0) {
    FUN_00467a6c();
  }
  FUN_00467bac(param_1);
  FUN_002e3328();
  return;
}

} /* extern "C" */
