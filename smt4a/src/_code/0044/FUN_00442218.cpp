/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00442218` (_code @ 0x442218, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004427bc(int *, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_00589380; /* 0x589380 */
extern unsigned int DAT_0062d2a4; /* 0x62d2a4 */

extern int FUN_00442280(void);
/* Supplied declaration required: FUN_004427bc. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int
FUN_00442218(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  
  temp_v2 = param_4;
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0062d2a4);
  temp_v1 = (*(int *)((unsigned char *)&DAT_00589380 + 0x4)) == 0;
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d2a4);
  if ((temp_v1) && (temp_v0 = FUN_00442280(), temp_v0 == 0)) {
    return 0;
  }
  temp_v2 = 0;
  FUN_004427bc(&temp_v2,*param_1);
  return temp_v2;
}

} /* extern "C" */
