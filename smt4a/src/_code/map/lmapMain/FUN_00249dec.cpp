/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00249dec` (_code @ 0x249dec, 0xf4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ptrListRemoveClearOwner(...);
int naviConfigureEntry(...);
int FUN_003659f4(void);
int sub68OwnerStart2(void);
int FUN_00378964(void);
int FUN_00378a1c(void);
int FUN_003d2150(...);

int ARM_common_memcpy4_9(...);
int eventQueueAddUnique(...);
int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_002941c8(int *, int);
int FUN_002ba170(void);
int libc_strcpy(unsigned char *, int);
int FUN_003146ac(int, int, int);
int FUN_0033abb4(void);
int mathPositionHeadingDegrees(void);
int gameFlagsBitSet(int, int);
int FUN_003689d0(void);
int FUN_00384830(void);
int FUN_00385384(void);
int gameFlagSetValue(int, int);
int FUN_00408184(...);
int FUN_0046e800(unsigned short *, unsigned int);
int flagValueAdd(...);
int gamePackedFlagTest(...);

typedef int romwright_code(...);
/* stack frame of void: 28 slot(s), 112 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
} void_stack;

extern unsigned char LAB_0024a6ac; /* 0x24a6ac */
extern unsigned char LAB_0024a6bc; /* 0x24a6bc */
extern unsigned char LAB_0024ad40; /* 0x24ad40 */
extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern unsigned short *g_aocSystem; /* 0x570280 */
extern int g_lmapView; /* 0x5806a4 */
extern int g_lmapScene; /* 0x581288 */
#ifndef ROMWRIGHT_STORAGE_s__a_a_00587f08_9_1_DEFINED
#define ROMWRIGHT_STORAGE_s__a_a_00587f08_9_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__a_a_00587f08_9_1 {
    char whole[9];
    unsigned char u1[9];
    signed char s1[9];
};
typedef char romwright_storage_s__a_a_00587f08_9_1_size_check[(sizeof(union romwright_storage_s__a_a_00587f08_9_1) == 9) ? 1 : -1];
typedef char romwright_storage_s__a_a_00587f08_9_1_u1_width_check[(sizeof(((union romwright_storage_s__a_a_00587f08_9_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__a_a_00587f08_9_1_s1_width_check[(sizeof(((union romwright_storage_s__a_a_00587f08_9_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__a_a_00587f08_9_1 s__a_a_00587f08; /* 0x587f08 */
extern int g_gameState; /* 0x5f15fc */
extern signed char DAT_005f1614; /* 0x5f1614 */
extern signed char DAT_005f161d; /* 0x5f161d */
extern unsigned int DAT_005f16b0; /* 0x5f16b0 */
extern unsigned int DAT_005f16b4; /* 0x5f16b4 */
extern unsigned int DAT_005f16b8; /* 0x5f16b8 */
extern unsigned char DAT_005f174a; /* 0x5f174a */
extern int DAT_005f174c; /* 0x5f174c */
extern unsigned char DAT_005f1750; /* 0x5f1750 */
extern signed char DAT_005f1768; /* 0x5f1768 */
extern unsigned char DAT_005f1769; /* 0x5f1769 */
extern unsigned int DAT_005f176c; /* 0x5f176c */
extern unsigned int DAT_005f1770; /* 0x5f1770 */
extern unsigned char DAT_005f1774; /* 0x5f1774 */
extern unsigned char DAT_005f1775; /* 0x5f1775 */
extern short DAT_005f17c4; /* 0x5f17c4 */
extern unsigned char DAT_005f19ec; /* 0x5f19ec */
extern unsigned char DAT_005f19ed; /* 0x5f19ed */
extern signed char DAT_005f1bc4; /* 0x5f1bc4 */
extern int DAT_005f1be4; /* 0x5f1be4 */

/* Supplied declaration required: ARM_common_memcpy4_9. */
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: eventQueueAddUnique. */
extern int dataTableGet(unsigned int, unsigned int);
extern int gameFlagIsSet(unsigned int);
extern unsigned int dataTableGetCount(int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: ptrListRemoveClearOwner. */
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_002941c8. */
extern int mapDepartIsRunning(void);
/* Supplied declaration required: FUN_002ba170. */
/* Supplied declaration required: libc_strcpy. */
extern int lmapSceneGetUnk0(void);
/* Supplied declaration required: FUN_003146ac. */
extern int FUN_0033aa6c(int);
/* Supplied declaration required: FUN_0033abb4. */
/* Supplied declaration required: mathPositionHeadingDegrees. */
/* Supplied declaration required: naviConfigureEntry. */
extern int gameFlagsTestSecondBank(int);
/* Supplied declaration required: gameFlagsBitSet. */
/* Supplied declaration required: FUN_003659f4. */
/* Supplied declaration required: FUN_003689d0. */
/* Supplied declaration required: sub68OwnerStart2. */
extern int mathCirclesOverlap(void);
/* Supplied declaration required: FUN_00378964. */
/* Supplied declaration required: FUN_00378a1c. */
/* Supplied declaration required: FUN_00384830. */
/* Supplied declaration required: FUN_00385384. */
/* Supplied declaration required: FUN_003d2150. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_00408184. */
/* Supplied declaration required: FUN_0046e800. */
extern unsigned int FUN_00480738(unsigned int);
extern unsigned int FUN_00480c28(void);
/* Supplied declaration required: flagValueAdd. */
/* Supplied declaration required: gamePackedFlagTest. */
extern int FUN_004d0584(void);


unsigned int FUN_00249dec(void)

{
/* irregular: 3 goto(s); 26 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  int temp_v17;
  int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  unsigned int temp_v30;
  unsigned int temp_v31;
  unsigned int temp_v32;
  unsigned int temp_v33;
  unsigned int temp_v34;
  unsigned int temp_v35;
  unsigned int temp_v36;
  unsigned int temp_v37;
  unsigned int temp_v38;
  unsigned int temp_v39;
  unsigned int temp_v40;
  unsigned int temp_v41;
  unsigned int temp_v42;
  unsigned int temp_v43;
  int temp_v44;
  
  temp_v10 = 0;
  temp_v44 = gameFlagsGetBlock();
  FUN_002ba170();
  temp_v9 = 0;
  temp_v7 = 0;
  do {
    temp_v8 = (*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v7 * 0x58;
    if (*(char *)(temp_v8 + 0xa4) != '\0') {
      switch(*(unsigned int *)(temp_v8 + 0xa8)) {
      case 1:
        temp_v12 = *(float *)(g_lmapScene + 0x20) - *(float *)(temp_v8 + 0xb4);
        if ((((unsigned int)temp_v12 < 0xc2c80001) && ((int)temp_v12 < 0x42c80001)) &&
           ((*(int *)(temp_v8 + 0xf0) == 0 || (*(char *)(temp_v8 + 0xf4) != '\0')))) {
          if (*(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 4) < 100) {
            temp_v1 = *(short *)(temp_v8 + 200);
            if ((((temp_v1 != 3 && temp_v1 != 4) && (temp_v1 != 5 && temp_v1 != 8)) &&
                (temp_v1 != 9 && temp_v1 != 10)) && ((temp_v1 != 0x10 && temp_v1 != 0xd) && temp_v1 != 0xf)) {
              temp_v4 = mathCirclesOverlap();
              goto joined_r0x00249fd4;
            }
            temp_v4 = mathCirclesOverlap();
            if (temp_v4 == 0) break;
            temp_v4 = *(int *)(temp_v8 + 0xb0);
            FUN_00384830();
            if (temp_v4 >= 0x42f00000) break;
            temp_v4 = *(int *)(temp_v8 + 0xb0);
            mathPositionHeadingDegrees();
            FUN_0033abb4();
            if (temp_v4 < 0x428c0001) break;
          }
          else {
            temp_v4 = mathCirclesOverlap();
joined_r0x00249fd4:
            if (temp_v4 == 0) break;
          }
          temp_v11 = 0;
          if ((g_gameState >= 100) || ((temp_v4 = lmapSceneGetUnk0(), temp_v4 == 1 && (DAT_005f17c4 == 0))))
          {
            temp_v11 = 1;
          }
          if ((DAT_005f1bc4 == '\0') && (DAT_005f1614 == '\0')) {
            if ((DAT_005f161d == '\0') && ((DAT_005f1be4 == 0 || (DAT_005f1be4 == 4)))) {
              temp_v4 = FUN_004d0584();
              temp_v5 = (*(unsigned int *)&s__a_a_00587f08.u1[0]);
              if ((temp_v4 != 0) && ((*(char *)(g_lmapView + 0xb4) == '\0' && (temp_v11)))) {
                DAT_005f1768 = '\0';
                DAT_005f1769 = 0;
                *(unsigned char *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcdc) = 0;
                *(unsigned char *)(temp_v5 + 0x14) = 0;
                DAT_005f176c = 0;
                DAT_005f1770 = 0;
                temp_v4 = *(int *)(temp_v8 + 0xcc);
                if (temp_v4 < -1) {
                  temp_v17 = dataTableGet(0x20,0);
                  temp_v18 = dataTableGetEntries();
                  temp_v2 = dataTableGetCount(temp_v17);
                  if ((unsigned int)-temp_v4 >= temp_v2) {
                    puVar4 = (unsigned short *)0x0;
                  }
                  else {
                    puVar4 = (unsigned short *)(temp_v18 + temp_v4 * -4);
                  }
                  temp_v2 = (unsigned int)*puVar4;
                  puVar4 = g_aocSystem;
                  FUN_0046e800(g_aocSystem,temp_v2);
                  if (puVar4 == (unsigned short *)0x0) {
                    temp_v17 = dataTableGet(0x20,1);
                    temp_v18 = dataTableGetEntries();
                    temp_v3 = dataTableGetCount(temp_v17);
                    if (temp_v2 >= temp_v3) {
                      puVar4 = (unsigned short *)0x0;
                    }
                    else {
                      puVar4 = (unsigned short *)(temp_v18 + temp_v2 * 0x30);
                    }
                  }
                  temp_v10 = (*(unsigned int *)&s__a_a_00587f08.u1[0]);
                  temp_v0 = *puVar4;
                  *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcac) = (unsigned int)temp_v0;
                  *(int *)(temp_v10 + 0xcbc) = (int)(char)puVar4[3];
                  *(unsigned char *)(temp_v10 + 0xcdc) = 1;
                  temp_v4 = gamePackedFlagTest((unsigned int)temp_v0);
                  if (temp_v4 == 0) {
                    *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xccc) = 1;
                  }
                  flagValueAdd(*(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcac),
                               *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcbc));
                }
                else {
                  temp_v4 = gameFlagIsSet(0x50);
                  if ((temp_v4 != 0) && (temp_v4 = gameFlagIsSet(0x51), temp_v4 == 0)) {
                    *(unsigned int *)(temp_v8 + 0xa8) = 2;
                    return 1;
                  }
                  temp_v4 = *(int *)(temp_v8 + 0xcc);
                  FUN_003689d0();
                  if (*(short *)(temp_v4 + 0x10) != 0) {
                    gameFlagSetValue((int)*(short *)(temp_v4 + 0x10),1);
                  }
                  temp_v10 = (*(unsigned int *)&s__a_a_00587f08.u1[0]);
                  if (*(short *)(temp_v4 + 0x12) != 0) {
                    *(int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcac) = (int)*(short *)(temp_v4 + 0x12);
                    *(unsigned int *)(temp_v10 + 0xcbc) = 1;
                    temp_v6 = gamePackedFlagTest();
                    if (temp_v6 == 0) {
                      *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xccc) = 1;
                    }
                    flagValueAdd((int)*(short *)(temp_v4 + 0x12),1);
                  }
                  else {
                    temp_v1 = *(short *)(temp_v8 + 200);
                    if ((temp_v1 == 1) || (temp_v1 == 0xb || temp_v1 == 0xc)) {
                      *(unsigned int *)(temp_v8 + 0xa8) = 3;
                      *(unsigned int *)(temp_v8 + 0xac) = 0;
                      DAT_005f19ec = 1;
                      temp_v17 = 4;
                      temp_v36 = *(unsigned int *)(temp_v8 + 0xcc);
                      temp_v10 = 1;
                      FUN_00385384();
                      FUN_002941c8(&temp_v17,0x84);
                      break;
                    }
                    temp_v10 = FUN_00480c28();
                    temp_v7 = 0;
                    *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xce4) = temp_v10;
                    do {
                      temp_v10 = FUN_00480738((temp_v7 + 1U) & 0xff);
                      temp_v6 = temp_v7 * 4;
                      temp_v7 = temp_v7 + 1;
                      *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v6 + 0xce8) = temp_v10;
                    } while (temp_v7 < 5);
                    FUN_003146ac((int)*(short *)(temp_v4 + 0x14),(int)*(short *)(temp_v8 + 200),1);
                    temp_v1 = *(short *)(temp_v8 + 200);
                    if ((((temp_v1 == 3 || temp_v1 == 4) || (temp_v1 == 5 || temp_v1 == 7)) ||
                        (temp_v1 == 0xd || temp_v1 == 0xf)) &&
                       (*(char *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0x14) != '\0')) {
                      if (*(char *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcdc) == '\0') {
                        DAT_005f1768 = '\x01';
                      }
                      else {
                        DAT_005f1769 = 1;
                      }
                    }
                  }
                  temp_v1 = *(short *)(temp_v8 + 200);
                  if ((((temp_v1 == 0 || temp_v1 == 2) || temp_v1 == 6) &&
                      (temp_v6 = gameFlagIsSet(0x8d), temp_v6 != 0)) &&
                     (temp_v6 = gameFlagIsSet(0xc2), temp_v6 == 0)) {
                    DAT_005f174a = 1;
                    DAT_005f174c = 500;
                    if (g_gameState >= 0x65) {
                      ARM_common_memcpy4_9(&DAT_005f1750,&LAB_0024a6ac);
                    }
                    else {
                      ARM_common_memcpy4_9(&DAT_005f1750,&LAB_0024a6bc);
                    }
                  }
                  if (*(short *)(temp_v4 + 0x16) != 0) {
                    DAT_005f174a = 1;
                    DAT_005f174c = (int)*(short *)(temp_v4 + 0x16);
                    libc_strcpy(&DAT_005f1750,temp_v4 + 0x18);
                  }
                }
                if ((*(char *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0x14) != '\0') &&
                   (((temp_v1 = *(short *)(temp_v8 + 200), temp_v1 == 3 || temp_v1 == 4 ||
                     (temp_v1 == 5 || temp_v1 == 0xd)) ||
                    ((temp_v1 == 0xf || temp_v1 == 8 || ((temp_v1 == 9 || temp_v1 == 10) || temp_v1 == 0x10)))
                    ))) {
                  temp_v16 = 0.017453292f;
                  temp_v10 = *(unsigned int *)(temp_v8 + 0xb4);
                  temp_v13 = *(float *)(temp_v8 + 0xb0);
                  temp_v12 = *(float *)(temp_v8 + 0xbc) * 0.017453292f;
                  temp_v14 = *(float *)(temp_v8 + 0xb8);
                  FUN_001bc124();
                  temp_v15 = 100.0f;
                  temp_v13 = temp_v13 + temp_v12 * 100.0f;
                  temp_v16 = *(float *)(temp_v8 + 0xbc) * temp_v16;
                  FUN_001bbf0c();
                  temp_v4 = g_lmapScene;
                  *(float *)(g_lmapScene + 0x28) = temp_v13;
                  *(unsigned int *)(temp_v4 + 0x2c) = temp_v10;
                  *(float *)(temp_v4 + 0x30) = temp_v14 + temp_v16 * temp_v15;
                }
                if (*(char *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcdc) != '\0') {
                  if (*(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 4) < 100) {
                    temp_v1 = *(short *)(temp_v8 + 200);
                    if ((((temp_v1 == 3 || temp_v1 == 4) || (temp_v1 == 5 || temp_v1 == 0xd)) ||
                        (temp_v1 == 0xf || temp_v1 == 8)) ||
                       ((temp_v1 == 9 || temp_v1 == 10) || temp_v1 == 0x10)) {
                      temp_v16 = 0.017453292f;
                      temp_v10 = *(unsigned int *)(temp_v8 + 0xb4);
                      temp_v13 = *(float *)(temp_v8 + 0xb0);
                      temp_v12 = *(float *)(temp_v8 + 0xbc) * 0.017453292f;
                      temp_v14 = *(float *)(temp_v8 + 0xb8);
                      FUN_001bc124();
                      temp_v15 = 100.0f;
                      temp_v13 = temp_v13 + temp_v12 * 100.0f;
                      temp_v16 = *(float *)(temp_v8 + 0xbc) * temp_v16;
                      FUN_001bbf0c();
                      temp_v4 = g_lmapScene;
                      *(float *)(g_lmapScene + 0x28) = temp_v13;
                      *(unsigned int *)(temp_v4 + 0x2c) = temp_v10;
                      *(float *)(temp_v4 + 0x30) = temp_v14 + temp_v16 * temp_v15;
                      goto LAB_0024a684;
                    }
LAB_0024a4f8:
                    temp_v1 = *(short *)(temp_v8 + 200);
                    if (!((temp_v1 == 7 || temp_v1 == 0xd) || temp_v1 == 0xf)) {
                      if ((!(temp_v1 == 8 || temp_v1 == 9)) && (!(temp_v1 == 10 || temp_v1 == 0x10))) {
                        temp_v17 = 1;
                        DAT_005f1774 = 0;
                      }
                      else {
                        temp_v17 = 5;
                        DAT_005f1774 = 1;
                      }
                    }
                    else {
                      temp_v17 = 2;
                      DAT_005f1774 = 1;
                    }
                  }
                  else {
LAB_0024a684:
                    temp_v1 = *(short *)(temp_v8 + 200);
                    if ((temp_v1 != 3 && temp_v1 != 4) && temp_v1 != 5) goto LAB_0024a4f8;
                    temp_v17 = 2;
                    DAT_005f1774 = 1;
                  }
                  temp_v1 = *(short *)(temp_v8 + 200);
                  if ((temp_v1 == 8 || temp_v1 == 9) || (temp_v1 == 10 || temp_v1 == 0x10)) {
                    temp_v43 = *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcfc);
                    DAT_005f16b0 = *(unsigned int *)(temp_v8 + 0xb0);
                    DAT_005f16b4 = *(unsigned int *)(temp_v8 + 0xb4);
                    DAT_005f16b8 = *(unsigned int *)(temp_v8 + 0xb8);
                    *(unsigned int *)(temp_v8 + 0xac) = 0;
                    eventQueueAddUnique(0x100020e);
                    temp_v10 = 1;
                    *(unsigned int *)(temp_v8 + 0xa8) = 2;
                    FUN_00408184(0x18,1);
                    gameFlagsBitSet((int)(short)*(unsigned int *)(temp_v8 + 0xcc),1);
                    FUN_002941c8(&temp_v17,0x84);
                    break;
                  }
                  temp_v19 = *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcac);
                  temp_v23 = *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcbc);
                  temp_v27 = *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xccc);
                  temp_v20 = *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcb0);
                  temp_v24 = *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcc0);
                  temp_v28 = *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcd0);
                  temp_v21 = *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcb4);
                  temp_v25 = *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcc4);
                  temp_v29 = *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcd4);
                  temp_v22 = *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcb8);
                  temp_v26 = *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcc8);
                  temp_v30 = *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcd8);
                  temp_v38 = *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xce8);
                  temp_v39 = *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcec);
                  temp_v40 = *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcf0);
                  temp_v41 = *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcf4);
                  temp_v42 = *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcf8);
                  if (g_gameState >= 100) {
                    temp_v31 = *(unsigned int *)(g_lmapScene + 0x1c);
                    temp_v32 = *(unsigned int *)(g_lmapScene + 0x20);
                    temp_v33 = *(unsigned int *)(g_lmapScene + 0x24);
                    temp_v34 = *(unsigned int *)(temp_v8 + 0xbc);
                  }
                  temp_v35 = *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0x18);
                  temp_v37 = *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xce4);
                  FUN_002941c8(&temp_v17,0x84);
                  *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0x18) = 0;
                }
                if (DAT_005f1768 == '\0') {
                  temp_v1 = *(short *)(temp_v8 + 200);
                  if ((((!(temp_v1 == 3 || temp_v1 == 4)) && (!(temp_v1 == 5 || temp_v1 == 7))) &&
                      (!(temp_v1 == 0xd || temp_v1 == 0xf))) &&
                     ((!(temp_v1 == 8 || temp_v1 == 9) && (!(temp_v1 == 10 || temp_v1 == 0x10))))) {
                    temp_v4 = *(int *)(temp_v8 + 0xcc);
                    temp_v6 = temp_v44 + ((int)(temp_v4 + ((unsigned int)(temp_v4 >> 0x1f) >> 0x1b)) >> 5) * 4;
                    *(unsigned int *)(temp_v6 + 0x7c8) =
                         *(unsigned int *)(temp_v6 + 0x7c8) & ~(1 << ((temp_v4 % 0x20) & 0xffU));
                  }
                  else if (*(int *)(temp_v8 + 0xcc) < -1) {
                    *(unsigned char *)(temp_v44 + 0xe09) = 0;
                  }
                  else {
                    temp_v11 = *(char *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcdc) == '\x01';
                    temp_v2 = (*(unsigned int *)&s__a_a_00587f08.u1[0]);
                    if (temp_v11) {
                      temp_v2 = (unsigned int)*(unsigned char *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0x14);
                    }
                    if (temp_v11 && temp_v2 == 0) {
                      gameFlagsBitSet((int)(short)*(int *)(temp_v8 + 0xcc),1);
                    }
                  }
                  temp_v1 = *(short *)(temp_v8 + 200);
                  if (((temp_v1 == 3 || temp_v1 == 4) || (temp_v1 == 5 || temp_v1 == 7)) ||
                     (temp_v1 == 0xd || temp_v1 == 0xf)) {
                    temp_v11 = *(char *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcdc) == '\x01';
                    temp_v2 = (*(unsigned int *)&s__a_a_00587f08.u1[0]);
                    if (temp_v11) {
                      temp_v2 = (unsigned int)*(unsigned char *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0x14);
                    }
                    if (temp_v11 && temp_v2 == 0) {
                      FUN_00408184(0x18,1);
                    }
                  }
                  temp_v1 = *(short *)(temp_v8 + 200);
                  if ((temp_v1 == 0 || temp_v1 == 2) || (temp_v1 == 6 || temp_v1 == 0xe)) {
                    DAT_005f19ed = 1;
                    FUN_00408184(0x13,1);
                  }
                }
                DAT_005f16b0 = *(unsigned int *)(temp_v8 + 0xb0);
                DAT_005f16b4 = *(unsigned int *)(temp_v8 + 0xb4);
                DAT_005f16b8 = *(unsigned int *)(temp_v8 + 0xb8);
                *(unsigned int *)(temp_v8 + 0xac) = 0;
                eventQueueAddUnique(0x100020e);
                temp_v5 = 2;
                temp_v10 = 1;
                *(unsigned int *)(temp_v8 + 0xa8) = temp_v5;
                break;
              }
              if ((DAT_005f1bc4 != '\0') || (DAT_005f1614 != '\0')) break;
            }
            if (*(int *)(temp_v8 + 0xa8) != 3) {
              FUN_003659f4();
              temp_v9 = temp_v9 + 1;
            }
          }
        }
        break;
      case 2:
        temp_v4 = *(int *)(temp_v8 + 0xac) + 1;
        *(int *)(temp_v8 + 0xac) = temp_v4;
        if (temp_v4 == 0x19) {
          temp_v4 = gameFlagIsSet(0x50);
          if ((temp_v4 != 0) && (temp_v4 = gameFlagIsSet(0x51), temp_v4 == 0)) {
            DAT_005f1775 = 1;
            DAT_005f174c = 1;
            ARM_common_memcpy4_9(&DAT_005f1750,&LAB_0024ad40);
          }
          if (DAT_005f1768 == '\0') {
            temp_v1 = *(short *)(temp_v8 + 200);
            *(unsigned char *)(temp_v8 + 0xc4) = 1;
            *(unsigned int *)(temp_v8 + 0xc0) = 1;
            if ((((temp_v1 == 3 || temp_v1 == 4) || (temp_v1 == 5 || temp_v1 == 7)) ||
                (temp_v1 == 0xd || temp_v1 == 0xf)) ||
               ((temp_v1 == 8 || temp_v1 == 9 || (temp_v1 == 10 || temp_v1 == 0x10)))) {
              FUN_003d2150(0x10000b1);
            }
          }
        }
        temp_v10 = 1;
        if ((*(int *)(temp_v8 + 0xac) >= 0x29) && (temp_v4 = mapDepartIsRunning(), temp_v4 == 0)) {
          if (DAT_005f1768 != '\0') {
            temp_v5 = 1;
            *(unsigned int *)(temp_v8 + 0xa8) = temp_v5;
          }
          else {
            temp_v1 = *(short *)(temp_v8 + 200);
            if ((((temp_v1 != 3 && temp_v1 != 4) && (temp_v1 != 5 && temp_v1 != 7)) &&
                (temp_v1 != 0xd && temp_v1 != 0xf)) &&
               ((temp_v1 != 8 && temp_v1 != 9 && (temp_v1 != 10 && temp_v1 != 0x10)))) {
              FUN_00378964();
              if (*(char *)(temp_v8 + 0xd0) != '\0') {
                if (*(int *)(temp_v8 + 0xd4) == 0) {
                  DAT_005f1774 = 0;
                  break;
                }
                ptrListRemoveClearOwner(g_handleRegistry,*(unsigned int *)(*(int *)(temp_v8 + 0xd4) + 4));
                temp_v5 = 9;
                *(unsigned char *)(temp_v8 + 0xd8) = 0;
              }
              else {
                temp_v4 = *(int *)(*(int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(int *)(temp_v8 + 0xdc) * 8 + 0x20
                                         ) + 4);
                *(unsigned int *)(temp_v4 + 4) = *(unsigned int *)(temp_v4 + 4) | 3;
                temp_v5 = 8;
              }
              *(unsigned int *)(temp_v8 + 0xa8) = temp_v5;
              DAT_005f1774 = 0;
              break;
            }
            if (*(char *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcdc) != '\0') {
              if (*(char *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0x14) != '\0') {
                temp_v5 = 1;
                *(unsigned char *)(temp_v8 + 0xc4) = 1;
                *(unsigned int *)(temp_v8 + 0xc0) = 0;
                *(unsigned int *)(temp_v8 + 0xa8) = temp_v5;
                DAT_005f1774 = 0;
                break;
              }
              *(unsigned char *)(temp_v8 + 0xc4) = 1;
              *(unsigned int *)(temp_v8 + 0xa8) = 0xb;
              *(unsigned int *)(temp_v8 + 0xc0) = 2;
              FUN_00378964();
            }
          }
          DAT_005f1774 = 0;
        }
        break;
      case 3:
        temp_v4 = mapDepartIsRunning();
        if (temp_v4 == 0) {
          temp_v4 = gameFlagsTestSecondBank((int)(short)*(unsigned int *)(temp_v8 + 0xcc));
          if (temp_v4 != 0) {
            *(unsigned int *)(temp_v8 + 0xc0) = 1;
            *(unsigned char *)(temp_v8 + 0xc4) = 1;
            if (*(int *)(temp_v8 + 0xac) >= 0x1a) {
              FUN_00408184(0x19,1);
              temp_v6 = *(int *)(temp_v8 + 0xcc);
              temp_v4 = temp_v44 + ((int)(temp_v6 + ((unsigned int)(temp_v6 >> 0x1f) >> 0x1b)) >> 5) * 4;
              *(unsigned int *)(temp_v4 + 0x7c8) = *(unsigned int *)(temp_v4 + 0x7c8) & ~(1 << ((temp_v6 % 0x20) & 0xffU))
              ;
              FUN_00378964();
              if (*(char *)(temp_v8 + 0xd0) != '\0') {
                if (*(int *)(temp_v8 + 0xd4) != 0) {
                  ptrListRemoveClearOwner(g_handleRegistry,
                               *(unsigned int *)
                                (*(int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(int *)(temp_v8 + 0xdc) * 8 + 0x20
                                         ) + 4));
                  temp_v5 = 9;
                  *(unsigned char *)(temp_v8 + 0xd8) = 0;
                  *(unsigned int *)(temp_v8 + 0xa8) = temp_v5;
                }
              }
              else {
                temp_v4 = *(int *)(*(int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(int *)(temp_v8 + 0xdc) * 8 + 0x20
                                         ) + 4);
                *(unsigned int *)(temp_v4 + 4) = *(unsigned int *)(temp_v4 + 4) | 3;
                temp_v5 = 8;
                *(unsigned int *)(temp_v8 + 0xa8) = temp_v5;
              }
              DAT_005f1774 = 0;
              temp_v6 = FUN_0033aa6c((int)(short)*(unsigned int *)(temp_v8 + 0xcc));
              temp_v4 = 0;
              if (temp_v6 != 0) {
                temp_v4 = *(int *)(temp_v8 + 0xf8);
              }
              if (temp_v6 != 0 && temp_v4 != -1) {
                sub68OwnerStart2();
                *(unsigned int *)(temp_v8 + 0xf8) = 0xffffffff;
                *(int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xce0) =
                     *(int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xce0) - 1;
              }
            }
            *(int *)(temp_v8 + 0xac) = *(int *)(temp_v8 + 0xac) + 1;
          }
          else {
            temp_v4 = FUN_0033aa6c((int)(short)*(unsigned int *)(temp_v8 + 0xcc));
            if ((temp_v4 != 0) && (*(int *)(temp_v8 + 0xf8) == -1)) {
              temp_v17 = (int)*(float *)(temp_v8 + 0xb4);
              temp_v18 = (int)*(float *)(temp_v8 + 0xb8);
              temp_v19 = 1;
              naviConfigureEntry(*(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xce0),
                           (int)*(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 4),
                           (int)*(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 6),(int)*(float *)(temp_v8 + 0xb0)
                          );
              temp_v5 = (*(unsigned int *)&s__a_a_00587f08.u1[0]);
              *(unsigned int *)(temp_v8 + 0xf8) = *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xce0);
              *(int *)(temp_v5 + 0xce0) = *(int *)(temp_v5 + 0xce0) + 1;
            }
            *(unsigned char *)(temp_v8 + 0xc4) = 1;
            *(unsigned int *)(temp_v8 + 0xa8) = 1;
            *(unsigned int *)(temp_v8 + 0xc0) = 0;
          }
        }
        break;
      case 6:
        temp_v5 = 1;
        *(unsigned char *)(temp_v8 + 0xc4) = 1;
        *(unsigned int *)(temp_v8 + 0xc0) = 0;
        *(unsigned int *)(temp_v8 + 0xa8) = temp_v5;
        break;
      case 9:
        temp_v5 = 10;
        *(unsigned int *)(temp_v8 + 0xa8) = temp_v5;
        break;
      case 10:
        if (*(int **)(temp_v8 + 0xd4) != (int *)0x0) {
          (**(romwright_code **)(**(int **)(temp_v8 + 0xd4) + 4))();
          *(unsigned int *)(temp_v8 + 0xd4) = 0;
        }
        temp_v5 = 0;
        *(char *)(temp_v8 + 0xa4) = '\0';
        *(unsigned int *)(temp_v8 + 0xa8) = temp_v5;
      }
    }
    temp_v7 = temp_v7 + 1;
    if (temp_v7 >= 0x20) {
      if (temp_v9 == 0) {
        FUN_00378a1c();
      }
      return temp_v10;
    }
  } while( 1 );
}

} /* extern "C" */
