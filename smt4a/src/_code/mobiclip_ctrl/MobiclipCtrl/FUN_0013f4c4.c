/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013f4c4` (_code @ 0x13f4c4, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_00617f40; /* 0x617f40 */
extern int DAT_00618100; /* 0x618100 */

/* Supplied declaration required: FUN_00158314. */
/* Supplied declaration required: FUN_0015842c. */
/* Supplied declaration required: FUN_0015a244. */
/* Supplied declaration required: FUN_0016182c. */
/* Supplied declaration required: FUN_0017cdb4. */
/* Supplied declaration required: FUN_0017e050. */


void FUN_0013f4c4(int param_1)

{
/* irregular: 6 native warning(s); review required */
  if (param_1 != 2) {
    FUN_0017e050(0x3fff);
    FUN_0016182c(0x3fff,1);
    FUN_0017cdb4();
  }
  else {
    FUN_0015a244();
  }
  FUN_0015842c(&DAT_00617f40);
  if (DAT_00618100 != 0) {
    FUN_00158314();
    return;
  }
  return;
}
