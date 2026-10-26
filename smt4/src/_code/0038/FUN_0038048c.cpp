/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038048c` (_code @ 0x38048c, 0x104 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int listAppendNode(int, int);
int FUN_002b4f64(int, int);
int soundStreamPostConsumed(int);
int nw_snd_internal_PlayerHeapDataManager_Initialize(int, unsigned int);

extern unsigned char LAB_00380684; /* 0x380684 */

/* Supplied declaration required: listAppendNode. */
/* Supplied declaration required: FUN_002b4f64. */
extern int FUN_002baed8(void);
extern int _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(void);
/* Supplied declaration required: soundStreamPostConsumed. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
/* Supplied declaration required: nw_snd_internal_PlayerHeapDataManager_Initialize. */


unsigned char FUN_0038048c(int param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  
  temp_v6 = *(int *)(param_1 + 4);
  if (temp_v6 != 0) {
    nw_snd_internal_PlayerHeapDataManager_Initialize(param_1 + 0x1d8,*param_2);
    *(int *)(param_1 + 0x1b4) = param_1 + 0x1d8;
    *(int *)(param_1 + 0x1b8) = temp_v6;
    *(unsigned char **)(param_1 + 0x1bc) = &LAB_00380684;
    *(int *)(param_1 + 0x1c0) = param_1;
    *(unsigned int *)(param_1 + 0x1c4) = param_2[1];
    *(unsigned int *)(param_1 + 0x1c8) = *param_2;
    temp_v3 = ((unsigned int *)param_2[2])[1];
    *(unsigned int *)(param_1 + 0x1cc) = *(unsigned int *)param_2[2];
    *(unsigned int *)(param_1 + 0x1d0) = temp_v3;
    *(unsigned int *)(param_1 + 0x1d4) = *param_3;
    temp_v3 = param_3[1];
    temp_v4 = param_3[2];
    temp_v5 = param_3[3];
    temp_v7 = param_3[4];
    *(unsigned int *)(param_1 + 0x43c) = *param_3;
    *(unsigned int *)(param_1 + 0x440) = temp_v3;
    *(unsigned int *)(param_1 + 0x444) = temp_v4;
    *(unsigned int *)(param_1 + 0x448) = temp_v5;
    *(unsigned int *)(param_1 + 0x44c) = temp_v7;
    *(unsigned char *)(param_1 + 0x45c) = 1;
    soundStreamPostConsumed(temp_v6);
    temp_v0 = FUN_002baed8();
    temp_v2 = temp_v0;
    FUN_002b4f64(temp_v0,7);
    *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
    *(unsigned char *)(temp_v2 + 4) = 0x3b;
    *(int *)(temp_v2 + 0x18) = param_1 + 0x198;
    temp_v1 = _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv();
    nn_os_CriticalSection_Enter(temp_v1 + 0x1c4);
    temp_v1 = *(int *)(param_1 + 0x458) + 1;
    *(int *)(param_1 + 0x458) = temp_v1;
    *(int *)(temp_v2 + 0x10) = temp_v1;
    *(int *)(temp_v2 + 0x14) = param_1 + 0x458;
    listAppendNode(temp_v0,temp_v2);
    temp_v2 = _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv();
    nn_os_CriticalSection_Leave(temp_v2 + 0x1c4);
  }
  return temp_v6 != 0;
}

} /* extern "C" */
