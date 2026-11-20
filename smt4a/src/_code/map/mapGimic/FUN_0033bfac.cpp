/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033bfac` (_code @ 0x33bfac, 0xa14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include <stdio.h>
#include "gamedata/MapSaveBlockA.h"
#include "romwright_types.h"
#include "map/MapGimicGlobal.h"

extern "C" {

int asdMemoryAllocTraced(...);
int gameFlagIsSet(...);
int modelLoadFileAsyncByName(...);
int FUN_003563fc(void);
int moriModelUnitStartMaterialAnimation(...);
int animationSelectClip(unsigned int, int, int);
int modelPlayClip(unsigned int, int, int);
int moriModelContentSetRequestFirst(...);
int moriModelContentSetRequestSecond(...);
int moriModelContentCopyBody(...);
int moriModelContentLoadBody(int, int);
int handleRegistryRegisterObject(unsigned int, unsigned int);
int VectorSignedToFloat(int, int);

extern unsigned int g_handleRegistry; /* 0x56fcc0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: asdMemoryAllocTraced. */
/* Supplied declaration required: gameFlagIsSet. */
/* Supplied declaration required: modelLoadFileAsyncByName. */
/* Supplied declaration required: FUN_003563fc. */
extern int FUN_003a3238(void);
/* Supplied declaration required: moriModelUnitStartMaterialAnimation. */
/* Supplied declaration required: animationSelectClip. */
/* Supplied declaration required: modelPlayClip. */
/* Supplied declaration required: moriModelContentSetRequestFirst. */
/* Supplied declaration required: moriModelContentSetRequestSecond. */
/* Supplied declaration required: moriModelContentCopyBody. */
/* Supplied declaration required: moriModelContentLoadBody. */
extern int moriModelContentIsLoaded(unsigned int);
extern unsigned int modelListInit(void);
/* Supplied declaration required: handleRegistryRegisterObject. */


unsigned int FUN_0033bfac(void)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 14 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  char *pcVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  char *pcVar8;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  unsigned int temp_v8;
  unsigned char temp_v9 [140];
  
  temp_v1 = (int)gameFlagsGetBlock();
  temp_v0 = *(short *)(((unsigned int)g_mapGimic) + 10);
  if (temp_v0 == 0) {
    pcVar8 = (char *)(int)*(short *)(((unsigned int)g_mapGimic) + 0xc);
    temp_v1 = FUN_003a3238();
    if ((int)pcVar8 < temp_v1) {
      do {
        pcVar3 = pcVar8;
        FUN_003563fc();
        temp_v5 = ((unsigned int)g_mapGimic);
        if ((((-1 < *pcVar3) && (*(short *)(pcVar3 + 2) != 0x4e)) &&
            ((int)*pcVar3 == (int)*(short *)(((unsigned int)g_mapGimic) + 6))) &&
           ((int)pcVar3[1] == (int)*(short *)(((unsigned int)g_mapGimic) + 8))) {
          if (*(short *)(pcVar3 + 2) == 0x4d) {
            temp_v1 = 0;
            *(short *)(((unsigned int)g_mapGimic) + 0xc) = (short)(int)pcVar8;
            goto LAB_0033c0d0;
          }
          temp_v0 = *(short *)(pcVar3 + 0xe);
          if (((*(short *)(pcVar3 + 0xc) == 0) || (temp_v1 = gameFlagIsSet(), temp_v1 != 0)) &&
             ((temp_v0 == 0 || (temp_v1 = gameFlagIsSet((int)temp_v0), temp_v1 == 0)))) {
            temp_v5 = ((unsigned int)g_mapGimic);
            temp_v1 = 0;
            *(short *)(((unsigned int)g_mapGimic) + 0xc) = (short)(int)pcVar8;
            goto LAB_0033c128;
          }
        }
        pcVar8 = pcVar8 + 1;
        temp_v1 = FUN_003a3238();
      } while ((int)pcVar8 < temp_v1);
    }
    *(unsigned short *)(((unsigned int)g_mapGimic) + 10) = 99;
    return 1;
  }
  if (temp_v0 != 1) {
    if (temp_v0 != 2) {
      if (temp_v0 != 99) {
        return 0;
      }
      return 1;
    }
    temp_v2 = (int)*(short *)(((unsigned int)g_mapGimic) + 0xc);
    FUN_003563fc();
    temp_v3 = ((unsigned int)g_mapGimic) + *(short *)(((unsigned int)g_mapGimic) + 0xe) * 0x3c;
    if ((*(char *)(temp_v3 + 0xb4) == '\0') &&
       (temp_v4 = moriModelContentIsLoaded(*(unsigned int *)(temp_v3 + 0xa8)), temp_v4 == 0)) {
      return 0;
    }
    temp_v5 = ((unsigned int)g_mapGimic);
    if (*(short *)(temp_v3 + 0xa6) == 0xe) {
      *(unsigned char *)(((unsigned int)g_mapGimic) + 0x14) = 1;
      *(int *)(temp_v5 + 0x18) = (int)*(short *)(temp_v5 + 0xe);
    }
    if (*(int *)(*(int *)(temp_v3 + 0xa8) + 4) == 0) {
      moriModelContentLoadBody(*(int *)(temp_v3 + 0xa8),0);
    }
    temp_v8 = 0;
    temp_v6 = *(unsigned int *)(*(int *)(temp_v3 + 0xa8) + 4);
    modelPlayClip(temp_v6,0,2);
    handleRegistryRegisterObject(g_handleRegistry,temp_v6);
    if (*(short *)(temp_v3 + 0xa6) == 0x26) {
      *(unsigned char *)(((unsigned int)g_mapGimic) + 0x68) = 0;
      temp_v4 = *(int *)(*(int *)(temp_v3 + 0xa8) + 4);
      *(unsigned int *)(temp_v4 + 4) = *(unsigned int *)(temp_v4 + 4) | 3;
    }
    *(unsigned char *)(temp_v3 + 0x90) = 1;
    *(unsigned char *)(temp_v3 + 0x91) = 1;
    temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v2 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v3 + 0x94) = temp_v6;
    temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v2 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v3 + 0x98) = temp_v6;
    temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v2 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v3 + 0x9c) = temp_v6;
    temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v2 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v3 + 0xb8) = temp_v6;
    temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v2 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v3 + 0xbc) = temp_v6;
    temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v2 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v3 + 0xc0) = temp_v6;
    temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v2 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v3 + 0xc4) = temp_v6;
    temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v2 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v3 + 0xa0) = temp_v6;
    *(unsigned short *)(temp_v3 + 0xa4) = 0;
    temp_v5 = ((unsigned int)g_mapGimic);
    *(int *)(temp_v3 + 0xac) = *(short *)(((unsigned int)g_mapGimic) + 0xc) + 0x2000;
    *(unsigned short *)(temp_v3 + 0xb0) = *(unsigned short *)(temp_v2 + 0xc);
    *(unsigned short *)(temp_v3 + 0xb2) = *(unsigned short *)(temp_v2 + 0xe);
    *(int *)(temp_v5 + 0x10) = *(int *)(temp_v5 + 0x10) + 1;
    temp_v7 = *(short *)(temp_v3 + 0xa6) == 0x2a;
    if (temp_v7) {
      temp_v5 = (unsigned int)*(unsigned short *)(temp_v5 + 6);
    }
    if (temp_v7 && temp_v5 == 1) {
      *(unsigned short *)(temp_v3 + 0xa4) = 1;
      animationSelectClip(*(unsigned int *)(*(int *)(temp_v3 + 0xa8) + 4),1,2);
    }
    temp_v0 = *(short *)(temp_v3 + 0xa6);
    if (temp_v0 == 0x27) {
      *(unsigned int *)(temp_v3 + 0x94) = temp_v8;
      *(unsigned int *)(temp_v3 + 0x98) = temp_v8;
      *(unsigned int *)(temp_v3 + 0x9c) = temp_v8;
      *(unsigned int *)(temp_v3 + 0xa0) = temp_v8;
      if (*(char *)(temp_v1 + 0x1525) != '\0') {
        *(unsigned short *)(temp_v3 + 0xa4) = 2;
      }
    }
    if (temp_v0 == 0x28) {
      *(unsigned int *)(temp_v3 + 0x94) = temp_v8;
      *(unsigned int *)(temp_v3 + 0x98) = temp_v8;
      *(unsigned int *)(temp_v3 + 0x9c) = temp_v8;
      *(unsigned int *)(temp_v3 + 0xa0) = temp_v8;
      if (*(char *)(temp_v1 + 0x1524) != '\0') {
        *(unsigned short *)(temp_v3 + 0xa4) = 2;
      }
    }
    if (temp_v0 == 0x29) {
      *(unsigned int *)(temp_v3 + 0x94) = temp_v8;
      *(unsigned int *)(temp_v3 + 0x98) = temp_v8;
      *(unsigned int *)(temp_v3 + 0x9c) = temp_v8;
      *(unsigned int *)(temp_v3 + 0xa0) = temp_v8;
      if (*(char *)(temp_v1 + 0x1526) != '\0') {
        *(unsigned short *)(temp_v3 + 0xa4) = 2;
      }
    }
    if ((temp_v0 == 0x55) && (temp_v1 = gameFlagIsSet(0x1120), temp_v1 != 0)) {
      *(unsigned short *)(temp_v3 + 0xa4) = 2;
    }
    if ((*(short *)(temp_v3 + 0xa6) == 0x56) && (temp_v1 = gameFlagIsSet(0x1122), temp_v1 != 0)) {
      *(unsigned short *)(temp_v3 + 0xa4) = 2;
    }
    if ((*(short *)(temp_v3 + 0xa6) == 0x57) && (temp_v1 = gameFlagIsSet(0x1121), temp_v1 != 0)) {
      *(unsigned short *)(temp_v3 + 0xa4) = 2;
    }
    if (*(short *)(temp_v3 + 0xa6) == 0x50) {
      if (*(int *)(temp_v3 + 200) == 1) {
        temp_v1 = gameFlagIsSet(0x197);
        if ((temp_v1 != 0) || (temp_v1 = gameFlagIsSet(0x1b2), temp_v1 != 0)) {
          *(unsigned short *)(temp_v3 + 0xa4) = 2;
          moriModelUnitStartMaterialAnimation(*(unsigned int *)(*(int *)(temp_v3 + 0xa8) + 4),2);
        }
        if (*(short *)(temp_v3 + 0xa6) != 0x50) {
          temp_v5 = ((unsigned int)g_mapGimic);
          *(short *)(((unsigned int)g_mapGimic) + 0xc) = *(short *)(((unsigned int)g_mapGimic) + 0xc) + 1;
          *(unsigned short *)(temp_v5 + 10) = 0;
          return 0;
        }
      }
      if (*(int *)(temp_v3 + 200) == 2) {
        temp_v1 = gameFlagIsSet(0x198);
        if ((temp_v1 != 0) || (temp_v1 = gameFlagIsSet(0x1b3), temp_v1 != 0)) {
          *(unsigned short *)(temp_v3 + 0xa4) = 2;
          moriModelUnitStartMaterialAnimation(*(unsigned int *)(*(int *)(temp_v3 + 0xa8) + 4),2);
        }
        if (*(short *)(temp_v3 + 0xa6) != 0x50) {
          temp_v5 = ((unsigned int)g_mapGimic);
          *(short *)(((unsigned int)g_mapGimic) + 0xc) = *(short *)(((unsigned int)g_mapGimic) + 0xc) + 1;
          *(unsigned short *)(temp_v5 + 10) = 0;
          return 0;
        }
      }
      if ((*(int *)(temp_v3 + 200) == 3) &&
         ((temp_v1 = gameFlagIsSet(0x199), temp_v1 != 0 || (temp_v1 = gameFlagIsSet(0x1b4), temp_v1 != 0)))) {
        *(unsigned short *)(temp_v3 + 0xa4) = 2;
        moriModelUnitStartMaterialAnimation(*(unsigned int *)(*(int *)(temp_v3 + 0xa8) + 4),2);
      }
    }
    temp_v5 = ((unsigned int)g_mapGimic);
    *(short *)(((unsigned int)g_mapGimic) + 0xc) = *(short *)(((unsigned int)g_mapGimic) + 0xc) + 1;
    *(unsigned short *)(temp_v5 + 10) = 0;
    return 0;
  }
  temp_v1 = (int)*(short *)(((unsigned int)g_mapGimic) + 0xc);
  FUN_003563fc();
  temp_v2 = ((unsigned int)g_mapGimic) + *(short *)(((unsigned int)g_mapGimic) + 0xe) * 0x3c;
  *(unsigned short *)(temp_v2 + 0xa6) = *(unsigned short *)(temp_v1 + 2);
  sprintf((char *)temp_v9,"map/unit/u%03d.bam");
  temp_v1 = (int)*(short *)(temp_v2 + 0xa6);
  if (temp_v1 != 0x2e) {
    if (temp_v1 != 0x36) {
      if (temp_v1 != 0x60) {
        if (temp_v1 != 0x2a) {
          if (temp_v1 != 0x50) {
            if (((temp_v1 == 0x34 || temp_v1 == 0x35) || (temp_v1 == 0x37 || temp_v1 == 0x38)) ||
               ((temp_v1 == 0x39 || temp_v1 == 0x3a) || temp_v1 == 0x3b)) {
              if (*(char *)(((unsigned int)g_mapGimic) + temp_v1) != '\0') {
                temp_v1 = 0x20;
                asdMemoryAllocTraced(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapGimic.cpp",0x214);
                temp_v6 = 0;
                if (temp_v1 != 0) {
                  temp_v6 = modelListInit();
                }
                *(unsigned int *)(temp_v2 + 0xa8) = temp_v6;
                moriModelContentCopyBody();
                *(unsigned char *)(temp_v2 + 0xb4) = 1;
                temp_v5 = ((unsigned int)g_mapGimic);
                *(short *)(temp_v5 + 10) = *(short *)(temp_v5 + 10) + 1;
                return 0;
              }
              temp_v1 = 0x20;
              asdMemoryAllocTraced(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapGimic.cpp",0x20d);
              temp_v6 = 0;
              if (temp_v1 != 0) {
                temp_v6 = modelListInit();
              }
              *(unsigned int *)(temp_v2 + 0xa8) = temp_v6;
              modelLoadFileAsyncByName();
              temp_v5 = ((unsigned int)g_mapGimic);
              *(int *)((((unsigned int)g_mapGimic) + *(short *)(temp_v2 + 0xa6) * 4) - 0x90) =
                   (int)*(short *)(((unsigned int)g_mapGimic) + 0xe);
              *(unsigned char *)(temp_v5 + (int)*(short *)(temp_v2 + 0xa6)) = 1;
              *(unsigned char *)(temp_v2 + 0xb4) = 0;
              temp_v5 = ((unsigned int)g_mapGimic);
              *(short *)(temp_v5 + 10) = *(short *)(temp_v5 + 10) + 1;
              return 0;
            }
            temp_v1 = 0x20;
            asdMemoryAllocTraced(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapGimic.cpp",0x21d);
          }
          else {
            temp_v1 = *(int *)(((unsigned int)g_mapGimic) + 0x80) + 1;
            *(int *)(((unsigned int)g_mapGimic) + 0x80) = temp_v1;
            *(int *)(temp_v2 + 200) = temp_v1;
            temp_v1 = 0x20;
            asdMemoryAllocTraced(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapGimic.cpp",0x1fc);
          }
          temp_v6 = 0;
          if (temp_v1 != 0) {
            temp_v6 = modelListInit();
          }
          *(unsigned int *)(temp_v2 + 0xa8) = temp_v6;
          modelLoadFileAsyncByName();
        }
        else {
          temp_v1 = 0x20;
          asdMemoryAllocTraced(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapGimic.cpp",0x1f2);
          temp_v6 = 0;
          if (temp_v1 != 0) {
            temp_v6 = modelListInit();
          }
          *(unsigned int *)(temp_v2 + 0xa8) = temp_v6;
          modelLoadFileAsyncByName();
          moriModelContentSetRequestFirst(*(unsigned int *)(temp_v2 + 0xa8),0x10000);
          moriModelContentSetRequestSecond(*(unsigned int *)(temp_v2 + 0xa8),0x20000);
        }
      }
      else {
        if (*(char *)(((unsigned int)g_mapGimic) + 0x2c) != '\0') {
          temp_v1 = 0x20;
          asdMemoryAllocTraced(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapGimic.cpp",0x1e5);
          temp_v6 = 0;
          if (temp_v1 != 0) {
            temp_v6 = modelListInit();
          }
          *(unsigned int *)(temp_v2 + 0xa8) = temp_v6;
          moriModelContentSetRequestFirst();
          moriModelContentSetRequestSecond(*(unsigned int *)(temp_v2 + 0xa8),0x30000);
          moriModelContentCopyBody(*(unsigned int *)(temp_v2 + 0xa8),
                       *(unsigned int *)(((unsigned int)g_mapGimic) + *(int *)(((unsigned int)g_mapGimic) + 0x30) * 0x3c + 0xa8),0
                      );
          *(unsigned char *)(temp_v2 + 0xb4) = 1;
          temp_v5 = ((unsigned int)g_mapGimic);
          *(short *)(temp_v5 + 10) = *(short *)(temp_v5 + 10) + 1;
          return 0;
        }
        temp_v1 = 0x20;
        asdMemoryAllocTraced(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapGimic.cpp",0x1dc);
        temp_v6 = 0;
        if (temp_v1 != 0) {
          temp_v6 = modelListInit();
        }
        *(unsigned int *)(temp_v2 + 0xa8) = temp_v6;
        moriModelContentSetRequestFirst();
        moriModelContentSetRequestSecond(*(unsigned int *)(temp_v2 + 0xa8),0x30000);
        modelLoadFileAsyncByName(*(unsigned int *)(temp_v2 + 0xa8),temp_v9);
        temp_v5 = ((unsigned int)g_mapGimic);
        *(int *)(((unsigned int)g_mapGimic) + 0x30) = (int)*(short *)(((unsigned int)g_mapGimic) + 0xe);
        *(unsigned char *)(temp_v5 + 0x2c) = 1;
      }
    }
    else {
      if (*(char *)(((unsigned int)g_mapGimic) + 0x24) != '\0') {
        temp_v1 = 0x20;
        asdMemoryAllocTraced(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapGimic.cpp",0x1cc);
        temp_v6 = 0;
        if (temp_v1 != 0) {
          temp_v6 = modelListInit();
        }
        *(unsigned int *)(temp_v2 + 0xa8) = temp_v6;
        moriModelContentSetRequestFirst();
        moriModelContentSetRequestSecond(*(unsigned int *)(temp_v2 + 0xa8),0x30000);
        moriModelContentCopyBody(*(unsigned int *)(temp_v2 + 0xa8),
                     *(unsigned int *)(((unsigned int)g_mapGimic) + *(int *)(((unsigned int)g_mapGimic) + 0x28) * 0x3c + 0xa8),0);
        *(unsigned char *)(temp_v2 + 0xb4) = 1;
        temp_v5 = ((unsigned int)g_mapGimic);
        *(short *)(temp_v5 + 10) = *(short *)(temp_v5 + 10) + 1;
        return 0;
      }
      temp_v1 = 0x20;
      asdMemoryAllocTraced(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapGimic.cpp",0x1c3);
      temp_v6 = 0;
      if (temp_v1 != 0) {
        temp_v6 = modelListInit();
      }
      *(unsigned int *)(temp_v2 + 0xa8) = temp_v6;
      moriModelContentSetRequestFirst();
      moriModelContentSetRequestSecond(*(unsigned int *)(temp_v2 + 0xa8),0x30000);
      modelLoadFileAsyncByName(*(unsigned int *)(temp_v2 + 0xa8),temp_v9);
      temp_v5 = ((unsigned int)g_mapGimic);
      *(int *)(((unsigned int)g_mapGimic) + 0x28) = (int)*(short *)(((unsigned int)g_mapGimic) + 0xe);
      *(unsigned char *)(temp_v5 + 0x24) = 1;
    }
  }
  else {
    if (*(char *)(((unsigned int)g_mapGimic) + 0x1c) != '\0') {
      temp_v1 = 0x20;
      asdMemoryAllocTraced(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapGimic.cpp",0x1b3);
      temp_v6 = 0;
      if (temp_v1 != 0) {
        temp_v6 = modelListInit();
      }
      *(unsigned int *)(temp_v2 + 0xa8) = temp_v6;
      moriModelContentSetRequestFirst();
      moriModelContentSetRequestSecond(*(unsigned int *)(temp_v2 + 0xa8),0x30000);
      moriModelContentCopyBody(*(unsigned int *)(temp_v2 + 0xa8),
                   *(unsigned int *)(((unsigned int)g_mapGimic) + *(int *)(((unsigned int)g_mapGimic) + 0x20) * 0x3c + 0xa8),0);
      *(unsigned char *)(temp_v2 + 0xb4) = 1;
      temp_v5 = ((unsigned int)g_mapGimic);
      *(short *)(temp_v5 + 10) = *(short *)(temp_v5 + 10) + 1;
      return 0;
    }
    temp_v1 = 0x20;
    asdMemoryAllocTraced(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapGimic.cpp",0x1aa);
    temp_v6 = 0;
    if (temp_v1 != 0) {
      temp_v6 = modelListInit();
    }
    *(unsigned int *)(temp_v2 + 0xa8) = temp_v6;
    moriModelContentSetRequestFirst();
    moriModelContentSetRequestSecond(*(unsigned int *)(temp_v2 + 0xa8),0x30000);
    modelLoadFileAsyncByName(*(unsigned int *)(temp_v2 + 0xa8),temp_v9);
    temp_v5 = ((unsigned int)g_mapGimic);
    *(int *)(((unsigned int)g_mapGimic) + 0x20) = (int)*(short *)(((unsigned int)g_mapGimic) + 0xe);
    *(unsigned char *)(temp_v5 + 0x1c) = 1;
  }
  *(unsigned char *)(temp_v2 + 0xb4) = 0;
  temp_v5 = ((unsigned int)g_mapGimic);
  *(short *)(temp_v5 + 10) = *(short *)(temp_v5 + 10) + 1;
  return 0;
  while (temp_v1 = temp_v1 + 1, temp_v2 = -1, temp_v1 < 0x23) {
LAB_0033c0d0:
    temp_v2 = temp_v1;
    if (*(char *)(temp_v5 + temp_v1 * 0x3c + 0x90) == '\0') break;
  }
  *(short *)(temp_v5 + 0xe) = (short)temp_v2;
  if ((short)temp_v2 == -1) {
    *(unsigned short *)(temp_v5 + 10) = 99;
    return 1;
  }
  *(short *)(temp_v5 + 10) = *(short *)(temp_v5 + 10) + 1;
  return 0;
  while (temp_v1 = temp_v1 + 1, temp_v2 = -1, temp_v1 < 0x23) {
LAB_0033c128:
    temp_v2 = temp_v1;
    if (*(char *)(temp_v5 + temp_v1 * 0x3c + 0x90) == '\0') break;
  }
  *(short *)(temp_v5 + 0xe) = (short)temp_v2;
  if ((short)temp_v2 == -1) {
    *(unsigned short *)(temp_v5 + 10) = 99;
    return 1;
  }
  *(short *)(temp_v5 + 10) = *(short *)(temp_v5 + 10) + 1;
  return 0;
}

} /* extern "C" */
