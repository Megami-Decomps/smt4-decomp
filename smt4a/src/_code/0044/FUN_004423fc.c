/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004423fc` (_code @ 0x4423fc, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern int DAT_00589384; /* 0x589384 */
extern unsigned int DAT_0062d2a4; /* 0x62d2a4 */

/* Supplied declaration required: FUN_00426204. */
extern int FUN_00442280(void);
/* Supplied declaration required: FUN_00442994. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
extern int nn_os_CriticalSection_Leave(unsigned int *);


void FUN_004423fc(int *param_1,unsigned int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  
  nn_os_CriticalSection_Enter(&DAT_0062d2a4);
  temp_v1 = DAT_00589384 != 0;
  temp_v0 = nn_os_CriticalSection_Leave(&DAT_0062d2a4);
  if ((((temp_v1) || (temp_v0 = FUN_00442280(), temp_v0 != 0)) && (FUN_00426204(), temp_v0 != 0)) &&
     ((param_1 != (int *)0x0 && param_3 != 0 && (*param_1 != 0)))) {
    FUN_00442994(*param_1,param_2,param_3,param_4,param_5);
  }
  return;
}
