/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046b148` (_code @ 0x46b148, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016c410(unsigned int);
int FUN_0016c560(unsigned int);

typedef struct fn_0046b148_arg0 fn_0046b148_arg0;
struct fn_0046b148_arg0 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x11d3];
    undefined4 field_0x11d8; /* +0x11d8 */
    undefined4 field_0x11dc; /* +0x11dc */
    undefined4 field_0x11e0; /* +0x11e0 */
    undefined4 field_0x11e4; /* +0x11e4 */
    undefined1 field_0x11e8; /* +0x11e8 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c560. */


void FUN_0046b148(fn_0046b148_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)&param_1->field_0x4 >= 3) {
    FUN_0016c560(DAT_0059dbb4);
    FUN_0016c410(DAT_0059dbb4);
    return;
  }
  return;
}

} /* extern "C" */
