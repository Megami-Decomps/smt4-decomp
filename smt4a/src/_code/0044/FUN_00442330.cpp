/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00442330` (_code @ 0x442330, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00426204(void);
int FUN_004428c0(int, unsigned int, int, int, unsigned int, unsigned int);

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_6_stack;

extern unsigned char DAT_00589380; /* 0x589380 */
extern unsigned int g_moduleCriticalSection8; /* 0x62d2a4 */

/* Supplied declaration required: FUN_00426204. */
extern unsigned int *FUN_00442280(void);
/* Supplied declaration required: FUN_004428c0. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_00442330(int *param_1,unsigned int param_2,int param_3,int param_4,unsigned int param_5,
                 unsigned int param_6)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char temp_v0;
  
  puVar1 = &g_moduleCriticalSection8;
  nn_os_CriticalSection_Enter((unsigned int)&g_moduleCriticalSection8);
  temp_v0 = (*(int *)((unsigned char *)&DAT_00589380 + 0x4)) != 0;
  nn_os_CriticalSection_Leave((unsigned int)&g_moduleCriticalSection8);
  if ((((temp_v0) || (puVar1 = (unsigned int *)FUN_00442280(), puVar1 != (unsigned int *)0x0)) &&
      (FUN_00426204(), puVar1 != (unsigned int *)0x0)) &&
     (((param_1 != (int *)0x0 && param_3 != 0 && (param_4 != 0)) && (*param_1 != 0)))) {
    FUN_004428c0(*param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

} /* extern "C" */
