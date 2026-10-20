/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001042b8` (_code @ 0x1042b8, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011d100(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_004e4138; /* 0x4e4138 */

/* Supplied declaration required: FUN_0011d100. */
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_001042b8(void)

{
/* irregular: 1 native warning(s); review required */
  nn_os_CriticalSection_Leave((unsigned int)&DAT_004e4138);
  FUN_0011d100();
  return;
}

} /* extern "C" */
