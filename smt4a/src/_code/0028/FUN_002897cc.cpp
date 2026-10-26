/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002897cc` (_code @ 0x2897cc, 0x5b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {

int FUN_0014afd0(...);
int jobStop(...);
int eventQueueAddUnique(int);
int asdTMTexTableReleaseNode(...);
int aocHandleButtons(int, int);
int VectorSignedToFloat(...);

typedef struct fn_002897cc_arg0 fn_002897cc_arg0;
struct fn_002897cc_arg0 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    float field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    float field_0x24; /* +0x24 */
    float field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    byte field_0x30; /* +0x30 */
    unsigned char pad_0x31[0xf];
    undefined4 field_0x40; /* +0x40 */
    unsigned char pad_0x44[0x4];
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    undefined4 field_0x50; /* +0x50 */
    unsigned char pad_0x54[0x4];
    void *field_0x58; /* +0x58 */
    float field_0x5c; /* +0x5c */
    byte field_0x60; /* +0x60 */
    unsigned char pad_0x61[0x3];
    undefined4 field_0x64; /* +0x64 */
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    undefined4 field_0x70; /* +0x70 */
    undefined4 field_0x74; /* +0x74 */
    undefined4 field_0x78; /* +0x78 */
    undefined4 field_0x7c; /* +0x7c */
    undefined4 field_0x80; /* +0x80 */
    undefined4 field_0x84; /* +0x84 */
    byte field_0x88; /* +0x88 */
    unsigned char pad_0x89[0x3];
    undefined4 field_0x8c; /* +0x8c */
    undefined4 field_0x90; /* +0x90 */
    byte field_0x94; /* +0x94 */
    byte field_0x95; /* +0x95 */
};

extern unsigned int g_aocSystem; /* 0x570280 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: FUN_0014afd0. */
extern int engineCleanupIsDone(void);
extern int FUN_00162ea4(void);
/* Supplied declaration required: jobStop. */
extern unsigned long long jobGetWork(void);
/* Supplied declaration required: eventQueueAddUnique. */
extern int randBetween(unsigned int, unsigned int);
/* Supplied declaration required: aocLoadTextureNode. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
extern int aocRunByName(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: aocHandleButtons. */
extern int FUN_003fce08(unsigned int, unsigned int);
extern int nkdwLoaderParse(unsigned int);
extern unsigned int FUN_00409fe8(int, unsigned int);
extern int asdAnimGetTrackLastFrame(int, unsigned int);


unsigned int FUN_002897cc(fn_002897cc_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  unsigned int temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned long long temp_v15;
  
  temp_v15 = jobGetWork();
  temp_v4 = (unsigned int)((unsigned long long)temp_v15 >> 0x20);
  temp_v1 = (int)temp_v15;
  temp_v2 = *(int *)(temp_v1 + 0xc);
  if (temp_v2 != 0) {
    if (temp_v2 == 1) {
      temp_v2 = FUN_00162ea4();
      if (temp_v2 != 0) {
        return 0;
      }
      if (*(int *)(temp_v1 + 0x50) != 0) {
        temp_v10 = FUN_00409fe8(*(int *)(temp_v1 + 0x50),1);
        *(unsigned int *)(temp_v1 + 0xc) = 2;
        *(unsigned int *)(temp_v1 + 0x4c) = temp_v10;
        return 0;
      }
      temp_v2 = aocRunByName(g_aocSystem,*(unsigned int *)(temp_v1 + 0x40),*(unsigned int *)(temp_v1 + 0x44),
                           1);
      if (temp_v2 != 0) {
        aocLoadTextureNode(g_aocSystem, *(unsigned int *)(temp_v1 + 0x40), *(unsigned int *)(temp_v1 + 0x44), 0x10000);
      }
      else {
        FUN_0014afd0(*(unsigned int *)(temp_v1 + 0x40),*(unsigned int *)(temp_v1 + 0x44));
      }
      *(unsigned int *)(temp_v1 + 0xc) = 0;
      if (*(char *)(temp_v1 + 0x88) == '\0') {
        return 0;
      }
      FUN_0014afd0(0x27,0);
      return 0;
    }
    if (temp_v2 == 2) {
      temp_v2 = nkdwLoaderParse(*(unsigned int *)(temp_v1 + 0x4c));
      if (temp_v2 == 0) {
        return 0;
      }
      temp_v2 = *(int *)(*(int *)(temp_v1 + 0x4c) + 0x10);
      temp_v11 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v1 + 0x10),(unsigned char)(in_fpscr >> 0x16) & 3
                                         );
      temp_v9 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 0x12),(unsigned char)(in_fpscr >> 0x16) & 3
                                         );
      *(int *)(temp_v1 + 0x10) = (int)(temp_v11 + (200.0f - temp_v9));
      temp_v12 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3
                                         );
      temp_v11 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v1 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3
                                         );
      temp_v9 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 0x16),(unsigned char)(in_fpscr >> 0x16) & 3
                                         );
      *(int *)(temp_v1 + 0x14) = (int)((-143.0f - temp_v12) + temp_v9 + 195.0f + temp_v11);
      aocHandleButtons(*(int *)(temp_v1 + 0x4c),7);
      *(unsigned int *)(temp_v1 + 0xc) = 3;
      return 0;
    }
    if (temp_v2 != 3) {
      return 0;
    }
    temp_v2 = FUN_003fce08(*(unsigned int *)(temp_v1 + 0x4c),1);
    if (temp_v2 == 0) {
      return 0;
    }
    *(unsigned int *)(temp_v1 + 0xc) = 0;
    temp_v2 = randBetween(0,4);
    temp_v10 = VectorSignedToFloat(temp_v2 << 2,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v1 + 0x5c) = temp_v10;
    return 0;
  }
  if (*(int *)(temp_v1 + 0x40) == 1) {
    temp_v15 = asdTMTexTableNodeIsLoaded(1,*(unsigned int *)(temp_v1 + 0x44));
    temp_v4 = (unsigned int)((unsigned long long)temp_v15 >> 0x20);
    if ((int)temp_v15 == 0) {
      return 0;
    }
  }
  temp_v2 = *(int *)(temp_v1 + 0x4c);
  temp_v9 = 0.0f;
  if (temp_v2 != 0) {
    temp_v4 = (unsigned int)*(unsigned char *)(temp_v1 + 0x60);
  }
  if (temp_v2 != 0 && temp_v4 != 0) {
    temp_v11 = *(float *)(temp_v1 + 0x5c) + 2.0f;
    *(float *)(temp_v1 + 0x5c) = temp_v11;
    temp_v2 = asdAnimGetTrackLastFrame(temp_v2,0);
    if (temp_v11 <= *(float *)(temp_v1 + 0x5c)) {
      *(float *)(temp_v1 + 0x5c) = *(float *)(temp_v1 + 0x5c) - temp_v11;
    }
    in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(*(float *)(temp_v1 + 0x24) == temp_v9) << 0x1e);
    temp_v6 = romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0);
    if (!temp_v6) {
      temp_v2 = *(int *)(temp_v1 + 0x68);
      temp_v6 = temp_v2 == 0;
    }
    if (!temp_v6) {
      temp_v5 = *(int *)(temp_v1 + 100);
      temp_v12 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v1 + 0x6c),(unsigned char)(in_fpscr >> 0x16) & 3
                                         );
      temp_v11 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v3 = temp_v2;
      if (temp_v5 < temp_v2) {
        temp_v3 = temp_v5 + 1;
      }
      temp_v8 = (float)VectorSignedToFloat(temp_v2 - temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(int *)(temp_v1 + 0x10) = (int)((temp_v8 / temp_v11) * temp_v12);
      if (temp_v5 >= temp_v2) {
        *(unsigned int *)(temp_v1 + 100) = 0;
        *(unsigned int *)(temp_v1 + 0x68) = 0;
        *(unsigned int *)(temp_v1 + 0x10) = 0;
        *(unsigned int *)(temp_v1 + 0x6c) = 0;
      }
      else {
        *(int *)(temp_v1 + 100) = temp_v3;
      }
    }
  }
  if (*(char *)(temp_v1 + 0x88) != '\0') {
    if (*(char *)(temp_v1 + 0x94) == '\0') {
      eventQueueAddUnique(0x1000212);
      *(unsigned char *)(temp_v1 + 0x94) = 1;
    }
    *(int *)(temp_v1 + 0x90) = (*(int *)(temp_v1 + 0x90) + 1) % 0x96;
    temp_v4 = *(int *)(temp_v1 + 0x8c) + 1;
    temp_v2 = (int)(((long long)(int)temp_v4 * -0x77777777 + ((unsigned long long)temp_v4 << 0x20)) >> 0x20);
    *(unsigned int *)(temp_v1 + 0x8c) = temp_v4 + ((temp_v2 >> 4) - (temp_v2 >> 0x1f)) * -0x1e;
  }
  temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(*(float *)(temp_v1 + 0x1c) == temp_v9) << 0x1e);
  if (!romwright_subpiece_4_1_0(temp_v4 >> 0x1e,0)) {
    temp_v2 = FUN_00203d74();
    if (temp_v2 == 0) {
      temp_v11 = 0.7f;
    }
    else {
      temp_v11 = 0.3f;
    }
    temp_v11 = *(float *)(temp_v1 + 0x1c) * temp_v11;
    *(float *)(temp_v1 + 0x1c) = temp_v11;
    if ((int)romwright_fabs_4(temp_v11) < 0x3f800000) {
      *(float *)(temp_v1 + 0x1c) = temp_v9;
    }
  }
  temp_v11 = *(float *)(temp_v1 + 0x28);
  temp_v7 = (temp_v4 & 0xfffffff) | ((unsigned int)(temp_v11 == temp_v9) << 0x1e);
  if (!romwright_subpiece_4_1_0(temp_v7 >> 0x1e,0)) {
    if (*(char *)(temp_v1 + 0x88) != '\0') {
      temp_v4 = (temp_v4 & 0xfffffff) | ((unsigned int)(temp_v11 < temp_v9) << 0x1f) |
              ((unsigned int)(temp_v11 == temp_v9) << 0x1e);
      temp_v7 = temp_v4 | ((unsigned int)((temp_v11 != temp_v11) || (temp_v9 != temp_v9)) << 0x1c);
      temp_v0 = (unsigned char)(temp_v4 >> 0x18);
      if (!((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(temp_v7 >> 0x1c) & 1))) {
        *(float *)(temp_v1 + 0x24) = *(float *)(temp_v1 + 0x24) + temp_v11;
        *(float *)(temp_v1 + 0x28) = temp_v11 * 0.77f;
      }
      else {
        if (*(char *)(temp_v1 + 0x95) == '\0') {
          *(unsigned char *)(temp_v1 + 0x95) = 1;
          eventQueueAddUnique(0x1000213);
        }
        *(float *)(temp_v1 + 0x24) = *(float *)(temp_v1 + 0x24) + *(float *)(temp_v1 + 0x28);
      }
    }
    else {
      *(float *)(temp_v1 + 0x24) = *(float *)(temp_v1 + 0x24) + *(float *)(temp_v1 + 0x28);
    }
    temp_v2 = FUN_00203d74();
    if (temp_v2 != 0) {
      temp_v11 = *(float *)(temp_v1 + 0x28);
      temp_v4 = (temp_v7 & 0xfffffff) | ((unsigned int)(temp_v11 < temp_v9) << 0x1f) |
              ((unsigned int)(temp_v11 == temp_v9) << 0x1e) | ((unsigned int)(temp_v9 <= temp_v11) << 0x1d);
      temp_v7 = temp_v4 | ((unsigned int)((temp_v11 != temp_v11) || (temp_v9 != temp_v9)) << 0x1c);
      temp_v0 = (unsigned char)(temp_v4 >> 0x18);
      if (!((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(temp_v7 >> 0x1c) & 1))) {
        *(unsigned int *)(temp_v1 + 0x24) = 0x3f8ccccd;
        *(float *)(temp_v1 + 0x28) = temp_v9;
      }
      else if (!(unsigned char)((temp_v0 >> 5) & 1)) {
        *(unsigned int *)(temp_v1 + 0x24) = 0xbdcccccd;
        *(float *)(temp_v1 + 0x28) = temp_v9;
      }
    }
    temp_v10 = 0x3f800000;
    temp_v7 = (temp_v7 & 0xfffffff) | ((unsigned int)(temp_v9 <= *(float *)(temp_v1 + 0x24)) << 0x1d);
    if (!romwright_subpiece_4_1_0(temp_v7 >> 0x1d,0)) {
      *(float *)(temp_v1 + 0x24) = temp_v9;
      *(float *)(temp_v1 + 0x28) = temp_v9;
      if (*(char *)(temp_v1 + 0x30) != '\0') {
        jobStop(param_1,0);
      }
    }
    else if ((int)*(float *)(temp_v1 + 0x24) >= 0x3f800001) {
      *(unsigned int *)(temp_v1 + 0x24) = 0x3f800000;
      *(float *)(temp_v1 + 0x28) = temp_v9;
    }
    temp_v2 = FUN_00162ea4();
    if (temp_v2 != 0) {
      temp_v2 = engineCleanupIsDone();
      if (temp_v2 == 0) {
        *(unsigned int *)(temp_v1 + 0x24) = temp_v10;
        *(float *)(temp_v1 + 0x28) = temp_v9;
      }
    }
  }
  temp_v4 = (temp_v7 & 0xfffffff) | ((unsigned int)(*(float *)(temp_v1 + 0x2c) == temp_v9) << 0x1e);
  if (!romwright_subpiece_4_1_0(temp_v4 >> 0x1e,0)) {
    temp_v11 = *(float *)(temp_v1 + 0x2c) - 0.166f;
    *(float *)(temp_v1 + 0x2c) = temp_v11;
    temp_v4 = (temp_v7 & 0xfffffff) | ((unsigned int)(temp_v11 == temp_v9) << 0x1e) |
            ((unsigned int)(temp_v9 <= temp_v11) << 0x1d);
    temp_v0 = (unsigned char)(temp_v4 >> 0x18);
    if ((!(unsigned char)((temp_v0 >> 5) & 1) || (unsigned char)(temp_v0 >> 6)) &&
       (*(float *)(temp_v1 + 0x2c) = temp_v9, -1 < *(int *)(temp_v1 + 0x48))) {
      asdTMTexTableReleaseNode(*(unsigned int *)(temp_v1 + 0x40));
      *(unsigned int *)(temp_v1 + 0x48) = 0xffffffff;
    }
  }
  temp_v2 = *(int *)(temp_v1 + 0x84);
  if (0 < temp_v2) {
    temp_v3 = *(int *)(temp_v1 + 0x80);
    temp_v9 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(temp_v4 >> 0x16) & 3);
    temp_v14 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(temp_v4 >> 0x16) & 3);
    temp_v11 = (float)VectorSignedToFloat(*(int *)(temp_v1 + 0x78) - *(int *)(temp_v1 + 0x70),
                                        (unsigned char)(temp_v4 >> 0x16) & 3);
    temp_v13 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(temp_v4 >> 0x16) & 3);
    temp_v8 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(temp_v4 >> 0x16) & 3);
    temp_v12 = (float)VectorSignedToFloat(*(int *)(temp_v1 + 0x7c) - *(int *)(temp_v1 + 0x74),
                                        (unsigned char)(temp_v4 >> 0x16) & 3);
    *(int *)(temp_v1 + 0x10) = (int)((temp_v11 * temp_v13) / temp_v9) + *(int *)(temp_v1 + 0x70);
    *(int *)(temp_v1 + 0x14) = (int)((temp_v12 * temp_v8) / temp_v14) + *(int *)(temp_v1 + 0x74);
    if (temp_v2 <= temp_v3) {
      *(unsigned int *)(temp_v1 + 0x84) = 0;
      *(unsigned int *)(temp_v1 + 0x80) = 0;
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x78);
      *(int *)(temp_v1 + 0x14) = *(int *)(temp_v1 + 0x7c);
    }
    *(int *)(temp_v1 + 0x80) = *(int *)(temp_v1 + 0x80) + 1;
    temp_v2 = FUN_00203d74();
    if (temp_v2 != 0) {
      *(int *)(temp_v1 + 0x80) = *(int *)(temp_v1 + 0x80) + 2;
    }
  }
  return 0;
}

} /* extern "C" */
