/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003254a0` (_code @ 0x3254a0, 0x4cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00203d04(int);
int FUN_002392b8(...);
int FUN_00244bb4(int, int);
int FUN_00261918(int, int, int);
int FUN_002c2d5c(unsigned int);
int FUN_0033def0(...);
int FUN_003d4ed8(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char LAB_00325978; /* 0x325978 */
extern int g_mapIf; /* 0x58103c */
extern int g_lmapScene; /* 0x581288 */
extern int g_gameState; /* 0x5f15fc */
extern int DAT_005f1600; /* 0x5f1600 */
extern signed char DAT_005f1614; /* 0x5f1614 */
extern unsigned int DAT_005f1638; /* 0x5f1638 */
extern unsigned int DAT_005f163c; /* 0x5f163c */
extern unsigned int DAT_005f1640; /* 0x5f1640 */
extern unsigned int DAT_005f16b0; /* 0x5f16b0 */
extern float DAT_005f16b4; /* 0x5f16b4 */
extern unsigned int DAT_005f16b8; /* 0x5f16b8 */
extern unsigned int DAT_005f16cc; /* 0x5f16cc */
extern signed char DAT_005f185d; /* 0x5f185d */
extern signed char DAT_005f185e; /* 0x5f185e */
extern signed char DAT_005f185f; /* 0x5f185f */
extern int DAT_005f1860; /* 0x5f1860 */
extern int DAT_005f1864; /* 0x5f1864 */
extern unsigned int DAT_005f1868; /* 0x5f1868 */
extern float DAT_005f186c; /* 0x5f186c */
extern unsigned int DAT_005f1870; /* 0x5f1870 */
extern unsigned int DAT_005f1874; /* 0x5f1874 */
extern unsigned int DAT_005f1878; /* 0x5f1878 */
extern unsigned char DAT_005f187c; /* 0x5f187c */

extern int FUN_001632fc(void);
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_00203d04. */
/* Supplied declaration required: FUN_002392b8. */
/* Supplied declaration required: FUN_00244bb4. */
/* Supplied declaration required: FUN_00261918. */
extern int FUN_002b7af0(void);
extern int FUN_002b809c(void);
/* Supplied declaration required: FUN_002c2d5c. */
/* Supplied declaration required: FUN_0033def0. */
extern int FUN_00377028(unsigned int);
extern int FUN_00384ca8(int);
/* Supplied declaration required: FUN_003d4ed8. */
extern int linkHolderCallFirst(unsigned int);
extern int FUN_004bc944(int, int);


void FUN_003254a0(void)

{
/* irregular: 6 goto(s); 7 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  int temp_v2;
  float temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  float temp_v10;
  
  temp_v2 = g_mapIf;
  if (DAT_005f185e != '\0') {
    temp_v4 = FUN_001632fc();
    if (temp_v4 == 0) {
      temp_v9 = g_gameState >= 100;
      if (!temp_v9) {
        temp_v4 = linkHolderCallFirst(*(unsigned int *)(g_lmapScene + 0x1a8));
        if ((temp_v4 == 0) ||
           (temp_v4 = linkHolderCallFirst(*(unsigned int *)(g_lmapScene + 0x1a8)), temp_v4 == 1)) {
          temp_v9 = 1;
        }
        if (((g_gameState < 100) && (g_gameState == DAT_005f1860)) &&
           (DAT_005f1600 == DAT_005f1864)) {
          temp_v9 = 0;
        }
      }
      temp_v4 = FUN_002b809c();
      if (temp_v4 != 0) {
        temp_v9 = 0;
      }
      temp_v4 = FUN_0018719c(0xc);
      if (((temp_v4 == 0) || (temp_v4 = FUN_0018719c(0x10), temp_v4 != 0)) && (temp_v9)) {
        temp_v4 = FUN_004bc944(DAT_005f1860,DAT_005f1864);
        if (temp_v4 != 0) {
          temp_v4 = DAT_005f1860;
          if (g_gameState >= 100) {
            temp_v5 = DAT_005f1638;
            if (DAT_005f1638 != 0x41) {
              temp_v5 = (unsigned int)DAT_005f187c;
            }
            if (!(DAT_005f1638 == 0x41 || temp_v5 == 1)) {
              temp_v4 = FUN_002b7af0();
            }
            else {
              FUN_00244bb4(DAT_005f1860,DAT_005f1864);
            }
          }
          else {
            FUN_00244bb4(DAT_005f1860,DAT_005f1864);
          }
          if (!(DAT_005f1638 == 0x21 || DAT_005f1638 == 0x1f)) {
            temp_v9 = DAT_005f1638 == 5 || DAT_005f1638 == 0x201;
            if (DAT_005f1638 != 5 && DAT_005f1638 != 0x201) {
              temp_v9 = DAT_005f1638 == 0x204;
            }
            if (temp_v9) goto LAB_00325644;
          }
          else {
LAB_00325644:
            temp_v6 = FUN_00377028(DAT_005f163c);
            temp_v7 = FUN_00377028(DAT_005f1640);
            if (temp_v6 == 0 && temp_v7 == 0) goto LAB_003256e4;
            temp_v6 = FUN_00384ca8(temp_v6);
            if ((temp_v6 == 0) && (temp_v6 = FUN_00384ca8(temp_v7), temp_v6 == 0)) goto LAB_003256bc;
          }
          FUN_002392b8(temp_v4);
          FUN_00261918(g_gameState,DAT_005f1600,1);
          FUN_002c2d5c(0xffffffff);
          DAT_005f185f = '\x01';
        }
        else {
LAB_003256bc:
          FUN_002392b8(&LAB_00325978);
          FUN_00261918(g_gameState,DAT_005f1600,1);
          FUN_002c2d5c(0xffffffff);
          DAT_005f185f = '\x01';
        }
      }
    }
  }
  else if (DAT_005f185f != '\0') {
    FUN_00203d04(1);
    DAT_005f185f = '\0';
  }
LAB_003256e4:
  temp_v0 = *(char *)(temp_v2 + 0xcc7d);
  temp_v10 = 200.0f;
  if (DAT_005f185d != '\0') {
    temp_v1 = temp_v0;
    if (temp_v0 == '\0') {
      temp_v1 = DAT_005f1614;
    }
    if ((temp_v0 == '\0' && temp_v1 == '\0') && (*(char *)(temp_v2 + 0xcd10) == '\0')) {
      FUN_003d4ed8(0x10002ab);
    }
    *(unsigned char *)(temp_v2 + 0xcc7d) = 1;
    *(unsigned char *)(temp_v2 + 0xcc7e) = 1;
    temp_v8 = DAT_005f1870;
    temp_v3 = DAT_005f186c;
    *(unsigned int *)(temp_v2 + 0xcc88) = DAT_005f1868;
    *(float *)(temp_v2 + 0xcc8c) = temp_v3;
    *(unsigned int *)(temp_v2 + 0xcc90) = temp_v8;
    *(float *)(temp_v2 + 0xcc8c) = temp_v3 + temp_v10;
    *(unsigned int *)(temp_v2 + 0xcc94) = DAT_005f1874;
    switch(DAT_005f1878) {
    default:
      *(unsigned int *)(temp_v2 + 0xcc98) = 0;
      break;
    case 2:
      *(unsigned int *)(temp_v2 + 0xcc98) = 3;
      break;
    case 3:
      temp_v8 = 6;
      *(unsigned int *)(temp_v2 + 0xcc98) = temp_v8;
      break;
    case 4:
      temp_v8 = 7;
      *(unsigned int *)(temp_v2 + 0xcc98) = temp_v8;
      break;
    case 5:
      temp_v8 = 8;
      *(unsigned int *)(temp_v2 + 0xcc98) = temp_v8;
      break;
    case 0xb:
    case 0xd:
      *(unsigned int *)(temp_v2 + 0xcc98) = 1;
      break;
    case 0xc:
    case 0xe:
      temp_v8 = 2;
      *(unsigned int *)(temp_v2 + 0xcc98) = temp_v8;
      break;
    case 0xf:
    case 0x11:
      temp_v8 = 4;
      *(unsigned int *)(temp_v2 + 0xcc98) = temp_v8;
      break;
    case 0x10:
    case 0x12:
      temp_v8 = 5;
      *(unsigned int *)(temp_v2 + 0xcc98) = temp_v8;
    }
  }
  else if (temp_v0 != '\0') {
    *(unsigned char *)(temp_v2 + 0xcc7d) = 0;
    *(unsigned char *)(temp_v2 + 0xcc7e) = 1;
  }
  FUN_0033def0(temp_v2 + 0xcc7c);
  if (DAT_005f1638 != 0x20) {
    if ((int)DAT_005f1638 < 0x20) {
      if ((DAT_005f1638 == 5 || DAT_005f1638 == 0x19) ||
         (DAT_005f1638 == 0x1a || DAT_005f1638 == 0x1f)) goto LAB_003258b0;
    }
    else if ((DAT_005f1638 == 0x21 || DAT_005f1638 == 0x23) ||
            (DAT_005f1638 == 0x24 || DAT_005f1638 == 0x33)) goto LAB_003258b0;
    temp_v0 = *(char *)(temp_v2 + 0xcca1);
  }
  else {
LAB_003258b0:
    if (DAT_005f1614 == '\0') {
      *(unsigned char *)(temp_v2 + 0xcca1) = 1;
      *(unsigned char *)(temp_v2 + 0xcca2) = 1;
      *(unsigned int *)(temp_v2 + 0xccac) = DAT_005f16b0;
      *(float *)(temp_v2 + 0xccb0) = DAT_005f16b4 + 10.0f;
      *(unsigned int *)(temp_v2 + 0xccb4) = DAT_005f16b8;
      *(unsigned int *)(temp_v2 + 0xccb8) = DAT_005f16cc;
      goto LAB_00325868;
    }
    temp_v0 = *(char *)(temp_v2 + 0xcca1);
  }
  if (temp_v0 != '\0') {
    *(unsigned char *)(temp_v2 + 0xcca1) = 0;
    *(unsigned char *)(temp_v2 + 0xcca2) = 1;
  }
LAB_00325868:
  FUN_0033def0();
  temp_v0 = *(char *)(temp_v2 + 0xccc5);
  if (DAT_005f187c != 0) {
    temp_v1 = temp_v0;
    if (temp_v0 == '\0') {
      temp_v1 = DAT_005f1614;
    }
    if ((temp_v0 == '\0' && temp_v1 == '\0') && (*(char *)(temp_v2 + 0xcd10) == '\0')) {
      FUN_003d4ed8(0x10002ab);
    }
    *(unsigned char *)(temp_v2 + 0xccc5) = 1;
    *(unsigned char *)(temp_v2 + 0xccc6) = 1;
    temp_v8 = DAT_005f1870;
    temp_v3 = DAT_005f186c;
    *(unsigned int *)(temp_v2 + 0xccd0) = DAT_005f1868;
    *(float *)(temp_v2 + 0xccd4) = temp_v3;
    *(unsigned int *)(temp_v2 + 0xccd8) = temp_v8;
    *(float *)(temp_v2 + 0xccd4) = temp_v3 + temp_v10;
    *(unsigned int *)(temp_v2 + 0xccdc) = DAT_005f1874;
  }
  else if (temp_v0 != '\0') {
    *(unsigned char *)(temp_v2 + 0xccc5) = 0;
    *(unsigned char *)(temp_v2 + 0xccc6) = 1;
  }
  FUN_0033def0(temp_v2 + 0xccc4);
  return;
}

} /* extern "C" */
