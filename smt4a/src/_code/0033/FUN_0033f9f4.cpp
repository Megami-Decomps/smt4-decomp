/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033f9f4` (_code @ 0x33f9f4, 0x460 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b5cd4(void);
int mapIfStart(unsigned int);
int FUN_0033abb4(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int g_lmapMainState; /* 0x580238 */
extern int g_lmapView; /* 0x5806a4 */
extern signed char DAT_005f1614; /* 0x5f1614 */
extern int DAT_005f1618; /* 0x5f1618 */
extern signed char DAT_005f161d; /* 0x5f161d */

extern int gameFlagsGetBlock(void);
extern int FUN_00163fd4(unsigned int);
extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: FUN_002b5cd4. */
/* Supplied declaration required: mapIfStart. */
/* Supplied declaration required: FUN_0033abb4. */
extern int inputIsQuestMenuPressed(void);


void FUN_0033f9f4(void)

{
/* irregular: 10 unstructured edge(s); 2 goto(s); 3 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  char *pcVar7;
  unsigned char *pbVar8;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  
  temp_v3 = g_lmapMainState;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v2 = 0;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v12 = 3.0f;
  temp_v14 = 0x43340000;
  temp_v4 = gameFlagsGetBlock();
  temp_v5 = g_lmapView;
  temp_v13 = 0x3f800000;
  temp_v11 = 0.0f;
  *(unsigned int *)(g_lmapView + 0x18) = *(unsigned int *)(temp_v3 + 0x50);
  if (*(char *)(temp_v3 + 0x94) != '\0') {
    *(unsigned char *)(temp_v5 + 0xb4) = 0;
    *(unsigned char *)(temp_v5 + 0xb5) = 0;
    *(unsigned short *)(temp_v5 + 0xb6) = 10;
    *(unsigned short *)(temp_v5 + 0xb8) = 0;
    *(unsigned int *)(temp_v5 + 0xbc) = 0;
    *(unsigned int *)(temp_v5 + 0xc0) = 0;
    *(unsigned int *)(temp_v5 + 0xc4) = 0x3f800000;
  }
  if (0 < *(short *)(temp_v5 + 0xb6)) {
    *(short *)(temp_v5 + 0xb6) = *(short *)(temp_v5 + 0xb6) - 1;
  }
  temp_v0 = DAT_005f161d;
  if (DAT_005f161d == '\0') {
    temp_v0 = DAT_005f1614;
  }
  if ((!(DAT_005f161d != '\0' || temp_v0 != '\0')) && (DAT_005f1618 == 0)) {
    if (*(char *)(temp_v5 + 0xb4) != '\0') goto LAB_0033fcfc;
    if (((*(char *)(temp_v5 + 0xb5) != '\0') && (temp_v5 = FUN_00163fd4(8), temp_v5 == 0)) &&
       (temp_v5 = FUN_00163fd4(7), temp_v5 == 0)) {
      *(unsigned char *)(g_lmapView + 0xb5) = 0;
    }
    if (*(short *)(g_lmapView + 0xb6) < 7) {
      temp_v5 = FUN_00163fd4(8);
      temp_v6 = temp_v5 != 0;
      temp_v5 = FUN_00163fd4(7);
      temp_v7 = temp_v5 != 0;
      temp_v5 = padButtonIsPressed(4);
      temp_v8 = temp_v5 != 0;
      temp_v5 = padButtonIsPressed(3);
      temp_v9 = temp_v5 != 0;
      if ((*(short *)(g_lmapView + 0xb6) == 0) &&
         ((temp_v5 = inputIsQuestMenuPressed(), temp_v5 != 0 ||
          (((temp_v5 = FUN_00163fd4(8), temp_v5 != 0 && (temp_v5 = FUN_00163fd4(7), temp_v5 != 0)) &&
           ((temp_v5 = padButtonIsPressed(8), temp_v5 == 0 &&
            ((temp_v5 = padButtonIsPressed(7), temp_v5 == 0 && (*(char *)(g_lmapView + 0xb5) == '\0'))))))))
         )) {
        temp_v6 = 0;
        temp_v7 = 0;
        temp_v8 = 0;
        temp_v9 = 0;
        if (DAT_005f161d == '\0') {
          temp_v2 = 1;
        }
      }
    }
  }
  temp_v5 = g_lmapView;
  if ((*(char *)(g_lmapView + 0xb4) == '\0') && (temp_v2)) {
    *(unsigned char *)(g_lmapView + 0xb4) = 1;
    temp_v10 = *(float *)(temp_v5 + 0x18);
    *(float *)(temp_v5 + 0x210) = temp_v11;
    *(float *)(temp_v5 + 0x214) = temp_v11;
    *(float *)(temp_v5 + 0xbc) = temp_v10;
    *(unsigned int *)(temp_v5 + 0xc0) = temp_v14;
    FUN_002b5cd4();
    temp_v5 = g_lmapView;
    *(unsigned short *)(g_lmapView + 0xb8) = 0;
    if (temp_v10 < temp_v11) {
      *(unsigned int *)(temp_v5 + 0xc4) = 0xbf800000;
    }
    else {
      *(unsigned int *)(temp_v5 + 0xc4) = temp_v13;
    }
  }
  if (temp_v8) {
    pcVar7 = (char *)(temp_v4 + 0x14f4);
    temp_v0 = *pcVar7;
    if (temp_v0 == '\0') {
      *pcVar7 = '\x02';
      temp_v13 = 0x33fd64;
      *(unsigned char *)(temp_v3 + 0x95) = 1;
      mapIfStart(temp_v13);
    }
    else {
      *pcVar7 = temp_v0 - '\x01';
      if (temp_v0 != '\x01') {
        if (temp_v0 != '\x02') {
          if (temp_v0 == '\x03') {
            temp_v13 = 0x33fd64;
            *(unsigned char *)(temp_v3 + 0x95) = 1;
            mapIfStart(temp_v13);
          }
        }
        else {
LAB_0033fda4:
          temp_v13 = 0x33fe80;
          *(unsigned char *)(temp_v3 + 0x95) = 1;
          mapIfStart(temp_v13);
        }
      }
      else {
        temp_v13 = 0x33fe54;
        *(unsigned char *)(temp_v3 + 0x95) = 1;
        mapIfStart(temp_v13);
      }
    }
  }
  else if (temp_v9) {
    pbVar8 = (unsigned char *)(temp_v4 + 0x14f4);
    temp_v1 = *pbVar8;
    if (temp_v1 >= 2) {
      *pbVar8 = 0;
      temp_v13 = 0x33fe54;
      *(unsigned char *)(temp_v3 + 0x95) = 1;
      mapIfStart(temp_v13);
    }
    else {
      *pbVar8 = temp_v1 + 1;
      if (temp_v1 != 0xff) {
        if (temp_v1 == 0) goto LAB_0033fda4;
        if (temp_v1 == 1) {
          temp_v13 = 0x33fd64;
          *(unsigned char *)(temp_v3 + 0x95) = 1;
          mapIfStart(temp_v13);
        }
      }
      else {
        temp_v13 = 0x33fe54;
        *(unsigned char *)(temp_v3 + 0x95) = 1;
        mapIfStart(temp_v13);
      }
    }
  }
  if (*(char *)(g_lmapView + 0xb4) != '\0') {
LAB_0033fcfc:
    temp_v10 = 15.0f;
    temp_v12 = *(float *)(g_lmapView + 0x18);
    FUN_0033abb4();
    temp_v5 = g_lmapView;
    if (15.5f >= temp_v12) {
      *(unsigned int *)(g_lmapView + 0x18) = *(unsigned int *)(g_lmapView + 0xc0);
      *(unsigned char *)(temp_v5 + 0xb4) = 0;
      *(unsigned short *)(temp_v5 + 0xb6) = 10;
      *(unsigned char *)(temp_v5 + 0xb5) = 1;
    }
    else {
      if (temp_v11 <= *(float *)(g_lmapView + 0xc4)) {
        temp_v10 = *(float *)(g_lmapView + 0x18) + temp_v10;
      }
      else {
        temp_v10 = *(float *)(g_lmapView + 0x18) - temp_v10;
      }
      *(float *)(g_lmapView + 0x18) = temp_v10;
    }
    if (*(char *)(g_lmapView + 0xb4) != '\0') {
      *(unsigned int *)(temp_v3 + 0x50) = *(unsigned int *)(g_lmapView + 0x18);
      return;
    }
  }
  else if (temp_v6) {
    temp_v12 = *(float *)(g_lmapView + 0x18) + temp_v12;
    *(float *)(g_lmapView + 0x18) = temp_v12;
  }
  else if (temp_v7) {
    temp_v12 = *(float *)(g_lmapView + 0x18) - temp_v12;
    *(float *)(g_lmapView + 0x18) = temp_v12;
  }
  temp_v5 = g_lmapView;
  temp_v12 = *(float *)(g_lmapView + 0x18);
  if (temp_v12 < temp_v11) {
    temp_v12 = temp_v12 + 360.0f;
    *(float *)(g_lmapView + 0x18) = temp_v12;
  }
  if ((int)temp_v12 >= 0x43b40000) {
    *(float *)(temp_v5 + 0x18) = temp_v12 - 360.0f;
  }
  *(unsigned int *)(temp_v3 + 0x50) = *(unsigned int *)(g_lmapView + 0x18);
  return;
}

} /* extern "C" */
