/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_WaitPipe_15D540` (_code @ 0x15d540, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c526c. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int
nn_snd_CTR_Dspsnd_WaitPipe_15D540
          (int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [8];
  
  nn_os_CriticalSection_Enter((unsigned int)(param_1 + 2));
  temp_v1 = *param_1;
  puVar1 = temp_v2;
  FUN_002c40f8(puVar1,&temp_v1,1,0,param_3,param_4);
  if ((int)puVar1 < 0) {
    FUN_002c526c();
  }
  if (((unsigned int)puVar1 & 0x3ff) != 0x3fe) {
    temp_v0 = 1;
    software_interrupt(0x19);
    if (*param_1 < 0) {
      FUN_002c526c();
    }
    *(char *)((int)param_1 + 0x1319) = *(char *)((int)param_1 + 0x1319) + '\x01';
  }
  else {
    temp_v0 = 0;
  }
  nn_os_CriticalSection_Leave((unsigned int)(param_1 + 2));
  return temp_v0;
}
