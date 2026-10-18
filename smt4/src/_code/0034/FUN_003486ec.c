/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003486ec` (_code @ 0x3486ec, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_00420798; /* 0x420798 */
extern unsigned char DAT_00420840; /* 0x420840 */

/* Supplied declaration required: FUN_0023d02c. */
/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c6a10. */


void FUN_003486ec(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00420840;
  if (param_1[0x19] != 0) {
    FUN_002c6a10();
    param_1[0x19] = 0;
  }
  *param_1 = (unsigned int)&DAT_00420798;
  if (param_1[2] != 0) {
    FUN_0023d02c();
    param_1[2] = 0;
  }
  if (param_1[1] != 0) {
    FUN_002c415c();
    param_1[1] = 0;
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[5] + 4))();
    param_1[5] = 0;
  }
  FUN_002b2368(param_1);
  return;
}
