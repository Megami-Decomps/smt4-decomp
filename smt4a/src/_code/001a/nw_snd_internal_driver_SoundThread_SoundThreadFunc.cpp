/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_SoundThread_SoundThreadFunc` (_code @ 0x1a5f3c, 0x1dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00175678(void);
int FUN_00191330(void);
int FUN_00191548(void);
int FUN_001a611c(int, int *);
int FUN_001afc10(int *);
int FUN_001b1ed8(void);
int FUN_001b1f80(void);
int FUN_001b207c(unsigned char *);
int FUN_001c2484(void);
int nw_snd_internal_DriverCommandManager_ProcessCommand(void);
int nw_snd_internal_driver_VoiceManager_UpdateAllVoices(void);

typedef int romwright_code(...);
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_00646b38; /* 0x646b38 */

/* Supplied declaration required: FUN_00175678. */
/* Supplied declaration required: FUN_00191330. */
/* Supplied declaration required: FUN_00191548. */
/* Supplied declaration required: FUN_001a611c. */
/* Supplied declaration required: FUN_001afc10. */
/* Supplied declaration required: FUN_001b1ed8. */
/* Supplied declaration required: FUN_001b1f80. */
/* Supplied declaration required: FUN_001b207c. */
/* Supplied declaration required: FUN_001c2484. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
/* Supplied declaration required: nw_snd_internal_DriverCommandManager_ProcessCommand. */
/* Supplied declaration required: nw_snd_internal_driver_VoiceManager_UpdateAllVoices. */


void nw_snd_internal_driver_SoundThread_SoundThreadFunc(int param_1)

{
/* irregular: irregular input(s): in_stack_fffffff4; 12 native warning(s); review required */
  unsigned int *puVar1;
  int *piVar2;
  int *piVar3;
  int temp_v0;
  unsigned int uStack_14;
  int temp_v1;
  unsigned int in_stack_fffffff4;
  
  if (*(char *)(param_1 + 0x1f6) == '\x01') {
    temp_v0 = 0;
    uStack_14 = 0;
    FUN_001afc10(&temp_v1);
    temp_v0 = temp_v1;
    if (*(int *)(param_1 + 0x1c0) < *(int *)(param_1 + 0x1bc)) {
      puVar1 = (unsigned int *)(*(int *)(param_1 + 0x1b8) + *(int *)(param_1 + 0x1c0) * 8);
      *puVar1 = temp_v1;
      puVar1[1] = in_stack_fffffff4;
      *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + 1;
    }
    FUN_001a611c(param_1,&temp_v0);
  }
  nn_os_CriticalSection_Enter(param_1 + 0x1c4);
  piVar3 = *(int **)(param_1 + 0x1d4);
  if (*(int **)(param_1 + 0x1d4) != (int *)(param_1 + 0x1d4)) {
    do {
      piVar2 = (int *)*piVar3;
      (**(romwright_code **)(piVar3[-1] + 8))(piVar3 + -1);
      piVar3 = piVar2;
    } while (piVar2 != (int *)(param_1 + 0x1d4));
  }
  piVar3 = *(int **)(param_1 + 0x1e0);
  if (*(int **)(param_1 + 0x1e0) != (int *)(param_1 + 0x1e0)) {
    do {
      piVar2 = (int *)*piVar3;
      (**(romwright_code **)(piVar3[-1] + 0xc))(piVar3 + -1);
      piVar3 = piVar2;
    } while (piVar2 != (int *)(param_1 + 0x1e0));
  }
  FUN_001b207c(&DAT_00646b38);
  FUN_00175678();
  nw_snd_internal_DriverCommandManager_ProcessCommand();
  FUN_00191330();
  nw_snd_internal_DriverCommandManager_ProcessCommand();
  piVar3 = *(int **)(param_1 + 0x1e0);
  if (*(int **)(param_1 + 0x1e0) != (int *)(param_1 + 0x1e0)) {
    do {
      piVar2 = (int *)*piVar3;
      (**(romwright_code **)(piVar3[-1] + 8))(piVar3 + -1);
      piVar3 = piVar2;
    } while (piVar2 != (int *)(param_1 + 0x1e0));
  }
  FUN_00191548();
  FUN_001b1f80();
  FUN_001b1ed8();
  FUN_001c2484();
  nw_snd_internal_driver_VoiceManager_UpdateAllVoices();
  piVar3 = *(int **)(param_1 + 0x1d4);
  if (*(int **)(param_1 + 0x1d4) != (int *)(param_1 + 0x1d4)) {
    do {
      piVar2 = (int *)*piVar3;
      (**(romwright_code **)(piVar3[-1] + 0xc))(piVar3 + -1);
      piVar3 = piVar2;
    } while (piVar2 != (int *)(param_1 + 0x1d4));
  }
  nn_os_CriticalSection_Leave(param_1 + 0x1c4);
  return;
}

} /* extern "C" */
