/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00337f48` (_code @ 0x337f48, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00399768(...);
int FUN_003ba614(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_0059dbe0; /* 0x59dbe0 */
extern int DAT_0059dc00; /* 0x59dc00 */

/* Supplied declaration required: FUN_00399768. */
/* Supplied declaration required: FUN_003ba614. */


void FUN_00337f48(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  if ((*(int *)((unsigned char *)&DAT_0059dbe0 + 0x10)) != 0) {
    FUN_003ba614((*(int *)((unsigned char *)&DAT_0059dbe0 + 0x10)),3);
    (*(int *)((unsigned char *)&DAT_0059dbe0 + 0x10)) = 0;
  }
  if (DAT_0059dc00 != 0) {
    FUN_00399768(DAT_0059dc00,3);
    DAT_0059dc00 = 0;
  }
  FUN_00399768(param_1,3);
  return;
}

} /* extern "C" */
