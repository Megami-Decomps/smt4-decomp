/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042b558` (_code @ 0x42b558, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int *DAT_0062d370; /* 0x62d370 */
extern int DAT_0062d378; /* 0x62d378 */
extern unsigned int DAT_0062d37c; /* 0x62d37c */

/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


void FUN_0042b558(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  (**(romwright_code **)(*param_1 + 0x34))(param_1);
  nn_os_CriticalSection_Enter(&DAT_0062d37c);
  *param_1 = (int)DAT_0062d370;
  DAT_0062d378 = DAT_0062d378 - 1;
  DAT_0062d370 = param_1;
  nn_os_CriticalSection_Leave(&DAT_0062d37c);
  return;
}
