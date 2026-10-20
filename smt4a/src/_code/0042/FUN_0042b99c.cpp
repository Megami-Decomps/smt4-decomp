/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042b99c` (_code @ 0x42b99c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0042c278(int *);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int *DAT_0062d3e8; /* 0x62d3e8 */
extern int DAT_0062d3f0; /* 0x62d3f0 */
extern unsigned int DAT_0062d3f4; /* 0x62d3f4 */

/* Supplied declaration required: FUN_0042c278. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_0042b99c(int *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_1[1];
  temp_v0 = param_4;
  if (temp_v1 != 0) {
    FUN_0042c278(&temp_v1);
    temp_v0 = temp_v1;
  }
  temp_v1 = temp_v0;
  (**(romwright_code **)(*param_1 + 0x10))(param_1);
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0062d3f4);
  *param_1 = (int)DAT_0062d3e8;
  DAT_0062d3f0 = DAT_0062d3f0 - 1;
  DAT_0062d3e8 = param_1;
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d3f4);
  return;
}

} /* extern "C" */
