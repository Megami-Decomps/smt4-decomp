/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b6c8` (_code @ 0x11b6c8, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int software_interrupt(int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned long long FUN_002b5c50(long long *, unsigned int, unsigned int, unsigned int, unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int FUN_0011b6c8(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned long long temp_v1;
  long long temp_v2;
  
  if (*(int *)(param_1 + 0xc) == 6) {
    temp_v0 = 1;
  }
  else if (*(int *)(param_1 + 0xc) != 3) {
    temp_v0 = 0;
  }
  else {
    software_interrupt(0x28);
    temp_v2 = (((unsigned long long)
                 (unsigned int)(((int)param_2 >> 0x1f) * -0x452cb512 +
                       (int)((unsigned long long)param_2 * 0xbad34aee >> 0x20)) << 0x20) |
               (((unsigned long long)param_2 * 0xbad34aee) & 0xffffffff)) + 9 + romwright_piece_4_4(param_2 * 3,2);
    temp_v1 = FUN_002b5c50(&temp_v2,7,0xe353f7cf,0x20c49ba5,7);
    *(unsigned long long *)(param_1 + 0x150) = temp_v1;
    nn_os_CriticalSection_Enter(param_1);
    *(unsigned int *)(param_1 + 0xc) = 6;
    nn_os_CriticalSection_Leave(param_1);
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
