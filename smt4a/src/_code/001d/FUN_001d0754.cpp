/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d0754` (_code @ 0x1d0754, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a0990(unsigned int *);
int nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryEnqueue(int, int);
int nw_ut_internal_LinkListImpl_insert(int, int, unsigned int *, unsigned int, unsigned int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_001a0990. */
extern int FUN_001b1998(void);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
/* Supplied declaration required: nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryEnqueue. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


void FUN_001d0754(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int unaff_r4;
  
  param_1[0x15] = 0;
  param_1[0x1f] = (unsigned int)param_1;
  param_1[0x20] = (unsigned int)param_1;
  *param_1 = param_1[5];
  temp_v0 = FUN_001b1998();
  nn_os_CriticalSection_Enter(temp_v0 + 0x2c);
  FUN_001a0990(param_1 + 0x1c);
  *(unsigned char *)(param_1 + 0x1e) = 1;
  nw_ut_internal_LinkListImpl_insert(temp_v0 + 0xc,temp_v0 + 0x10,param_1 + 0x1a,param_4,unaff_r4);
  nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryEnqueue(temp_v0 + 0x38,0);
  nn_os_CriticalSection_Leave(temp_v0 + 0x2c);
  return;
}

} /* extern "C" */
