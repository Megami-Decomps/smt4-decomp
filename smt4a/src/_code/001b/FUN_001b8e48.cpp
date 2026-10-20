/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b8e48` (_code @ 0x1b8e48, 0x764 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b6660(...);
int FUN_001c1efc(...);
int FUN_001c1f70(...);
int FUN_001c2040(...);
int FUN_001c2110(...);
int FUN_001c2174(...);
int FUN_001c21d8(...);
int FUN_001c2a18(...);
int FUN_001c2cec(...);
int FUN_001c2d2c(...);
int FUN_001c362c(...);
int FUN_001cc6c0(...);
int nw_snd_internal_driver_VoiceManager_UpdateAllVoicesSync(...);

int FUN_001c1eec(int, int, int);
int FUN_001c2368(...);
int FUN_001c23b0(...);
int FUN_001c246c(int, int);
int FUN_001c2478(int, unsigned int);
int FUN_001c2538(...);
int FUN_001c2a58(...);
int FUN_001c2a78(...);
int FUN_001c2ab8(...);
int FUN_001c2d70(...);
int FUN_001c2e9c(...);
int FUN_001c2f70(int, int *, int *);
int FUN_001c2fc4(...);
int FUN_001c2fdc(int, int, int);
int FUN_001c3060(...);
int FUN_001c308c(...);
int FUN_001c30a4(...);
int FUN_001c30bc(...);
int FUN_001c3144(int, int, int);
int FUN_001c3150(...);
int FUN_001c3168(int, int);
int FUN_001c317c(...);
int FUN_001c3218(...);
int FUN_001c329c(...);
int FUN_001c32b4(...);
int FUN_001c3344(...);
int FUN_001c33c8(int, int, int);
int FUN_001c3418(int, int *);
int FUN_001c34e4(int, int *);
int nw_snd_internal_driver_SequenceSoundPlayer_Skip(int, int, int);

typedef int romwright_code(...);
extern unsigned char DAT_00646b38; /* 0x646b38 */

/* Supplied declaration required: FUN_001b6660. */
/* Supplied declaration required: FUN_001c1eec. */
/* Supplied declaration required: FUN_001c1efc. */
/* Supplied declaration required: FUN_001c1f70. */
/* Supplied declaration required: FUN_001c2040. */
/* Supplied declaration required: FUN_001c2110. */
/* Supplied declaration required: FUN_001c2174. */
/* Supplied declaration required: FUN_001c21d8. */
/* Supplied declaration required: FUN_001c2368. */
/* Supplied declaration required: FUN_001c23b0. */
/* Supplied declaration required: FUN_001c246c. */
/* Supplied declaration required: FUN_001c2478. */
extern unsigned int nw_snd_internal_driver_VoiceManager_GetInstance(void);
/* Supplied declaration required: FUN_001c2538. */
/* Supplied declaration required: FUN_001c2a18. */
/* Supplied declaration required: FUN_001c2a58. */
/* Supplied declaration required: FUN_001c2a78. */
/* Supplied declaration required: FUN_001c2ab8. */
/* Supplied declaration required: FUN_001c2cec. */
/* Supplied declaration required: FUN_001c2d2c. */
/* Supplied declaration required: FUN_001c2d70. */
/* Supplied declaration required: FUN_001c2e9c. */
/* Supplied declaration required: FUN_001c2f70. */
/* Supplied declaration required: FUN_001c2fc4. */
/* Supplied declaration required: FUN_001c2fdc. */
/* Supplied declaration required: FUN_001c3060. */
extern int FUN_001c3078(int, int);
/* Supplied declaration required: FUN_001c308c. */
/* Supplied declaration required: FUN_001c30a4. */
/* Supplied declaration required: FUN_001c30bc. */
/* Supplied declaration required: FUN_001c3144. */
/* Supplied declaration required: FUN_001c3150. */
/* Supplied declaration required: FUN_001c3168. */
/* Supplied declaration required: FUN_001c317c. */
/* Supplied declaration required: FUN_001c3218. */
/* Supplied declaration required: FUN_001c329c. */
/* Supplied declaration required: FUN_001c32b4. */
/* Supplied declaration required: FUN_001c3344. */
/* Supplied declaration required: FUN_001c33c8. */
/* Supplied declaration required: FUN_001c3418. */
/* Supplied declaration required: FUN_001c34e4. */
extern unsigned int FUN_001c35d8(void);
/* Supplied declaration required: FUN_001c362c. */
/* Supplied declaration required: FUN_001cc6c0. */
/* Supplied declaration required: nw_snd_internal_driver_SequenceSoundPlayer_Skip. */
/* Supplied declaration required: nw_snd_internal_driver_VoiceManager_UpdateAllVoicesSync. */


void FUN_001b8e48(int *param_1)

{
/* irregular: 43 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  romwright_code *pcVar3;
  unsigned int temp_v2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    switch((char)param_1[1]) {
    case 2:
      *(unsigned char *)param_1[4] = 1;
      break;
    case 3:
      (**(romwright_code **)(*(int *)param_1[4] + 8))();
      *(unsigned char *)param_1[5] = 1;
      break;
    case 4:
      pcVar3 = *(romwright_code **)(*(int *)param_1[4] + 0xc);
      (*pcVar3)();
      break;
    case 5:
      pcVar3 = *(romwright_code **)(*(int *)param_1[4] + 0x10);
      (*pcVar3)();
      break;
    case 6:
      if ((char)param_1[5] != '\0') {
        *(unsigned int *)(param_1[4] + 0x14) = 0;
      }
      (**(romwright_code **)(*(int *)param_1[4] + 0x14))();
      break;
    case 7:
      (**(romwright_code **)(*(int *)param_1[4] + 0x18))((int *)param_1[4],(int)(char)param_1[5]);
      break;
    case 8:
      *(int *)(param_1[4] + 0x14) = param_1[5];
      *(int *)(param_1[4] + 0x18) = param_1[6];
      *(int *)(param_1[4] + 0x1c) = param_1[7];
      *(int *)(param_1[4] + 0x20) = param_1[8];
      *(int *)(param_1[4] + 0x24) = param_1[9];
      FUN_001c246c(param_1[4],param_1[10]);
      temp_v2 = 0;
      *(int *)(param_1[4] + 0x30) = param_1[0xc];
      do {
        FUN_001c2478(param_1[4],temp_v2 & 0xff);
        temp_v2 = temp_v2 + 1;
      } while ((int)temp_v2 < 2);
      break;
    case 9:
      *(char *)(param_1[4] + 0x34) = (char)param_1[5];
      break;
    case 10:
      *(unsigned char *)(param_1[4] + 0x35) = *(unsigned char *)((int)param_1 + 0x15);
      break;
    case 0xb:
      *(char *)(param_1[4] + 0x2e) = (char)param_1[5];
      break;
    case 0xc:
      *(unsigned char *)(param_1[4] + 0x10) = 0;
      break;
    case 0xd:
      FUN_001c3418(param_1[4],param_1 + 5);
      *(char *)(param_1[4] + 0x74) = (char)param_1[8];
      *(unsigned char *)(param_1[4] + 0x5c) = *(unsigned char *)((int)param_1 + 0x21);
      FUN_001c33c8(param_1[4],param_1[9],param_1[10]);
      break;
    case 0xe:
      FUN_001c2f70(param_1[4],param_1 + 5,param_1 + 8);
      break;
    case 0xf:
      FUN_001c34e4(param_1[4],param_1 + 5);
      break;
    case 0x10:
      nw_snd_internal_driver_SequenceSoundPlayer_Skip(param_1[4],param_1[5] & 0xff,param_1[6]);
      break;
    case 0x11:
      *(int *)(param_1[4] + 100) = param_1[5];
      break;
    case 0x12:
      *(char *)(param_1[4] + 0x74) = (char)param_1[5];
      break;
    case 0x13:
      FUN_001c3144(param_1[4],param_1[6],(int)(short)param_1[7]);
      break;
    case 0x14:
      FUN_001c3168(param_1[6],(int)(short)param_1[7]);
      break;
    case 0x15:
      temp_v0 = FUN_001c3078(param_1[4],param_1[5]);
      if (temp_v0 != 0) {
        FUN_001c1eec(temp_v0,param_1[6],(int)(short)param_1[7]);
      }
      break;
    case 0x16:
      FUN_001c2fdc(param_1[4],param_1[5],param_1[6] & 0xff);
      break;
    case 0x17:
      FUN_001c30bc(param_1[4],param_1[5],(int)(char)param_1[6],param_1[7]);
      break;
    case 0x18:
      FUN_001c308c(param_1[4],param_1[5]);
      break;
    case 0x19:
      FUN_001c3060(param_1[4],param_1[5]);
      break;
    case 0x1a:
      FUN_001c2fc4(param_1[4],param_1[5]);
      break;
    case 0x1b:
      FUN_001c329c(param_1[4],param_1[5]);
      break;
    case 0x1c:
      FUN_001c30a4(param_1[4],param_1[5]);
      break;
    case 0x1d:
      FUN_001c3150(param_1[4],param_1[5]);
      break;
    case 0x1e:
      FUN_001c32b4(param_1[4],param_1[5],param_1[6]);
      break;
    case 0x1f:
      FUN_001c317c(param_1[4],param_1[5],param_1[6]);
      break;
    case 0x20:
      FUN_001c3218(param_1[4],param_1[5],(int)(char)param_1[6]);
      break;
    case 0x21:
      FUN_001c3344(param_1[4],param_1[5],(char)param_1[6]);
      break;
    case 0x22:
      FUN_001c23b0(param_1[4],param_1 + 5,param_1 + 8);
      break;
    case 0x23:
      FUN_001c2368(param_1[4],param_1 + 5,param_1 + 8);
      break;
    case 0x24:
      *(char *)(param_1[4] + 0x5e) = (char)param_1[5];
      break;
    case 0x25:
      *(char *)(param_1[4] + 0x5e) = (char)param_1[5];
      *(unsigned char *)(param_1[4] + 0x5d) = *(unsigned char *)((int)param_1 + 0x15);
      break;
    case 0x26:
      *(char *)(param_1[4] + 0xa3) = (char)param_1[5];
      break;
    case 0x27:
      FUN_001c2d70(param_1[4],param_1 + 5);
      break;
    case 0x28:
      FUN_001c2e9c(param_1[4],param_1 + 6);
      break;
    case 0x29:
      FUN_001c2ab8(param_1[4],param_1 + 5);
      break;
    case 0x2a:
      FUN_001c2538(param_1[4],(int)(char)param_1[5],param_1 + 6,(short)param_1[0xe]);
      break;
    case 0x2b:
      FUN_001c2a58(param_1[4],(int)(char)param_1[5],param_1 + 6);
      break;
    case 0x2c:
      *(char *)(param_1[4] + 0x84) = (char)param_1[5];
      break;
    case 0x2d:
      FUN_001c2a78(param_1[4],param_1[5]);
      break;
    case 0x2e:
      FUN_001c2d2c(param_1[4],param_1[5],param_1[6]);
      break;
    case 0x2f:
      FUN_001c2a18(param_1[4],param_1[5]);
      break;
    case 0x30:
      FUN_001c2cec(param_1[4],param_1[5]);
      break;
    case 0x31:
      temp_v1 = FUN_001c35d8();
      FUN_001c362c(temp_v1,param_1[4],param_1[5]);
      break;
    case 0x32:
      temp_v1 = FUN_001c35d8();
      FUN_001cc6c0(temp_v1,param_1[4]);
      break;
    case 0x33:
      temp_v1 = FUN_001c35d8();
      FUN_001b6660(temp_v1,param_1[4]);
      break;
    case 0x34:
      FUN_001c21d8(&DAT_00646b38,(char)param_1[4],param_1[5]);
      break;
    case 0x35:
      FUN_001c2110(&DAT_00646b38,(char)param_1[4],param_1[5]);
      break;
    case 0x36:
      FUN_001c2174(&DAT_00646b38,(char)param_1[4],param_1[5]);
      break;
    case 0x37:
      FUN_001c1f70(&DAT_00646b38,(char)param_1[4],param_1[5],param_1 + 6);
      break;
    case 0x38:
      FUN_001c2040(&DAT_00646b38,(char)param_1[4],param_1[5],param_1 + 6);
      break;
    case 0x39:
      FUN_001c1efc(&DAT_00646b38,(char)param_1[4],param_1[6]);
      break;
    case 0x3a:
      temp_v1 = nw_snd_internal_driver_VoiceManager_GetInstance();
      nw_snd_internal_driver_VoiceManager_UpdateAllVoicesSync(temp_v1,param_1[4]);
    }
    param_1 = (int *)*param_1;
    if (param_1 == (int *)0x0) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
