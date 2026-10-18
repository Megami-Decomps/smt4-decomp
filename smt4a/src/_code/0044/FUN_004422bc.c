/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004422bc` (_code @ 0x4422bc, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_00589384; /* 0x589384 */
extern unsigned int DAT_0062d2a4; /* 0x62d2a4 */

extern int FUN_00442280(void);
extern unsigned int FUN_00442870(int);
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


unsigned int FUN_004422bc(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  nn_os_CriticalSection_Enter(&DAT_0062d2a4);
  temp_v2 = DAT_00589384 == 0;
  nn_os_CriticalSection_Leave(&DAT_0062d2a4);
  if ((temp_v2) && (temp_v0 = FUN_00442280(), temp_v0 == 0)) {
    temp_v1 = 0xd8a0c7f8;
  }
  else {
    if (param_1 != 0) {
      temp_v1 = FUN_00442870(param_1);
      return temp_v1;
    }
    temp_v1 = 0xe0e0c7f6;
  }
  return temp_v1;
}
