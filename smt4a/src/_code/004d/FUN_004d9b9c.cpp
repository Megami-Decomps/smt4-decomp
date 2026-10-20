/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d9b9c` (_code @ 0x4d9b9c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char DAT_00618824; /* 0x618824 */

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_004d9b9c(void)

{
  nn_os_CriticalSection_Enter((unsigned int)&(*(unsigned char *)((unsigned char *)&DAT_00618824 + 0x58)));
  nn_os_CriticalSection_Leave((unsigned int)&(*(unsigned char *)((unsigned char *)&DAT_00618824 + 0x58)));
  return;
}

} /* extern "C" */
