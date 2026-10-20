/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cd6bc` (_code @ 0x1cd6bc, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001cd448(unsigned char *, int, unsigned int);
int FUN_001d14c0(unsigned char *);
int FUN_001d166c(unsigned char *);
int FUN_002e3140(void);
int nn_snd_CTR_MasterManager_ExecuteEffect(unsigned char *, int, unsigned int);
int software_interrupt(int);

extern unsigned char DAT_00643380; /* 0x643380 */
extern unsigned char DAT_006449d0; /* 0x6449d0 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern unsigned int FUN_001bd5f8(void);
extern int FUN_001c6e20(void);
/* Supplied declaration required: FUN_001cd448. */
/* Supplied declaration required: FUN_001d14c0. */
/* Supplied declaration required: FUN_001d166c. */
extern int FUN_001d16a0(unsigned char *);
/* Supplied declaration required: FUN_002e3140. */
extern int nn_snd_CTR_DspFxManager_GetDspCycles(unsigned int);
/* Supplied declaration required: nn_snd_CTR_MasterManager_ExecuteEffect. */
extern void nn_snd_CTR_VoiceManager_AdjustVoicePlayState(unsigned int, int);


void FUN_001cd6bc(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v0 = FUN_001c6e20();
  if (temp_v0 != 0) {
    temp_v1 = FUN_001bd5f8();
    temp_v0 = param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131c) * 8;
    temp_v3 = *(unsigned int *)(temp_v0 + 0x12f0);
    temp_v4 = *(unsigned int *)(temp_v0 + 0x12f4);
    if (*(char *)(param_1 + 0x15ac) != '\0') {
      FUN_001cd448(&DAT_00643380,0,temp_v3);
      FUN_001cd448(&DAT_00643380,1,temp_v4);
    }
    nn_snd_CTR_MasterManager_ExecuteEffect(&DAT_00643380,0,temp_v3);
    nn_snd_CTR_MasterManager_ExecuteEffect(&DAT_00643380,1,temp_v4);
    FUN_001d14c0(&DAT_006449d0);
    FUN_001d166c(&DAT_006449d0);
    temp_v5 = *(int *)(param_1 + 0x1320);
    temp_v0 = FUN_001d16a0(&DAT_00643380);
    temp_v2 = nn_snd_CTR_DspFxManager_GetDspCycles(temp_v1);
    nn_snd_CTR_VoiceManager_AdjustVoicePlayState((unsigned int)&DAT_006449d0,(temp_v5 - temp_v0) - temp_v2);
    **(unsigned short **)(param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131e) * 4 + 0x1098) =
         *(unsigned short *)(param_1 + 0x131a);
    *(short *)(param_1 + 0x131a) = *(short *)(param_1 + 0x131a) + 1;
    software_interrupt(0x18);
    if (*(int *)(param_1 + 4) < 0) {
      FUN_002e3140();
    }
    *(unsigned short *)(param_1 + 0x131e) = *(unsigned short *)(param_1 + 0x131a) & 1;
    *(char *)(param_1 + 0x1319) = *(char *)(param_1 + 0x1319) + '\x01';
  }
  return;
}

} /* extern "C" */
