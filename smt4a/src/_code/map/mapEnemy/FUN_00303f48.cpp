/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00303f48` (_code @ 0x303f48, 0xd64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int moriModelContentCopyBody(void);
int handleRegistryRegisterObject(...);

int randRange(...);
int FUN_00178b04(...);
int gameFlagIsSet(...);
int dataTable00FindById(void);
int distSpatial(void);
int FUN_002b64c0(...);
int FUN_002b67a0(int);
int FUN_00356308(void);
int contentEntryGetB(void);
int contentEntryGetC(void);
int FUN_003a30e8(void);
int FUN_003a315c(void);
int dataTable29Section6Count(void);
int dataTable2FType0Count(void);
int FUN_004bc420(...);
int SBORROW4(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} void_stack;

extern unsigned char LAB_00304cd0; /* 0x304cd0 */
extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern int g_mapEnemy; /* 0x5806d4 */
extern int g_lmapScene; /* 0x581288 */
extern int g_gameState; /* 0x5f15fc */
extern unsigned int DAT_005f1600; /* 0x5f1600 */
extern signed char DAT_005f1623; /* 0x5f1623 */
extern unsigned int DAT_005f17f0; /* 0x5f17f0 */
extern int DAT_005f17f4; /* 0x5f17f4 */
extern int DAT_005f17f8; /* 0x5f17f8 */
extern unsigned int DAT_005f17fc; /* 0x5f17fc */
extern unsigned int DAT_005f1800; /* 0x5f1800 */
extern int DAT_005f18a0; /* 0x5f18a0 */
extern float DAT_005f18a4; /* 0x5f18a4 */
extern unsigned int DAT_005f18a8; /* 0x5f18a8 */
extern unsigned int DAT_005f18ac; /* 0x5f18ac */
extern unsigned int DAT_005f18b0; /* 0x5f18b0 */
extern unsigned int DAT_005f18b4; /* 0x5f18b4 */
extern unsigned short DAT_005f18b8; /* 0x5f18b8 */
extern short DAT_005f18ba; /* 0x5f18ba */
extern short DAT_005f18bc; /* 0x5f18bc */
extern unsigned char DAT_005f18be; /* 0x5f18be */
extern unsigned char DAT_005f18bf; /* 0x5f18bf */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: randRange. */
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: FUN_00178b04. */
extern int gameGetPlayerData(void);
/* Supplied declaration required: gameFlagIsSet. */
/* Supplied declaration required: dataTable00FindById. */
/* Supplied declaration required: distSpatial. */
/* Supplied declaration required: FUN_002b64c0. */
/* Supplied declaration required: FUN_002b67a0. */
extern int FUN_002d7c88(unsigned int);
extern char *FUN_00332fcc(void);
/* Supplied declaration required: FUN_00356308. */
extern char *FUN_00371058(void);
extern int lmapGetSpawnIndex(void);
/* Supplied declaration required: contentEntryGetB. */
extern char *dataTableGetRecordFortyOne(void);
/* Supplied declaration required: contentEntryGetC. */
/* Supplied declaration required: FUN_003a30e8. */
/* Supplied declaration required: FUN_003a315c. */
extern char *dataTable29Type6GetEntry(int);
extern int *dataTable2FType0GetEntry(int);
extern int FUN_003c3074(void);
extern int FUN_003c30ac(void);
extern int FUN_003c30e4(void);
extern int FUN_003c311c(void);
/* Supplied declaration required: dataTable29Section6Count. */
/* Supplied declaration required: dataTable2FType0Count. */
extern int FUN_003cb88c(int, unsigned int);
/* Supplied declaration required: moriModelContentCopyBody. */
extern unsigned int modelListInit(void);
/* Supplied declaration required: handleRegistryRegisterObject. */
extern int lookupConditionalSixBitValue(unsigned int);
extern int FUN_004bb870(unsigned int);
/* Supplied declaration required: FUN_004bc420. */
extern int FUN_004bc5a4(unsigned int);
extern int dataSelectPrioritizedCandidate(int index);
extern unsigned int __aeabi_idivmod(void);


void FUN_00303f48(void)

{
/* irregular: 5 goto(s); irregular input(s): in_fpscr; 20 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  int *piVar5;
  short *psVar6;
  char *pcVar7;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  short *psVar13;
  char *pcVar14;
  int *piVar15;
  unsigned char temp_v8;
  unsigned int in_fpscr;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned long long temp_v13;
  float temp_v14;
  unsigned long long temp_v15;
  int temp_v16;
  char *temp_v17;
  char *temp_v18;
  
  temp_v6 = g_mapEnemy;
  temp_v0 = gameFlagsGetBlock();
  DAT_005f17f0 = 0x3c;
  temp_v1 = FUN_003cb88c(g_gameState,DAT_005f1600);
  DAT_005f18a0 = 0x1e;
  DAT_005f18a4 = 3500.0f;
  DAT_005f18a8 = 0x44fa0000;
  DAT_005f18ac = 0x43fa0000;
  DAT_005f18b0 = 0x43160000;
  DAT_005f18b4 = 0x447a0000;
  DAT_005f18b8 = 0x46;
  DAT_005f18ba = 8;
  DAT_005f18bc = 4;
  DAT_005f18be = 4;
  DAT_005f18bf = 0;
  if (g_gameState == 0x18) {
    DAT_005f18bf = 3;
  }
  if (temp_v1 != 0) {
    DAT_005f18a0 = (int)*(char *)(temp_v1 + 3);
    DAT_005f18a4 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 4),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_005f18a8 = VectorSignedToFloat((int)*(short *)(temp_v1 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_005f18ac = VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_005f18b0 = VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_005f18b4 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_005f18b8 = *(unsigned short *)(temp_v1 + 0xe);
    DAT_005f18ba = (short)*(char *)(temp_v1 + 0x10);
    DAT_005f18bc = (short)*(char *)(temp_v1 + 0x11);
    DAT_005f18be = *(unsigned char *)(temp_v1 + 0x12);
    DAT_005f18bf = *(unsigned char *)(temp_v1 + 0x13);
  }
  piVar3 = (int *)(temp_v6 + 0x3d74);
  piVar15 = (int *)(temp_v6 + 0x3d78);
  temp_v1 = 0;
  *piVar3 = 0;
  *piVar15 = 0;
  *(unsigned int *)(temp_v6 + 0x3d7c) = 0;
  do {
    temp_v2 = temp_v6 + temp_v1 * 0x188;
    temp_v1 = temp_v1 + 1;
    *(unsigned char *)(temp_v2 + 0x34) = 0;
    *(unsigned int *)(temp_v2 + 100) = 0;
    *(unsigned int *)(temp_v2 + 0x68) = 0xffffffff;
    *(unsigned int *)(temp_v2 + 0x6c) = 1;
    *(unsigned short *)(temp_v2 + 0x16e) = 0xffff;
    *(unsigned char *)(temp_v2 + 0x170) = 0;
    *(unsigned char *)(temp_v2 + 0x171) = 0;
    *(unsigned char *)(temp_v2 + 0x173) = 0;
    *(unsigned char *)(temp_v2 + 0x174) = 0;
    *(unsigned char *)(temp_v2 + 0x1ae) = 0;
    *(unsigned char *)(temp_v2 + 0x1af) = 1;
  } while (temp_v1 < 0x28);
  temp_v1 = 0;
  do {
    temp_v2 = temp_v1 + 1;
    temp_v1 = temp_v6 + temp_v1 * 0xc4;
    *(unsigned int *)(temp_v1 + 0x3e38) = 0;
    *(unsigned int *)(temp_v1 + 0x3e34) = 0xffffffff;
    *(unsigned int *)(temp_v1 + 0x3e3c) = 0;
    *(unsigned int *)(temp_v1 + 0x3e40) = 0;
    *(unsigned int *)(temp_v1 + 0x3e44) = 0;
    *(unsigned int *)(temp_v1 + 0x3e48) = 0;
    *(unsigned int *)(temp_v1 + 0x3e4c) = 0;
    *(unsigned int *)(temp_v1 + 0x3e50) = 0;
    *(unsigned int *)(temp_v1 + 0x3e54) = 0;
    *(unsigned int *)(temp_v1 + 0x3e58) = 0;
    *(unsigned int *)(temp_v1 + 0x3e5c) = 0;
    *(unsigned int *)(temp_v1 + 0x3e60) = 0;
    *(unsigned int *)(temp_v1 + 0x3e64) = 0;
    *(unsigned int *)(temp_v1 + 0x3e68) = 0;
    *(unsigned int *)(temp_v1 + 0x3e6c) = 0;
    *(unsigned int *)(temp_v1 + 0x3e70) = 0;
    *(unsigned int *)(temp_v1 + 0x3e74) = 0;
    *(unsigned int *)(temp_v1 + 0x3e78) = 0;
    *(unsigned int *)(temp_v1 + 0x3e7c) = 0;
    *(unsigned int *)(temp_v1 + 16000) = 0;
    *(unsigned int *)(temp_v1 + 0x3e84) = 0;
    *(unsigned int *)(temp_v1 + 0x3e88) = 0;
    *(unsigned int *)(temp_v1 + 0x3e8c) = 0;
    *(unsigned int *)(temp_v1 + 0x3e90) = 0;
    *(unsigned int *)(temp_v1 + 0x3e94) = 0;
    *(unsigned int *)(temp_v1 + 0x3e98) = 0;
    *(unsigned int *)(temp_v1 + 0x3e9c) = 0;
    *(unsigned int *)(temp_v1 + 0x3ea0) = 0;
    *(unsigned int *)(temp_v1 + 0x3ea4) = 0;
    *(unsigned int *)(temp_v1 + 0x3ea8) = 0;
    *(unsigned int *)(temp_v1 + 0x3eac) = 0;
    *(unsigned int *)(temp_v1 + 0x3eb0) = 0;
    *(unsigned int *)(temp_v1 + 0x3eb4) = 0;
    *(unsigned int *)(temp_v1 + 0x3eb8) = 0;
    *(unsigned int *)(temp_v1 + 0x3ebc) = 0;
    *(unsigned int *)(temp_v1 + 0x3ec0) = 0;
    *(unsigned int *)(temp_v1 + 0x3ec4) = 0;
    *(unsigned int *)(temp_v1 + 0x3ec8) = 0;
    *(unsigned int *)(temp_v1 + 0x3ecc) = 0;
    *(unsigned int *)(temp_v1 + 0x3ed0) = 0;
    *(unsigned int *)(temp_v1 + 0x3ed4) = 0;
    *(unsigned int *)(temp_v1 + 0x3ed8) = 0;
    *(unsigned int *)(temp_v1 + 0x3edc) = 0;
    *(unsigned int *)(temp_v1 + 0x3ee0) = 0;
    *(unsigned int *)(temp_v1 + 0x3ee4) = 0;
    *(unsigned int *)(temp_v1 + 0x3ee8) = 0;
    *(unsigned int *)(temp_v1 + 0x3eec) = 0;
    *(unsigned int *)(temp_v1 + 0x3ef0) = 0;
    *(unsigned int *)(temp_v1 + 0x3ef4) = 0;
    temp_v1 = temp_v2;
  } while (temp_v2 < 0x10);
  temp_v1 = 0;
  *(unsigned int *)(temp_v6 + 0x4a74) = 0;
  do {
    temp_v2 = temp_v6 + temp_v1 * 0x10;
    temp_v1 = temp_v1 + 1;
    *(unsigned int *)(temp_v2 + 0x4a7c) = 0;
    *(unsigned int *)(temp_v2 + 0x4a78) = 0xffffffff;
    *(unsigned int *)(temp_v2 + 0x4a80) = 0;
    *(unsigned int *)(temp_v2 + 0x4a84) = 0;
  } while (temp_v1 < 0x10);
  temp_v1 = 0;
  *(unsigned int *)(temp_v6 + 0x4b78) = 0;
  do {
    temp_v2 = temp_v6 + temp_v1 * 0x10;
    temp_v1 = temp_v1 + 1;
    *(unsigned int *)(temp_v2 + 0x4b80) = 0;
    *(unsigned int *)(temp_v2 + 0x4b7c) = 0xffffffff;
    *(unsigned int *)(temp_v2 + 0x4b84) = 0;
    *(unsigned int *)(temp_v2 + 0x4b88) = 0;
  } while (temp_v1 < 0x10);
  temp_v1 = 0;
  *(unsigned int *)(temp_v6 + 0x4c7c) = 0;
  do {
    temp_v2 = temp_v6 + temp_v1 * 0x10;
    temp_v1 = temp_v1 + 1;
    *(unsigned int *)(temp_v2 + 0x4c84) = 0;
    *(unsigned int *)(temp_v2 + 0x4c80) = 0xffffffff;
    *(unsigned int *)(temp_v2 + 0x4c88) = 0;
    *(unsigned int *)(temp_v2 + 0x4c8c) = 0;
  } while (temp_v1 < 0x10);
  *(unsigned int *)(temp_v6 + 0x4d80) = 0;
  FUN_002b67a0(0);
  if (DAT_005f1623 != '\0') {
    temp_v17 = (char *)FUN_00371058();
    temp_v18 = (char *)FUN_00332fcc();
    temp_v1 = lmapGetSpawnIndex();
    if (temp_v1 != 0) {
      temp_v2 = 0;
      dataTable2FType0Count();
      if (0 < temp_v1) {
        do {
          piVar5 = (int *)dataTable2FType0GetEntry(temp_v2);
          if (*piVar5 == -1) break;
          temp_v1 = lmapGetSpawnIndex();
          if (temp_v1 == (short)piVar5[2]) {
            *(char *)(temp_v0 + 0x3a) = (char)(short)piVar5[3];
            *(char *)(temp_v0 + 0x3b) = (char)*(unsigned short *)((int)piVar5 + 0xe);
            break;
          }
          temp_v2 = temp_v2 + 1;
          dataTable2FType0Count();
        } while (temp_v2 < temp_v1);
      }
    }
    temp_v16 = (int)*(char *)(temp_v0 + 0x3a);
    temp_v1 = (int)*(char *)(temp_v0 + 0x3b);
  }
  else {
    temp_v17 = (char *)dataTableGetRecordFortyOne();
    temp_v18 = (char *)0x0;
    FUN_00356308();
    temp_v16 = *(int *)(temp_v6 + 0xc);
    temp_v1 = *(int *)(temp_v6 + 0x10);
  }
  psVar13 = (short *)0x0;
  temp_v2 = FUN_003c3074();
  if (0 < temp_v2) {
    do {
      psVar6 = psVar13;
      contentEntryGetB();
      if (((((*psVar6 != -1) && ((int)*psVar6 == *(int *)(temp_v6 + 0xc))) &&
           ((int)psVar6[1] == *(int *)(temp_v6 + 0x10))) &&
          ((psVar6[2] == 0 || (temp_v2 = gameFlagIsSet(), temp_v2 != 0)))) &&
         ((psVar6[3] == 0 || (temp_v2 = gameFlagIsSet(), temp_v2 == 0)))) {
        temp_v17 = (char *)0x0;
        break;
      }
      psVar13 = (short *)((int)psVar13 + 1);
      temp_v2 = FUN_003c3074();
    } while ((int)psVar13 < temp_v2);
  }
  pcVar14 = (char *)0x0;
  if ((int)temp_v17 < 1) {
LAB_003044d0:
    temp_v0 = FUN_003c30ac();
    if ((temp_v17 != (char *)0x0) && (pcVar14 = (char *)0x0, 0 < temp_v0)) {
      do {
        pcVar7 = pcVar14;
        contentEntryGetC();
        if ((*pcVar7 != -1) &&
           ((((int)*pcVar7 == *(int *)(temp_v6 + 0xc) && ((int)pcVar7[1] == *(int *)(temp_v6 + 0x10)))
            && (*(short *)(pcVar7 + 0x10) != 0)))) {
          FUN_002b64c0(pcVar14,(int)*(short *)(pcVar7 + 0x10),1);
        }
        pcVar14 = pcVar14 + 1;
      } while ((int)pcVar14 < temp_v0);
    }
    temp_v0 = FUN_003c30e4();
    if ((temp_v17 != (char *)0x0) && (pcVar14 = (char *)0x0, 0 < temp_v0)) {
      do {
        pcVar7 = pcVar14;
        FUN_003a30e8();
        if ((*pcVar7 != -1) &&
           (((int)*pcVar7 == *(int *)(temp_v6 + 0xc) && ((int)pcVar7[1] == *(int *)(temp_v6 + 0x10))))
           ) {
          VectorSignedToFloat((int)*(short *)(pcVar7 + 2),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(pcVar7 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(pcVar7 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
          if (*(short *)(pcVar7 + 0xc) != 0) {
            FUN_002b64c0(pcVar14,(int)*(short *)(pcVar7 + 0xc),2,(int)*(short *)(pcVar7 + 2));
          }
        }
        pcVar14 = pcVar14 + 1;
      } while ((int)pcVar14 < temp_v0);
    }
    temp_v0 = FUN_003c311c();
    pcVar14 = temp_v17;
    if ((temp_v17 != (char *)0x0) && (pcVar7 = (char *)0x0, 0 < temp_v0)) {
      do {
        pcVar14 = pcVar7;
        FUN_003a315c();
        if ((*pcVar14 != -1) &&
           (((int)*pcVar14 == *(int *)(temp_v6 + 0xc) && ((int)pcVar14[1] == *(int *)(temp_v6 + 0x10))
            ))) {
          psVar13 = (short *)(pcVar14 + 2);
          psVar6 = (short *)(pcVar14 + 0x10);
          VectorSignedToFloat((int)*psVar13,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(pcVar14 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(pcVar14 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
          if (*psVar6 != 0) {
            pcVar14 = pcVar7;
            FUN_002b64c0(pcVar7,(int)*psVar6,3,(int)*psVar13);
          }
        }
        pcVar7 = pcVar7 + 1;
      } while ((int)pcVar7 < temp_v0);
    }
    dataTable29Section6Count();
    if ((temp_v17 != (char *)0x0) && (temp_v0 = 0, 0 < (int)pcVar14)) {
      do {
        pcVar7 = (char *)dataTable29Type6GetEntry(temp_v0);
        if ((*pcVar7 != -1) &&
           (((int)*pcVar7 == *(int *)(temp_v6 + 0xc) && ((int)pcVar7[1] == *(int *)(temp_v6 + 0x10))))
           ) {
          VectorSignedToFloat((int)*(short *)(pcVar7 + 2),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(pcVar7 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(pcVar7 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
          if (*(short *)(pcVar7 + 10) != 0) {
            FUN_002b64c0(temp_v0,(int)*(short *)(pcVar7 + 10),4,(int)*(short *)(pcVar7 + 2));
          }
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (int)pcVar14);
    }
    temp_v0 = gameGetPlayerData();
    temp_v3 = 0;
    temp_v8 = 0;
    temp_v1 = 0;
    do {
      temp_v2 = temp_v6 + temp_v1 * 0x188;
      if (*(char *)(temp_v2 + 0x34) != '\0') {
        temp_v3 = *(unsigned int *)(temp_v2 + 0xa8) & 0xffff;
        dataTable00FindById();
        temp_v8 = 1;
        temp_v3 = *(unsigned short *)(temp_v3 + 2) & 0xffff7fff;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x28);
    if (temp_v8) {
      temp_v3 = __aeabi_idivmod();
    }
    temp_v5 = (unsigned int)*(unsigned short *)(temp_v0 + 0x62);
    if ((int)(temp_v3 + 4) >= (int)temp_v5) {
      DAT_005f1800 = 1;
    }
    else {
      temp_v7 = temp_v3 - 2;
      temp_v8 = SBORROW4(temp_v7,temp_v5);
      temp_v6 = temp_v7 - temp_v5;
      if ((int)temp_v7 <= (int)temp_v5) {
        temp_v7 = temp_v3 + 3;
        temp_v8 = SBORROW4(temp_v5,temp_v7);
        temp_v6 = temp_v5 - temp_v7;
      }
      if (temp_v7 == temp_v5 || temp_v6 < 0 != temp_v8) {
        DAT_005f1800 = 2;
      }
      else {
        temp_v0 = temp_v3 - 5;
        temp_v8 = SBORROW4(temp_v5,temp_v0);
        temp_v6 = temp_v5 - temp_v0;
        if (temp_v0 <= (int)temp_v5) {
          temp_v8 = SBORROW4(temp_v3 - 3,temp_v5);
          temp_v6 = (temp_v3 - 3) - temp_v5;
        }
        if (temp_v6 < 0 == temp_v8) {
          DAT_005f1800 = 3;
        }
        else if ((int)temp_v5 < (int)(temp_v3 - 6)) {
          DAT_005f1800 = 0;
        }
        else {
          DAT_005f1800 = 4;
        }
      }
    }
    temp_v6 = *piVar3;
    if (temp_v6 >= 1) {
      if (DAT_005f17f8 == 0) {
        DAT_005f17f8 = temp_v6;
        DAT_005f17fc = 1;
        return;
      }
    }
    else {
      if (temp_v6 != 0) {
        return;
      }
      if (0 < DAT_005f17f8) {
        DAT_005f17f8 = temp_v6;
        DAT_005f17fc = 0xffffffff;
        return;
      }
    }
    DAT_005f17fc = 0;
    DAT_005f17f8 = temp_v6;
    return;
  }
  piVar5 = (int *)(temp_v0 + 0x14e8);
  temp_v15 = 0;
LAB_00304430:
  if (DAT_005f1623 != '\0') {
    pcVar7 = temp_v18 + (int)pcVar14 * 0xc;
LAB_0030444c:
    temp_v10 = VectorSignedToFloat((int)*(short *)(pcVar7 + 2),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v11 = VectorSignedToFloat((int)*(short *)(pcVar7 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v12 = VectorSignedToFloat((int)*(short *)(pcVar7 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = *(unsigned int *)(g_lmapScene + 0x1c);
    distSpatial();
    temp_v13 = romwright_piece_4_4(temp_v9,temp_v11);
    temp_v0 = 0;
    do {
      temp_v2 = temp_v6 + temp_v0 * 0x188;
      if (*(char *)(temp_v2 + 0x34) == '\0') {
        *(char *)(temp_v2 + 0x34) = '\x01';
        *(unsigned int *)(temp_v2 + 0x3c) = temp_v10;
        *(unsigned int *)(temp_v2 + 0x40) = temp_v11;
        *(unsigned int *)(temp_v2 + 0x44) = temp_v12;
        *(unsigned int *)(temp_v2 + 0x48) = temp_v10;
        *(unsigned int *)(temp_v2 + 0x4c) = temp_v11;
        *(unsigned int *)(temp_v2 + 0x50) = temp_v12;
        *(unsigned int *)(temp_v2 + 0x54) = temp_v10;
        *(unsigned int *)(temp_v2 + 0x58) = temp_v11;
        *(unsigned int *)(temp_v2 + 0x5c) = temp_v12;
        temp_v9 = randRange(0x168);
        temp_v9 = VectorUnsignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v2 + 0x60) = temp_v9;
        *(unsigned int *)(temp_v2 + 100) = 1;
        *(unsigned int *)(temp_v2 + 0x6c) = 1;
        *(int *)(temp_v2 + 0x70) = (int)temp_v15;
        *(unsigned char *)(temp_v2 + 0x17c) = 0;
        *(unsigned int *)(temp_v2 + 0xac) = 1;
        *(unsigned short *)(temp_v2 + 0x1aa) = 0;
        *(unsigned char *)(temp_v2 + 0x84) = 0;
        *(unsigned char *)(temp_v2 + 0x1ae) = 0;
        goto LAB_00304874;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x28);
  }
  else {
    pcVar7 = pcVar14;
    FUN_00356308();
    temp_v18 = pcVar7;
    if (((*pcVar7 != -1) && ((int)*pcVar7 == *(int *)(temp_v6 + 0xc))) &&
       ((int)pcVar7[1] == *(int *)(temp_v6 + 0x10))) goto LAB_0030444c;
  }
  goto LAB_003044bc;
  while( 1 ) {
    temp_v0 = FUN_004bb870(*(unsigned int *)(temp_v2 + 0xa4));
    if (temp_v0 != 0) {
      *(char *)(temp_v2 + 0x1af) = (char)temp_v0;
    }
    *(unsigned short *)(temp_v2 + 0x16e) = 0xffff;
    temp_v0 = FUN_002d7c88(*(unsigned int *)(temp_v2 + 0x1b0));
    temp_v14 = (float)((unsigned long long)temp_v13 >> 0x20);
    if (temp_v0 != 0) break;
LAB_00304874:
    temp_v0 = FUN_004bc420(temp_v16,temp_v1,0);
    *(int *)(temp_v2 + 0xa4) = temp_v0;
    temp_v0 = dataSelectPrioritizedCandidate(temp_v0);
    *(int *)(temp_v2 + 0xa8) = temp_v0;
    dataTable00FindById();
    *(unsigned short *)(temp_v2 + 0x1a8) = *(unsigned short *)(temp_v0 + 2) & 0x7fff;
    temp_v0 = lookupConditionalSixBitValue(*(unsigned int *)(temp_v2 + 0xa4));
    if (temp_v0 != 0) {
      if ((*(int *)(temp_v2 + 0xa8) < 0x3e9) && (temp_v4 = gameFlagIsSet(0x52a), temp_v4 != 0)) {
        *(int *)(temp_v2 + 0x1b0) = temp_v0;
        temp_v0 = FUN_004bc5a4(*(unsigned int *)(temp_v2 + 0xa4));
        if (temp_v0 != 0) {
          *(unsigned char *)(temp_v2 + 0x1ae) = 1;
        }
      }
      else {
        *(unsigned int *)(temp_v2 + 0x1b0) = 1;
      }
    }
    else {
      if ((*(int *)(temp_v2 + 0xa8) >= 0x4b1) || (temp_v0 = gameFlagIsSet(0x52a), temp_v0 == 0)) {
        *(unsigned int *)(temp_v2 + 0x1b0) = 1;
        continue;
      }
      *(unsigned int *)(temp_v2 + 0x1b0) = (unsigned int)*(unsigned char *)(*(int *)(temp_v2 + 0xa8) + 0x5806e0);
    }
  }
  *(unsigned int *)(temp_v2 + 0xb8) = 2;
  *(unsigned int *)(temp_v2 + 0xbc) = 0;
  temp_v0 = randRange(200);
  *(int *)(temp_v2 + 0xc0) = temp_v0 + 0x3c;
  *(unsigned int *)(temp_v2 + 0xc4) = 0;
  *(unsigned int *)(temp_v2 + 0x1a4) = 0;
  *(unsigned char *)(temp_v2 + 0x170) = 0;
  *(unsigned char *)(temp_v2 + 0x171) = 0;
  *(unsigned char *)(temp_v2 + 0x173) = 0;
  *(unsigned char *)(temp_v2 + 0x174) = 0;
  *(unsigned short *)(temp_v2 + 0x1aa) = 0;
  if (*(char *)(temp_v6 + 0x3d88) != '\0') {
    temp_v0 = randRange(0x78);
    temp_v0 = temp_v0 + 0x3c;
  }
  else {
    temp_v0 = randRange(0x96);
    temp_v0 = temp_v0 + 1;
  }
  *(int *)(temp_v2 + 0xd8) = temp_v0;
  if ((int)temp_v14 < 0x43fa0000) {
    *(int *)(temp_v2 + 0xd8) = *(int *)(temp_v2 + 0xd8) + 300;
    if (*piVar5 != 0) {
      temp_v0 = randRange(0x1e);
      *(int *)(temp_v2 + 0xd8) = temp_v0 + 1;
    }
  }
  else if ((int)temp_v14 < 0x44480000) {
    *(int *)(temp_v2 + 0xd8) = *(int *)(temp_v2 + 0xd8) + 0xd2;
    if (*piVar5 != 0) {
      temp_v0 = randRange(0x3c);
      *(int *)(temp_v2 + 0xd8) = temp_v0 + 1;
    }
  }
  else if ((int)temp_v14 < 0x447a0000) {
    *(int *)(temp_v2 + 0xd8) = *(int *)(temp_v2 + 0xd8) + 0x96;
    if (*piVar5 != 0) {
      temp_v0 = randRange(0x5a);
      *(int *)(temp_v2 + 0xd8) = temp_v0 + 1;
    }
  }
  else if ((int)temp_v14 < 0x44960000) {
    *(int *)(temp_v2 + 0xd8) = *(int *)(temp_v2 + 0xd8) + 0x96;
    if (*piVar5 != 0) {
      temp_v0 = randRange(0x78);
      *(int *)(temp_v2 + 0xd8) = temp_v0 + 1;
    }
  }
  else {
    in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(DAT_005f18a4 <= temp_v14) << 0x1d);
    if ((((!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) && (*piVar15 < DAT_005f17f4 - 5)) &&
        (*(char *)(temp_v6 + 0x3d88) == '\0')) &&
       (((int)romwright_fabs_4(*(float *)(g_lmapScene + 0x20) - *(float *)(temp_v2 + 0x58)) < 0x41f00000 &&
        (temp_v0 = randRange(100), temp_v0 < DAT_005f18a0)))) {
      temp_v0 = temp_v6 + *(int *)(temp_v2 + 0x1b0) * 8;
      if (*(char *)(temp_v0 + 0x3d91) != '\0') {
        temp_v0 = 0x20;
        FUN_00178b04(0x20,&LAB_00304cd0,0x8d5);
        temp_v9 = 0;
        if (temp_v0 != 0) {
          temp_v9 = modelListInit();
        }
        *(unsigned int *)(temp_v2 + 0x1b4) = temp_v9;
        moriModelContentCopyBody();
        handleRegistryRegisterObject(g_handleRegistry,*(unsigned int *)(*(int *)(temp_v2 + 0x1b4) + 4));
        *(unsigned char *)(temp_v2 + 0x1b9) = 1;
      }
      else {
        *(unsigned int *)(temp_v2 + 0x1b4) = *(unsigned int *)(temp_v0 + 0x3d8c);
        *(unsigned char *)(temp_v0 + 0x3d91) = 1;
        *(unsigned char *)(temp_v2 + 0x1b9) = 0;
      }
      temp_v0 = *(int *)(*(int *)(temp_v2 + 0x1b4) + 4);
      *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 3;
      *(unsigned char *)(temp_v2 + 0x1b8) = 1;
      *(unsigned int *)(temp_v2 + 0xb8) = 0;
      *piVar15 = *piVar15 + 1;
    }
  }
  *piVar3 = *piVar3 + 1;
LAB_003044bc:
  pcVar14 = pcVar14 + 1;
  if ((int)temp_v17 <= (int)pcVar14) goto LAB_003044d0;
  goto LAB_00304430;
}

} /* extern "C" */
