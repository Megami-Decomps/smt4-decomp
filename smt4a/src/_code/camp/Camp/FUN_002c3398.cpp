/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c3398` (_code @ 0x2c3398, 0x644 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "romwright_types.h"

extern "C" {
// The fields of g_gameState this function uses.
struct GameStateView {
    u8 pad000[0x38];
    unsigned char f005f1634; /* 0x038 */
};
extern GameStateView g_gameState;


int FUN_003344b4(...);
int obj48Arm(...);

int FUN_0020d934(...);
int partyPanelHasSlotValue(...);
int scrollOwnerSelectIndex(...);
int FUN_002a4964(...);
int FUN_003343f0(...);
int FUN_003f5220(...);

int FUN_0014e188(...);
int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int uiSpriteSelectAnim(...);
int uiSpriteSetKeyframe(...);
int gameGetSlotTable(...);
int __aeabi_memset4(...);
int FUN_0020d700(...);
int campRebuildEnabledFlagList(...);
int campSelectorRebuildList(...);
int FUN_0026f7f0(...);
void campSetSpriteAnimationPreset(int, int, int, unsigned int);
int FUN_002a2cb4(...);
int FUN_002a4878(...);
int FUN_002c8538(...);
int FUN_002e5c48(...);
int sysMemClear(...);
int FUN_002f78a0(...);
int campCommonBgAcquire(...);
int campButtonHelpAcquire(...);
int FUN_003423e8(...);
int FUN_003493dc(...);
int FUN_0038b1c4(...);
int FUN_003a7040(...);
int pair40Set(...);
int clearThreeWords(...);
int paramsClearPacket(...);

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern int campDrawCurrentSubscreen(...); /* 0x202450 */
extern int FUN_00227418(...); /* 0x227418 */
extern int FUN_0025ec04(...); /* 0x25ec04 */
extern int FUN_003d56dc(...); /* 0x3d56dc */
extern unsigned char DAT_0052b8bc; /* 0x52b8bc */
extern unsigned char DAT_0052b970; /* 0x52b970 */
extern unsigned char DAT_0052bac0; /* 0x52bac0 */
extern unsigned char DAT_0052baf0; /* 0x52baf0 */
extern unsigned int *g_camp; /* 0x57f108 */
extern int g_partyPanel; /* 0x57f268 */
extern unsigned char g_campState; /* 0x5e1eb0 */
extern unsigned char DAT_005e1eba; /* 0x5e1eba */


/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: paramsInit. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: gameGetSlotTable. */
/* Supplied declaration required: __aeabi_memset4. */
/* Supplied declaration required: FUN_0020d700. */
/* Supplied declaration required: FUN_0020d934. */
/* Supplied declaration required: partyPanelHasSlotValue. */
/* Supplied declaration required: campRebuildEnabledFlagList. */
/* Supplied declaration required: campSelectorRebuildList. */
/* Supplied declaration required: FUN_0026f7f0. */
/* Supplied declaration required: FUN_002a2cb4. */
/* Supplied declaration required: FUN_002a4878. */
extern unsigned int FUN_002a4894(int);
/* Supplied declaration required: scrollOwnerSelectIndex. */
/* Supplied declaration required: FUN_002a4964. */
/* Supplied declaration required: FUN_002c8538. */
extern int FUN_002e27b8(void);
/* Supplied declaration required: FUN_002e5c48. */
/* Supplied declaration required: sysMemClear. */
extern int FUN_002ef9f0(void);
/* Supplied declaration required: FUN_002f78a0. */
/* Supplied declaration required: campCommonBgAcquire. */
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: FUN_003344b4. */
/* Supplied declaration required: campButtonHelpAcquire. */
/* Supplied declaration required: FUN_003423e8. */
/* Supplied declaration required: FUN_003493dc. */
extern unsigned char FUN_0036d134(void);
/* Supplied declaration required: FUN_0038b1c4. */
extern int aocDataBlockHasEntries(void);
/* Supplied declaration required: FUN_003a7040. */
extern unsigned char FUN_003b6f00(void);
extern unsigned char FUN_003c0dcc(void);
extern int FUN_003deee4(unsigned int);
extern unsigned char FUN_003e42f0(void);
/* Supplied declaration required: obj48Arm. */
/* Supplied declaration required: FUN_003f5220. */
/* Supplied declaration required: pair40Set. */
extern int flagSetAllCoveredBy(unsigned int);
/* Supplied declaration required: clearThreeWords. */
/* Supplied declaration required: paramsClearPacket. */


/* WARNING: Removing unreachable block (ram,0x002c3ae0) */

void FUN_002c3398(void)

{
/* irregular: 8 goto(s); 42 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  unsigned char *puVar3;
  unsigned int *puVar4;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int *puVar11;
  
  if (g_camp == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x33c0,1);
    g_camp = puVar2;
  }
  puVar2 = g_camp;
  sysMemClear();
  clearThreeWords(&g_campState);
  campCommonBgAcquire();
  asdProcessCreateSimple("TMD CALC",4,0,0,FUN_003d56dc,0,0);
  *puVar2 = (unsigned int)puVar3;
  taskCreateDraw("Camp DrawUpLeft",0x7e,0,0,campDrawCurrentSubscreen,0,0,puVar3);
  taskCreateDraw("Camp DrawUpRight",0xda,0,0,campDrawCurrentSubscreen,0,0,*puVar2);
  taskCreateDraw("Camp DDRAW",0xeb,0,0,FUN_00227418,0,0,*puVar2);
  puVar2[2] = (unsigned int)puVar3;
  taskCreateDraw("Camp DBaseDraw",0xe9,0,0,FUN_0025ec04,0,0,*puVar2);
  puVar2 = g_camp;
  *(unsigned char *)(g_camp + 0x2e) = 0;
  *(unsigned char *)((int)puVar2 + 0xb9) = 3;
  puVar2[0xcee] = 0;
  DAT_005e1eba = 0;
  g_gameState.f005f1634 = 0;
  FUN_002a2cb4();
  FUN_0038b1c4();
  FUN_003a7040();
  FUN_002e5c48();
  campButtonHelpAcquire();
  FUN_003423e8(0);
  puVar4 = puVar2 + 0x18e;
  paramsClearPacket();
  paramsInit(reinterpret_cast<UiResourceParameters *>(puVar4),&DAT_0052b8bc,0xb4,&DAT_0052b970,0x150,&DAT_0052bac0,0x30,0,0,&DAT_0052baf0,
               0x4d0);
  FUN_0014e188(puVar2 + 0x196,0x14,0,puVar4,0xc9);
  FUN_0014e188(puVar2 + 0x1b9,0x14,0,puVar4,0xc9);
  uiSpriteSetKeyframe(puVar2 + 0x1b9,1,0);
  FUN_0014e188(puVar2 + 0x1dc,0x14,0,puVar4,0xc9);
  uiSpriteSelectAnim(puVar2 + 0x1dc,10);
  FUN_0014e188(puVar2 + 0x1ff,0x14,0,puVar4,0xc9);
  uiSpriteSelectAnim(puVar2 + 0x1ff,2);
  FUN_0014e188(puVar2 + 0x222,0x14,0,puVar4,0xc9);
  temp_v6 = 0;
  do {
    FUN_0014e188(puVar2 + temp_v6 * 0x23 + 0x245,0x14,0x22,puVar4,0xc9);
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 8);
  FUN_0014e188(puVar2 + 0x35d,0x14,0,puVar4,0xc9);
  uiSpriteSelectAnim(puVar2 + 0x35d,1);
  FUN_0014e188(puVar2 + 0x380,0x14,0,puVar4,0xc9);
  uiSpriteSelectAnim(puVar2 + 0x380,9);
  campSetSpriteAnimationPreset(2,1,0xffffffff,0);
  FUN_002f78a0(puVar2);
  FUN_0014e188(puVar2 + 0x682,0x14,0,puVar4,2);
  *(unsigned char *)(puVar2 + 0x6c8) = 0;
  FUN_0014e188(puVar2 + 0x6a5,0x14,0,puVar4,0xc9);
  uiSpriteSelectAnim(puVar2 + 0x6a5,0xb);
  puVar4 = g_camp;
  puVar11 = g_camp + 0xcac;
  *(unsigned char *)puVar11 = 0;
  *(unsigned char *)((int)puVar4 + 0x32b1) = 0;
  *(unsigned char *)((int)puVar4 + 0x32b2) = 0;
  *(unsigned char *)((int)puVar4 + 0x32b3) = 0;
  *(unsigned char *)(puVar4 + 0xcad) = 0;
  *(unsigned char *)((int)puVar4 + 0x32b5) = 0;
  *(unsigned char *)((int)puVar4 + 0x32b6) = 0;
  temp_v6 = FUN_003deee4(1);
  if ((temp_v6 != 0) || (temp_v6 = flagSetAllCoveredBy(1), temp_v6 == 0)) {
    *(unsigned char *)puVar11 = 1;
  }
  *(unsigned char *)((int)puVar4 + 0x32b1) = 0;
  temp_v6 = FUN_003deee4(0);
  if ((temp_v6 != 0) || (temp_v6 = flagSetAllCoveredBy(0), temp_v6 == 0)) {
    *(unsigned char *)((int)puVar4 + 0x32b1) = 1;
  }
  puVar4 = g_camp;
  temp_v0 = FUN_003c0dcc();
  *(unsigned char *)((int)puVar4 + 0x32b2) = temp_v0;
  temp_v0 = FUN_003b6f00();
  *(unsigned char *)((int)puVar4 + 0x32b3) = temp_v0;
  puVar4 = g_camp;
  *(unsigned char *)(g_camp + 0xcad) = 0;
  temp_v6 = FUN_002e27b8();
  if (0 < temp_v6) {
    *(unsigned char *)(puVar4 + 0xcad) = 1;
  }
  puVar4 = g_camp;
  temp_v0 = FUN_003e42f0();
  *(unsigned char *)((int)puVar4 + 0x32b5) = temp_v0;
  puVar4 = g_camp;
  temp_v0 = FUN_0036d134();
  *(unsigned char *)((int)puVar4 + 0x32b6) = temp_v0;
  *(unsigned char *)(puVar2 + 0x29) = 1;
  FUN_0020d700();
  __aeabi_memset4((int)puVar2 + 0x1b22,0x4a,0xffffffff);
  gameGetSlotTable();
  campRebuildEnabledFlagList(0xb);
  campRebuildEnabledFlagList(0xd);
  campRebuildEnabledFlagList(0xe);
  FUN_0026f7f0();
  campSelectorRebuildList(0x13);
  campSelectorRebuildList(0x14);
  campSelectorRebuildList(0x15);
  campSelectorRebuildList(0x16);
  campSelectorRebuildList(0x17);
  campSelectorRebuildList(0x18);
  campSelectorRebuildList(0x19);
  FUN_003493dc(1);
  temp_v6 = g_partyPanel;
  gameGetSlotTable(&g_partyPanel,0,0xffffffff);
  *(unsigned char *)(temp_v6 + 0x9b4) = 1;
  __aeabi_memset4(temp_v6 + 0x9c0,4,1);
  temp_v1 = 0;
  temp_v5 = 0;
  do {
    temp_v2 = temp_v1 + 1;
    temp_v5 = temp_v5 + 2;
    *(unsigned short *)(temp_v6 + temp_v1 * 8 + 0xa84) = 1;
    temp_v1 = temp_v1 + 2;
    *(unsigned short *)(temp_v6 + temp_v2 * 8 + 0xa84) = 1;
  } while (temp_v5 < 0x18);
  temp_v1 = 0;
  do {
    temp_v5 = temp_v6 + temp_v1 * 4;
    *(unsigned char *)(*(int *)(temp_v5 + 0xa10) + 0x25) = 0;
    *(unsigned char *)(*(int *)(temp_v5 + 0xa10) + 0x27) = 0;
    *(unsigned char *)(*(int *)(temp_v5 + 0xa10) + 0x26) = 0;
    pair40Set(*(unsigned int *)(temp_v5 + 0xa10),0);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  temp_v1 = 0;
  do {
    temp_v5 = temp_v6 + temp_v1 * 4;
    *(unsigned char *)(*(int *)(temp_v5 + 0xa20) + 0x25) = 0;
    *(unsigned char *)(*(int *)(temp_v5 + 0xa20) + 0x27) = 0;
    *(unsigned char *)(*(int *)(temp_v5 + 0xa20) + 0x26) = 0;
    pair40Set(*(unsigned int *)(temp_v5 + 0xa20),0);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  temp_v5 = 0;
  temp_v1 = 0;
  *(unsigned int *)(temp_v6 + 0x9c0) = 0;
  do {
    temp_v2 = temp_v5 + 1;
    temp_v1 = temp_v1 + 2;
    *(unsigned short *)(temp_v6 + temp_v5 * 8 + 0xa84) = 0;
    temp_v5 = temp_v5 + 2;
    *(unsigned short *)(temp_v6 + temp_v2 * 8 + 0xa84) = 0;
  } while (temp_v1 < 0x18);
  *(unsigned int *)(temp_v6 + 0x20) = 1;
  FUN_002c8538(0);
  if (*(int *)(temp_v6 + 0x20) == 8) {
    if (*(char *)(temp_v6 + 0x42) != '\0') {
      temp_v5 = temp_v6 + 0xdb4;
      temp_v3 = FUN_002a4878();
      temp_v4 = FUN_002a4894(temp_v5);
      temp_v1 = 0;
      partyPanelHasSlotValue(0,temp_v3,temp_v4,*(unsigned int *)(temp_v6 + 0x2c));
      if (temp_v1 == 0) {
        temp_v1 = 0;
        if (*(char *)(temp_v6 + 0x9b4) == '\x04') {
          do {
            temp_v2 = ((int)(temp_v1 + ((unsigned int)(temp_v1 >> 0x1f) >> 0x1e)) >> 2) + 1;
            if (temp_v2 != 0) {
              if (*(short *)(g_partyPanel + ((temp_v2 * 4 - 4) + temp_v1 % 4) * 8 + 0xa84) != 0) {
LAB_002c4664:
                scrollOwnerSelectIndex(temp_v5,temp_v1 % 4);
                FUN_002a4964(temp_v5,((int)(temp_v1 + ((unsigned int)(temp_v1 >> 0x1f) >> 0x1e)) >> 2) + 1);
                if (temp_v1 < 0x18) goto LAB_002c4a2c;
                break;
              }
            }
            else if (*(char *)(g_partyPanel + temp_v1 % 4 + 0x9c0) != '\0') goto LAB_002c4664;
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 0x18);
          temp_v1 = 0;
          do {
            if (*(char *)(g_partyPanel + temp_v1 + 0x9c0) != '\0') {
              scrollOwnerSelectIndex(temp_v5);
              temp_v1 = 0;
              FUN_002a4964(temp_v5,temp_v1);
              break;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 4);
        }
        else {
          do {
            if (*(char *)(g_partyPanel + temp_v1 + 0x9c0) != '\0') {
              scrollOwnerSelectIndex(temp_v5,temp_v1);
              FUN_002a4964(temp_v5,0);
              if (temp_v1 < 4) goto LAB_002c4a2c;
              break;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 4);
          temp_v1 = 0;
          do {
            temp_v2 = ((int)(temp_v1 + ((unsigned int)(temp_v1 >> 0x1f) >> 0x1e)) >> 2) + 1;
            if (temp_v2 != 0) {
              if (*(short *)(g_partyPanel + ((temp_v2 * 4 - 4) + temp_v1 % 4) * 8 + 0xa84) != 0) {
                scrollOwnerSelectIndex(temp_v5,temp_v1 % 4);
                temp_v1 = ((int)(temp_v1 + ((unsigned int)(temp_v1 >> 0x1f) >> 0x1e)) >> 2) + 1;
                FUN_002a4964(temp_v5,temp_v1);
                break;
              }
            }
            else if (*(char *)(g_partyPanel + temp_v1 % 4 + 0x9c0) != '\0') {
              scrollOwnerSelectIndex(temp_v5,temp_v1 % 4);
              temp_v1 = ((int)(temp_v1 + ((unsigned int)(temp_v1 >> 0x1f) >> 0x1e)) >> 2) + 1;
              FUN_002a4964(temp_v5,temp_v1);
              break;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 0x18);
        }
      }
    }
    else {
      temp_v3 = FUN_002a4878(temp_v6 + 0xd50);
      temp_v4 = FUN_002a4894(temp_v6 + 0xd50);
      temp_v1 = 0;
      partyPanelHasSlotValue(0,temp_v3,temp_v4,*(unsigned int *)(temp_v6 + 0x2c));
      if (temp_v1 == 0) {
        temp_v1 = 0;
        if (*(char *)(temp_v6 + 0x9b4) == '\x04') {
          do {
            temp_v5 = ((int)(temp_v1 + ((unsigned int)(temp_v1 >> 0x1f) >> 0x1e)) >> 2) + 1;
            temp_v2 = temp_v1 % 4 + *(int *)(temp_v6 + 0x2c) * 0xc;
            if (temp_v5 != 0) {
              if (*(short *)(g_partyPanel + ((temp_v5 * 4 - 4) + temp_v2) * 8 + 0xa84) != 0) {
LAB_002c4858:
                temp_v5 = temp_v1 + *(int *)(temp_v6 + 0x2c) * 0xc;
                if (temp_v5 < 0xc) {
                  *(unsigned int *)(temp_v6 + 0x2c) = 0;
                  scrollOwnerSelectIndex(temp_v6 + 0xd50,temp_v1 % 4);
                  FUN_002a4964(temp_v6 + 0xd50,
                               ((int)(temp_v1 + ((unsigned int)(temp_v1 >> 0x1f) >> 0x1e)) >> 2) + 1);
                }
                else {
                  temp_v5 = temp_v5 - 0xc;
                  *(unsigned int *)(temp_v6 + 0x2c) = 1;
                  scrollOwnerSelectIndex(temp_v6 + 0xd50,temp_v5 % 4);
                  FUN_002a4964(temp_v6 + 0xd50,
                               ((int)(temp_v5 + ((unsigned int)(temp_v5 >> 0x1f) >> 0x1e)) >> 2) + 1);
                }
                if (temp_v1 < 0x18) goto LAB_002c4a2c;
                break;
              }
            }
            else if (*(char *)(g_partyPanel + temp_v2 + 0x9c0) != '\0') goto LAB_002c4858;
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 0x18);
          temp_v1 = 0;
          do {
            if (*(char *)(g_partyPanel + temp_v1 + 0x9c0) != '\0') {
              scrollOwnerSelectIndex(temp_v6 + 0xd50);
              temp_v1 = 0;
              temp_v5 = temp_v6 + 0xd50;
              FUN_002a4964(temp_v5,temp_v1);
              break;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 4);
        }
        else {
          do {
            if (*(char *)(g_partyPanel + temp_v1 + 0x9c0) != '\0') {
              scrollOwnerSelectIndex(temp_v6 + 0xd50,temp_v1);
              FUN_002a4964(temp_v6 + 0xd50,0);
              if (temp_v1 < 4) goto LAB_002c4a2c;
              break;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 4);
          temp_v1 = g_partyPanel;
          temp_v5 = 0;
          do {
            temp_v2 = ((int)(temp_v5 + ((unsigned int)(temp_v5 >> 0x1f) >> 0x1e)) >> 2) + 1;
            if (temp_v2 != 0) {
              if (*(short *)(g_partyPanel + (temp_v5 % 4 + (temp_v2 * 4 - 4)) * 8 + 0xa84) == 0)
              goto LAB_002c4a1c;
LAB_002c49c4:
              if (temp_v5 < 0xc) {
                if (*(int *)(temp_v6 + 0x2c) != 1) {
                  *(unsigned int *)(temp_v6 + 0x2c) = 0;
                }
                else {
                  *(unsigned int *)(g_partyPanel + 0x2c) = *(unsigned int *)(g_partyPanel + 0x2c) ^ 1;
                  uiSpriteSetKeyframe(temp_v1 + 0x180,5,0);
                  temp_v2 = 0;
                  do {
                    FUN_003f5220(*(unsigned int *)(temp_v1 + temp_v2 * 4 + 0xa10),
                                 *(unsigned int *)(temp_v1 + 0x2c));
                    temp_v2 = temp_v2 + 1;
                  } while (temp_v2 < 4);
                  temp_v2 = 0;
                  do {
                    FUN_003f5220(*(unsigned int *)(temp_v1 + temp_v2 * 4 + 0xa20),
                                 *(unsigned int *)(temp_v1 + 0x2c));
                    temp_v2 = temp_v2 + 1;
                  } while (temp_v2 < 0x18);
                }
                scrollOwnerSelectIndex(temp_v6 + 0xd50,temp_v5 % 4);
                FUN_002a4964(temp_v6 + 0xd50,
                             ((int)(temp_v5 + ((unsigned int)(temp_v5 >> 0x1f) >> 0x1e)) >> 2) + 1);
                break;
              }
              if (*(int *)(temp_v6 + 0x2c) != 0) {
                *(unsigned int *)(temp_v6 + 0x2c) = 1;
              }
              else {
                *(unsigned int *)(g_partyPanel + 0x2c) = *(unsigned int *)(g_partyPanel + 0x2c) ^ 1;
                uiSpriteSetKeyframe(temp_v1 + 0x180,4,0);
                temp_v2 = 0;
                do {
                  FUN_003f5220(*(unsigned int *)(temp_v1 + temp_v2 * 4 + 0xa10),
                               *(unsigned int *)(temp_v1 + 0x2c));
                  temp_v2 = temp_v2 + 1;
                } while (temp_v2 < 4);
                temp_v2 = 0;
                do {
                  FUN_003f5220(*(unsigned int *)(temp_v1 + temp_v2 * 4 + 0xa20),
                               *(unsigned int *)(temp_v1 + 0x2c));
                  temp_v2 = temp_v2 + 1;
                } while (temp_v2 < 0x18);
              }
              temp_v5 = temp_v5 - 0xc;
              scrollOwnerSelectIndex(temp_v6 + 0xd50,temp_v5 % 4);
              temp_v1 = ((int)(temp_v5 + ((unsigned int)(temp_v5 >> 0x1f) >> 0x1e)) >> 2) + 1;
              temp_v5 = temp_v6 + 0xd50;
              FUN_002a4964(temp_v5,temp_v1);
              break;
            }
            if (*(char *)(g_partyPanel + temp_v5 % 4 + 0x9c0) != '\0') goto LAB_002c49c4;
LAB_002c4a1c:
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < 0x18);
        }
      }
    }
  }
LAB_002c4a2c:
  FUN_0020d934();
  temp_v1 = g_partyPanel;
  if (*(int *)(temp_v6 + 0x1c) != 0x1b) {
    return;
  }
  temp_v6 = *(int *)(temp_v6 + 0x20);
  *(unsigned int *)(g_partyPanel + 0x24) = *(unsigned int *)(g_partyPanel + 0x1c);
  *(int *)(temp_v1 + 0x1c) = temp_v6;
  *(unsigned int *)(temp_v1 + 0x18) = 0;
  if (temp_v6 == 0x1b) {
    temp_v6 = aocDataBlockHasEntries();
    if (temp_v6 == 0) {
      *(unsigned int *)(temp_v1 + 0x1c) = 0x1c;
      return;
    }
    temp_v6 = FUN_002ef9f0();
    if (temp_v6 == 0) {
      FUN_003343f0();
    }
    temp_v6 = *(int *)(temp_v1 + 0x1c);
  }
  if (temp_v6 == 0x15) {
    temp_v6 = 0;
    do {
      temp_v5 = temp_v1 + temp_v6 * 4;
      pair40Set(*(unsigned int *)(temp_v5 + 0xa10),0);
      *(unsigned char *)(*(int *)(temp_v5 + 0xa10) + 0x25) = 0;
      *(unsigned char *)(*(int *)(temp_v5 + 0xa10) + 0x27) = 0;
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 4);
    temp_v6 = 0;
    do {
      temp_v5 = temp_v1 + temp_v6 * 4;
      pair40Set(*(unsigned int *)(temp_v5 + 0xa20),0);
      *(unsigned char *)(*(int *)(temp_v5 + 0xa20) + 0x25) = 0;
      *(unsigned char *)(*(int *)(temp_v5 + 0xa20) + 0x27) = 0;
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x18);
    FUN_003344b4(0);
  }
  if (*(int *)(temp_v1 + 0x1c) == 0x16) {
    temp_v6 = 0;
    do {
      temp_v5 = temp_v1 + temp_v6 * 4;
      pair40Set(*(unsigned int *)(temp_v5 + 0xa10),0);
      *(unsigned char *)(*(int *)(temp_v5 + 0xa10) + 0x25) = 0;
      *(unsigned char *)(*(int *)(temp_v5 + 0xa10) + 0x27) = 0;
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 4);
    temp_v6 = 0;
    do {
      temp_v5 = temp_v1 + temp_v6 * 4;
      pair40Set(*(unsigned int *)(temp_v5 + 0xa20),0);
      *(unsigned char *)(*(int *)(temp_v5 + 0xa20) + 0x25) = 0;
      *(unsigned char *)(*(int *)(temp_v5 + 0xa20) + 0x27) = 0;
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x18);
    FUN_003344b4(0);
    if (*(char *)(temp_v1 + 0x9c0) != '\0') {
      obj48Arm(*(unsigned int *)(temp_v1 + 0xa10),0xff);
    }
    temp_v6 = 0;
    do {
      if (*(char *)(temp_v1 + temp_v6 + 0x9c1) != '\0') {
        obj48Arm(*(unsigned int *)(temp_v1 + temp_v6 * 4 + 0xa14),0xff);
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 3);
    temp_v6 = 0;
    do {
      if (*(short *)(temp_v1 + temp_v6 * 8 + 0xa84) != 0) {
        obj48Arm(*(unsigned int *)(temp_v1 + temp_v6 * 4 + 0xa20),0xff);
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x18);
  }
  return;
}

} /* extern "C" */
