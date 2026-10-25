/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004422bc` (_code @ 0x4422bc, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00442870(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_00589380; /* 0x589380 */
extern unsigned int g_moduleCriticalSection8; /* 0x62d2a4 */

extern int FUN_00442280(void);
/* Supplied declaration required: FUN_00442870. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_004422bc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  
  nn_os_CriticalSection_Enter((unsigned int)&g_moduleCriticalSection8);
  temp_v1 = (*(int *)((unsigned char *)&DAT_00589380 + 0x4)) != 0;
  nn_os_CriticalSection_Leave((unsigned int)&g_moduleCriticalSection8);
  if (((temp_v1) || (temp_v0 = FUN_00442280(), temp_v0 != 0)) && (param_1 != 0)) {
    FUN_00442870(param_1);
    return;
  }
  return;
}

} /* extern "C" */
