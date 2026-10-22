/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b9ef0` (_code @ 0x3b9ef0, 0x61c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002750d8(...);
int sysPlayVoice(...);

int FUN_0013cab8(...);
int FUN_00272f54(void);
int FUN_002bcafc(void);
int navigationSetArguments(...);
int FUN_00303460(...);
int blockResetAxis(unsigned int);
int FUN_00313648(...);
int naviMainSetFlagsAndActivate(...);
int mapPlaceSet(...);
int naviMainApplyRequestValue(...);
int FUN_0035846c(void);
int naviMainSetRequestValue(...);
int FUN_0036b004(void);
int FUN_003a2278(...);
int naviMainSetRequestTriple(...);
int FUN_003b5714(...);
int FUN_003b5d20(void);
int VectorSignedToFloat(...);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern int g_aocMain; /* 0x570260 */
extern int g_lmapView; /* 0x5806a4 */
extern int g_mapMain; /* 0x581274 */
extern int g_lmapScene; /* 0x581288 */
extern int g_gameState; /* 0x5f15fc */
extern int DAT_005f1600; /* 0x5f1600 */
extern unsigned int DAT_005f1604; /* 0x5f1604 */
extern unsigned int DAT_005f1608; /* 0x5f1608 */
extern unsigned int DAT_005f160c; /* 0x5f160c */
extern unsigned char DAT_005f1614; /* 0x5f1614 */
extern unsigned char DAT_005f161c; /* 0x5f161c */
extern int DAT_005f1648; /* 0x5f1648 */
extern int DAT_005f1650; /* 0x5f1650 */
extern int DAT_005f1654; /* 0x5f1654 */
extern int DAT_005f1658; /* 0x5f1658 */
extern unsigned int DAT_005f16a0; /* 0x5f16a0 */
extern int DAT_005f16e0; /* 0x5f16e0 */
extern unsigned char DAT_005f1725; /* 0x5f1725 */
extern unsigned char DAT_005f1726; /* 0x5f1726 */
extern unsigned char DAT_005f1727; /* 0x5f1727 */
extern unsigned char DAT_005f1728; /* 0x5f1728 */
extern unsigned char DAT_005f1729; /* 0x5f1729 */
extern unsigned char DAT_005f172a; /* 0x5f172a */
extern unsigned char DAT_005f1858; /* 0x5f1858 */
extern unsigned char DAT_005f1859; /* 0x5f1859 */
extern unsigned char DAT_005f185a; /* 0x5f185a */
extern unsigned char DAT_005f185b; /* 0x5f185b */
extern signed char DAT_005f188d; /* 0x5f188d */
extern signed char DAT_005f188e; /* 0x5f188e */
extern signed char DAT_005f188f; /* 0x5f188f */
extern signed char DAT_005f1890; /* 0x5f1890 */
extern signed char DAT_005f18c5; /* 0x5f18c5 */
extern int DAT_005f1a50; /* 0x5f1a50 */
extern signed char DAT_005f1add; /* 0x5f1add */
extern unsigned int DAT_005f1ae0; /* 0x5f1ae0 */
extern unsigned int DAT_005f1ae4; /* 0x5f1ae4 */
extern unsigned int DAT_005f1ae8; /* 0x5f1ae8 */
extern unsigned int DAT_005f1aec; /* 0x5f1aec */
extern int g_mapSelection; /* 0x5f1c98 */
extern int DAT_005f1c9c; /* 0x5f1c9c */
extern unsigned int DAT_005f1ca0; /* 0x5f1ca0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0013cab8. */
extern int FUN_0013def0(unsigned int);
/* Supplied declaration required: FUN_00272f54. */
/* Supplied declaration required: FUN_002750d8. */
extern int messageGetChoiceResult(void);
/* Supplied declaration required: FUN_002bcafc. */
/* Supplied declaration required: navigationSetArguments. */
/* Supplied declaration required: FUN_00303460. */
/* Supplied declaration required: blockResetAxis. */
/* Supplied declaration required: FUN_00313648. */
/* Supplied declaration required: naviMainSetFlagsAndActivate. */
/* Supplied declaration required: mapPlaceSet. */
/* Supplied declaration required: naviMainApplyRequestValue. */
/* Supplied declaration required: FUN_0035846c. */
/* Supplied declaration required: naviMainSetRequestValue. */
/* Supplied declaration required: FUN_0036b004. */
extern int FUN_00376f84(void);
extern int lmapGetSpawnIndex(void);
extern int dataTableGetRecord23(void);
/* Supplied declaration required: FUN_003a2278. */
/* Supplied declaration required: naviMainSetRequestTriple. */
/* Supplied declaration required: FUN_003b5714. */
/* Supplied declaration required: FUN_003b5d20. */
/* Supplied declaration required: sysPlayVoice. */


void FUN_003b9ef0(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 20 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar6;
  int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned int in_fpscr;
  
  temp_v2 = g_mapMain;
  if (DAT_005f1890 != '\0') {
    DAT_005f1890 = '\0';
    temp_v1 = messageGetChoiceResult();
    if (temp_v1 == 0) {
      FUN_00313648(0x26);
      *(unsigned int *)(temp_v2 + 0x28) = 0x88;
      *(unsigned int *)(temp_v2 + 0x2c) = 0;
      naviMainSetFlagsAndActivate(DAT_005f1725,DAT_005f1726,DAT_005f1727,DAT_005f1728,DAT_005f1729,DAT_005f172a);
      naviMainSetRequestValue(1);
      return;
    }
    g_mapSelection = -1;
    DAT_005f1658 = 0;
    blockResetAxis(0xffffffff);
  }
  else if (DAT_005f188d != '\0') {
    DAT_005f188d = '\0';
    temp_v1 = messageGetChoiceResult();
    if (temp_v1 == 0) {
      naviMainSetFlagsAndActivate(DAT_005f1725,DAT_005f1726,DAT_005f1727,DAT_005f1728,DAT_005f1729,DAT_005f172a);
      *(unsigned int *)(temp_v2 + 0x28) = 0x42;
      *(unsigned int *)(temp_v2 + 0x2c) = 0;
      return;
    }
    g_mapSelection = -1;
    DAT_005f1658 = 0;
    blockResetAxis(0xffffffff);
  }
  else if (DAT_005f188e != '\0') {
    DAT_005f188e = '\0';
    temp_v1 = messageGetChoiceResult();
    if (temp_v1 == 0) {
      naviMainSetFlagsAndActivate(DAT_005f1725,DAT_005f1726,DAT_005f1727,DAT_005f1728,DAT_005f1729,DAT_005f172a);
      *(unsigned char *)(temp_v2 + 0x16) = 1;
      FUN_00313648(0x26);
      *(unsigned int *)(temp_v2 + 0x28) = 0x65;
      return;
    }
    g_mapSelection = -1;
    DAT_005f1658 = 0;
    blockResetAxis(0xffffffff);
  }
  else if (DAT_005f188f != '\0') {
    DAT_005f188f = '\0';
    blockResetAxis(0xffffffff);
  }
  temp_v1 = FUN_00376f84();
  temp_v0 = DAT_005f1858;
  if (temp_v1 != 0) {
    *(unsigned int *)(temp_v2 + 0x2c) = 0;
    *(unsigned int *)(temp_v2 + 0x28) = 0xb2;
    *(unsigned char *)(temp_v2 + 0xd) = 1;
    return;
  }
  if (DAT_005f18c5 != '\0') {
    *(unsigned int *)(temp_v2 + 0x28) = 0xb2;
    *(unsigned int *)(temp_v2 + 0x2c) = 0;
    return;
  }
  if (DAT_005f1658 != 0) {
    FUN_0035846c();
    *(unsigned int *)(temp_v2 + 0x2c) = 0;
    *(unsigned int *)(temp_v2 + 0x28) = 0xb2;
    *(unsigned char *)(temp_v2 + 0x16) = 1;
    return;
  }
  if (DAT_005f1650 == 0) {
    if (DAT_005f1654 != 0) {
      DAT_005f1654 = 0;
      naviMainSetFlagsAndActivate(DAT_005f1725,DAT_005f1726,DAT_005f1727,DAT_005f1728,DAT_005f1729,DAT_005f172a);
      FUN_0036b004();
      *(unsigned int *)(temp_v2 + 0x3c) = DAT_005f16a0;
      *(unsigned char *)(temp_v2 + 0xf) = 1;
      *(unsigned int *)(temp_v2 + 0x28) = 0xb2;
      *(unsigned int *)(temp_v2 + 0x2c) = 0;
      return;
    }
    if (g_mapSelection != -1) {
      temp_v5 = *(int *)(temp_v2 + 0x34);
      DAT_005f1858 = DAT_005f1648 != 0;
      temp_v1 = lmapGetSpawnIndex();
      if (temp_v1 != 0) {
        temp_v5 = lmapGetSpawnIndex();
      }
      temp_v1 = g_lmapScene;
      temp_v3 = *(int *)(temp_v2 + 0x30);
      temp_v7 = temp_v3 == g_mapSelection;
      if (temp_v7) {
        param_3 = DAT_005f1c9c;
      }
      temp_v8 = temp_v7 && param_3 == temp_v5;
      if (temp_v7 && param_3 == temp_v5) {
        temp_v8 = DAT_005f1858 == temp_v0;
      }
      if (!temp_v8) {
        *(unsigned int *)(temp_v2 + 0x28) = 0xb2;
        return;
      }
      if (DAT_005f1add != '\0') {
        puVar6 = (unsigned int *)(g_lmapScene + 0x28);
        *(unsigned int *)(g_lmapScene + 0x1c) = DAT_005f1ae0;
        *(unsigned int *)(temp_v1 + 0x20) = DAT_005f1ae4;
        *(unsigned int *)(temp_v1 + 0x24) = DAT_005f1ae8;
        temp_v4 = *(unsigned int *)(temp_v1 + 0x20);
        temp_v6 = *(unsigned int *)(temp_v1 + 0x24);
        *puVar6 = *(unsigned int *)(temp_v1 + 0x1c);
        *(unsigned int *)(temp_v1 + 0x2c) = temp_v4;
        *(unsigned int *)(temp_v1 + 0x30) = temp_v6;
        temp_v4 = DAT_005f1aec;
        *(unsigned int *)(temp_v1 + 0x4c) = DAT_005f1aec;
        *(unsigned int *)(temp_v1 + 0x50) = temp_v4;
        *(unsigned int *)(g_lmapView + 0x18) = temp_v4;
        DAT_005f1add = '\0';
      }
      else {
        FUN_003b5714(temp_v3,temp_v5,DAT_005f1ca0);
        if (temp_v3 != -1) {
          temp_v5 = dataTableGetRecord23();
          temp_v1 = g_lmapScene;
          temp_v4 = VectorSignedToFloat((int)*(short *)(temp_v5 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(g_lmapScene + 0x1c) = temp_v4;
          temp_v4 = VectorSignedToFloat((int)*(short *)(temp_v5 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v1 + 0x20) = temp_v4;
          temp_v4 = VectorSignedToFloat((int)*(short *)(temp_v5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v1 + 0x24) = temp_v4;
          *(unsigned int *)(temp_v1 + 0x28) = *(unsigned int *)(temp_v1 + 0x1c);
          *(unsigned int *)(temp_v1 + 0x2c) = *(unsigned int *)(temp_v1 + 0x20);
          *(unsigned int *)(temp_v1 + 0x30) = temp_v4;
          temp_v4 = VectorSignedToFloat((int)*(short *)(temp_v5 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v1 + 0x4c) = temp_v4;
          *(unsigned int *)(temp_v1 + 0x50) = temp_v4;
          temp_v4 = VectorSignedToFloat((int)*(short *)(temp_v5 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(g_lmapView + 0x18) = temp_v4;
        }
      }
      navigationSetArguments(DAT_005f1608,DAT_005f160c,DAT_005f1604);
      naviMainSetRequestTriple(DAT_005f1608,DAT_005f160c,DAT_005f1604);
      naviMainApplyRequestValue(DAT_005f1608);
      naviMainSetRequestValue(0);
      mapPlaceSet(0xffffffff,0xffffffff);
      FUN_00272f54();
      FUN_00303460(0);
      FUN_003a2278(0);
      FUN_00313648(1);
      *(unsigned char *)(temp_v2 + 0x4e) = 1;
      *(unsigned char *)(g_lmapView + 0xa8) = 1;
      DAT_005f1859 = 1;
      DAT_005f185a = 1;
      DAT_005f1614 = 0;
      DAT_005f161c = 0;
      *(unsigned int *)(temp_v2 + 0x28) = 0x15;
      *(unsigned int *)(temp_v2 + 0x2c) = 0;
      FUN_003b5d20();
      FUN_002bcafc();
      temp_v2 = FUN_0013def0(0);
      if (temp_v2 == 3) {
        FUN_0013cab8(0,10,0xff);
      }
      temp_v2 = FUN_0013def0(1);
      if (temp_v2 != 3) {
        return;
      }
    }
    else {
      if (*(char *)(g_aocMain + 0xc0) != '\0') {
        *(unsigned char *)(g_aocMain + 0xc0) = 0;
        *(unsigned int *)(temp_v2 + 0x28) = 0x1f;
        *(unsigned int *)(temp_v2 + 0x2c) = 0;
        return;
      }
      FUN_00303460(0);
      FUN_003a2278(0);
      FUN_00313648(1);
      *(unsigned char *)(temp_v2 + 0x4e) = 1;
      *(unsigned char *)(g_lmapView + 0xa8) = 1;
      DAT_005f1859 = 1;
      DAT_005f185a = 1;
      DAT_005f185b = 0;
      FUN_003b5d20();
      DAT_005f1614 = 0;
      DAT_005f161c = 0;
      FUN_002750d8(0);
      *(unsigned int *)(temp_v2 + 0x28) = 0x15;
      *(unsigned int *)(temp_v2 + 0x2c) = 0;
      temp_v2 = FUN_0013def0(0);
      if (temp_v2 == 3) {
        FUN_0013cab8(0,10,0xff);
      }
      temp_v2 = FUN_0013def0(1);
      if (temp_v2 != 3) {
        return;
      }
    }
    FUN_0013cab8(1,10,0xff);
    return;
  }
  DAT_005f1650 = 0;
  naviMainSetFlagsAndActivate(DAT_005f1725,DAT_005f1726,DAT_005f1727,DAT_005f1728,DAT_005f1729,DAT_005f172a);
  if (g_gameState != 5) {
    if ((g_gameState != 3) || (DAT_005f1600 != 3)) goto LAB_003ba158;
  }
  else if (DAT_005f1600 != 6) goto LAB_003ba158;
  if (DAT_005f16e0 < 99) {
    if (DAT_005f16e0 != 0x62) {
      if (DAT_005f16e0 == 0x5f) {
        temp_v1 = 0x100010e;
      }
      else {
        temp_v1 = DAT_005f16e0 + 0x10000d6;
      }
      sysPlayVoice(temp_v1);
    }
    else {
      sysPlayVoice(0x1000130);
    }
    DAT_005f1a50 = DAT_005f16e0;
  }
LAB_003ba158:
  FUN_0036b004();
  *(unsigned int *)(temp_v2 + 0x3c) = DAT_005f16a0;
  *(unsigned char *)(temp_v2 + 0xe) = 1;
  *(unsigned int *)(temp_v2 + 0x28) = 0xb2;
  *(unsigned int *)(temp_v2 + 0x2c) = 0;
  return;
}

} /* extern "C" */
