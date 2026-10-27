/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003784a4` (_code @ 0x3784a4, 0x168 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int soundPlayerPlayItem(unsigned int, unsigned int, int, int, int, int, int);
int FUN_002b4ee4(...);
int soundObjectPostByte09(...);
int FUN_0037a05c(int, int, int, int, unsigned int, int, unsigned int, unsigned int);
int soundVoicePostRequestBlock(int, unsigned int, unsigned int, unsigned int);
int VectorSignedToFloat(unsigned int, int);
int nw_snd_internal_BasicSound_SetInitialVolume(int);

/* stack frame of param_7: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_7_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: soundPlayerPlayItem. */
/* Supplied declaration required: FUN_002b4ee4. */
/* Supplied declaration required: soundObjectPostByte09. */
/* Supplied declaration required: FUN_0037a05c. */
/* Supplied declaration required: soundVoicePostRequestBlock. */
/* Supplied declaration required: nw_snd_internal_BasicSound_SetInitialVolume. */


unsigned int
FUN_003784a4(int param_1,int param_2,unsigned int *param_3,unsigned short *param_4,char *param_5,
            int param_6,unsigned int param_7)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int in_fpscr;
  
  if (*(char *)(param_4 + 2) == '\x01') {
    temp_v1 = 0;
  }
  else {
    if (*(char *)(param_4 + 2) != '\x02') {
      return 0xff;
    }
    temp_v1 = 1;
  }
  temp_v0 = 0;
  temp_v3 = 0;
  if (param_5 != (char *)0x0) {
    temp_v0 = (int)*param_5;
  }
  temp_v2 = 0xffffffff;
  if (param_5 != (char *)0x0 && temp_v0 != 0) {
    temp_v3 = *(unsigned int *)(param_5 + 4);
    temp_v2 = *(unsigned int *)(param_5 + 8);
  }
  FUN_0037a05c(param_2,param_1 + 0x88,param_4[1],*param_4,temp_v1,temp_v0,temp_v3,temp_v2);
  if (param_6 == 0) {
    temp_v1 = 1;
  }
  else if ((param_6 != 1) && (param_6 == 2)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 0;
    param_7 = 0;
  }
  if ((*(int *)(param_2 + 0x2bcc) != 0) && (*(int *)(param_2 + 0x2bd0) != 0)) {
    temp_v3 = *(unsigned int *)(param_1 + 4);
    soundPlayerPlayItem(temp_v3,*param_3,param_2 + 0x29c8,0x200,*(int *)(param_2 + 0x2bcc),
                 *(int *)(param_2 + 0x2bd0),1);
  }
  else {
    temp_v3 = *(unsigned int *)(param_1 + 4);
    soundPlayerPlayItem(temp_v3,*param_3,param_2 + 0x29c8,0x200,0,0,1);
  }
  soundVoicePostRequestBlock(param_2,temp_v1,param_7,temp_v3);
  VectorSignedToFloat(param_3[4],(unsigned char)(in_fpscr >> 0x16) & 3);
  nw_snd_internal_BasicSound_SetInitialVolume(param_2);
  soundObjectPostByte09(param_2,*(unsigned char *)(param_3 + 5));
  FUN_002b4ee4(param_2,*(unsigned char *)((int)param_3 + 0x15));
  return 0;
}

} /* extern "C" */
