/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015d254` (_code @ 0x15d254, 0x12c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e6f14; /* 0x4e6f14 */
extern unsigned char DAT_004e8568; /* 0x4e8568 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0015de30. */
/* Supplied declaration required: FUN_0015dfdc. */
extern int FUN_0015e010(unsigned char *);
/* Supplied declaration required: FUN_002a2a94. */
extern int FUN_002bb274(void);
extern unsigned int FUN_002bb470(void);
/* Supplied declaration required: FUN_002c526c. */
extern int nn_snd_CTR_DspFxManager_GetDspCycles(unsigned int);
/* Supplied declaration required: nn_snd_CTR_MasterManager_ExecuteEffect. */
extern void nn_snd_CTR_VoiceManager_AdjustVoicePlayState(unsigned int, int);


void FUN_0015d254(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v0 = FUN_002bb274();
  if (temp_v0 != 0) {
    temp_v1 = FUN_002bb470();
    temp_v0 = param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131c) * 8;
    temp_v3 = *(unsigned int *)(temp_v0 + 0x12f0);
    temp_v4 = *(unsigned int *)(temp_v0 + 0x12f4);
    if (*(char *)(param_1 + 0x15ac) != '\0') {
      FUN_002a2a94(&DAT_004e6f14,0,temp_v3);
      FUN_002a2a94(&DAT_004e6f14,1,temp_v4);
    }
    nn_snd_CTR_MasterManager_ExecuteEffect(&DAT_004e6f14,0,temp_v3);
    nn_snd_CTR_MasterManager_ExecuteEffect(&DAT_004e6f14,1,temp_v4);
    FUN_0015de30(&DAT_004e8568);
    FUN_0015dfdc(&DAT_004e8568);
    temp_v5 = *(int *)(param_1 + 0x1320);
    temp_v0 = FUN_0015e010(&DAT_004e6f14);
    temp_v2 = nn_snd_CTR_DspFxManager_GetDspCycles(temp_v1);
    nn_snd_CTR_VoiceManager_AdjustVoicePlayState((unsigned int)&DAT_004e8568,(temp_v5 - temp_v0) - temp_v2);
    **(unsigned short **)(param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131e) * 4 + 0x1098) =
         *(unsigned short *)(param_1 + 0x131a);
    *(short *)(param_1 + 0x131a) = *(short *)(param_1 + 0x131a) + 1;
    software_interrupt(0x18);
    if (*(int *)(param_1 + 4) < 0) {
      FUN_002c526c();
    }
    *(unsigned short *)(param_1 + 0x131e) = *(unsigned short *)(param_1 + 0x131a) & 1;
    *(char *)(param_1 + 0x1319) = *(char *)(param_1 + 0x1319) + '\x01';
  }
  return;
}
