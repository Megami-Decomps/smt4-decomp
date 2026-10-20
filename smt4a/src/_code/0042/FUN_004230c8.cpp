/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004230c8` (_code @ 0x4230c8, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001afdc4(void);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int *DAT_005880d4; /* 0x5880d4 */
extern int DAT_005880d8; /* 0x5880d8 */
extern unsigned int DAT_005880e4; /* 0x5880e4 */
extern unsigned int DAT_00618518; /* 0x618518 */

/* Supplied declaration required: FUN_001afdc4. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_004230c8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  
  if (param_1 < DAT_005880e4) {
    nn_os_CriticalSection_Enter((unsigned int)&DAT_00618518);
    piVar1 = (int *)(DAT_005880d8 + param_1 * 0x70);
    if (*piVar1 != 0) {
      FUN_001afdc4();
      *piVar1 = 0;
    }
    if (piVar1[1] != 0) {
      (**(romwright_code **)(*DAT_005880d4 + 4))();
      piVar1[1] = 0;
    }
    nn_os_CriticalSection_Leave((unsigned int)&DAT_00618518);
    return;
  }
  return;
}

} /* extern "C" */
