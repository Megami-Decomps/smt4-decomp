/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003406b4` (_code @ 0x3406b4, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_00376974(); /* 0x376974 */
extern unsigned char DAT_00421f5c; /* 0x421f5c */

/* Supplied declaration required: FUN_002b4b94. */
extern unsigned int FUN_002bad74(unsigned int, unsigned int);
extern unsigned int FUN_002baed8(void);
/* Supplied declaration required: FUN_002c66cc. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */
/* Supplied declaration required: nw_snd_internal_FrameHeap_Clear. */
/* Supplied declaration required: nw_snd_internal_FrameHeap_Destroy. */
extern int nw_snd_internal_FrameHeap_FrameHeap_sub_object_3802B0(unsigned int *);


int FUN_003406b4(unsigned int *param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  
  FUN_002c66cc(param_1 + 8,FUN_00376974,4,8);
  puVar4 = param_1 + 1;
  *param_1 = (unsigned int)&DAT_00421f5c;
  nn_os_CriticalSection_Enter(puVar4);
  if (param_1[4] != 0) {
    nn_os_CriticalSection_Enter(param_1 + 1);
    nw_snd_internal_FrameHeap_Clear(param_1 + 4);
    nn_os_CriticalSection_Leave(param_1 + 1);
    temp_v0 = FUN_002baed8();
    temp_v1 = FUN_002bad74(temp_v0,1);
    FUN_002b4b94(temp_v0,temp_v1);
    nw_snd_internal_FrameHeap_Destroy(param_1 + 4);
    nn_os_CriticalSection_Leave(puVar4);
  }
  else {
    nn_os_CriticalSection_Leave(puVar4);
  }
  param_1[3] = 0xffffffff;
  temp_v2 = nw_snd_internal_FrameHeap_FrameHeap_sub_object_3802B0(param_1 + 4);
  return temp_v2 - 0x10;
}
