/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b128` (_code @ 0x38b128, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b2368(unsigned int *);
int FUN_002ba8f4(int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern int g_aocMain; /* 0x432fc8 */

/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: FUN_002ba8f4. */


void FUN_0038b128(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = param_2;
  FUN_002ba8f4(g_aocMain + 0x88);
  FUN_002b2368(param_1);
  return;
}

} /* extern "C" */
