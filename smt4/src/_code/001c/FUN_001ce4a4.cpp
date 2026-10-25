/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ce4a4` (_code @ 0x1ce4a4, 0x5e8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

int FUN_0026e70c(void);
int FUN_002a4e18(int, unsigned int);
int asdTMTexTableLoadEntryAsync(void);
int FUN_002a5ee4(int, unsigned int, unsigned int, int);
int FUN_002a60cc(int, unsigned int, unsigned int);
int asdTMTexTableReleaseNode(unsigned int);
int uiSpriteReplaceTextureEntry(int, int, unsigned int);

typedef int romwright_code(...);
extern int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: FUN_0026e70c. */
/* Supplied declaration required: FUN_002a4e18. */
/* Supplied declaration required: asdTMTexTableLoadEntryAsync. */
/* Supplied declaration required: FUN_002a5ee4. */
/* Supplied declaration required: FUN_002a60cc. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
extern int aocRunByName(int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: uiSpriteReplaceTextureEntry. */
extern int jobGetWork(void);
extern int FUN_002c1d5c(void);


unsigned int FUN_001ce4a4(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  
  temp_v0 = jobGetWork();
  temp_v1 = 0;
  if ((*(char *)(temp_v0 + 0x7c) != '\0') && (temp_v1 = FUN_002c1d5c(), temp_v1 == 0)) {
    temp_v1 = aocRunByName(g_aocSystem,*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x14),1)
    ;
    if (temp_v1 != 0) {
      temp_v1 = g_aocSystem;
      FUN_002a5ee4(g_aocSystem,*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x14),0x10000)
      ;
      *(int *)(temp_v0 + 0xc) = temp_v1;
    }
    else {
      temp_v1 = 0;
      if (*(int *)(temp_v0 + 0x14) != -1) {
        temp_v1 = *(int *)(temp_v0 + 0x10);
        asdTMTexTableLoadEntryAsync();
        *(int *)(temp_v0 + 0xc) = temp_v1;
      }
    }
    *(unsigned char *)(temp_v0 + 0x7c) = 0;
  }
  temp_v2 = *(int *)(temp_v0 + 0x18);
  if (temp_v2 != -1) {
    temp_v1 = *(int *)(temp_v0 + 0xc);
  }
  if (temp_v2 != -1 && temp_v1 != 0) {
    uiSpriteReplaceTextureEntry(temp_v0,temp_v2,0xffffffff);
    *(unsigned int *)(temp_v0 + 0x18) = 0xffffffff;
  }
  temp_v7 = 0.0f;
  temp_v5 = 1.0f;
  if (*(int *)(temp_v0 + 0x78) != 2) {
    if (*(int *)(temp_v0 + 0x78) == 3) {
      *(float *)(temp_v0 + 0x6c) = *(float *)(temp_v0 + 0x6c) + 1.0f;
      temp_v4 = *(unsigned int *)(temp_v0 + 0x4c);
      (**(romwright_code **)(temp_v0 + 100))();
      *(unsigned int *)(temp_v0 + 0x34) = temp_v4;
      temp_v4 = *(unsigned int *)(temp_v0 + 0x50);
      (**(romwright_code **)(temp_v0 + 100))();
      *(unsigned int *)(temp_v0 + 0x38) = temp_v4;
      temp_v4 = *(unsigned int *)(temp_v0 + 0x54);
      (**(romwright_code **)(temp_v0 + 100))();
      temp_v8 = 0.33333334f;
      *(unsigned int *)(temp_v0 + 0x3c) = temp_v4;
      if (*(char *)(temp_v0 + 0x30) != '\0') {
        if (((*(int *)(temp_v0 + 0x28) < 0x3f800000) &&
            (temp_v1 = *(int *)(temp_v0 + 0x24), (temp_v1 != 3 && temp_v1 != 4) && temp_v1 != 7)) &&
           (*(float *)(temp_v0 + 0x68) - *(float *)(temp_v0 + 0x68) * 0.33333334f <=
            *(float *)(temp_v0 + 0x6c))) {
          *(float *)(temp_v0 + 0x70) = *(float *)(temp_v0 + 0x70) + temp_v5;
          temp_v6 = temp_v7;
          FUN_0026e70c();
          *(float *)(temp_v0 + 0x28) = temp_v7;
          temp_v4 = *(unsigned int *)(temp_v0 + 0x5c);
          temp_v7 = temp_v6;
          FUN_0026e70c();
          *(unsigned int *)(temp_v0 + 0x58) = temp_v4;
          if (*(float *)(temp_v0 + 0x68) * temp_v8 <= *(float *)(temp_v0 + 0x70)) {
            *(float *)(temp_v0 + 0x28) = temp_v5;
            *(float *)(temp_v0 + 0x70) = temp_v7;
            *(unsigned int *)(temp_v0 + 0x58) = *(unsigned int *)(temp_v0 + 0x60);
            *(unsigned int *)(temp_v0 + 0x5c) = *(unsigned int *)(temp_v0 + 0x60);
          }
        }
      }
      else if ((temp_v7 < *(float *)(temp_v0 + 0x28)) && (*(int *)(temp_v0 + 0x24) != 1)) {
        *(float *)(temp_v0 + 0x70) = *(float *)(temp_v0 + 0x70) + temp_v5;
        temp_v6 = temp_v5;
        FUN_0026e70c();
        *(float *)(temp_v0 + 0x28) = temp_v5;
        temp_v4 = *(unsigned int *)(temp_v0 + 0x5c);
        temp_v5 = temp_v6;
        FUN_0026e70c();
        *(unsigned int *)(temp_v0 + 0x58) = temp_v4;
        if (*(float *)(temp_v0 + 0x68) * temp_v8 <= *(float *)(temp_v0 + 0x70)) {
          *(float *)(temp_v0 + 0x28) = temp_v7;
          *(float *)(temp_v0 + 0x70) = temp_v7;
          *(unsigned int *)(temp_v0 + 0x58) = *(unsigned int *)(temp_v0 + 0x60);
          *(unsigned int *)(temp_v0 + 0x5c) = *(unsigned int *)(temp_v0 + 0x60);
        }
      }
      if (*(float *)(temp_v0 + 0x68) <= *(float *)(temp_v0 + 0x6c)) {
        *(unsigned int *)(temp_v0 + 0x34) = *(unsigned int *)(temp_v0 + 0x40);
        *(unsigned int *)(temp_v0 + 0x38) = *(unsigned int *)(temp_v0 + 0x44);
        *(unsigned int *)(temp_v0 + 0x3c) = *(unsigned int *)(temp_v0 + 0x48);
        *(float *)(temp_v0 + 0x6c) = temp_v7;
        if (*(char *)(temp_v0 + 0x30) == '\0') {
          *(unsigned int *)(temp_v0 + 0x78) = 0;
          *(unsigned int *)(temp_v0 + 0x24) = 0;
          *(unsigned char *)(temp_v0 + 0x8d) = 0;
          return 0;
        }
        *(unsigned int *)(temp_v0 + 0x78) = 2;
      }
    }
  }
  else {
    FUN_002a4e18(temp_v0 + 0x34,*(unsigned int *)(temp_v0 + 8));
  }
  if (*(int *)(temp_v0 + 0x24) != 0) {
    switch(*(int *)(temp_v0 + 0x24)) {
    case 1:
      *(float *)(temp_v0 + 0x70) = *(float *)(temp_v0 + 0x70) + temp_v5;
      temp_v8 = temp_v5;
      FUN_0026e70c();
      *(float *)(temp_v0 + 0x28) = temp_v5;
      temp_v5 = temp_v8;
      break;
    case 2:
      temp_v8 = *(float *)(temp_v0 + 0x70) + temp_v5;
      *(float *)(temp_v0 + 0x70) = temp_v8;
      if ((int)temp_v8 >= 0x41000001) {
        temp_v8 = temp_v7;
        FUN_0026e70c();
        *(float *)(temp_v0 + 0x28) = temp_v7;
        temp_v7 = temp_v8;
      }
      break;
    case 3:
      temp_v1 = asdTMTexTableNodeIsLoaded(*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x14));
      if (temp_v1 != 0) {
        *(float *)(temp_v0 + 0x70) = *(float *)(temp_v0 + 0x70) + temp_v5;
        temp_v8 = temp_v5;
        temp_v1 = FUN_0026e70c();
        *(float *)(temp_v0 + 0x88) = temp_v5;
        *(float *)(temp_v0 + 0x28) = temp_v8;
        temp_v3 = temp_v5 <= temp_v7;
        temp_v5 = temp_v8;
        if (temp_v3) {
          *(float *)(temp_v0 + 0x88) = temp_v7;
          *(unsigned char *)(temp_v0 + 0x8d) = 0;
          temp_v3 = *(int *)(temp_v0 + 0x84) != -1;
          if (temp_v3) {
            temp_v1 = *(int *)(temp_v0 + 0x80);
          }
          if (temp_v3 && temp_v1 != 0) {
            asdTMTexTableReleaseNode(*(unsigned int *)(temp_v0 + 0x10));
            FUN_002a60cc(g_aocSystem,*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x84));
            *(unsigned int *)(temp_v0 + 0x80) = 0;
            *(unsigned int *)(temp_v0 + 0x84) = 0xffffffff;
            temp_v5 = temp_v8;
          }
        }
      }
      break;
    case 4:
      *(float *)(temp_v0 + 0x70) = *(float *)(temp_v0 + 0x70) + temp_v5;
      temp_v8 = temp_v5;
      FUN_0026e70c();
      *(float *)(temp_v0 + 0x88) = temp_v5;
      temp_v5 = temp_v8;
      if (*(int *)(temp_v0 + 0x70) >= 0x41000000) {
        temp_v6 = temp_v7;
        FUN_0026e70c();
        *(float *)(temp_v0 + 0x28) = temp_v7;
        temp_v5 = temp_v8;
        temp_v7 = temp_v6;
      }
      break;
    case 5:
      *(float *)(temp_v0 + 0x70) = *(float *)(temp_v0 + 0x70) + temp_v5;
      temp_v4 = *(unsigned int *)(temp_v0 + 0x4c);
      FUN_0026e70c();
      *(unsigned int *)(temp_v0 + 0x34) = temp_v4;
      temp_v4 = *(unsigned int *)(temp_v0 + 0x50);
      FUN_0026e70c();
      *(unsigned int *)(temp_v0 + 0x38) = temp_v4;
      temp_v4 = *(unsigned int *)(temp_v0 + 0x54);
      FUN_0026e70c();
      *(unsigned int *)(temp_v0 + 0x3c) = temp_v4;
      break;
    case 6:
      *(float *)(temp_v0 + 0x70) = *(float *)(temp_v0 + 0x70) + temp_v5;
      temp_v8 = temp_v7;
      FUN_0026e70c();
      *(float *)(temp_v0 + 0x28) = temp_v7;
      temp_v4 = *(unsigned int *)(temp_v0 + 0x5c);
      FUN_0026e70c();
      *(unsigned int *)(temp_v0 + 0x58) = temp_v4;
      temp_v7 = temp_v8;
      break;
    case 7:
      *(float *)(temp_v0 + 0x70) = *(float *)(temp_v0 + 0x70) + temp_v5;
      temp_v8 = temp_v7;
      FUN_0026e70c();
      *(float *)(temp_v0 + 0x28) = temp_v7;
      temp_v7 = temp_v8;
      break;
    case 8:
      *(float *)(temp_v0 + 0x70) = *(float *)(temp_v0 + 0x70) + temp_v5;
      temp_v8 = temp_v7;
      FUN_0026e70c();
      *(float *)(temp_v0 + 0x28) = temp_v7;
      if ((int)temp_v7 >= 0x3f800001) {
        temp_v7 = temp_v5;
      }
      *(float *)(temp_v0 + 0x28) = temp_v7;
      temp_v7 = temp_v8;
      break;
    case 9:
      *(float *)(temp_v0 + 0x70) = *(float *)(temp_v0 + 0x70) + temp_v5;
      temp_v8 = temp_v7;
      FUN_0026e70c();
      *(float *)(temp_v0 + 0x2c) = temp_v7;
      if (temp_v7 <= temp_v8) {
        temp_v7 = temp_v8;
      }
      *(float *)(temp_v0 + 0x2c) = temp_v7;
      temp_v7 = temp_v8;
    }
    if (*(float *)(temp_v0 + 0x70) < *(float *)(temp_v0 + 0x74)) {
      return 0;
    }
    *(float *)(temp_v0 + 0x70) = temp_v7;
    *(float *)(temp_v0 + 0x74) = temp_v7;
    if (*(char *)(temp_v0 + 0x30) == '\0') {
      *(unsigned int *)(temp_v0 + 0x78) = 0;
    }
    else {
      *(float *)(temp_v0 + 0x28) = temp_v5;
      *(float *)(temp_v0 + 0x88) = temp_v7;
      *(float *)(temp_v0 + 0x58) = temp_v7;
      *(float *)(temp_v0 + 0x5c) = temp_v7;
      *(float *)(temp_v0 + 0x60) = temp_v7;
      if (*(int *)(temp_v0 + 0x24) != 8) {
        *(float *)(temp_v0 + 0x2c) = temp_v5;
      }
    }
    *(unsigned int *)(temp_v0 + 0x24) = 0;
    return 0;
  }
  *(unsigned char *)(temp_v0 + 0x8d) = 0;
  return 0;
}

} /* extern "C" */
