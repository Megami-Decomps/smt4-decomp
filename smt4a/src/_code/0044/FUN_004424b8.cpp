/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004424b8` (_code @ 0x4424b8, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00426204(void);
int FUN_00442a24(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_00589380; /* 0x589380 */
extern unsigned int g_moduleCriticalSection8; /* 0x62d2a4 */

/* Supplied declaration required: FUN_00426204. */
extern unsigned int *FUN_00442280(void);
/* Supplied declaration required: FUN_00442a24. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_004424b8(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char temp_v0;
  
  puVar1 = &g_moduleCriticalSection8;
  nn_os_CriticalSection_Enter((unsigned int)&g_moduleCriticalSection8);
  temp_v0 = (*(int *)((unsigned char *)&DAT_00589380 + 0x4)) != 0;
  nn_os_CriticalSection_Leave((unsigned int)&g_moduleCriticalSection8);
  if ((((temp_v0) || (puVar1 = (unsigned int *)FUN_00442280(), puVar1 != (unsigned int *)0x0)) &&
      (FUN_00426204(), puVar1 != (unsigned int *)0x0)) && ((param_1 != (int *)0x0 && (*param_1 != 0)))
     ) {
    FUN_00442a24(*param_1);
    return;
  }
  return;
}

} /* extern "C" */
