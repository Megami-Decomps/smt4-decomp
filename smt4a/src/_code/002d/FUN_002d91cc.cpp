/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d91cc` (_code @ 0x2d91cc, 0x5a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "util/CalleeContracts.h"
#include "util/CalleeContracts.h"

extern "C" {

int FUN_001628c0(unsigned char *, unsigned int, unsigned int, int);
int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_0025ef68(int, int, int);
int FUN_002e364c(int);
int FUN_00303460(...);
int mapSetSceneState(int);
int naviMainSetFlagsAndActivate(int, int, int, int, int, int);
int mathPositionHeadingDegrees(void);
int linkHolderSetFlag(unsigned int);
int linkHolderClearFlag(unsigned int);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned char LAB_002d94f8; /* 0x2d94f8 */
extern int g_lmapView; /* 0x5806a4 */
extern int g_lmapScene; /* 0x581288 */
extern unsigned int DAT_005f1604; /* 0x5f1604 */
extern unsigned char DAT_005f1a4e; /* 0x5f1a4e */

/* Supplied declaration required: FUN_001628c0. */
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_0025ef68. */
/* Supplied declaration required: FUN_002e364c. */
/* Supplied declaration required: FUN_00303460. */
/* Supplied declaration required: mapSetSceneState. */
/* Supplied declaration required: naviMainSetFlagsAndActivate. */
/* Supplied declaration required: mathPositionHeadingDegrees. */
extern int linkHolderCheckFirst(unsigned int);
/* Supplied declaration required: linkHolderSetFlag. */
/* Supplied declaration required: linkHolderClearFlag. */


void FUN_002d91cc(void)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  float *pfVar3;
  unsigned int temp_v2;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  float temp_v10;
  
  temp_v0 = g_lmapScene;
  temp_v9 = 0;
  temp_v10 = 5.0f;
  temp_v1 = *(int *)(g_lmapScene + 4);
  if (temp_v1 < 5) {
    pfVar3 = (float *)(g_lmapScene + 0x1c);
    temp_v8 = *(float *)(g_lmapScene + 0x30);
    temp_v3 = *(float *)(g_lmapScene + 0x24);
    temp_v6 = *(float *)(g_lmapScene + 0x2c);
    temp_v4 = *pfVar3;
    temp_v5 = *(float *)(g_lmapScene + 0x20);
    temp_v7 = *(float *)(g_lmapScene + 0x28);
    *(float *)(g_lmapScene + 0x34) = temp_v7;
    *(float *)(temp_v0 + 0x38) = temp_v6;
    *(float *)(temp_v0 + 0x3c) = temp_v8;
    *(float *)(temp_v0 + 0x24) = temp_v3 + (temp_v8 - temp_v3) * 0.33333334f;
    *pfVar3 = temp_v4 + (temp_v7 - temp_v4) * 0.33333334f;
    *(float *)(temp_v0 + 0x20) = temp_v5 + (temp_v6 - temp_v5) * 0.16666667f;
    if (temp_v1 != 2) {
      *(float *)(temp_v0 + 0x2c) = temp_v6 - 5.0f;
      FUN_0025ef68(temp_v0 + 0x28,temp_v0 + 0x34,0);
      temp_v0 = g_lmapScene;
      puVar6 = (unsigned int *)(g_lmapScene + 0x38);
      temp_v2 = *(unsigned int *)(g_lmapScene + 0x3c);
      *(unsigned int *)(g_lmapScene + 0x28) = *(unsigned int *)(g_lmapScene + 0x34);
      *(unsigned int *)(temp_v0 + 0x2c) = *puVar6;
      *(unsigned int *)(temp_v0 + 0x30) = temp_v2;
    }
  }
  FUN_002e364c(g_lmapScene + 0x28);
  temp_v0 = g_lmapScene;
  temp_v2 = 0x42a00000;
  temp_v3 = 0.017453292f;
  switch(*(unsigned int *)(g_lmapScene + 4)) {
  case 0:
    *(unsigned int *)(g_lmapScene + 0x54) = 0x22;
    *(unsigned int *)(temp_v0 + 0x58) = temp_v9;
    *(unsigned int *)(temp_v0 + 4) = 1;
    *(unsigned int *)(temp_v0 + 8) = 0;
    *(unsigned int *)(temp_v0 + 0x50) = 0x42a00000;
    *(unsigned int *)(temp_v0 + 0x4c) = 0x42a00000;
    DAT_005f1a4e = 1;
    break;
  case 1:
    if (*(int *)(g_lmapScene + 8) < 2) {
      *(float *)(g_lmapScene + 0x2c) = *(float *)(g_lmapScene + 0x2c) + temp_v10;
    }
    else {
      if (*(int *)(g_lmapScene + 8) == 2) {
        temp_v9 = FUN_00152f44();
        temp_v2 = FUN_0014af98();
        FUN_001628c0(&LAB_002d94f8,temp_v2,temp_v9,1);
        FUN_00303460(0x12);
      }
      if (*(int *)(g_lmapScene + 8) >= 2) {
        temp_v10 = *(float *)(g_lmapScene + 0x1c);
        mathPositionHeadingDegrees();
        temp_v10 = temp_v10 * temp_v3;
        FUN_001bc124();
        temp_v0 = g_lmapScene;
        temp_v4 = 20.0f;
        *(float *)(g_lmapScene + 0x28) = *(float *)(g_lmapScene + 0x28) + temp_v10 * 20.0f;
        temp_v10 = *(float *)(temp_v0 + 0x1c);
        mathPositionHeadingDegrees();
        temp_v10 = temp_v10 * temp_v3;
        FUN_001bbf0c();
        temp_v0 = g_lmapScene;
        *(float *)(g_lmapScene + 0x30) = *(float *)(g_lmapScene + 0x30) + temp_v10 * temp_v4;
        if (*(int *)(temp_v0 + 8) >= 0x17) {
          *(int *)(temp_v0 + 4) = *(int *)(temp_v0 + 4) + 1;
          *(unsigned int *)(temp_v0 + 8) = 0;
          *(unsigned int *)(temp_v0 + 0x1c) = 0xc4230000;
          *(unsigned int *)(temp_v0 + 0x24) = 0x45051000;
          *(unsigned int *)(temp_v0 + 0x20) = 0x445f4000;
          *(unsigned int *)(temp_v0 + 0x28) = 0xc4230000;
          *(unsigned int *)(temp_v0 + 0x2c) = 0x445f4000;
          *(unsigned int *)(temp_v0 + 0x30) = 0x45051000;
          linkHolderSetFlag(*(unsigned int *)(temp_v0 + 0x1a8));
          FUN_0025ef68(g_lmapScene + 0x28,g_lmapScene + 0x34,0);
          temp_v0 = g_lmapScene;
          puVar6 = (unsigned int *)(g_lmapScene + 0x38);
          temp_v9 = *(unsigned int *)(g_lmapScene + 0x3c);
          *(unsigned int *)(g_lmapScene + 0x28) = *(unsigned int *)(g_lmapScene + 0x34);
          *(unsigned int *)(temp_v0 + 0x2c) = *puVar6;
          *(unsigned int *)(temp_v0 + 0x30) = temp_v9;
          *(unsigned char *)(g_lmapView + 0xb4) = 0;
          FUN_00303460(0x13);
          temp_v4 = 180.0f;
          temp_v10 = (*(float *)(g_lmapScene + 0x50) + 180.0f) * temp_v3;
          FUN_001bc124();
          temp_v0 = g_lmapScene;
          temp_v5 = 500.0f;
          *(float *)(g_lmapScene + 0x28) = *(float *)(g_lmapScene + 0x28) + temp_v10 * 500.0f;
          temp_v3 = (*(float *)(temp_v0 + 0x50) + temp_v4) * temp_v3;
          FUN_001bbf0c();
          *(float *)(g_lmapScene + 0x30) = *(float *)(g_lmapScene + 0x30) + temp_v3 * temp_v5;
        }
      }
    }
    *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
    return;
  case 2:
    temp_v1 = *(int *)(g_lmapScene + 8) + 1;
    *(int *)(g_lmapScene + 8) = temp_v1;
    if (temp_v1 >= 0x15) {
      *(unsigned int *)(temp_v0 + 4) = 3;
      *(unsigned int *)(temp_v0 + 8) = 0;
      linkHolderClearFlag(*(unsigned int *)(temp_v0 + 0x1a8));
      temp_v0 = g_lmapScene;
      *(unsigned int *)(g_lmapScene + 0x1c) = 0xc4618000;
      *(unsigned int *)(temp_v0 + 0x24) = 0x450b5000;
      *(unsigned int *)(temp_v0 + 0x20) = 0x4466c000;
      *(unsigned int *)(temp_v0 + 0x28) = 0xc4618000;
      *(unsigned int *)(temp_v0 + 0x2c) = 0x4466c000;
      *(unsigned int *)(temp_v0 + 0x30) = 0x450b5000;
      FUN_0025ef68(temp_v0 + 0x28,temp_v0 + 0x34,0);
      temp_v0 = g_lmapScene;
      puVar6 = (unsigned int *)(g_lmapScene + 0x38);
      temp_v9 = *(unsigned int *)(g_lmapScene + 0x3c);
      *(unsigned int *)(g_lmapScene + 0x28) = *(unsigned int *)(g_lmapScene + 0x34);
      *(unsigned int *)(temp_v0 + 0x2c) = *puVar6;
      *(unsigned int *)(temp_v0 + 0x30) = temp_v9;
      return;
    }
    break;
  case 3:
    *(int *)(g_lmapScene + 8) = *(int *)(g_lmapScene + 8) + 1;
    temp_v10 = *(float *)(temp_v0 + 0x50) * 0.017453292f;
    FUN_001bc124();
    temp_v0 = g_lmapScene;
    temp_v4 = 22.5f;
    *(float *)(g_lmapScene + 0x28) = *(float *)(g_lmapScene + 0x28) + temp_v10 * 22.5f;
    temp_v3 = *(float *)(temp_v0 + 0x50) * temp_v3;
    FUN_001bbf0c();
    temp_v0 = g_lmapScene;
    *(float *)(g_lmapScene + 0x30) = *(float *)(g_lmapScene + 0x30) + temp_v3 * temp_v4;
    if (*(int *)(temp_v0 + 8) >= 0x29) {
      *(int *)(temp_v0 + 4) = *(int *)(temp_v0 + 4) + 1;
      *(unsigned int *)(temp_v0 + 8) = 0;
      FUN_00303460(0x14);
      return;
    }
    break;
  case 4:
    *(unsigned int *)(g_lmapScene + 0x54) = 0x23;
    *(unsigned int *)(temp_v0 + 0x58) = temp_v9;
    *(unsigned int *)(temp_v0 + 4) = 5;
    *(unsigned int *)(temp_v0 + 8) = 0;
    naviMainSetFlagsAndActivate(0x86,0,0,0,0,0);
    DAT_005f1604 = 0x86;
    return;
  case 5:
    temp_v10 = *(float *)(g_lmapScene + 0x50) * 0.017453292f;
    FUN_001bc124();
    temp_v0 = g_lmapScene;
    temp_v4 = 100.0f;
    *(float *)(g_lmapScene + 0x1c) = *(float *)(g_lmapScene + 0x1c) + temp_v10 * 100.0f;
    temp_v3 = *(float *)(temp_v0 + 0x50) * temp_v3;
    FUN_001bbf0c();
    temp_v0 = g_lmapScene;
    temp_v10 = *(float *)(g_lmapScene + 0x24) + temp_v3 * temp_v4;
    *(float *)(g_lmapScene + 0x24) = temp_v10;
    *(unsigned int *)(temp_v0 + 0x20) = 0xc2be0000;
    *(unsigned int *)(temp_v0 + 0x28) = *(unsigned int *)(temp_v0 + 0x1c);
    *(unsigned int *)(temp_v0 + 0x2c) = 0xc2be0000;
    *(float *)(temp_v0 + 0x30) = temp_v10;
    FUN_0025ef68(temp_v0 + 0x28,temp_v0 + 0x34,0);
    temp_v0 = g_lmapScene;
    puVar6 = (unsigned int *)(g_lmapScene + 0x34);
    puVar5 = (unsigned int *)(g_lmapScene + 0x28);
    puVar7 = (unsigned int *)(g_lmapScene + 0x38);
    temp_v9 = *(unsigned int *)(g_lmapScene + 0x3c);
    *(unsigned int *)(g_lmapScene + 8) = 0;
    *puVar5 = *puVar6;
    *(unsigned int *)(temp_v0 + 0x2c) = *puVar7;
    *(unsigned int *)(temp_v0 + 0x30) = temp_v9;
    *(unsigned int *)(temp_v0 + 0x50) = temp_v2;
    *(int *)(temp_v0 + 4) = *(int *)(temp_v0 + 4) + 1;
    return;
  case 6:
    temp_v1 = linkHolderCheckFirst(*(unsigned int *)(g_lmapScene + 0x1a8));
    temp_v0 = g_lmapScene;
    if (temp_v1 != 0) {
      *(unsigned int *)(g_lmapScene + 0x54) = 0x24;
      *(unsigned int *)(temp_v0 + 0x58) = temp_v9;
      *(int *)(temp_v0 + 4) = *(int *)(temp_v0 + 4) + 1;
      *(unsigned int *)(temp_v0 + 8) = 0;
      FUN_00303460(0x15);
      return;
    }
    break;
  case 7:
    temp_v0 = linkHolderCheckFirst(*(unsigned int *)(g_lmapScene + 0x1a8));
    if (temp_v0 != 0) {
      *(unsigned char *)(g_lmapScene + 0x6c) = 0;
      DAT_005f1a4e = 0;
      mapSetSceneState(1);
      FUN_00303460(0);
      return;
    }
  }
  return;
}

} /* extern "C" */
