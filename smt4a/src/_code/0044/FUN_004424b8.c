/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004424b8` (_code @ 0x4424b8, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_00589384; /* 0x589384 */
extern unsigned int DAT_0062d2a4; /* 0x62d2a4 */

/* Supplied declaration required: FUN_00426204. */
extern int FUN_00442280(void);
/* Supplied declaration required: FUN_00442a24. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
extern int nn_os_CriticalSection_Leave(unsigned int *);


void FUN_004424b8(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  
  nn_os_CriticalSection_Enter(&DAT_0062d2a4);
  temp_v1 = DAT_00589384 != 0;
  temp_v0 = nn_os_CriticalSection_Leave(&DAT_0062d2a4);
  if ((((temp_v1) || (temp_v0 = FUN_00442280(), temp_v0 != 0)) && (FUN_00426204(), temp_v0 != 0)) &&
     ((param_1 != (int *)0x0 && (*param_1 != 0)))) {
    FUN_00442a24(*param_1);
    return;
  }
  return;
}
