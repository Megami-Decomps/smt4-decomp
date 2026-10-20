/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_detail_OpenSession` (_code @ 0x18b868, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015ac90(void);
int FUN_002e3140(void);
int software_interrupt(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_005b4470; /* 0x5b4470 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0015ac90. */
/* Supplied declaration required: FUN_002e3140. */


void nn_applet_CTR_detail_OpenSession(void)

{
/* irregular: 3 native warning(s); review required */
  if (DAT_005b4470 != 0) {
    software_interrupt(0x24);
    if (DAT_005b4470 < 0) {
      FUN_002e3140();
    }
  }
  FUN_0015ac90();
  return;
}

} /* extern "C" */
