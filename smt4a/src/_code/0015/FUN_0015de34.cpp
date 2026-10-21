/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015de34` (_code @ 0x15de34, 0x224 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00174b5c(unsigned int, unsigned int, int *);
int FUN_0017561c(unsigned int, int, unsigned int);
int FUN_001757fc(void);
int FUN_00175858(...);
int FUN_00175a38(unsigned int, int, unsigned int);
int FUN_00175a78(unsigned int, unsigned int);
int FUN_00175a88(unsigned char *, int);
int FUN_00175bb8(unsigned int, int, unsigned int);
int FUN_00175c30(unsigned int, unsigned int);
int FUN_00175c3c(void);
int FUN_00175cd8(void);
int FUN_001b1998(void);
int FUN_001b1f04(void);
int nw_snd_internal_TaskManager_Initialize(void);
int nw_snd_internal_driver_SoundThread_SetProfileBuffer(...);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern unsigned char DAT_0059dba4; /* 0x59dba4 */
extern signed char DAT_0059dba5; /* 0x59dba5 */
extern signed char DAT_0059dba6; /* 0x59dba6 */
extern unsigned int DAT_0059dba8; /* 0x59dba8 */
extern int DAT_0059dbac; /* 0x59dbac */
extern unsigned int DAT_0059dbb0; /* 0x59dbb0 */
extern unsigned char DAT_00646b38; /* 0x646b38 */

extern unsigned int FUN_00174ae0(void);
/* Supplied declaration required: FUN_00174b5c. */
/* Supplied declaration required: FUN_0017561c. */
extern unsigned int objectCommandQueueGet(void);
/* Supplied declaration required: FUN_001757fc. */
/* Supplied declaration required: FUN_00175858. */
/* Supplied declaration required: FUN_00175a38. */
/* Supplied declaration required: FUN_00175a78. */
/* Supplied declaration required: FUN_00175a88. */
/* Supplied declaration required: FUN_00175bb8. */
/* Supplied declaration required: FUN_00175c30. */
/* Supplied declaration required: FUN_00175c3c. */
/* Supplied declaration required: FUN_00175cd8. */
extern unsigned int FUN_00191330(void);
extern unsigned int FUN_00191548(void);
/* Supplied declaration required: FUN_001b1998. */
/* Supplied declaration required: FUN_001b1f04. */
extern unsigned int nw_snd_internal_driver_VoiceManager_GetInstance(void);
/* Supplied declaration required: nw_snd_internal_TaskManager_Initialize. */
/* Supplied declaration required: nw_snd_internal_driver_SoundThread_SetProfileBuffer. */


void FUN_0015de34(unsigned int *param_1,int param_2)

{
/* irregular: 15 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  
  if (DAT_0059dba5 == '\0') {
    FUN_00175a88(&DAT_00646b38,0x4000163);
    if (DAT_0059dba6 == '\0') {
      temp_v0 = param_1[3];
      temp_v4 = param_1[6];
      temp_v1 = objectCommandQueueGet();
      FUN_0017561c(temp_v1,param_2,param_1[3]);
      temp_v1 = FUN_00191330();
      FUN_0017561c(temp_v1,temp_v0 + param_2,param_1[6]);
      param_2 = param_2 + temp_v0 + temp_v4;
      DAT_0059dba6 = '\x01';
    }
    temp_v4 = 0;
    temp_v0 = param_2;
    temp_v6 = 0;
    if (*(char *)(param_1 + 7) != '\0') {
      temp_v5 = param_1[2] + param_2;
      temp_v0 = temp_v5;
      temp_v6 = param_2;
      if ((param_1[1] == 1) && (*(char *)((int)param_1 + 0x1e) != '\0')) {
        temp_v0 = param_1[2] + temp_v5;
        temp_v4 = temp_v5;
      }
    }
    FUN_001b1f04();
    FUN_001757fc();
    temp_v5 = param_1[5];
    FUN_001b1998();
    nw_snd_internal_TaskManager_Initialize();
    DAT_0059dbb0 = param_1[5];
    DAT_0059dbac = temp_v0;
    temp_v1 = nw_snd_internal_driver_VoiceManager_GetInstance();
    temp_v2 = FUN_00175c30(temp_v1,DAT_0059dba8);
    temp_v2 = temp_v2 + temp_v5 + temp_v0;
    temp_v1 = nw_snd_internal_driver_VoiceManager_GetInstance();
    temp_v1 = FUN_00175c30(temp_v1,DAT_0059dba8);
    temp_v3 = nw_snd_internal_driver_VoiceManager_GetInstance();
    FUN_00175bb8(temp_v3,temp_v5 + temp_v0,temp_v1);
    temp_v1 = FUN_00191548();
    temp_v0 = FUN_00175a78(temp_v1,DAT_0059dba8);
    temp_v1 = FUN_00191548();
    temp_v1 = FUN_00175a78(temp_v1,DAT_0059dba8);
    temp_v3 = FUN_00191548();
    FUN_00175a38(temp_v3,temp_v2,temp_v1);
    FUN_00175c3c();
    temp_v1 = FUN_00174ae0();
    FUN_00174b5c(temp_v1,param_1[4],&DAT_0059dbac);
    if (*(char *)(param_1 + 7) != '\0') {
      temp_v1 = FUN_001b1f04();
      FUN_00175858(temp_v1,temp_v6,param_1[2],*param_1,temp_v4,param_1[2],*param_1,param_1[1],
                   (int)*(char *)((int)param_1 + 0x1d));
    }
    temp_v7 = *(char *)((int)param_1 + 0x1d) != '\0';
    temp_v4 = 0;
    if (temp_v7) {
      temp_v4 = param_1[8];
    }
    if (temp_v7 && 0 < temp_v4) {
      temp_v1 = FUN_001b1f04();
      nw_snd_internal_driver_SoundThread_SetProfileBuffer(temp_v1,temp_v0 + temp_v2,param_1[8]);
    }
    FUN_00175cd8();
    DAT_0059dba4 = *(unsigned char *)(param_1 + 7);
    DAT_0059dba5 = '\x01';
  }
  return;
}

} /* extern "C" */
