/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d9bc8` (_code @ 0x4d9bc8, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned char DAT_00618824; /* 0x618824 */
extern unsigned char DAT_0061887c; /* 0x61887c */

/* Supplied declaration required: FUN_001a1244. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_004d9bc8(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0061887c);
  FUN_001a1244(&DAT_00618824,param_2);
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0061887c);
  return;
}
