/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a92c` (_code @ 0x13a92c, 0x1b4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_snd_CTR_Dspsnd_EnableAuxBus(unsigned char *, int, int);
int nn_snd_CTR_Dspsnd_SetAuxFrontBypass(unsigned char *, int);
int nn_snd_CTR_Dspsnd_SetAuxReturnVolume(unsigned char *, int);
int nn_snd_CTR_Dspsnd_SetClippingMode(unsigned char *, int);
int nn_snd_CTR_Dspsnd_SetSyncMode(unsigned char *);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

extern int FUN_002bb274(unsigned char);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
/* Supplied declaration required: nn_snd_CTR_Dspsnd_EnableAuxBus. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetAuxFrontBypass. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetAuxReturnVolume. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetClippingMode. */
extern void nn_snd_CTR_Dspsnd_SetMasterVolume(unsigned int, float);
extern void nn_snd_CTR_Dspsnd_SetOutputBufferCount(unsigned int, int);
extern unsigned char nn_snd_CTR_Dspsnd_SetRearRatio(unsigned int, unsigned short);
extern unsigned char nn_snd_CTR_Dspsnd_SetSurroundDepth(unsigned int, unsigned short);
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetSyncMode. */


void FUN_0013a92c(char *param_1,float param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  float temp_v2;
  unsigned int temp_v3;
  
  temp_v3 = 0x3f800000;
  if (*param_1 != '\0') {
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = -0x80;
    param_1[7] = '?';
    nn_snd_CTR_Dspsnd_SetMasterVolume((unsigned int)&DAT_004e6f64,param_2);
    param_2 = temp_v2;
  }
  if (*param_1 != '\0') {
    *(unsigned int *)(param_1 + 8) = temp_v3;
    nn_snd_CTR_Dspsnd_SetMasterVolume((unsigned int)&DAT_004e6f64,param_2);
  }
  if (*param_1 != '\0') {
    *(unsigned int *)(param_1 + 0xc) = temp_v3;
    nn_snd_CTR_Dspsnd_SetAuxReturnVolume(&DAT_004e6f64,0);
  }
  if (*param_1 != '\0') {
    *(unsigned int *)(param_1 + 0x10) = temp_v3;
    nn_snd_CTR_Dspsnd_SetAuxReturnVolume(&DAT_004e6f64,1);
  }
  nn_os_CriticalSection_Enter((unsigned int)(param_1 + 0x34));
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  nn_snd_CTR_Dspsnd_EnableAuxBus(&DAT_004e6f64,0,(int)param_1[0x30]);
  nn_os_CriticalSection_Leave((unsigned int)(param_1 + 0x34));
  nn_os_CriticalSection_Enter((unsigned int)(param_1 + 0x34));
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  nn_snd_CTR_Dspsnd_EnableAuxBus(&DAT_004e6f64,1,(int)param_1[0x31]);
  nn_os_CriticalSection_Leave((unsigned int)(param_1 + 0x34));
  param_1[0x24] = '\0';
  nn_snd_CTR_Dspsnd_SetAuxFrontBypass(&DAT_004e6f64,0);
  param_1[0x25] = '\0';
  nn_snd_CTR_Dspsnd_SetAuxFrontBypass(&DAT_004e6f64,1);
  param_1[0x2a] = '\0';
  param_1[0x2b] = -0x80;
  nn_snd_CTR_Dspsnd_SetRearRatio((unsigned int)&DAT_004e6f64,0x8000);
  param_1[0x28] = -1;
  param_1[0x29] = '\x7f';
  temp_v0 = nn_snd_CTR_Dspsnd_SetSurroundDepth((unsigned int)&DAT_004e6f64,0x7fff);
  temp_v1 = FUN_002bb274(temp_v0);
  if (temp_v1 != 0) {
    param_1[1] = '\x01';
    nn_snd_CTR_Dspsnd_SetClippingMode(&DAT_004e6f64,1);
  }
  param_1[0x30] = '\0';
  param_1[0x31] = '\0';
  param_1[0x32] = '\x02';
  param_1[0x33] = '\0';
  nn_snd_CTR_Dspsnd_SetOutputBufferCount((unsigned int)&DAT_004e6f64,2);
  param_1[3] = '\0';
  nn_snd_CTR_Dspsnd_SetSyncMode(&DAT_004e6f64);
  return;
}

} /* extern "C" */
