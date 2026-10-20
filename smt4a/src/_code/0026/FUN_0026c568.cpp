/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026c568` (_code @ 0x26c568, 0x644 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableReleaseNode(unsigned int);
int FUN_0019c720(int, int, unsigned int);
int FUN_001a6568(int, unsigned int, unsigned int, int);
int FUN_001acf98(void);
int FUN_001ad1ac(int, unsigned int);
int FUN_001b2d54(int, unsigned int, unsigned int);
int FUN_001f3eec(void);

typedef int romwright_code(...);
extern int g_aocSystem; /* 0x570280 */

extern int FUN_00162ea4(void);
extern int jobGetWork(void);
extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned int);
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: FUN_0019c720. */
extern int FUN_001a6508(int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001a6568. */
/* Supplied declaration required: FUN_001acf98. */
/* Supplied declaration required: FUN_001ad1ac. */
/* Supplied declaration required: FUN_001b2d54. */
/* Supplied declaration required: FUN_001f3eec. */


unsigned int FUN_0026c568(void)

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
  if ((*(char *)(temp_v0 + 0x7c) != '\0') && (temp_v1 = FUN_00162ea4(), temp_v1 == 0)) {
    temp_v1 = FUN_001a6508(g_aocSystem,*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x14),1)
    ;
    if (temp_v1 != 0) {
      temp_v1 = g_aocSystem;
      FUN_001a6568(g_aocSystem,*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x14),0x10000)
      ;
      *(int *)(temp_v0 + 0xc) = temp_v1;
    }
    else {
      temp_v1 = 0;
      if (*(int *)(temp_v0 + 0x14) != -1) {
        temp_v1 = *(int *)(temp_v0 + 0x10);
        FUN_001acf98();
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
    FUN_0019c720(temp_v0,temp_v2,0xffffffff);
    *(unsigned int *)(temp_v0 + 0x18) = 0xffffffff;
  }
  temp_v6 = 0.0f;
  temp_v7 = 1.0f;
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
      *(unsigned int *)(temp_v0 + 0x3c) = temp_v4;
      temp_v4 = *(unsigned int *)(temp_v0 + 0xa0);
      (**(romwright_code **)(temp_v0 + 100))();
      *(unsigned int *)(temp_v0 + 0x90) = temp_v4;
      temp_v4 = *(unsigned int *)(temp_v0 + 0xa4);
      (**(romwright_code **)(temp_v0 + 100))();
      temp_v5 = *(float *)(temp_v0 + 0x68);
      *(unsigned int *)(temp_v0 + 0x94) = temp_v4;
      if (temp_v5 <= *(float *)(temp_v0 + 0x6c)) {
        *(unsigned int *)(temp_v0 + 0x90) = *(unsigned int *)(temp_v0 + 0x98);
        *(unsigned int *)(temp_v0 + 0x94) = *(unsigned int *)(temp_v0 + 0x9c);
        *(unsigned int *)(temp_v0 + 0xa0) = *(unsigned int *)(temp_v0 + 0x98);
        *(unsigned int *)(temp_v0 + 0xa4) = *(unsigned int *)(temp_v0 + 0x9c);
      }
      temp_v8 = 0.33333334f;
      if (*(char *)(temp_v0 + 0x30) != '\0') {
        if (((*(int *)(temp_v0 + 0x28) < 0x3f800000) &&
            (temp_v1 = *(int *)(temp_v0 + 0x24), (temp_v1 != 3 && temp_v1 != 4) && temp_v1 != 7)) &&
           (temp_v5 - temp_v5 * 0.33333334f <= *(float *)(temp_v0 + 0x6c))) {
          *(float *)(temp_v0 + 0x70) = *(float *)(temp_v0 + 0x70) + temp_v7;
          temp_v5 = temp_v6;
          FUN_001f3eec();
          *(float *)(temp_v0 + 0x28) = temp_v6;
          temp_v4 = *(unsigned int *)(temp_v0 + 0x5c);
          temp_v6 = temp_v5;
          FUN_001f3eec();
          *(unsigned int *)(temp_v0 + 0x58) = temp_v4;
          if (*(float *)(temp_v0 + 0x68) * temp_v8 <= *(float *)(temp_v0 + 0x70)) {
            *(float *)(temp_v0 + 0x28) = temp_v7;
            *(float *)(temp_v0 + 0x70) = temp_v6;
            *(unsigned int *)(temp_v0 + 0x58) = *(unsigned int *)(temp_v0 + 0x60);
            *(unsigned int *)(temp_v0 + 0x5c) = *(unsigned int *)(temp_v0 + 0x60);
          }
        }
      }
      else if ((temp_v6 < *(float *)(temp_v0 + 0x28)) && (*(int *)(temp_v0 + 0x24) != 1)) {
        *(float *)(temp_v0 + 0x70) = *(float *)(temp_v0 + 0x70) + temp_v7;
        temp_v5 = temp_v7;
        FUN_001f3eec();
        *(float *)(temp_v0 + 0x28) = temp_v7;
        temp_v4 = *(unsigned int *)(temp_v0 + 0x5c);
        temp_v7 = temp_v5;
        FUN_001f3eec();
        *(unsigned int *)(temp_v0 + 0x58) = temp_v4;
        if (*(float *)(temp_v0 + 0x68) * temp_v8 <= *(float *)(temp_v0 + 0x70)) {
          *(float *)(temp_v0 + 0x28) = temp_v6;
          *(float *)(temp_v0 + 0x70) = temp_v6;
          *(unsigned int *)(temp_v0 + 0x58) = *(unsigned int *)(temp_v0 + 0x60);
          *(unsigned int *)(temp_v0 + 0x5c) = *(unsigned int *)(temp_v0 + 0x60);
        }
      }
      if (*(float *)(temp_v0 + 0x68) <= *(float *)(temp_v0 + 0x6c)) {
        *(unsigned int *)(temp_v0 + 0x34) = *(unsigned int *)(temp_v0 + 0x40);
        *(unsigned int *)(temp_v0 + 0x38) = *(unsigned int *)(temp_v0 + 0x44);
        *(unsigned int *)(temp_v0 + 0x3c) = *(unsigned int *)(temp_v0 + 0x48);
        *(float *)(temp_v0 + 0x6c) = temp_v6;
        *(unsigned int *)(temp_v0 + 0x90) = *(unsigned int *)(temp_v0 + 0x98);
        *(unsigned int *)(temp_v0 + 0x94) = *(unsigned int *)(temp_v0 + 0x9c);
        *(unsigned int *)(temp_v0 + 0xa0) = *(unsigned int *)(temp_v0 + 0x98);
        *(unsigned int *)(temp_v0 + 0xa4) = *(unsigned int *)(temp_v0 + 0x9c);
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
    FUN_001ad1ac(temp_v0 + 0x34,*(unsigned int *)(temp_v0 + 8));
  }
  if (*(int *)(temp_v0 + 0x24) != 0) {
    switch(*(int *)(temp_v0 + 0x24)) {
    case 1:
      *(float *)(temp_v0 + 0x70) = *(float *)(temp_v0 + 0x70) + temp_v7;
      temp_v5 = temp_v7;
      FUN_001f3eec();
      *(float *)(temp_v0 + 0x28) = temp_v7;
      temp_v7 = temp_v5;
      break;
    case 2:
      temp_v5 = *(float *)(temp_v0 + 0x70) + temp_v7;
      *(float *)(temp_v0 + 0x70) = temp_v5;
      if ((int)temp_v5 >= 0x41000001) {
        temp_v5 = temp_v6;
        FUN_001f3eec();
        *(float *)(temp_v0 + 0x28) = temp_v6;
        temp_v6 = temp_v5;
      }
      break;
    case 3:
      temp_v1 = asdTMTexTableNodeIsLoaded(*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x14));
      if (temp_v1 != 0) {
        *(float *)(temp_v0 + 0x70) = *(float *)(temp_v0 + 0x70) + temp_v7;
        temp_v5 = temp_v7;
        temp_v1 = FUN_001f3eec();
        *(float *)(temp_v0 + 0x88) = temp_v7;
        *(float *)(temp_v0 + 0x28) = temp_v5;
        temp_v3 = temp_v7 <= temp_v6;
        temp_v7 = temp_v5;
        if (temp_v3) {
          *(float *)(temp_v0 + 0x88) = temp_v6;
          *(unsigned char *)(temp_v0 + 0x8d) = 0;
          temp_v3 = *(int *)(temp_v0 + 0x84) != -1;
          if (temp_v3) {
            temp_v1 = *(int *)(temp_v0 + 0x80);
          }
          if (temp_v3 && temp_v1 != 0) {
            asdTMTexTableReleaseNode(*(unsigned int *)(temp_v0 + 0x10));
            FUN_001b2d54(g_aocSystem,*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x84));
            *(unsigned int *)(temp_v0 + 0x80) = 0;
            *(unsigned int *)(temp_v0 + 0x84) = 0xffffffff;
            temp_v7 = temp_v5;
          }
        }
      }
      break;
    case 4:
      *(float *)(temp_v0 + 0x70) = *(float *)(temp_v0 + 0x70) + temp_v7;
      temp_v5 = temp_v7;
      FUN_001f3eec();
      *(float *)(temp_v0 + 0x88) = temp_v7;
      temp_v7 = temp_v5;
      if (*(int *)(temp_v0 + 0x70) >= 0x41000000) {
        temp_v7 = temp_v6;
        FUN_001f3eec();
        *(float *)(temp_v0 + 0x28) = temp_v6;
        temp_v6 = temp_v7;
        temp_v7 = temp_v5;
      }
      break;
    case 5:
      *(float *)(temp_v0 + 0x70) = *(float *)(temp_v0 + 0x70) + temp_v7;
      temp_v4 = *(unsigned int *)(temp_v0 + 0x4c);
      FUN_001f3eec();
      *(unsigned int *)(temp_v0 + 0x34) = temp_v4;
      temp_v4 = *(unsigned int *)(temp_v0 + 0x50);
      FUN_001f3eec();
      *(unsigned int *)(temp_v0 + 0x38) = temp_v4;
      temp_v4 = *(unsigned int *)(temp_v0 + 0x54);
      FUN_001f3eec();
      *(unsigned int *)(temp_v0 + 0x3c) = temp_v4;
      break;
    case 6:
      *(float *)(temp_v0 + 0x70) = *(float *)(temp_v0 + 0x70) + temp_v7;
      temp_v5 = temp_v6;
      FUN_001f3eec();
      *(float *)(temp_v0 + 0x28) = temp_v6;
      temp_v4 = *(unsigned int *)(temp_v0 + 0x5c);
      FUN_001f3eec();
      *(unsigned int *)(temp_v0 + 0x58) = temp_v4;
      temp_v6 = temp_v5;
      break;
    case 7:
      *(float *)(temp_v0 + 0x70) = *(float *)(temp_v0 + 0x70) + temp_v7;
      temp_v5 = temp_v6;
      FUN_001f3eec();
      *(float *)(temp_v0 + 0x28) = temp_v6;
      temp_v6 = temp_v5;
      break;
    case 8:
      *(float *)(temp_v0 + 0x70) = *(float *)(temp_v0 + 0x70) + temp_v7;
      temp_v5 = temp_v6;
      FUN_001f3eec();
      *(float *)(temp_v0 + 0x28) = temp_v6;
      if ((int)temp_v6 >= 0x3f800001) {
        temp_v6 = temp_v7;
      }
      *(float *)(temp_v0 + 0x28) = temp_v6;
      temp_v6 = temp_v5;
      break;
    case 9:
      *(float *)(temp_v0 + 0x70) = *(float *)(temp_v0 + 0x70) + temp_v7;
      temp_v5 = temp_v6;
      FUN_001f3eec();
      *(float *)(temp_v0 + 0x2c) = temp_v6;
      if (temp_v6 <= temp_v5) {
        temp_v6 = temp_v5;
      }
      *(float *)(temp_v0 + 0x2c) = temp_v6;
      temp_v6 = temp_v5;
    }
    if (*(float *)(temp_v0 + 0x70) < *(float *)(temp_v0 + 0x74)) {
      return 0;
    }
    *(float *)(temp_v0 + 0x70) = temp_v6;
    *(float *)(temp_v0 + 0x74) = temp_v6;
    if (*(char *)(temp_v0 + 0x30) == '\0') {
      *(unsigned int *)(temp_v0 + 0x78) = 0;
    }
    else {
      *(float *)(temp_v0 + 0x28) = temp_v7;
      *(float *)(temp_v0 + 0x88) = temp_v6;
      *(float *)(temp_v0 + 0x58) = temp_v6;
      *(float *)(temp_v0 + 0x5c) = temp_v6;
      *(float *)(temp_v0 + 0x60) = temp_v6;
      if (*(int *)(temp_v0 + 0x24) != 8) {
        *(float *)(temp_v0 + 0x2c) = temp_v7;
      }
    }
    *(unsigned int *)(temp_v0 + 0x24) = 0;
    return 0;
  }
  *(unsigned char *)(temp_v0 + 0x8d) = 0;
  return 0;
}

} /* extern "C" */
