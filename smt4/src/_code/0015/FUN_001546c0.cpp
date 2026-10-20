/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001546c0` (_code @ 0x1546c0, 0x7c0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157734(...);
int FUN_00157804(...);
int FUN_001578d4(...);
int FUN_00157938(...);
int FUN_0015799c(...);
int FUN_0015821c(...);
int FUN_00158a10(...);
int linkListEraseObject(...);
int FUN_002a2164(...);
int nw_snd_internal_TaskManager_AppendTask(...);
int nw_snd_internal_driver_HardwareManager_ClearEffect(...);
int nw_snd_internal_driver_VoiceManager_UpdateAllVoicesSync(...);

int FUN_001576b4(int, int, int);
int FUN_00157a3c(...);
int FUN_00157ab4(int, int);
int FUN_00157ac0(int, unsigned int);
int FUN_00157b18(...);
int FUN_00158038(...);
int FUN_00158074(...);
int FUN_001581e0(...);
int FUN_00158258(...);
int FUN_00158388(...);
int FUN_00158444(...);
int FUN_0015845c(...);
int FUN_001584e0(...);
int FUN_0015850c(...);
int FUN_00158524(...);
int FUN_0015853c(...);
int FUN_001585c4(int, int, int);
int FUN_001585d0(...);
int FUN_001585e8(...);
int FUN_00158600(...);
int FUN_00158618(int, int);
int FUN_0015862c(...);
int FUN_001586c8(...);
int FUN_0015874c(...);
int FUN_00158764(...);
int FUN_001587f4(...);
int FUN_00158878(int, int, int);
int FUN_001588c8(int, int, int, int);
int FUN_00158988(int, int, int *, int *, int *, int);
int nw_snd_internal_driver_SequenceSoundPlayer_Skip(int, int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char DAT_004ea168; /* 0x4ea168 */

/* Supplied declaration required: FUN_001576b4. */
/* Supplied declaration required: FUN_00157734. */
/* Supplied declaration required: FUN_00157804. */
/* Supplied declaration required: FUN_001578d4. */
/* Supplied declaration required: FUN_00157938. */
/* Supplied declaration required: FUN_0015799c. */
/* Supplied declaration required: FUN_00157a3c. */
/* Supplied declaration required: FUN_00157ab4. */
/* Supplied declaration required: FUN_00157ac0. */
/* Supplied declaration required: FUN_00157b18. */
/* Supplied declaration required: FUN_00158038. */
/* Supplied declaration required: FUN_00158074. */
/* Supplied declaration required: FUN_001581e0. */
/* Supplied declaration required: FUN_0015821c. */
/* Supplied declaration required: FUN_00158258. */
/* Supplied declaration required: FUN_00158388. */
/* Supplied declaration required: FUN_00158444. */
/* Supplied declaration required: FUN_0015845c. */
/* Supplied declaration required: FUN_001584e0. */
extern int FUN_001584f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0015850c. */
/* Supplied declaration required: FUN_00158524. */
/* Supplied declaration required: FUN_0015853c. */
/* Supplied declaration required: FUN_001585c4. */
/* Supplied declaration required: FUN_001585d0. */
/* Supplied declaration required: FUN_001585e8. */
/* Supplied declaration required: FUN_00158600. */
/* Supplied declaration required: FUN_00158618. */
/* Supplied declaration required: FUN_0015862c. */
/* Supplied declaration required: FUN_001586c8. */
/* Supplied declaration required: FUN_0015874c. */
/* Supplied declaration required: FUN_00158764. */
/* Supplied declaration required: FUN_001587f4. */
/* Supplied declaration required: FUN_00158878. */
/* Supplied declaration required: FUN_001588c8. */
/* Supplied declaration required: FUN_00158988. */
/* Supplied declaration required: FUN_00158a10. */
/* Supplied declaration required: linkListEraseObject. */
/* Supplied declaration required: FUN_002a2164. */
extern unsigned int FUN_002a2174(void);
extern unsigned int FUN_002baf30(void);
extern unsigned int FUN_002bb020(void);
/* Supplied declaration required: nw_snd_internal_TaskManager_AppendTask. */
/* Supplied declaration required: nw_snd_internal_driver_HardwareManager_ClearEffect. */
/* Supplied declaration required: nw_snd_internal_driver_SequenceSoundPlayer_Skip. */
/* Supplied declaration required: nw_snd_internal_driver_VoiceManager_UpdateAllVoicesSync. */


void FUN_001546c0(int *param_1)

{
/* irregular: 42 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  romwright_code *pcVar3;
  unsigned int temp_v2;
  
  do {
    if (param_1 == (int *)0x0) {
      return;
    }
    switch(*(unsigned char *)(param_1 + 1)) {
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
      if (*(char *)(param_1 + 5) != '\0') {
        *(unsigned int *)(param_1[4] + 0x14) = 0;
      }
      (**(romwright_code **)(*(int *)param_1[4] + 0x14))();
      break;
    case 7:
      (**(romwright_code **)(*(int *)param_1[4] + 0x18))((int *)param_1[4],(int)*(char *)(param_1 + 5));
      break;
    case 8:
      *(int *)(param_1[4] + 0x14) = param_1[5];
      *(int *)(param_1[4] + 0x18) = param_1[6];
      *(int *)(param_1[4] + 0x1c) = param_1[7];
      *(int *)(param_1[4] + 0x20) = param_1[8];
      *(int *)(param_1[4] + 0x24) = param_1[9];
      FUN_00157ab4(param_1[4],param_1[10]);
      temp_v2 = 0;
      *(int *)(param_1[4] + 0x30) = param_1[0xc];
      do {
        FUN_00157ac0(param_1[4],temp_v2 & 0xff);
        temp_v2 = temp_v2 + 1;
      } while ((int)temp_v2 < 2);
      break;
    case 9:
      *(unsigned char *)(param_1[4] + 0x34) = *(unsigned char *)(param_1 + 5);
      break;
    case 10:
      *(unsigned char *)(param_1[4] + 0x35) = *(unsigned char *)((int)param_1 + 0x15);
      break;
    case 0xb:
      *(unsigned char *)(param_1[4] + 0x2e) = *(unsigned char *)(param_1 + 5);
      break;
    case 0xc:
      *(unsigned char *)(param_1[4] + 0x10) = 0;
      break;
    case 0xd:
      FUN_001588c8(param_1[4],param_1[5],param_1[6],param_1[7]);
      break;
    case 0xe:
      FUN_00158988(param_1[4],param_1[5],param_1 + 6,param_1 + 10,param_1 + 0xe,param_1[0xf]);
      break;
    case 0xf:
      nw_snd_internal_driver_SequenceSoundPlayer_Skip(param_1[4],param_1[5] & 0xff,param_1[6]);
      break;
    case 0x10:
      *(int *)(param_1[4] + 100) = param_1[5];
      break;
    case 0x11:
      *(char *)(param_1[4] + 0x75) = (char)param_1[5];
      break;
    case 0x12:
      *(unsigned char *)(param_1[4] + 0x5c) = *(unsigned char *)(param_1 + 5);
      break;
    case 0x13:
      FUN_00158878(param_1[4],param_1[5],param_1[6]);
      break;
    case 0x14:
      FUN_001585c4(param_1[4],param_1[6],(int)(short)param_1[7]);
      break;
    case 0x15:
      FUN_00158618(param_1[6],(int)(short)param_1[7]);
      break;
    case 0x16:
      temp_v0 = FUN_001584f8(param_1[4],param_1[5]);
      if (temp_v0 != 0) {
        FUN_001576b4(temp_v0,param_1[6],(int)(short)param_1[7]);
      }
      break;
    case 0x17:
      FUN_0015845c(param_1[4],param_1[5],param_1[6] & 0xff);
      break;
    case 0x18:
      FUN_0015853c(param_1[4],param_1[5],(int)*(char *)(param_1 + 6),param_1[7]);
      break;
    case 0x19:
      FUN_0015850c(param_1[4],param_1[5]);
      break;
    case 0x1a:
      FUN_001584e0(param_1[4],param_1[5]);
      break;
    case 0x1b:
      FUN_00158444(param_1[4],param_1[5]);
      break;
    case 0x1c:
      FUN_0015874c(param_1[4],param_1[5]);
      break;
    case 0x1d:
      FUN_00158524(param_1[4],param_1[5]);
      break;
    case 0x1e:
      FUN_00158600(param_1[4],param_1[5]);
      break;
    case 0x1f:
      FUN_001585d0(param_1[4],param_1[5]);
      break;
    case 0x20:
      FUN_001585e8(param_1[4],param_1[5]);
      break;
    case 0x21:
      FUN_00158764(param_1[4],param_1[5],param_1[6]);
      break;
    case 0x22:
      FUN_0015862c(param_1[4],param_1[5],param_1[6]);
      break;
    case 0x23:
      FUN_001586c8(param_1[4],param_1[5],(int)*(char *)(param_1 + 6));
      break;
    case 0x24:
      FUN_001587f4(param_1[4],param_1[5],*(unsigned char *)(param_1 + 6));
      break;
    case 0x25:
      FUN_00157a3c(param_1[4],param_1[5],param_1[6],param_1[7],param_1[8] & 0xff,param_1[9]);
      break;
    case 0x26:
      *(char *)(param_1[4] + 0x5e) = (char)param_1[5];
      break;
    case 0x27:
      *(unsigned char *)(param_1[4] + 0x5d) = *(unsigned char *)(param_1 + 5);
      break;
    case 0x28:
      FUN_00158258(param_1[4],param_1[5],param_1[6],*(unsigned short *)(param_1 + 7),
                   *(unsigned char *)((int)param_1 + 0x1e),(int)*(char *)((int)param_1 + 0x1f),
                   param_1[8],param_1[9]);
      break;
    case 0x29:
      FUN_00158388(param_1[4],param_1[5],param_1[6] & 0xff,param_1[7]);
      break;
    case 0x2b:
      FUN_00157b18(param_1[4],(int)*(char *)(param_1 + 5),param_1 + 6,param_1 + 0x18,
                   *(unsigned short *)(param_1 + 0x20));
      break;
    case 0x2c:
      FUN_00158074(param_1[4],(int)*(char *)(param_1 + 5),param_1[6],param_1[8],param_1[7],
                   param_1[0x11],param_1 + 9,param_1[0x12],(int)*(char *)(param_1 + 0x13));
      break;
    case 0x2d:
      FUN_001581e0(param_1[4],param_1[5]);
      break;
    case 0x2e:
      FUN_00158038(param_1[4],param_1[5]);
      break;
    case 0x2f:
      FUN_0015821c(param_1[4],param_1[5]);
      break;
    case 0x30:
      temp_v1 = FUN_002a2174();
      FUN_00158a10(temp_v1,param_1[4],param_1[5]);
      break;
    case 0x31:
      temp_v1 = FUN_002a2174();
      FUN_002a2164(temp_v1,param_1[4]);
      break;
    case 0x32:
      temp_v1 = FUN_002a2174();
      linkListEraseObject(temp_v1,param_1[4]);
      break;
    case 0x33:
      FUN_0015799c(&DAT_004ea168,*(unsigned char *)(param_1 + 4),param_1[5]);
      break;
    case 0x34:
      FUN_001578d4(&DAT_004ea168,*(unsigned char *)(param_1 + 4),param_1[5]);
      break;
    case 0x35:
      FUN_00157938(&DAT_004ea168,*(unsigned char *)(param_1 + 4),param_1[5]);
      break;
    case 0x36:
      FUN_00157734(&DAT_004ea168,*(unsigned char *)(param_1 + 4),param_1[5],param_1 + 6);
      break;
    case 0x37:
      FUN_00157804(&DAT_004ea168,*(unsigned char *)(param_1 + 4),param_1[5],param_1 + 6);
      break;
    case 0x38:
      nw_snd_internal_driver_HardwareManager_ClearEffect
                (&DAT_004ea168,*(unsigned char *)(param_1 + 4),param_1[6]);
      break;
    case 0x39:
      temp_v1 = FUN_002baf30();
      nw_snd_internal_driver_VoiceManager_UpdateAllVoicesSync(temp_v1,param_1[4]);
      break;
    case 0x3a:
      if (param_1[4] == *(int *)param_1[5]) {
        temp_v1 = FUN_002bb020();
        nw_snd_internal_TaskManager_AppendTask(temp_v1,param_1[6],1);
      }
      break;
    case 0x3b:
      if (param_1[4] == *(int *)param_1[5]) {
        temp_v1 = FUN_002bb020();
        nw_snd_internal_TaskManager_AppendTask(temp_v1,param_1[6],1);
      }
    }
    param_1 = (int *)*param_1;
  } while( 1 );
}

} /* extern "C" */
