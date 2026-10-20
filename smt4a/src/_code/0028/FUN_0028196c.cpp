/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028196c` (_code @ 0x28196c, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00399540(int, int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_003166c0(void);
/* Supplied declaration required: FUN_00399540. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_0028196c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = param_1 + 0xd28;
  do {
    nn_os_CriticalSection_Enter(temp_v2);
    temp_v0 = *(unsigned int *)(param_1 + 0x90);
    if (temp_v0 - *(int *)(param_1 + 0x94) < 0x20) {
      temp_v1 = FUN_003166c0();
      if (temp_v1 >= 0x21) {
        temp_v1 = 0x20;
      }
      FUN_00399540(0,temp_v1,param_1 + (temp_v0 & 0x1f) * 100 + 0x98);
      *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
      temp_v1 = *(int *)(param_1 + 0x84) + temp_v1;
      *(int *)(param_1 + 0x84) = temp_v1;
      if (*(int *)(param_1 + 0x88) <= temp_v1) {
        nn_os_CriticalSection_Leave(temp_v2);
        return;
      }
    }
    nn_os_CriticalSection_Leave(temp_v2);
  } while( 1 );
}

} /* extern "C" */
