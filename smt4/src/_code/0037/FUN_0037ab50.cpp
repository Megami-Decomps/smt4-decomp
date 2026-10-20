/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037ab50` (_code @ 0x37ab50, 0x148 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int listAppendNode(int, int);
int FUN_002b4f64(int, int);
int FUN_00379cfc(int);
int nw_snd_internal_PlayerHeapDataManager_Initialize(int, unsigned int);

extern unsigned char LAB_0037ad88; /* 0x37ad88 */

/* Supplied declaration required: listAppendNode. */
/* Supplied declaration required: FUN_002b4f64. */
extern int FUN_002baed8(void);
extern int nw_snd_internal_driver_SoundThread_GetInstance(void);
/* Supplied declaration required: FUN_00379cfc. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
/* Supplied declaration required: nw_snd_internal_PlayerHeapDataManager_Initialize. */


unsigned char FUN_0037ab50(int param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v5 = *(int *)(param_1 + 4);
  if (temp_v5 != 0) {
    nw_snd_internal_PlayerHeapDataManager_Initialize(param_1 + 0x2c4,*param_2);
    *(int *)(param_1 + 0x284) = param_1 + 0x2c4;
    *(int *)(param_1 + 0x288) = temp_v5;
    *(unsigned char **)(param_1 + 0x28c) = &LAB_0037ad88;
    *(int *)(param_1 + 0x290) = param_1;
    *(unsigned int *)(param_1 + 0x294) = param_2[1];
    *(unsigned int *)(param_1 + 0x298) = *param_2;
    temp_v3 = ((unsigned int *)param_2[2])[1];
    *(unsigned int *)(param_1 + 0x29c) = *(unsigned int *)param_2[2];
    *(unsigned int *)(param_1 + 0x2a0) = temp_v3;
    temp_v3 = ((unsigned int *)param_2[3])[1];
    *(unsigned int *)(param_1 + 0x2a4) = *(unsigned int *)param_2[3];
    *(unsigned int *)(param_1 + 0x2a8) = temp_v3;
    temp_v3 = *(unsigned int *)(param_2[3] + 0xc);
    *(unsigned int *)(param_1 + 0x2ac) = *(unsigned int *)(param_2[3] + 8);
    *(unsigned int *)(param_1 + 0x2b0) = temp_v3;
    temp_v3 = *(unsigned int *)(param_2[3] + 0x14);
    *(unsigned int *)(param_1 + 0x2b4) = *(unsigned int *)(param_2[3] + 0x10);
    *(unsigned int *)(param_1 + 0x2b8) = temp_v3;
    temp_v3 = *(unsigned int *)(param_2[3] + 0x1c);
    *(unsigned int *)(param_1 + 700) = *(unsigned int *)(param_2[3] + 0x18);
    *(unsigned int *)(param_1 + 0x2c0) = temp_v3;
    temp_v3 = param_3[1];
    temp_v4 = param_3[2];
    *(unsigned int *)(param_1 + 0x25c) = *param_3;
    *(unsigned int *)(param_1 + 0x260) = temp_v3;
    *(unsigned int *)(param_1 + 0x264) = temp_v4;
    *(unsigned char *)(param_1 + 0x554) = 1;
    FUN_00379cfc(temp_v5);
    temp_v0 = FUN_002baed8();
    temp_v2 = temp_v0;
    FUN_002b4f64(temp_v0,7);
    *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
    *(unsigned char *)(temp_v2 + 4) = 0x3a;
    *(int *)(temp_v2 + 0x18) = param_1 + 0x268;
    temp_v1 = nw_snd_internal_driver_SoundThread_GetInstance();
    nn_os_CriticalSection_Enter(temp_v1 + 0x1c4);
    temp_v1 = *(int *)(param_1 + 0x528) + 1;
    *(int *)(param_1 + 0x528) = temp_v1;
    *(int *)(temp_v2 + 0x10) = temp_v1;
    *(int *)(temp_v2 + 0x14) = param_1 + 0x528;
    listAppendNode(temp_v0,temp_v2);
    temp_v2 = nw_snd_internal_driver_SoundThread_GetInstance();
    nn_os_CriticalSection_Leave(temp_v2 + 0x1c4);
  }
  return temp_v5 != 0;
}

} /* extern "C" */
