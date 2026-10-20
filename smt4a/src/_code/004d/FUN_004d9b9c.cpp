/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d9b9c` (_code @ 0x4d9b9c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char DAT_0061887c; /* 0x61887c */

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_004d9b9c(void)

{
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0061887c);
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0061887c);
  return;
}

} /* extern "C" */
