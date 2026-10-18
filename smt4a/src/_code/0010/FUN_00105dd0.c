/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105dd0` (_code @ 0x105dd0, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_00538ae8; /* 0x538ae8 */
extern unsigned char DAT_00538af0; /* 0x538af0 */
extern unsigned char DAT_00538af8; /* 0x538af8 */
extern unsigned char DAT_00538b00; /* 0x538b00 */

/* Supplied declaration required: FUN_002ec728. */
/* Supplied declaration required: FUN_002ecc3c. */


void FUN_00105dd0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_002ec728();
  FUN_002ecc3c(param_1,param_1 + 0x20,&DAT_00538ae8,&DAT_00538af0,param_1 + 0x38);
  FUN_002ecc3c(param_1,param_1 + 0x20,&DAT_00538af8,&DAT_00538b00,param_1 + 0x50);
  return;
}
