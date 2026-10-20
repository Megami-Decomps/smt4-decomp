/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00489480` (_code @ 0x489480, 0x370 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184758(int, int, int);
int FUN_001f4e20(...);
int FUN_00203d04(int);
int FUN_002392b8(...);
int FUN_002c2d5c(...);
int FUN_002d22c0(int);
int FUN_00357a48(void);
int FUN_00398450(void);
int FUN_003d2150(int);
int FUN_0049277c(int, int, int *, int *);
int FUN_00492b84(int);
int FUN_00492c18(int, unsigned int **);
int FUN_004d03ec(void);
int FUN_004d0420(int, int, int, int);
int NaviMain_GetCurrentMap(...);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char DAT_00532760; /* 0x532760 */
extern int g_gameState; /* 0x5f15fc */
extern signed char DAT_005f1614; /* 0x5f1614 */
extern signed char DAT_005f161d; /* 0x5f161d */
extern signed char DAT_005f1a5c; /* 0x5f1a5c */
extern signed char DAT_005f1a5e; /* 0x5f1a5e */

extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_00184758. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_001f4e20. */
/* Supplied declaration required: FUN_00203d04. */
/* Supplied declaration required: FUN_002392b8. */
/* Supplied declaration required: FUN_002c2d5c. */
/* Supplied declaration required: FUN_002d22c0. */
extern int lmapSceneGetUnk0(void);
extern int FUN_0033ded8(void);
/* Supplied declaration required: FUN_00357a48. */
extern int FUN_003847e8(void);
/* Supplied declaration required: FUN_00398450. */
/* Supplied declaration required: FUN_003d2150. */
/* Supplied declaration required: FUN_0049277c. */
/* Supplied declaration required: FUN_00492b84. */
extern int FUN_00492bc0(int);
/* Supplied declaration required: FUN_00492c18. */
/* Supplied declaration required: FUN_004d03ec. */
/* Supplied declaration required: FUN_004d0420. */
/* Supplied declaration required: NaviMain_GetCurrentMap. */


unsigned int FUN_00489480(int param_1)

{
/* irregular: 1 goto(s); 15 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *temp_v4;
  unsigned int *temp_v5;
  int temp_v6;
  int uStack_3c;
  int uStack_38;
  int uStack_34;
  int temp_v7;
  int temp_v8;
  
  temp_v8 = FUN_00162e8c();
  temp_v0 = *(unsigned int *)(param_1 + 0x10);
  temp_v3 = 0;
  if (((temp_v0 & 0x2000000) != 0) && ((FUN_004d03ec(), temp_v0 == 0 || (DAT_005f1614 != '\0')))) {
    *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfdffffff;
  }
  temp_v1 = FUN_0018719c(0x49a);
  if (temp_v1 == 0) {
    return 0;
  }
  temp_v1 = FUN_0018719c(0xc);
  if ((temp_v1 != 0) && (temp_v1 = FUN_0018719c(0x10), temp_v1 == 0)) {
    return 0;
  }
  temp_v7 = param_1 + 0x4cc;
  NaviMain_GetCurrentMap();
  temp_v1 = FUN_003847e8();
  if (temp_v1 == 2 || temp_v1 == 3) {
    return 0;
  }
  temp_v5 = (unsigned int *)&uStack_34;
  temp_v4 = (unsigned int *)&uStack_38;
  FUN_0049277c(0x13,0x112d,&temp_v6,&uStack_3c);
  if (DAT_005f1614 != '\0') {
    return 0;
  }
  FUN_004d0420(temp_v6,uStack_3c,uStack_38,uStack_34);
  if (temp_v6 != 0) {
    if (DAT_005f161d != '\0') {
      if (DAT_005f1a5e != '\0') {
        temp_v1 = FUN_00492bc0(temp_v7);
        temp_v2 = NaviMain_GetCurrentMap(temp_v7);
        if ((temp_v1 != temp_v2) && (DAT_005f1a5c == '\0')) {
          FUN_003d2150(0x100020f);
          FUN_00357a48();
          temp_v1 = 0;
          do {
            FUN_00184758(param_1 + temp_v1 * 0x8c + 0xc40,7,0);
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 6);
          *(unsigned char *)(param_1 + 0x20644) = 1;
          goto LAB_00489788;
        }
      }
      FUN_003d2150(0x100020f);
      *(unsigned char *)(param_1 + 0x5c) = 5;
      *(unsigned int *)(param_1 + 8) = 0;
      *(unsigned int *)(param_1 + 4) = 0xd;
      FUN_00492b84(temp_v7);
      temp_v4 = (unsigned int *)0x0;
      temp_v5 = (unsigned int *)0x0;
      FUN_00492c18(temp_v7,&temp_v4);
      temp_v1 = 0;
      *(char *)(param_1 + 100) = (char)*(unsigned int *)(param_1 + 0x20510);
      *(unsigned char *)(param_1 + 0x7b90) = 1;
      *(unsigned char *)(param_1 + 0x7b91) = 1;
      do {
        FUN_00184758(param_1 + temp_v1 * 0x8c + 0xc40,7,0);
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 6);
      FUN_00203d04(1);
      temp_v1 = FUN_00492bc0(temp_v7);
      temp_v2 = NaviMain_GetCurrentMap(temp_v7);
      if (temp_v1 == temp_v2) {
        DAT_005f1a5e = '\0';
      }
      if (DAT_005f1a5c != '\0') {
        FUN_002d22c0(0);
        FUN_00398450();
      }
      else {
        FUN_002d22c0(0);
      }
    }
    else {
      temp_v1 = lmapSceneGetUnk0();
      if ((temp_v1 != 1) && (g_gameState < 100)) {
        if ((((DAT_005f1a5c == '\0') && (DAT_005f161d != '\0')) &&
            (temp_v1 = FUN_0033ded8(), temp_v1 == 0)) && (*(char *)(param_1 + 0x65) != '\0')) {
          FUN_002392b8(&DAT_00532760);
          FUN_001f4e20(1);
          FUN_002c2d5c(0xffffffff);
          *(unsigned char *)(param_1 + 0x65) = 0;
        }
        return temp_v3;
      }
      FUN_003d2150(0x10000d3);
      *(unsigned char *)(param_1 + 0x5c) = 5;
      *(unsigned int *)(param_1 + 8) = 0;
      *(unsigned int *)(param_1 + 4) = 0xd;
      FUN_002d22c0(1);
      temp_v1 = 0;
      do {
        FUN_00184758(param_1 + temp_v1 * 0x8c + 0xc40,4,0);
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 6);
      *(unsigned char *)(param_1 + 0x65) = 1;
      if (*(int *)(temp_v8 + 0x15bc) != 0) {
        *(int *)(temp_v8 + 0x15bc) = 0;
      }
    }
LAB_00489788:
    temp_v3 = 1;
  }
  if ((((DAT_005f1a5c == '\0') && (DAT_005f161d != '\0')) && (temp_v1 = FUN_0033ded8(), temp_v1 == 0))
     && (*(char *)(param_1 + 0x65) != '\0')) {
    FUN_002392b8(&DAT_00532760);
    FUN_001f4e20(1);
    FUN_002c2d5c(0xffffffff);
    *(unsigned char *)(param_1 + 0x65) = 0;
  }
  return temp_v3;
}

} /* extern "C" */
