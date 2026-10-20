/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00236110` (_code @ 0x236110, 0x3d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdSequenceRequest(...);
int asdOperatorNew(void);
int FUN_001919a4(void);
int FUN_0021c118(int, int);
int FUN_002bf464(void);
int asdOperatorDelete(unsigned int);
int FUN_00318d6c(void);
int campCommonBgAcquire(void);
int mapPlaceSet(unsigned int, unsigned int, unsigned int);
int campButtonHelpAcquire(void);
int campCommonBgRelease(void);
int campButtonHelpRelease(void);
int FUN_003b61ec(void);
int FUN_003d4c68(unsigned int);
int FUN_003d4da8(void);
int FUN_003d54f8(...);
int FUN_00467e64(void);
int FUN_0046a34c(unsigned int, int, unsigned int, int);
int FUN_0046adec(unsigned int);
int FUN_0046b9c0(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern signed char DAT_00588c2d; /* 0x588c2d */
extern int DAT_00588c30; /* 0x588c30 */
extern int DAT_00588c34; /* 0x588c34 */
extern unsigned int DAT_00588c38; /* 0x588c38 */
extern int DAT_00588c3c; /* 0x588c3c */
extern signed char DAT_005f19f1; /* 0x5f19f1 */
extern unsigned int DAT_005f19f4; /* 0x5f19f4 */
extern unsigned int DAT_005f19f8; /* 0x5f19f8 */
extern unsigned int DAT_005f19fc; /* 0x5f19fc */
extern unsigned char DAT_005f1a00; /* 0x5f1a00 */
extern unsigned int DAT_005f1a50; /* 0x5f1a50 */
extern unsigned char DAT_005f1b70; /* 0x5f1b70 */
extern int DAT_005f1b74; /* 0x5f1b74 */

/* Supplied declaration required: asdSequenceRequest. */
/* Supplied declaration required: asdOperatorNew. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_001919a4. */
extern int bgmGetStateById(unsigned int);
/* Supplied declaration required: FUN_0021c118. */
/* Supplied declaration required: FUN_002bf464. */
extern int lmapMainGetUnk74(void);
/* Supplied declaration required: asdOperatorDelete. */
/* Supplied declaration required: FUN_00318d6c. */
/* Supplied declaration required: campCommonBgAcquire. */
extern int gameStateIsFlagSetAndLarge(void);
/* Supplied declaration required: mapPlaceSet. */
/* Supplied declaration required: campButtonHelpAcquire. */
/* Supplied declaration required: campCommonBgRelease. */
/* Supplied declaration required: campButtonHelpRelease. */
/* Supplied declaration required: FUN_003b61ec. */
/* Supplied declaration required: FUN_003d4c68. */
/* Supplied declaration required: FUN_003d4da8. */
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: FUN_00467e64. */
/* Supplied declaration required: FUN_0046a34c. */
/* Supplied declaration required: FUN_0046adec. */
/* Supplied declaration required: FUN_0046b9c0. */
extern int flagsDESet(unsigned int *);


unsigned int FUN_00236110(void)

{
/* irregular: irregular input(s): in_r3; 21 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int *piVar6;
  unsigned int temp_v4;
  int in_r3;
  int temp_v5;
  
  temp_v0 = DAT_00588c30;
  piVar6 = &temp_v5;
  temp_v5 = in_r3;
  switch(*(unsigned char *)(DAT_00588c30 + 0x19)) {
  case 0:
    if (DAT_00588c3c == 0) {
      if (DAT_00588c34 != 1) {
        temp_v2 = bgmGetStateById(0x10000a3);
        if (temp_v2 == 1) {
          FUN_0021c118(0x10000a3,0xf);
        }
        temp_v3 = 0x1000079;
        temp_v2 = bgmGetStateById(0x1000079);
        if ((((((DAT_00588c34 != 2) || (temp_v1 = gameFlagIsSet(0x71), temp_v1 == 0)) ||
              (temp_v1 = gameFlagIsSet(0x74), temp_v1 != 0)) &&
             (((DAT_00588c34 != 3 || (temp_v1 = gameFlagIsSet(0x8f), temp_v1 == 0)) ||
              (temp_v1 = gameFlagIsSet(0x92), temp_v1 != 0)))) &&
            (((DAT_00588c34 != 4 || (temp_v1 = gameFlagIsSet(0xf4), temp_v1 == 0)) ||
             (temp_v1 = gameFlagIsSet(0xf6), temp_v1 != 0)))) &&
           (((DAT_00588c34 != 2 || (temp_v1 = gameFlagIsSet(0xd1), temp_v1 == 0)) ||
            (temp_v1 = gameFlagIsSet(0xd4), temp_v1 != 0)))) {
          if (temp_v2 != 1) {
            FUN_003d4c68(temp_v3);
          }
        }
      }
      else {
        temp_v3 = 0x1000044;
        temp_v2 = bgmGetStateById(0x1000044);
        if (temp_v2 != 1) {
          FUN_003d4c68(temp_v3);
        }
      }
      campCommonBgAcquire();
      FUN_002bf464();
      campButtonHelpAcquire();
      FUN_003b61ec();
    }
    puVar2 = (unsigned int *)0xe70;
    asdOperatorNew();
    temp_v2 = 0;
    if (puVar2 != (unsigned int *)0x0) {
      *puVar2 = 0;
      temp_v2 = flagsDESet(puVar2 + 0xd6);
      temp_v2 = temp_v2 - 0x358;
    }
    *(int *)(temp_v0 + 0x1c) = temp_v2;
    FUN_00467e64();
    FUN_0046a34c(*(unsigned int *)(temp_v0 + 0x1c),DAT_00588c34,DAT_00588c38,DAT_00588c3c);
    *(unsigned char *)(temp_v0 + 0x19) = 1;
    break;
  case 1:
    FUN_0046adec(*(unsigned int *)(DAT_00588c30 + 0x1c));
    if ((**(unsigned int **)(temp_v0 + 0x1c) & 1) != 0) {
      *(unsigned char *)(temp_v0 + 0x19) = 3;
    }
    break;
  case 2:
    *(unsigned char *)(DAT_00588c30 + 0x19) = 4;
    *(unsigned char *)(temp_v0 + 0x18) = 1;
    if (*(int *)(temp_v0 + 0x1c) != 0) {
      FUN_001919a4();
      asdOperatorDelete(*(unsigned int *)(temp_v0 + 0x1c));
      *(unsigned int *)(temp_v0 + 0x1c) = 0;
    }
    break;
  case 3:
    temp_v2 = *(int *)(DAT_00588c30 + 0x1c);
    if ((((temp_v2 == 0) || (FUN_0046b9c0(), temp_v2 == 0)) && (temp_v2 = lmapMainGetUnk74(), temp_v2 != 0)) &&
       (DAT_00588c3c == 0)) {
      temp_v2 = gameStateIsFlagSetAndLarge();
      if (temp_v2 != 0) {
        temp_v4 = 4;
        temp_v5 = DAT_005f1b74 - 200;
        temp_v3 = 0xe;
      }
      else {
        if (DAT_005f19f1 != '\0') {
          DAT_005f19f1 = '\0';
          DAT_005f1b70 = 0;
          DAT_005f1a00 = 1;
          mapPlaceSet(DAT_005f19f4,DAT_005f19f8,DAT_005f19fc);
          DAT_005f1a50 = 2;
        }
        temp_v4 = 0;
        piVar6 = (int *)0x0;
        temp_v3 = 6;
      }
      asdSequenceRequest(temp_v3,piVar6,temp_v4);
    }
    if (DAT_005f19f1 != '\0') {
      DAT_005f19f1 = '\0';
      DAT_005f1b70 = 0;
      DAT_005f1a00 = 1;
      mapPlaceSet(DAT_005f19f4,DAT_005f19f8,DAT_005f19fc);
      DAT_005f1a50 = 2;
      asdSequenceRequest(6,0);
    }
    *(unsigned char *)(temp_v0 + 0x19) = 4;
    *(unsigned char *)(temp_v0 + 0x18) = 1;
    if (*(int *)(temp_v0 + 0x1c) != 0) {
      FUN_001919a4();
      asdOperatorDelete(*(unsigned int *)(temp_v0 + 0x1c));
      *(unsigned int *)(temp_v0 + 0x1c) = 0;
    }
    if (DAT_00588c3c == 0) {
      campCommonBgRelease();
      campButtonHelpRelease();
      FUN_00318d6c();
    }
    break;
  case 4:
    if (DAT_00588c2d != '\0') {
      FUN_003d54f8(0,1);
      FUN_003d54f8(1);
      FUN_003d4da8();
    }
    return 0xffffffff;
  }
  return 0;
}

} /* extern "C" */
