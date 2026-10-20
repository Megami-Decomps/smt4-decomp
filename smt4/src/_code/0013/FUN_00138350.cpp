/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138350` (_code @ 0x138350, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00128110(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00128110. */
extern void nn_os_ThreadLocalStorage_ClearAllSlots(void);


unsigned int FUN_00138350(void)

{
/* irregular: 1 native warning(s); review required */
  nn_os_ThreadLocalStorage_ClearAllSlots();
  FUN_00128110();
  return 0x3000000;
}

} /* extern "C" */
