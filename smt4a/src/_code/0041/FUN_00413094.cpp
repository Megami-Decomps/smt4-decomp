/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00413094` (_code @ 0x413094, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001912cc(...);
int rt_vec_dtor(...);
int nw_snd_internal_FrameHeap_Clear(...);
int nw_snd_internal_FrameHeap_Destroy(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int soundHandleDetachReturn(...); /* 0x45b830 */
extern unsigned char DAT_0055c3f4; /* 0x55c3f4 */

extern unsigned int FUN_00175678(void);
extern unsigned int FUN_001911a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001912cc. */
/* Supplied declaration required: rt_vec_dtor. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
/* Supplied declaration required: nw_snd_internal_FrameHeap_Clear. */
/* Supplied declaration required: nw_snd_internal_FrameHeap_Destroy. */
extern int nw_snd_internal_FrameHeap_FrameHeap_sub_object_3802B0(unsigned int *);


int FUN_00413094(unsigned int *param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  
  rt_vec_dtor(param_1 + 8,soundHandleDetachReturn,4);
  puVar4 = param_1 + 1;
  *param_1 = (unsigned int)&DAT_0055c3f4;
  nn_os_CriticalSection_Enter((unsigned int)puVar4);
  if (param_1[4] != 0) {
    nn_os_CriticalSection_Enter((unsigned int)(param_1 + 1));
    nw_snd_internal_FrameHeap_Clear(param_1 + 4);
    nn_os_CriticalSection_Leave((unsigned int)(param_1 + 1));
    temp_v0 = FUN_00175678();
    temp_v1 = FUN_001911a4(temp_v0,1);
    FUN_001912cc(temp_v0,temp_v1);
    nw_snd_internal_FrameHeap_Destroy(param_1 + 4);
    nn_os_CriticalSection_Leave((unsigned int)puVar4);
  }
  else {
    nn_os_CriticalSection_Leave((unsigned int)puVar4);
  }
  param_1[3] = 0xffffffff;
  temp_v2 = nw_snd_internal_FrameHeap_FrameHeap_sub_object_3802B0(param_1 + 4);
  return temp_v2 - 0x10;
}

} /* extern "C" */
