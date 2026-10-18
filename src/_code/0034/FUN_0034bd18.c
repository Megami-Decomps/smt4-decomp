/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034bd18` (_code @ 0x34bd18, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_004203e0; /* 0x4203e0 */
extern unsigned char DAT_00420598; /* 0x420598 */

/* Supplied declaration required: FUN_0023d188. */
/* Supplied declaration required: FUN_002b2520. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_0034bd18(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00420598;
  if (param_1[6] != 0) {
    FUN_002c4360();
    param_1[6] = 0;
  }
  *param_1 = (unsigned int)&DAT_004203e0;
  if (param_1[2] != 0) {
    FUN_0023d188();
    param_1[2] = 0;
  }
  if (param_1[1] != 0) {
    FUN_002c4360();
    param_1[1] = 0;
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[5] + 4))();
    param_1[5] = 0;
  }
  FUN_002b2520(param_1);
  return;
}
