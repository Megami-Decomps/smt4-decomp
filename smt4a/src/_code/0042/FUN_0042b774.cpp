/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042b774` (_code @ 0x42b774, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0042c130(int *);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int *DAT_0062d3ac; /* 0x62d3ac */
extern int DAT_0062d3b4; /* 0x62d3b4 */
extern unsigned int DAT_0062d3b8; /* 0x62d3b8 */

/* Supplied declaration required: FUN_0042c130. */
extern unsigned int FUN_0050096c(int *);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_0042b774(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_4;
  if (param_1[1] != 0) {
    temp_v0 = FUN_0050096c(param_1);
    FUN_0042c130(&temp_v0);
  }
  (**(romwright_code **)(*param_1 + 0x34))(param_1);
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0062d3b8);
  *param_1 = (int)DAT_0062d3ac;
  DAT_0062d3b4 = DAT_0062d3b4 - 1;
  DAT_0062d3ac = param_1;
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d3b8);
  return;
}

} /* extern "C" */
