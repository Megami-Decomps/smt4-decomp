/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c64ec` (_code @ 0x3c64ec, 0x126c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match8_BattleDebug.h"

extern "C" {

int asdListBoxSetItemMode2(...);
int asdListBoxSetByteValue(...);
int asdListBoxAddItems(void);
int asdListBoxCreateDefault(...);
int jobSetText(...);
int FUN_003c33c8(...);
int FUN_003c39fc(...);
int btlDebugCreateUnitMenu(...);
int FUN_003c40ac(...);
int FUN_003c4524(...);
int btlDebugCreatePanelMenu(...);
int btlDebugCreateStageMenu(...);
int FUN_003c49bc(...);
int FUN_003c4ac4(...);
int FUN_003c4f38(...);
int talkCtrlDebugMenuBuild(...);
int FUN_003c56d8(...);
struct BattleCameraMenuOwner;
struct BattleCameraMenuContext;
void btlDebugCreateAttackCameraMenu(BattleCameraMenuOwner *, BattleCameraMenuContext *);
int FUN_003c5eb0(...);
int FUN_003c5ffc(...);
int btlCameraDebugApplyMenuItem(...);

int asdListBoxSetItemMode3(...);
int listBoxItemHasOwner(...);
int asdListBoxGetItemValuePtr(...);
int FUN_0024ef90(...);
unsigned int asdListBoxGetSelectedItemId(unsigned int);
int dataTableGetEntries(void);
int dataTableGet(...);
int jobStop(...);
int dataTable22GetCount(void);
int dataTable03Sub0GetCount(void);
int FUN_003c3360(...);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char DAT_004357c8; /* 0x4357c8 */
extern unsigned short DAT_00439a50; /* 0x439a50 */
extern unsigned char DAT_00439cf4; /* 0x439cf4 */
extern unsigned short DAT_00439a62; /* 0x439a62 */
extern unsigned short DAT_00439a66; /* 0x439a66 */
extern unsigned char DAT_00439ce0; /* 0x439ce0 */
extern unsigned char DAT_00439ce1; /* 0x439ce1 */
extern unsigned char DAT_00439ce2; /* 0x439ce2 */
extern unsigned char DAT_00439ce3; /* 0x439ce3 */
extern unsigned int DAT_00439ce8; /* 0x439ce8 */
extern unsigned int DAT_00439cf0; /* 0x439cf0 */
#ifndef ROMWRIGHT_STORAGE_s______00439cf4_13_1_DEFINED
#define ROMWRIGHT_STORAGE_s______00439cf4_13_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s______00439cf4_13_1 {
    char whole[13];
    unsigned char u1[13];
    signed char s1[13];
};
typedef char romwright_storage_s______00439cf4_13_1_size_check[(sizeof(union romwright_storage_s______00439cf4_13_1) == 13) ? 1 : -1];
typedef char romwright_storage_s______00439cf4_13_1_u1_width_check[(sizeof(((union romwright_storage_s______00439cf4_13_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s______00439cf4_13_1_s1_width_check[(sizeof(((union romwright_storage_s______00439cf4_13_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s______00439cf4_13_1 s______00439cf4; /* 0x439cf4 */
extern unsigned int DAT_00439cf8; /* 0x439cf8 */

#ifndef ROMWRIGHT_SUBPIECE_4_1_1_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_1_DEFINED
#define romwright_subpiece_4_1_1(value, offset) ((unsigned char)(((unsigned int)(value)) >> 8))
#endif
#ifndef ROMWRIGHT_SUBPIECE_4_1_2_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_2_DEFINED
#define romwright_subpiece_4_1_2(value, offset) ((unsigned char)(((unsigned int)(value)) >> 16))
#endif
#ifndef ROMWRIGHT_SUBPIECE_4_1_3_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_3_DEFINED
#define romwright_subpiece_4_1_3(value, offset) ((unsigned char)(((unsigned int)(value)) >> 24))
#endif
extern char *asdListBoxGetItemText(unsigned int, unsigned int);
/* Supplied declaration required: asdListBoxSetItemMode3. */
/* Supplied declaration required: asdListBoxSetItemMode2. */
/* Supplied declaration required: listBoxItemHasOwner. */
/* Supplied declaration required: asdListBoxGetItemValuePtr. */
/* Supplied declaration required: FUN_0024ef90. */
/* Supplied declaration required: asdListBoxGetSelectedItemId. */
/* Supplied declaration required: asdListBoxSetByteValue. */
/* Supplied declaration required: asdListBoxAddItems. */
/* Supplied declaration required: asdListBoxCreateDefault. */
/* Supplied declaration required: jobSetText. */
extern int jobIsValid(unsigned int);
extern int padIsButtonPressed(unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
/* Supplied declaration required: dataTableGetEntries. */
/* Supplied declaration required: dataTableGet. */
/* Supplied declaration required: jobStop. */
/* Supplied declaration required: dataTable22GetCount. */
/* Supplied declaration required: dataTable03Sub0GetCount. */
/* Supplied declaration required: FUN_003c3360. */
/* Supplied declaration required: FUN_003c33c8. */
/* Supplied declaration required: FUN_003c39fc. */
/* Supplied declaration required: btlDebugCreateUnitMenu. */
/* Supplied declaration required: FUN_003c40ac. */
/* Supplied declaration required: FUN_003c4524. */
/* Supplied declaration required: btlDebugCreatePanelMenu. */
/* Supplied declaration required: btlDebugCreateStageMenu. */
/* Supplied declaration required: FUN_003c49bc. */
/* Supplied declaration required: FUN_003c4ac4. */
/* Supplied declaration required: FUN_003c4f38. */
/* Supplied declaration required: talkCtrlDebugMenuBuild. */
/* Supplied declaration required: FUN_003c56d8. */
/* Supplied declaration required: btlDebugCreateAttackCameraMenu. */
/* Supplied declaration required: FUN_003c5eb0. */
/* Supplied declaration required: FUN_003c5ffc. */
/* Supplied declaration required: btlCameraDebugApplyMenuItem. */


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_003c64ec(unsigned int *param_1,int param_2)

{
/* irregular: 9 goto(s); 33 native warning(s); review required */
  unsigned char temp_v0;
  short *psVar2;
  unsigned int temp_v1;
  int *piVar4;
  int temp_v2;
  char *pcVar6;
  unsigned int *puVar7;
  unsigned char *puVar8;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar11;
  unsigned int temp_v5;
  
  temp_v5 = 0;
  temp_v4 = 0;
  switch(*param_1) {
  case 0:
    if (param_1[1] == 0) {
      temp_v5 = 1;
    }
    else {
      temp_v5 = 2;
    }
    break;
  case 1:
    temp_v5 = asdListBoxGetSelectedItemId(param_1[4]);
    switch(temp_v5) {
    case 0:
      puVar7 = (unsigned int *)asdListBoxGetItemValuePtr(param_1[4]);
      temp_v5 = *puVar7;
      if (g_btlDebugState.category != '\0') {
        dataTable03Sub0GetCount();
        asdListBoxSetItemMode3(param_1[4],0,temp_v5,0,(int)puVar7 - 1,0);
        *(unsigned int *)(param_2 + 0xc0) = 0xffffffff;
        *(unsigned int *)(param_2 + 0xc4) = temp_v5;
        g_btlDebugState.selectedId = temp_v5;
      }
      else {
        dataTable22GetCount();
        asdListBoxSetItemMode3(param_1[4],0,temp_v5,0,(int)puVar7 - 1,0);
        *(unsigned int *)(param_2 + 0xc4) = 0xffffffff;
        *(unsigned int *)(param_2 + 0xc0) = temp_v5;
        g_btlDebugState.selectedId = temp_v5;
      }
      break;
    case 1:
      g_btlDebugState.category = listBoxItemHasOwner(param_1[4],temp_v5);
      break;
    case 2:
      puVar7 = (unsigned int *)asdListBoxGetItemValuePtr(param_1[4]);
      temp_v5 = *puVar7;
      puVar7 = &(*(unsigned int *)((unsigned char *)&(*(unsigned int *)((unsigned char *)&DAT_004357c8 + 0x610)) - 0x18));
      *puVar7 = temp_v5;
      break;
    case 3:
      puVar7 = (unsigned int *)asdListBoxGetItemValuePtr(param_1[4]);
      temp_v5 = *puVar7;
      puVar7 = &(*(unsigned int *)((unsigned char *)&DAT_004357c8 + 0x610));
      *puVar7 = temp_v5;
      break;
    case 4:
      temp_v4 = listBoxItemHasOwner(param_1[4],temp_v5);
      if (temp_v4 != 0) {
        temp_v3 = *(unsigned int *)(param_2 + 0x44a8) | 0x4000;
      }
      else {
        temp_v3 = *(unsigned int *)(param_2 + 0x44a8) & 0xffffbfff;
      }
      *(unsigned int *)(param_2 + 0x44a8) = temp_v3;
      break;
    case 5:
      temp_v4 = listBoxItemHasOwner(param_1[4],temp_v5);
      if (temp_v4 == 0) {
        temp_v3 = *(unsigned int *)(param_2 + 0x44a8) & 0xffff7fff;
        *(unsigned int *)(param_2 + 0x44a8) = temp_v3;
        break;
      }
      *(unsigned int *)(param_2 + 0x44a8) = *(unsigned int *)(param_2 + 0x44a8) | 0x8000;
      break;
    case 6:
      temp_v4 = listBoxItemHasOwner(param_1[4],temp_v5);
      if (temp_v4 != 0) {
        temp_v3 = *(unsigned int *)(param_2 + 0x44a8) | 0x10000;
      }
      else {
        temp_v3 = *(unsigned int *)(param_2 + 0x44a8) & 0xfffeffff;
      }
      *(unsigned int *)(param_2 + 0x44a8) = temp_v3;
      break;
    case 7:
      puVar7 = (unsigned int *)asdListBoxGetItemValuePtr(param_1[4]);
      *(unsigned int *)(param_2 + 0x13c) = *puVar7;
      break;
    case 8:
      puVar7 = (unsigned int *)asdListBoxGetItemValuePtr(param_1[4]);
      *(unsigned int *)(param_2 + 0x140) = *puVar7;
      break;
    case 9:
      puVar7 = (unsigned int *)asdListBoxGetItemValuePtr(param_1[4]);
      *(char *)(param_2 + 0x14c) = (char)*puVar7;
      break;
    case 10:
      puVar11 = (unsigned int *)asdListBoxGetItemValuePtr(param_1[4]);
      temp_v3 = *puVar11;
      temp_v5 = dataTableGet(0x1c,2);
      dataTableGetEntries();
      temp_v5 = dataTableGetCount(temp_v5);
      asdListBoxSetItemMode3(param_1[4],10,temp_v3,0,temp_v5,0);
      temp_v3 = temp_v3 & 0xffff;
      if (temp_v3 != 0) {
        dataTableGet(0x1c,2);
        temp_v4 = dataTableGetEntries();
        psVar2 = (short *)((temp_v4 + temp_v3 * 0x10) - 0x10);
        if (psVar2 == (short *)0x0) {
          g_btlDebugState.selection = 0;
          *(int *)(param_2 + 0x2f28) = (int)g_btlDebugState.selection;
          break;
        }
        g_btlDebugState.selection = *psVar2;
      }
      else {
        g_btlDebugState.selection = 0;
      }
      *(int *)(param_2 + 0x2f28) = (int)g_btlDebugState.selection;
      break;
    case 0xb:
      temp_v4 = listBoxItemHasOwner(param_1[4],temp_v5);
      if (temp_v4 != 0) {
        temp_v3 = *(unsigned int *)(param_2 + 0x44a8) | 0x20000000;
        *(unsigned int *)(param_2 + 0x44a8) = temp_v3;
        break;
      }
      temp_v3 = *(unsigned int *)(param_2 + 0x44a8) & 0xdfffffff;
      *(unsigned int *)(param_2 + 0x44a8) = temp_v3;
      break;
    case 0xc:
      temp_v4 = listBoxItemHasOwner(param_1[4],temp_v5);
      if (temp_v4 != 0) {
        temp_v3 = *(unsigned int *)(param_2 + 0x44ac) | 0x20;
      }
      else {
        temp_v3 = *(unsigned int *)(param_2 + 0x44ac) & 0xffffffdf;
      }
      *(unsigned int *)(param_2 + 0x44ac) = temp_v3;
      break;
    case 0xd:
      temp_v4 = listBoxItemHasOwner(param_1[4],temp_v5);
      if (temp_v4 == 0) {
        temp_v3 = *(unsigned int *)(param_2 + 0x44a8) & 0xffefffff;
        *(unsigned int *)(param_2 + 0x44a8) = temp_v3;
        break;
      }
      temp_v3 = *(unsigned int *)(param_2 + 0x44a8) | 0x100000;
      *(unsigned int *)(param_2 + 0x44a8) = temp_v3;
      break;
    case 0xe:
      temp_v4 = listBoxItemHasOwner(param_1[4],temp_v5);
      puVar11 = (unsigned int *)(param_2 + 0x44a8);
      if (temp_v4 != 0) {
        temp_v3 = *puVar11 | 0x80000000;
        *(unsigned int *)(param_2 + 0x44a8) = temp_v3;
        break;
      }
      *puVar11 = *puVar11 & 0x7fffffff;
      *(unsigned int *)(param_2 + 0x44ac) = 0;
    }
    temp_v4 = padIsButtonPressed(0);
    if (temp_v4 != 0) {
      FUN_003c3360(param_1,param_2);
      temp_v5 = 0x1a;
    }
    else {
      temp_v4 = padIsButtonPressed(1);
      if (temp_v4 == 0) {
        return 0;
      }
      temp_v5 = 0x1a;
      *(unsigned int *)(param_2 + 0x68) = 0x16;
    }
    break;
  case 2:
    temp_v5 = asdListBoxGetSelectedItemId(param_1[4]);
    asdListBoxGetItemValuePtr(param_1[4],temp_v5);
    switch(temp_v5) {
    case 0:
      temp_v4 = padIsButtonPressed(0);
      if (temp_v4 != 0) {
        temp_v4 = jobIsValid(param_1[4]);
        if (temp_v4 != 0) {
          FUN_0024ef90(param_1[4]);
          jobStop(param_1[4],0);
        }
        temp_v5 = 9;
        *param_1 = temp_v5;
      }
      break;
    case 1:
      temp_v4 = padIsButtonPressed(0);
      if (temp_v4 != 0) {
        temp_v4 = jobIsValid(param_1[4]);
        if (temp_v4 != 0) {
          FUN_0024ef90(param_1[4]);
          jobStop(param_1[4],0);
        }
        param_1[2] = 1;
        *param_1 = 3;
      }
      break;
    case 2:
      temp_v4 = padIsButtonPressed(0);
      if (temp_v4 != 0) {
        temp_v4 = jobIsValid(param_1[4]);
        if (temp_v4 != 0) {
          FUN_0024ef90(param_1[4]);
          jobStop(param_1[4],0);
        }
        temp_v5 = 7;
        *param_1 = temp_v5;
      }
      break;
    case 3:
      temp_v4 = padIsButtonPressed(0);
      if (temp_v4 != 0) {
        temp_v4 = jobIsValid(param_1[4]);
        if (temp_v4 != 0) {
          FUN_0024ef90(param_1[4]);
          jobStop(param_1[4],0);
        }
        temp_v5 = 0xb;
        *param_1 = temp_v5;
      }
      break;
    case 4:
      temp_v4 = padIsButtonPressed(0);
      if (temp_v4 != 0) {
        temp_v4 = jobIsValid(param_1[4]);
        if (temp_v4 != 0) {
          FUN_0024ef90(param_1[4]);
          jobStop(param_1[4],0);
        }
        temp_v5 = 0xd;
        *param_1 = temp_v5;
      }
      break;
    case 5:
      temp_v4 = padIsButtonPressed(0);
      if (temp_v4 != 0) {
        temp_v4 = jobIsValid(param_1[4]);
        if (temp_v4 != 0) {
          FUN_0024ef90(param_1[4]);
          jobStop(param_1[4],0);
        }
        temp_v5 = 0xf;
        *param_1 = temp_v5;
      }
      break;
    case 6:
      temp_v4 = padIsButtonPressed(0);
      if (temp_v4 != 0) {
        temp_v4 = jobIsValid(param_1[4]);
        if (temp_v4 != 0) {
          FUN_0024ef90(param_1[4]);
          jobStop(param_1[4],0);
        }
        temp_v5 = 0x11;
        *param_1 = temp_v5;
      }
      break;
    case 7:
      temp_v4 = padIsButtonPressed(0);
      if (temp_v4 != 0) {
        temp_v4 = jobIsValid(param_1[4]);
        if (temp_v4 != 0) {
          FUN_0024ef90(param_1[4]);
          jobStop(param_1[4],0);
        }
        temp_v5 = 0x13;
        *param_1 = temp_v5;
      }
      break;
    case 8:
      temp_v4 = padIsButtonPressed(0);
      if (temp_v4 != 0) {
        temp_v4 = jobIsValid(param_1[4]);
        if (temp_v4 != 0) {
          FUN_0024ef90(param_1[4]);
          jobStop(param_1[4],0);
        }
        temp_v5 = 0x15;
        *param_1 = temp_v5;
      }
      break;
    case 9:
      temp_v4 = padIsButtonPressed(0);
      if (temp_v4 != 0) {
        temp_v4 = jobIsValid(param_1[4]);
        if (temp_v4 != 0) {
          FUN_0024ef90(param_1[4]);
          jobStop(param_1[4],0);
        }
        temp_v5 = 0x17;
        *param_1 = temp_v5;
      }
      break;
    case 10:
      temp_v4 = padIsButtonPressed(0);
      if (temp_v4 != 0) {
        temp_v5 = 0x1a;
        *param_1 = temp_v5;
      }
    }
    temp_v4 = padIsButtonPressed(1);
    goto joined_r0x003c7184;
  case 3:
    if (param_1[2] == 1) {
      temp_v5 = *(unsigned int *)(param_2 + 0x5c);
      asdListBoxCreateDefault(temp_v5,0x73,0);
      param_1[4] = temp_v5;
      asdListBoxAddItems();
      asdListBoxSetByteValue(param_1[4],1);
      jobSetText(param_1[4],"btl Camera Menu");
    }
    temp_v5 = 4;
    break;
  case 4:
    temp_v1 = asdListBoxGetSelectedItemId(param_1[4]);
    if (param_1[2] == 1) {
      param_1[3] = temp_v1;
      temp_v5 = 5;
    }
    temp_v4 = padIsButtonPressed(0);
    if (temp_v4 != 0) {
      temp_v4 = jobIsValid(param_1[4]);
      if (temp_v4 != 0) {
        FUN_0024ef90(param_1[4]);
        jobStop(param_1[4],0);
      }
      *param_1 = temp_v5;
      return 0;
    }
    temp_v4 = padIsButtonPressed(1);
    if (temp_v4 == 0) {
      return 0;
    }
    temp_v4 = jobIsValid(param_1[4]);
    if (temp_v4 != 0) {
      FUN_0024ef90(param_1[4]);
      jobStop(param_1[4],0);
    }
    temp_v5 = 0x19;
    break;
  case 5:
    if (param_1[3] != 0) {
      if (param_1[3] != 1) {
        return 0;
      }
      FUN_003c5eb0(param_1);
    }
    else {
      btlDebugCreateAttackCameraMenu(reinterpret_cast<BattleCameraMenuOwner *>(param_1),
                   reinterpret_cast<BattleCameraMenuContext *>(param_2));
    }
    temp_v5 = 6;
    break;
  case 6:
    temp_v5 = asdListBoxGetSelectedItemId(param_1[4]);
    if (param_1[3] != 0) {
      if (param_1[3] == 1) {
        btlCameraDebugApplyMenuItem(param_1,param_2,temp_v5);
      }
    }
    else {
      FUN_003c5ffc(param_1,param_2,temp_v5);
    }
    temp_v4 = padIsButtonPressed(0);
    if (temp_v4 == 0) {
      temp_v4 = padIsButtonPressed(1);
      if (temp_v4 == 0) {
        return 0;
      }
      temp_v4 = jobIsValid(param_1[4]);
      if (temp_v4 != 0) {
        FUN_0024ef90(param_1[4]);
        jobStop(param_1[4],0);
      }
      temp_v5 = 3;
      break;
    }
    temp_v5 = 0x1a;
    break;
  case 7:
    btlDebugCreateUnitMenu(param_1);
    temp_v5 = 8;
    break;
  case 8:
    temp_v5 = asdListBoxGetSelectedItemId(param_1[4]);
    switch(temp_v5) {
    case 0:
      puVar7 = (unsigned int *)asdListBoxGetItemValuePtr(param_1[4],0);
      temp_v5 = *puVar7;
      puVar7 = &DAT_00439ce8;
      *puVar7 = temp_v5;
      break;
    case 1:
      piVar4 = (int *)asdListBoxGetItemValuePtr(param_1[4],1);
      DAT_00439cf8 = *piVar4 * 0x1000000 + (DAT_00439cf8 & 0xff0000) + (DAT_00439cf8 & 0xff00) +
                     0xff;
      do {
        temp_v2 = *(int *)(param_2 + 0x1e98) + temp_v4 * 0x114;
        if ((*(unsigned int *)(temp_v2 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v2 + 0x50) & 2) != 0) {
          *(unsigned int *)(temp_v2 + 100) = DAT_00439cf8;
          temp_v3 = DAT_00439cf8;
          *(unsigned int *)(temp_v2 + 0x68) = DAT_00439cf8;
          *(unsigned int *)(temp_v2 + 0x6c) = temp_v3;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 0x6d);
      break;
    case 2:
      piVar4 = (int *)asdListBoxGetItemValuePtr(param_1[4],2);
      DAT_00439cf8 = (DAT_00439cf8 & 0xff000000) + *piVar4 * 0x10000 + (DAT_00439cf8 & 0xff00) +
                     0xff;
      do {
        temp_v2 = *(int *)(param_2 + 0x1e98) + temp_v4 * 0x114;
        if ((*(unsigned int *)(temp_v2 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v2 + 0x50) & 2) != 0) {
          *(unsigned int *)(temp_v2 + 100) = DAT_00439cf8;
          temp_v3 = DAT_00439cf8;
          *(unsigned int *)(temp_v2 + 0x68) = DAT_00439cf8;
          *(unsigned int *)(temp_v2 + 0x6c) = temp_v3;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 0x6d);
      break;
    case 3:
      piVar4 = (int *)asdListBoxGetItemValuePtr(param_1[4],3);
      DAT_00439cf8 = (DAT_00439cf8 & 0xff000000) + (DAT_00439cf8 & 0xff0000) + *piVar4 * 0x100 +
                     0xff;
      do {
        temp_v2 = *(int *)(param_2 + 0x1e98) + temp_v4 * 0x114;
        if ((*(unsigned int *)(temp_v2 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v2 + 0x50) & 2) != 0) {
          *(unsigned int *)(temp_v2 + 100) = DAT_00439cf8;
          temp_v3 = DAT_00439cf8;
          *(unsigned int *)(temp_v2 + 0x68) = DAT_00439cf8;
          *(unsigned int *)(temp_v2 + 0x6c) = temp_v3;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 0x6d);
      break;
    case 4:
      puVar7 = (unsigned int *)asdListBoxGetItemValuePtr(param_1[4],4);
      temp_v0 = (unsigned char)*puVar7;
      puVar8 = &DAT_00439ce0;
      *puVar8 = temp_v0;
      break;
    case 5:
      puVar7 = (unsigned int *)asdListBoxGetItemValuePtr(param_1[4],5);
      temp_v0 = (unsigned char)*puVar7;
      puVar8 = &DAT_00439ce1;
      *puVar8 = temp_v0;
      break;
    case 6:
      puVar7 = (unsigned int *)asdListBoxGetItemValuePtr(param_1[4],6);
      temp_v0 = (unsigned char)*puVar7;
      puVar8 = &DAT_00439ce2;
      *puVar8 = temp_v0;
      break;
    case 7:
      puVar7 = (unsigned int *)asdListBoxGetItemValuePtr(param_1[4],7);
      temp_v0 = (unsigned char)*puVar7;
      puVar8 = &DAT_00439ce3;
      *puVar8 = temp_v0;
      break;
    case 8:
      puVar7 = (unsigned int *)asdListBoxGetItemValuePtr(param_1[4],8);
      temp_v5 = *puVar7;
      puVar7 = &DAT_00439cf0;
      *puVar7 = temp_v5;
      break;
    case 9:
      pcVar6 = (char *)asdListBoxGetItemText(param_1[4],9);
      (*(unsigned int *)&s______00439cf4.u1[0]) = *(unsigned int *)pcVar6;
      break;
    case 10:
      puVar7 = (unsigned int *)asdListBoxGetItemValuePtr(param_1[4],10);
      DAT_00439a50 = (unsigned short)*puVar7;
      break;
    case 0xb:
      puVar7 = (unsigned int *)asdListBoxGetItemValuePtr(param_1[4],0xb);
      (*(unsigned short *)((unsigned char *)&DAT_00439ce8 - 0x294)) = (unsigned short)*puVar7;
      break;
    case 0xc:
      puVar7 = (unsigned int *)asdListBoxGetItemValuePtr(param_1[4],0xc);
      (*(unsigned short *)((unsigned char *)&DAT_00439cf8 - 0x2a6)) = (unsigned short)*puVar7;
      break;
    case 0xd:
      puVar7 = (unsigned int *)asdListBoxGetItemValuePtr(param_1[4],0xd);
      (*(unsigned short *)((unsigned char *)&DAT_00439ce0 - 0x28a)) = (unsigned short)*puVar7;
      break;
    case 0xe:
      puVar7 = (unsigned int *)asdListBoxGetItemValuePtr(param_1[4],0xe);
      (*(unsigned short *)((unsigned char *)&DAT_00439ce1 - 0x289)) = (unsigned short)*puVar7;
      break;
    case 0xf:
      puVar7 = (unsigned int *)asdListBoxGetItemValuePtr(param_1[4],0xf);
      (*(unsigned short *)((unsigned char *)&DAT_00439ce2 - 0x286)) = (unsigned short)*puVar7;
      break;
    case 0x10:
      puVar7 = (unsigned int *)asdListBoxGetItemValuePtr(param_1[4],0x10);
      (*(unsigned short *)((unsigned char *)&DAT_00439ce3 - 0x289)) = (unsigned short)*puVar7;
      break;
    case 0x11:
      puVar7 = (unsigned int *)asdListBoxGetItemValuePtr(param_1[4],0x11);
      (*(unsigned short *)((unsigned char *)&DAT_00439cf0 - 0x292)) = (unsigned short)*puVar7;
      break;
    case 0x12:
      puVar7 = (unsigned int *)asdListBoxGetItemValuePtr(param_1[4],0x12);
      (*(unsigned short *)((unsigned char *)&DAT_00439cf4 - 0x294)) = (unsigned short)*puVar7;
      break;
    case 0x13:
      puVar7 = (unsigned int *)asdListBoxGetItemValuePtr(param_1[4],0x13);
      (*(unsigned short *)((unsigned char *)&DAT_00439a50 + 0x14)) = (unsigned short)*puVar7;
      break;
    case 0x14:
      puVar7 = (unsigned int *)asdListBoxGetItemValuePtr(param_1[4],0x14);
      DAT_00439a62 = (unsigned short)*puVar7;
      break;
    case 0x15:
      puVar7 = (unsigned int *)asdListBoxGetItemValuePtr(param_1[4],0x15);
      DAT_00439a66 = (unsigned short)*puVar7;
    }
    temp_v4 = padIsButtonPressed(0);
    goto joined_r0x003c7184;
  case 9:
    FUN_003c39fc(param_1);
    temp_v5 = 10;
    break;
  case 10:
    FUN_003c40ac(param_1);
    temp_v4 = padIsButtonPressed(0);
    goto joined_r0x003c7184;
  case 0xb:
    temp_v5 = *(unsigned int *)(param_2 + 0x5c);
    asdListBoxCreateDefault(temp_v5,0x73,0);
    param_1[4] = temp_v5;
    asdListBoxAddItems();
    asdListBoxSetByteValue(param_1[4],1);
    jobSetText(param_1[4],"btl Param Menu");
    asdListBoxSetItemMode3(param_1[4],0,0xffffffff,0xffffffff,0x6c,0);
    param_1[7] = 0xffffffff;
    temp_v5 = 0xc;
    break;
  case 0xc:
    FUN_003c4ac4(param_1);
    temp_v4 = padIsButtonPressed(0);
    goto joined_r0x003c7184;
  case 0xd:
    temp_v5 = *(unsigned int *)(param_2 + 0x5c);
    asdListBoxCreateDefault(temp_v5,0x73,0);
    param_1[4] = temp_v5;
    asdListBoxAddItems();
    asdListBoxSetByteValue(param_1[4],1);
    jobSetText(param_1[4],"btl Bad Menu");
    asdListBoxSetItemMode3(param_1[4],0,0xffffffff,0xffffffff,0x6c,0);
    *(unsigned char *)(param_1 + 5) = 0;
    *(unsigned char *)((int)param_1 + 0x15) = 0;
    *(unsigned char *)((int)param_1 + 0x16) = 0;
    param_1[7] = 0xffffffff;
    temp_v5 = 0xe;
    param_1[6] = 0;
    break;
  case 0xe:
    FUN_003c33c8(param_1);
    temp_v4 = padIsButtonPressed(0);
    goto joined_r0x003c7184;
  case 0xf:
    btlDebugCreateStageMenu(param_1);
    temp_v5 = 0x10;
    break;
  case 0x10:
    FUN_003c4f38(param_1);
    temp_v4 = padIsButtonPressed(0);
    goto joined_r0x003c7184;
  case 0x11:
    temp_v5 = *(unsigned int *)(param_2 + 0x5c);
    asdListBoxCreateDefault(temp_v5,0x73,0);
    param_1[4] = temp_v5;
    asdListBoxAddItems();
    asdListBoxSetByteValue(param_1[4],1);
    jobSetText(param_1[4],"btl Talk Menu");
    puVar11 = (unsigned int *)(param_2 + 0x44a8);
    asdListBoxSetItemMode2(param_1[4],0,(*puVar11 & 0x1000) >> 0xc);
    asdListBoxSetItemMode2(param_1[4],1,(*puVar11 & 0x2000) >> 0xd);
    asdListBoxSetItemMode3(param_1[4],2,*(unsigned int *)(param_2 + 0x2268),0,600,0);
    asdListBoxSetItemMode2(param_1[4],3,(*(unsigned int *)(param_2 + 0x44a0) & 0x40000) >> 0x12);
    asdListBoxSetItemMode2(param_1[4],4,(*puVar11 & 0x200000) >> 0x15);
    temp_v5 = 0x12;
    break;
  case 0x12:
    FUN_003c4524(param_1);
    temp_v4 = padIsButtonPressed(0);
    goto joined_r0x003c7184;
  case 0x13:
    btlDebugCreatePanelMenu(param_1);
    temp_v5 = 0x14;
    break;
  case 0x14:
    FUN_003c49bc(param_1);
    temp_v4 = padIsButtonPressed(0);
    goto joined_r0x003c7184;
  case 0x15:
    talkCtrlDebugMenuBuild(param_1);
    temp_v5 = 0x16;
    break;
  case 0x16:
    FUN_003c56d8(param_1);
    temp_v4 = padIsButtonPressed(0);
    goto joined_r0x003c7184;
  case 0x17:
    temp_v5 = *(unsigned int *)(param_2 + 0x5c);
    asdListBoxCreateDefault(temp_v5,0x73,0);
    param_1[4] = temp_v5;
    asdListBoxAddItems();
    asdListBoxSetByteValue(param_1[4],1);
    jobSetText(param_1[4],"btl Result Menu");
    asdListBoxSetItemMode2(param_1[4],0);
    asdListBoxSetItemMode2(param_1[4],1);
    temp_v5 = 0x18;
    break;
  case 0x18:
    temp_v4 = asdListBoxGetSelectedItemId(param_1[4]);
    if (temp_v4 != 0) {
      if (temp_v4 == 1) {
        temp_v4 = listBoxItemHasOwner(param_1[4],1);
        if (temp_v4 != 0) {
          temp_v3 = *(unsigned int *)(param_2 + 0x44ac) | 0x10;
        }
        else {
          temp_v3 = *(unsigned int *)(param_2 + 0x44ac) & 0xffffffef;
        }
        *(unsigned int *)(param_2 + 0x44ac) = temp_v3;
      }
    }
    else {
      temp_v4 = listBoxItemHasOwner(param_1[4],0);
      if (temp_v4 != 0) {
        temp_v3 = *(unsigned int *)(param_2 + 0x44ac) | 8;
      }
      else {
        temp_v3 = *(unsigned int *)(param_2 + 0x44ac) & 0xfffffff7;
      }
      *(unsigned int *)(param_2 + 0x44ac) = temp_v3;
    }
    temp_v4 = padIsButtonPressed(0);
joined_r0x003c7184:
    if (temp_v4 == 0) {
      s______00439cf4.whole[0] = (char)(*(unsigned int *)&s______00439cf4.u1[0]);
      s______00439cf4.whole[1] = romwright_subpiece_4_1_1((*(unsigned int *)&s______00439cf4.u1[0]),1);
      s______00439cf4.whole[2] = romwright_subpiece_4_1_2((*(unsigned int *)&s______00439cf4.u1[0]),2);
      s______00439cf4.whole[3] = romwright_subpiece_4_1_3((*(unsigned int *)&s______00439cf4.u1[0]),3);
      return 0;
    }
    temp_v5 = 0x1a;
    break;
  case 0x19:
    temp_v5 = *(unsigned int *)(param_2 + 0x5c);
    asdListBoxCreateDefault(temp_v5,0x73,0);
    param_1[4] = temp_v5;
    asdListBoxAddItems();
    asdListBoxSetByteValue(param_1[4],1);
    jobSetText(param_1[4],"btl Debug Menu");
    temp_v5 = 0;
    break;
  case 0x1a:
    return 0xffffffff;
  default:
    return 0;
  }
  *param_1 = temp_v5;
  return 0;
}

} /* extern "C" */
