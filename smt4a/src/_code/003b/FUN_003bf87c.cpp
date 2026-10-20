/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bf87c` (_code @ 0x3bf87c, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGet(int, int);
int dataTableGetCount(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: dataTableGet. */
/* Supplied declaration required: dataTableGetCount. */


void FUN_003bf87c(void)

{
/* irregular: 2 native warning(s); review required */
  dataTableGet(0x49,0);
  dataTableGetCount();
  return;
}

} /* extern "C" */
