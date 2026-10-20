/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049c3c0` (_code @ 0x49c3c0, 0x380 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014384c(int);
int FUN_00148bb8(int, int);
int FUN_0014afd0(int, int);
int asdOperatorNew(void);
int FUN_0022677c(int, int);
int FUN_002bf464(void);
int FUN_002f5020(...);
int FUN_0031e198(void);
int FUN_00342010(void);
int FUN_003d2d34(...);
int FUN_003d54f8(...);
int FUN_00408184(...);
int FUN_0040a42c(...);
int FUN_0040a508(...);
int FUN_0040a640(void);
int FUN_0040a710(...);
int FUN_00493660(int, int, int, int);
int FUN_00493764(...);
int FUN_0049669c(unsigned int *);
int FUN_0049a8b8(unsigned int *);
int FUN_0049a9a8(void);
int FUN_004cf7cc(int);

extern unsigned char LAB_00493e80; /* 0x493e80 */
extern unsigned char DAT_0055c888; /* 0x55c888 */
extern unsigned char DAT_0055ca10; /* 0x55ca10 */

/* Supplied declaration required: FUN_0014384c. */
extern short *FUN_00145f04(unsigned char, unsigned int);
/* Supplied declaration required: FUN_00148bb8. */
/* Supplied declaration required: FUN_0014afd0. */
/* Supplied declaration required: asdOperatorNew. */
extern int FUN_002009a8(unsigned int);
/* Supplied declaration required: FUN_0022677c. */
/* Supplied declaration required: FUN_002bf464. */
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: FUN_0031e198. */
/* Supplied declaration required: FUN_00342010. */
/* Supplied declaration required: FUN_003d2d34. */
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: FUN_00408184. */
/* Supplied declaration required: FUN_0040a42c. */
/* Supplied declaration required: FUN_0040a508. */
/* Supplied declaration required: FUN_0040a640. */
/* Supplied declaration required: FUN_0040a710. */
/* Supplied declaration required: FUN_00493660. */
/* Supplied declaration required: FUN_00493764. */
/* Supplied declaration required: FUN_0049669c. */
/* Supplied declaration required: FUN_0049a8b8. */
/* Supplied declaration required: FUN_0049a9a8. */
/* Supplied declaration required: FUN_004cf7cc. */
extern int flagsDESet(int);
extern unsigned int *FUN_004d0b3c(void);


unsigned int * FUN_0049c3c0(unsigned int *param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: 23 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  short *psVar5;
  unsigned int temp_v3;
  unsigned int *puVar7;
  
  *param_1 = 0;
  temp_v1 = FUN_00493764(param_1 + 0xe9);
  temp_v1 = FUN_00493764(temp_v1 + 0x14);
  *(unsigned char **)(temp_v1 + 0x750) = &DAT_0055ca10;
  temp_v1 = temp_v1 + 0x7a8;
  FUN_002f5020(temp_v1,flagsDESet,0x74,9);
  temp_v1 = temp_v1 + 0x414;
  FUN_002f5020(temp_v1,&LAB_00493e80,0x1002,9);
  temp_v1 = flagsDESet(temp_v1 + 0x9014);
  puVar7 = (unsigned int *)(temp_v1 - 0x9f88);
  FUN_0049a8b8(puVar7);
  *(unsigned int *)(temp_v1 - 0x9f74) = param_2;
  *puVar7 = 0;
  *(char *)(temp_v1 - 0x9f70) = (char)param_3;
  *(int *)(temp_v1 - 0x9f6c) = param_4;
  *(unsigned int *)(temp_v1 - 0x9448) = 0xffffffff;
  *(unsigned int *)(temp_v1 - 0x9444) = 0;
  *(unsigned int *)(temp_v1 + 0xc07c) = 0;
  *(unsigned int *)(temp_v1 + 0xc080) = 0;
  *(unsigned int *)(temp_v1 + 0xc098) = 0;
  *(unsigned int *)(temp_v1 + 0xc09c) = 0;
  *(unsigned int *)(temp_v1 + 0xc0a0) = 0;
  *(unsigned int *)(temp_v1 - 0x9e04) = 0;
  *(unsigned int *)(temp_v1 - 0x9e00) = 0;
  *(unsigned int *)(temp_v1 - 0x9dfc) = 0;
  *(unsigned int *)(temp_v1 - 0x9bf4) = 0;
  *(unsigned int *)(temp_v1 - 0x9bf0) = 0;
  *(unsigned int *)(temp_v1 - 0x9bec) = 0;
  *(unsigned char *)(temp_v1 - 0x9f68) = 0;
  *(unsigned char *)(temp_v1 - 0x9f67) = 0;
  FUN_004cf7cc(temp_v1 - 0x9bbc);
  FUN_00493660(temp_v1 - 0x9be4,0x140,0,0x20);
  FUN_00493660(temp_v1 - 0x9bd0,0x140,0,0x20);
  temp_v2 = 0x68;
  asdOperatorNew();
  puVar4 = (unsigned int *)0x0;
  if (temp_v2 != 0) {
    puVar4 = (unsigned int *)FUN_004d0b3c();
    *puVar4 = (unsigned int)&DAT_0055c888;
  }
  *(unsigned int **)(temp_v1 - 0x944c) = puVar4;
  *(unsigned int *)(temp_v1 + 0xc0cc) = 0;
  *(unsigned int *)(temp_v1 + 0xc0d0) = 0;
  FUN_0031e198();
  psVar5 = (short *)FUN_00145f04(*(unsigned char *)(temp_v1 - 0x9f70),*(unsigned int *)(temp_v1 - 0x9f6c));
  temp_v2 = *(int *)(temp_v1 - 0x9f6c);
  FUN_00148bb8(temp_v2,*(unsigned char *)(temp_v1 - 0x9f70));
  if (temp_v2 == 0) {
    FUN_0040a640();
  }
  if (*psVar5 != 0) {
    *(unsigned char *)(temp_v1 - 0x9f68) = 1;
  }
  if (*(int *)(temp_v1 - 0x9f74) == 1) {
    *(unsigned int *)(temp_v1 - 0x9f78) = *(unsigned int *)(temp_v1 - 0x9f84);
    *(unsigned int *)(temp_v1 - 0x9f84) = 0xf;
    *(unsigned int *)(temp_v1 - 0x9f80) = 0;
    FUN_002bf464();
    FUN_00342010();
    FUN_0014384c(0x20);
    FUN_0014afd0(0x20,0);
    *(unsigned int *)(temp_v1 - 0x9be8) = 0x83;
    puVar4 = puVar7;
    FUN_0049a9a8();
    *(char *)(temp_v1 - 0x9f67) = (char)(int)puVar4;
    FUN_003d54f8(0,1);
    FUN_003d54f8(1);
    return puVar7;
  }
  *(unsigned int *)(temp_v1 - 0x9be8) = 0x1f;
  *(unsigned int *)(temp_v1 - 0x9f78) = *(unsigned int *)(temp_v1 - 0x9f84);
  *(unsigned int *)(temp_v1 - 0x9f84) = 0;
  *(unsigned int *)(temp_v1 - 0x9f80) = 0;
  FUN_0049669c(puVar7);
  FUN_0022677c(0,0xff);
  FUN_0022677c(1,0xff);
  temp_v3 = 0x1000047;
  if (param_3 != 0) {
    if (param_3 == 1) {
      FUN_0040a42c(param_4,1);
      if (param_4 != 5) {
        if (param_4 != 9) {
          temp_v3 = 0x1000043;
          temp_v2 = FUN_002009a8(0x1000043);
          if (temp_v2 != 1) {
            FUN_003d2d34(temp_v3,0,0x3c);
          }
        }
      }
      else {
        temp_v2 = FUN_002009a8(0x1000047);
        if (temp_v2 != 1) {
          FUN_003d2d34(temp_v3,0,0x3c);
        }
      }
    }
  }
  else {
    FUN_0040a508(param_4,1);
    if (!((param_4 == 6 || param_4 == 7) || param_4 == 9)) {
      if (param_4 != 8) {
        temp_v3 = 0x1000042;
        temp_v2 = FUN_002009a8(0x1000042);
        if (temp_v2 != 1) {
          FUN_003d2d34(temp_v3,0,0x3c);
        }
      }
    }
    else {
      temp_v2 = FUN_002009a8(0x1000047);
      if (temp_v2 != 1) {
        FUN_003d2d34(temp_v3,0,0x3c);
      }
    }
  }
  puVar4 = puVar7;
  FUN_0049a9a8();
  temp_v2 = 0;
  *(char *)(temp_v1 - 0x9f67) = (char)(int)puVar4;
  do {
    temp_v1 = 0;
    if (*(short *)((int)puVar7 + temp_v2 * 0x1002 + 0x1f74) != 0) {
      do {
        temp_v0 = temp_v1 * 4 + temp_v2 * 0x1002;
        if ((*(unsigned short *)((int)puVar7 + temp_v0 + 0xf76) & 1) != 0) {
          FUN_0040a710(*(unsigned short *)((int)puVar7 + temp_v0 + 0xf74),1);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < (int)(unsigned int)*(unsigned short *)((int)puVar7 + temp_v2 * 0x1002 + 0x1f74));
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 9);
  FUN_00408184(0x1c,1);
  return puVar7;
}

} /* extern "C" */
