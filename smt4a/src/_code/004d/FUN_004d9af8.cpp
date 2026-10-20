/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d9af8` (_code @ 0x4d9af8, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char DAT_00618824; /* 0x618824 */
extern unsigned char DAT_0061887c; /* 0x61887c */

extern unsigned int nn_fnd_ExpHeapBase_Allocate(unsigned int, unsigned int, int, unsigned char, int, unsigned char);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int FUN_004d9af8(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0061887c);
  temp_v0 = nn_fnd_ExpHeapBase_Allocate((unsigned int)&DAT_00618824,param_2,0x20,0,0,0);
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0061887c);
  return temp_v0;
}

} /* extern "C" */
