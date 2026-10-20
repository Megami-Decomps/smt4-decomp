/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cc084` (_code @ 0x1cc084, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a0990(unsigned int *);
int FUN_001b4a58(unsigned int, int *, int, int, int, int, unsigned int, unsigned int);
int sysMemClear(int, int);
int hasExclusiveAccess(int *);
int nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryEnqueue(int, int);
int nw_ut_internal_LinkListImpl_insert(int, int, unsigned int *);

/* stack frame of param_7: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_7_stack;

extern unsigned char DAT_0055c284; /* 0x55c284 */
extern unsigned int DAT_005c0ad8; /* 0x5c0ad8 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_001a0990. */
extern int FUN_001b1998(void);
/* Supplied declaration required: FUN_001b4a58. */
extern unsigned int *FUN_001b95dc(int);
/* Supplied declaration required: sysMemClear. */
extern void nn_os_CriticalSection_Enter(unsigned int);
/* Supplied declaration required: nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryEnqueue. */
extern int nw_snd_internal_PoolImpl_AllocImpl(int);
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


void FUN_001cc084(int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned char param_7)

{
/* irregular: irregular input(s): in_lr; 7 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int unaff_r4;
  unsigned int *puVar6;
  int *piVar7;
  unsigned int in_lr;
  
  temp_v1 = nw_snd_internal_PoolImpl_AllocImpl(param_1 + 0x90);
  if (temp_v1 == 0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    sysMemClear(temp_v1,0x58);
    puVar6 = (unsigned int *)FUN_001b95dc(temp_v1);
    *puVar6 = (unsigned int)&DAT_0055c284;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
  }
  puVar6[0x13] = param_1;
  puVar6[0xf] = param_3;
  puVar6[0x10] = param_4;
  puVar6[0x11] = param_5;
  *(unsigned char *)(puVar6 + 0x12) = param_7;
  puVar6[6] = param_1;
  if (*(unsigned int *)(param_1 + 0x20) != 0) {
    temp_v2 = *(unsigned int *)(param_1 + 0x20) & 1;
    if (temp_v2 == 1) {
      puVar6[7] = *param_2;
    }
    temp_v4 = (unsigned int)(temp_v2 == 1);
    if (temp_v2 < *(unsigned int *)(param_1 + 0x20)) {
      do {
        puVar6[temp_v4 + 7] = param_2[temp_v4];
        temp_v2 = temp_v2 + 2;
        puVar6[temp_v4 + 8] = param_2[temp_v4 + 1];
        temp_v4 = temp_v4 + 2;
      } while (temp_v2 < *(unsigned int *)(param_1 + 0x20));
    }
  }
  nw_ut_internal_LinkListImpl_insert(param_1 + 0x84,param_1 + 0x88,puVar6 + 0x14);
  temp_v1 = FUN_001b1998();
  piVar7 = (int *)(temp_v1 + 0x2c);
  nn_os_CriticalSection_Enter((unsigned int)piVar7);
  FUN_001a0990(puVar6 + 3);
  *(unsigned char *)(puVar6 + 5) = 1;
  temp_v3 = temp_v1 + (param_6 & 0xff) * 0xc;
  nw_ut_internal_LinkListImpl_insert(temp_v3,temp_v3 + 4,puVar6 + 1);
  nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryEnqueue(temp_v1 + 0x38,0);
  temp_v3 = *(int *)(temp_v1 + 0x34) - 1;
  *(int *)(temp_v1 + 0x34) = temp_v3;
  if (temp_v3 != 0) {
    return;
  }
  *(unsigned int *)(temp_v1 + 0x30) = 0;
  do {
    temp_v3 = *piVar7;
    temp_v1 = -temp_v3;
    temp_v0 = (unsigned char)hasExclusiveAccess(piVar7);
  } while (!temp_v0);
  *piVar7 = temp_v1;
  if (temp_v3 != -1 && 0 < temp_v1) {
    FUN_001b4a58(DAT_005c0ad8,piVar7,0,1,0,0,unaff_r4,in_lr);
  }
  return;
}

} /* extern "C" */
