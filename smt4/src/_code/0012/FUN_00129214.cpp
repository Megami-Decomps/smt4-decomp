/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129214` (_code @ 0x129214, 0x15c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013a23c(int);
int FUN_0013a668(unsigned char *);
int FUN_0013a864(void);
int FUN_0013ab10(unsigned char *);
int FUN_002b5820(int [2], int);
int FUN_002b5954(void);
int FUN_002bb470(void);
int nn_os_CriticalSection_Initialize(int *);
int FUN_002c526c(void);
int software_interrupt(int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char g_nnSndVoiceManager; /* 0x4e8568 */
extern unsigned char g_nnSndMasterManagerImpl; /* 0x4ead10 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_0013a23c. */
extern int FUN_0013a268(int *);
extern int FUN_0013a294(int, unsigned int);
/* Supplied declaration required: FUN_0013a668. */
/* Supplied declaration required: FUN_0013a864. */
/* Supplied declaration required: FUN_0013ab10. */
/* Supplied declaration required: FUN_002b5820. */
/* Supplied declaration required: FUN_002b5954. */
extern int nn_snd_CTR_Dspsnd_IsInitialized(void);
/* Supplied declaration required: FUN_002bb470. */
/* Supplied declaration required: nn_os_CriticalSection_Initialize. */
/* Supplied declaration required: FUN_002c526c. */
extern void nn_snd_CTR_Dspsnd_InitializeVariables(unsigned int, unsigned char);


int FUN_00129214(int *param_1,int param_2)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1 [2];
  int temp_v2 [3];
  
  piVar2 = temp_v1;
  temp_v0 = nn_snd_CTR_Dspsnd_IsInitialized();
  if (temp_v0 == 0) {
    return -0x375f57ff;
  }
  if ((char)param_1[0x4c6] == '\0') {
    temp_v1[0] = 0;
    FUN_002b5820(temp_v1,1);
    if (-1 < (int)piVar2) {
      piVar2 = (int *)0x0;
      *param_1 = temp_v1[0];
    }
    if ((int)piVar2 < 0) {
      FUN_002c526c();
    }
    temp_v0 = FUN_0013a294(*param_1,2);
    if (temp_v0 < 0) {
      if (*param_1 == 0) {
        return temp_v0;
      }
      software_interrupt(0x23);
      *param_1 = 0;
      return temp_v0;
    }
    temp_v2[0] = 0;
    temp_v0 = FUN_0013a268(temp_v2);
    if ((temp_v0 < 0) || (temp_v2[0] == 0)) {
      return temp_v0;
    }
    param_1[1] = temp_v2[0];
    FUN_0013a23c(0x2000);
    nn_os_CriticalSection_Initialize(param_1 + 2);
    nn_snd_CTR_Dspsnd_InitializeVariables((unsigned int)param_1,romwright_subpiece_4_1_0(param_2,0));
    if (param_2 != 0) {
      FUN_0013a668(&g_nnSndVoiceManager);
      FUN_0013ab10(&g_nnSndMasterManagerImpl);
      FUN_002bb470();
      FUN_002b5954();
      FUN_0013a864();
    }
    else {
      *(unsigned char *)(param_1 + 0x56b) = 1;
      param_1[5] = 0;
    }
  }
  return 0;
}

} /* extern "C" */
