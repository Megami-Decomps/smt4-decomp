/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035606c` (_code @ 0x35606c, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int *DAT_004d4340; /* 0x4d4340 */
extern int DAT_004d4348; /* 0x4d4348 */
extern unsigned int DAT_004d434c; /* 0x4d434c */

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_0035606c(int *param_1)

{
  (**(romwright_code **)(*param_1 + 0x34))(param_1);
  nn_os_CriticalSection_Enter((unsigned int)&DAT_004d434c);
  *param_1 = (int)DAT_004d4340;
  DAT_004d4348 = DAT_004d4348 - 1;
  DAT_004d4340 = param_1;
  nn_os_CriticalSection_Leave((unsigned int)&DAT_004d434c);
  return;
}

} /* extern "C" */
