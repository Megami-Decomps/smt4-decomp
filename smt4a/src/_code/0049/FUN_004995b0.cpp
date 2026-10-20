/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004995b0` (_code @ 0x4995b0, 0x5a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(...);
int FUN_00184528(...);
int FUN_00275f44(...);
int FUN_0040a55c(...);

int FUN_00148bb8(...);
int FUN_00163aa4(unsigned int *);
int FUN_0019de98(...);
int FUN_00224880(...);
int FUN_0031d62c(...);
int obj04Finish(void);
int FUN_00388758(...);
int FUN_004935b0(unsigned int *, unsigned int, unsigned int);
int FUN_004964e0(...);
int FUN_00496a0c(...);
int FUN_00497690(...);
int FUN_004989f0(...);
int FUN_00499d14(...);
int dataTable17Type0GetEntry(unsigned char [16], unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_0049999c; /* 0x49999c */
extern unsigned char LAB_004999a8; /* 0x4999a8 */
extern unsigned char LAB_004999b8; /* 0x4999b8 */
extern unsigned char LAB_004999c8; /* 0x4999c8 */

/* Supplied declaration required: FUN_00148bb8. */
/* Supplied declaration required: FUN_00163aa4. */
extern unsigned int FUN_001654d8(unsigned int *);
extern unsigned int FUN_001654e4(unsigned int *);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00184528. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_00224880. */
/* Supplied declaration required: FUN_00275f44. */
extern int FUN_002a4b60(void);
extern int FUN_002a4b74(void);
/* Supplied declaration required: FUN_0031d62c. */
extern int panelIsMissingOrFlagClear(void);
/* Supplied declaration required: obj04Finish. */
extern unsigned int FUN_00357bc8(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_00388758. */
extern int FUN_0040a4cc(unsigned int);
/* Supplied declaration required: FUN_0040a55c. */
/* Supplied declaration required: FUN_004935b0. */
/* Supplied declaration required: FUN_004964e0. */
/* Supplied declaration required: FUN_00496a0c. */
/* Supplied declaration required: FUN_00497690. */
/* Supplied declaration required: FUN_004989f0. */
/* Supplied declaration required: FUN_00499d14. */
/* Supplied declaration required: dataTable17Type0GetEntry. */


void FUN_004995b0(unsigned int *param_1)

{
/* irregular: 18 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar6;
  unsigned char temp_v5 [16];
  
  temp_v0 = param_1[2];
  if (temp_v0 != 0) {
    puVar6 = param_1 + 0x11e;
    if (temp_v0 != 1) {
      if (temp_v0 == 3 || temp_v0 == 4) {
        FUN_00224880(param_1[99]);
        FUN_00224880(param_1[100]);
        FUN_00163aa4(puVar6);
        temp_v1 = FUN_001654e4(puVar6);
        temp_v2 = FUN_001654d8(puVar6);
        FUN_004935b0(param_1 + 0xe9,temp_v2,temp_v1);
        temp_v3 = FUN_0031d62c((int)*(char *)((int)param_1 + 0x502));
        if (temp_v3 != 0) {
          temp_v3 = FUN_002a4b60();
          temp_v3 = dataTable17Type0GetEntry(temp_v5,param_1[temp_v3 + 0x5803] + 4);
          FUN_0019de98(temp_v3 + 0x40,0xf4f4f4ff);
        }
        temp_v3 = panelIsMissingOrFlagClear();
        if (temp_v3 != 0) {
          obj04Finish();
          FUN_0019de98(0,0xf4f4f4ff);
          temp_v3 = FUN_002a4b74();
          if (temp_v3 != -1) {
            param_1[0x2d0] = param_1[temp_v3 + 0x5803];
            FUN_004964e0(param_1,1);
            param_1[4] = param_1[1];
            param_1[1] = 6;
            param_1[2] = 0;
            obj04Finish();
            FUN_00499d14(param_1);
            return;
          }
          if (param_1[2] == 3) {
            param_1[0x5810] = 0;
          }
          else {
            param_1[0x5810] = 1;
          }
          FUN_00497690(param_1,0);
          FUN_004989f0(param_1,0);
          param_1[2] = 1;
          return;
        }
      }
    }
    else {
      FUN_00224880(param_1[99]);
      FUN_00224880(param_1[100]);
      FUN_00163aa4(puVar6);
      temp_v1 = FUN_001654e4(puVar6);
      temp_v2 = FUN_001654d8(puVar6);
      FUN_004935b0(param_1 + 0xe9,temp_v2,temp_v1);
      if (*(char *)((int)param_1 + 0x502) != '\0') {
        *param_1 = *param_1 & 0xfffff0ff;
        temp_v3 = FUN_0031d62c();
        if (temp_v3 != 0) {
          temp_v3 = FUN_002a4b60();
          temp_v3 = dataTable17Type0GetEntry(temp_v5,param_1[temp_v3 + 0x5803]);
          FUN_0019de98(temp_v3 + 0x40,0xf4f4f4ff);
        }
        temp_v3 = panelIsMissingOrFlagClear();
        if (temp_v3 != 0) {
          obj04Finish();
          FUN_0019de98(0,0xf4f4f4ff);
          temp_v3 = FUN_002a4b74();
          if (temp_v3 == -1) {
            FUN_00388758(1);
            param_1[4] = param_1[1];
            param_1[1] = 0xe;
            param_1[2] = 0;
            return;
          }
          temp_v0 = param_1[temp_v3 + 0x5803];
          if (temp_v0 != 0) {
            if (temp_v0 != 1) {
              if (temp_v0 == 2) {
                param_1[0x2d0] = 7;
                FUN_004964e0(param_1,1);
                param_1[4] = param_1[1];
                param_1[1] = 6;
                param_1[2] = 0;
                obj04Finish();
                return;
              }
              if (temp_v0 != 3) {
                return;
              }
              param_1[0x2d0] = 8;
              FUN_00496a0c(param_1,1);
              param_1[4] = param_1[1];
              param_1[1] = 6;
              param_1[2] = 0;
              obj04Finish();
              return;
            }
            FUN_00497690(param_1,2);
            if ((int)param_1[0x5807] >= 2) {
              *(unsigned char *)(param_1 + 0x5811) = 1;
              FUN_004989f0(param_1,2);
              param_1[2] = 4;
              *(unsigned char *)(param_1 + 0x5811) = 0;
              return;
            }
          }
          else {
            FUN_00497690(param_1,1);
            if ((int)param_1[0x5807] >= 2) {
              *(unsigned char *)((int)param_1 + 0x16045) = 1;
              FUN_004989f0(param_1,1);
              param_1[2] = 3;
              *(unsigned char *)((int)param_1 + 0x16045) = 0;
              return;
            }
          }
          param_1[0x2d0] = param_1[0x5803];
          FUN_004964e0(param_1,1);
          param_1[4] = param_1[1];
          param_1[1] = 6;
          param_1[2] = 0;
          obj04Finish();
          FUN_00499d14(param_1);
          return;
        }
      }
    }
  }
  else {
    temp_v0 = param_1[7];
    if ((char)param_1[6] == '\0') {
      if ((int)temp_v0 >= 8) {
        temp_v0 = temp_v0 + 1;
      }
      else if (temp_v0 == 5) {
        temp_v0 = 6;
      }
      else if (temp_v0 == 6 || temp_v0 == 7) {
        temp_v0 = 5;
      }
    }
    temp_v4 = temp_v0;
    FUN_00148bb8(temp_v0,1);
    if ((temp_v4 == 0) || (temp_v3 = FUN_0040a4cc(temp_v0), temp_v3 != 0)) {
      if (!(param_1[4] == 4 || param_1[4] == 1)) {
        temp_v1 = FUN_00357bc8(param_1[0x61],&LAB_0049999c);
        FUN_00275f44(param_1[99],temp_v1);
      }
      else if (*(char *)((int)param_1 + 0x21) != '\0') {
        temp_v1 = FUN_00357bc8(param_1[0x61],&LAB_004999b8);
        FUN_00275f44(param_1[99],temp_v1);
      }
      else {
        temp_v1 = FUN_00357bc8(param_1[0x61],&LAB_004999c8);
        FUN_00275f44(param_1[99],temp_v1);
      }
      FUN_00224880(param_1[99]);
      FUN_00497690(param_1,0);
      FUN_004989f0(param_1,0);
      FUN_00184528(param_1 + 0xf3,1);
      param_1[2] = 1;
      return;
    }
    FUN_0040a55c(temp_v0,1);
    temp_v1 = FUN_00357bc8(param_1[0x61],&LAB_004999a8);
    FUN_00275f44(param_1[99],temp_v1);
    FUN_00224880(param_1[99]);
    sysPlaySe(0xa0);
    param_1[4] = param_1[1];
    param_1[1] = 4;
    param_1[2] = 0;
  }
  return;
}

} /* extern "C" */
