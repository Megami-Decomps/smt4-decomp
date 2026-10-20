/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00217f14` (_code @ 0x217f14, 0x728 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int vec2GetXInt(...);
int vec2GetYInt(...);
int efctSetSpeed(void);
int FUN_001835b4(...);
int FUN_0026e8b8(...);
int FUN_002a4878(...);
int FUN_0032ef5c(...);

typedef int romwright_code(...);
/* stack frame of void: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} void_stack;

extern int g_camp; /* 0x57f108 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: vec2GetXInt. */
/* Supplied declaration required: vec2GetYInt. */
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int FUN_001834a4(unsigned int, int);
/* Supplied declaration required: FUN_001835b4. */
extern int gameFlagIsSet(unsigned int);
extern int FUN_0020a2fc(void);
extern int idListAnyValid(unsigned int);
extern int FUN_0023c068(void);
/* Supplied declaration required: FUN_0026e8b8. */
extern int FUN_00284140(int);
/* Supplied declaration required: FUN_002a4878. */
extern int FUN_002ab790(void);
extern unsigned int FUN_002c2c4c(int);
extern unsigned int FUN_002e26c4(unsigned int);
extern int region9100IsClear(void);
/* Supplied declaration required: FUN_0032ef5c. */
extern int FUN_0035dde8(void);
extern unsigned int FUN_003da8f4(int, unsigned int);


void FUN_00217f14(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  int *piVar13;
  int temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  unsigned int temp_v15;
  int temp_v16;
  unsigned int temp_v17 [3];
  int temp_v18;
  unsigned int temp_v19 [4];
  unsigned int temp_v20;
  int temp_v21;
  int temp_v22;
  
  temp_v0 = g_camp;
  temp_v20 = 0;
  temp_v16 = 0;
  temp_v17[0] = 0;
  temp_v1 = FUN_0020a2fc();
  if (((((temp_v1 == 0) && (temp_v1 = gameFlagIsSet(0x418), temp_v1 == 0)) ||
       ((temp_v1 = FUN_0020a2fc(), temp_v1 == 0 &&
        ((temp_v1 = gameFlagIsSet(0x453), temp_v1 != 0 && (temp_v1 = gameFlagIsSet(0x425), temp_v1 == 0))))))
      || ((temp_v1 = FUN_0020a2fc(), temp_v1 == 0 && (temp_v1 = region9100IsClear(), temp_v1 == 0)))) ||
     ((temp_v1 = FUN_0035dde8(), temp_v1 != 0 ||
      ((((temp_v1 = FUN_0020a2fc(), temp_v1 == 0 && (temp_v1 = gameFlagIsSet(0x459), temp_v1 == 0)) &&
        (temp_v1 = FUN_002ab790(), temp_v1 == 0x19)) && (temp_v1 = FUN_0023c068(), temp_v1 == 0)))))) {
    temp_v20 = 1;
  }
  temp_v2 = vec2GetXInt();
  temp_v3 = vec2GetYInt(temp_v0 + 0x658);
  efctSetSpeed();
  temp_v1 = temp_v2;
  if (temp_v2 < 0) {
    temp_v1 = -temp_v2;
  }
  if (temp_v1 < 0x140) {
    FUN_001835b4(2,0x14,0,temp_v2,temp_v3,0xc9);
    FUN_001835b4(2,0x14,1,temp_v2,temp_v3,0xc9);
    efctSetSpeed();
    temp_v4 = FUN_002c2c4c(temp_v0 + 0x40);
    temp_v10 = 0;
    if (0 < (int)temp_v4) {
      temp_v21 = (int)(8 - temp_v4) / 2 + 4;
      temp_v22 = (int)(7 - temp_v4) / 2 + 0x14;
      do {
        temp_v11 = temp_v0 + temp_v10 * 0x8c + 0x914;
        temp_v1 = vec2GetXInt(temp_v11);
        temp_v2 = vec2GetYInt(temp_v11);
        efctSetSpeed();
        temp_v5 = FUN_002a4878(temp_v0 + 0x40);
        temp_v13 = temp_v5 == temp_v10;
        if (temp_v13) {
          temp_v5 = (unsigned int)*(unsigned char *)(temp_v0 + 0xb9);
        }
        temp_v14 = temp_v13 && temp_v5 == 3;
        if (temp_v13 && temp_v5 == 3) {
          temp_v14 = temp_v20 == 0;
        }
        if (((!temp_v14) || (temp_v11 = vec2GetXInt(temp_v11), temp_v11 != 0)) ||
           ((temp_v11 = *(int *)(temp_v0 + 0x1c), temp_v11 == 3 || (temp_v11 == 0x21 || temp_v11 == 0x22)))) {
          temp_v3 = FUN_003da8f4((int)*(char *)(temp_v0 + 0xa4),temp_v10);
          temp_v11 = temp_v21;
          if ((temp_v4 & 1) != 0) {
            temp_v11 = temp_v22;
          }
          temp_v11 = FUN_001834a4(0x14,temp_v11 + temp_v10);
          FUN_001835b4(2,0x14,0x22,*(short *)(temp_v11 + 8) + temp_v1,*(short *)(temp_v11 + 10) + temp_v2,
                       0xce);
          temp_v9 = *(short *)(temp_v11 + 8) + temp_v1;
          temp_v12 = *(short *)(temp_v11 + 10) + temp_v2;
          temp_v15 = temp_v3;
          temp_v6 = FUN_002e26c4(temp_v3);
          temp_v18 = 0;
          temp_v19[0] = 0;
          FUN_0032ef5c(temp_v15,&temp_v18,temp_v19,0);
          temp_v7 = idListAnyValid(temp_v6);
          if (temp_v7 != 0) {
            efctSetSpeed();
          }
          FUN_001835b4(2,0x14,temp_v18,temp_v9,temp_v12,0xd3);
          FUN_001835b4(2,0x14,temp_v19[0],temp_v9,temp_v12,0xd3);
          efctSetSpeed();
          efctSetSpeed();
          FUN_0026e8b8(temp_v3,*(short *)(temp_v11 + 8) + temp_v1,*(short *)(temp_v11 + 10) + temp_v2,0xd8,0);
          efctSetSpeed();
        }
        temp_v10 = temp_v10 + 1;
      } while ((int)temp_v10 < (int)temp_v4);
    }
    temp_v1 = FUN_002a4878(temp_v0 + 0x40);
    temp_v5 = (unsigned int)*(unsigned char *)(temp_v0 + 0xb9);
    temp_v10 = temp_v5;
    if (temp_v5 == 3) {
      temp_v10 = temp_v20;
    }
    if (temp_v5 == 3 && temp_v10 == 0) {
      temp_v2 = temp_v0 + temp_v1 * 0x8c + 0x914;
      temp_v11 = vec2GetXInt();
      if (((temp_v11 == 0) && (temp_v11 = *(int *)(temp_v0 + 0x1c), temp_v11 != 3)) &&
         (temp_v11 != 0x21 && temp_v11 != 0x22)) {
        temp_v11 = vec2GetXInt(temp_v2);
        temp_v2 = vec2GetYInt(temp_v2);
        efctSetSpeed();
        temp_v1 = FUN_00284140((int)*(short *)(temp_v0 + temp_v1 * 2 + 0x1b22));
        if (temp_v1 == 2) {
          temp_v7 = 0;
          temp_v1 = temp_v7;
        }
        else {
          temp_v1 = vec2GetXInt();
          temp_v7 = vec2GetYInt(temp_v0 + 0xd74);
        }
        temp_v3 = FUN_002a4878(temp_v0 + 0x40);
        temp_v3 = FUN_003da8f4((int)*(char *)(temp_v0 + 0xa4),temp_v3);
        if ((temp_v4 & 1) == 0) {
          temp_v9 = 8 - temp_v4;
          temp_v12 = 0xc;
        }
        else {
          temp_v9 = 7 - temp_v4;
          temp_v12 = 0x1b;
        }
        temp_v8 = FUN_002a4878(temp_v0 + 0x40);
        temp_v9 = FUN_001834a4(0x14,temp_v8 + temp_v12 + temp_v9 / 2);
        efctSetSpeed();
        temp_v7 = temp_v2 + temp_v7;
        temp_v1 = temp_v1 + temp_v11;
        FUN_001835b4(2,0x14,0x3c,*(short *)(temp_v9 + 8) + temp_v1,*(short *)(temp_v9 + 10) + temp_v7,0xd3
                    );
        FUN_001835b4(2,0x14,0x3d,*(short *)(temp_v9 + 8) + temp_v1,*(short *)(temp_v9 + 10) + temp_v7,0xd3
                    );
        efctSetSpeed();
        FUN_001835b4(2,0x14,0x23,*(short *)(temp_v9 + 8) + temp_v1,*(short *)(temp_v9 + 10) + temp_v7,0xd8
                    );
        if (*(int *)(temp_v0 + 0x1c) == 6) {
          efctSetSpeed();
          temp_v0 = g_renderCtx;
          temp_v12 = packNibblesAndByte(6,1,0);
          piVar13 = (int *)(temp_v0 + 0x12b8);
          temp_v8 = piVar13[*piVar13 + 2];
          piVar13[*piVar13 + 2] = temp_v12;
          if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v8 != temp_v12) {
            (**(romwright_code **)(temp_v0 + 0x12d4))();
            *(unsigned char *)(temp_v0 + 0x12d0) = 0;
          }
          FUN_001835b4(2,0x14,0x23,*(short *)(temp_v9 + 8) + temp_v1,*(short *)(temp_v9 + 10) + temp_v7,
                       0xdb);
          temp_v0 = g_renderCtx;
          temp_v12 = packNibblesAndByte(6,7,0);
          piVar13 = (int *)(temp_v0 + 0x12b8);
          temp_v8 = piVar13[*piVar13 + 2];
          piVar13[*piVar13 + 2] = temp_v12;
          if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v8 != temp_v12) {
            (**(romwright_code **)(temp_v0 + 0x12d4))();
            *(unsigned char *)(temp_v0 + 0x12d0) = 0;
          }
          efctSetSpeed();
        }
        FUN_0032ef5c(temp_v3,&temp_v16,temp_v17,1);
        FUN_001835b4(2,0x14,temp_v16,*(short *)(temp_v9 + 8) + temp_v1,*(short *)(temp_v9 + 10) + temp_v7,
                     0xdd);
        FUN_001835b4(2,0x14,temp_v17[0],*(short *)(temp_v9 + 8) + temp_v11,
                     *(short *)(temp_v9 + 10) + temp_v2,0xdd);
        efctSetSpeed();
        FUN_0026e8b8(temp_v3,*(short *)(temp_v9 + 8) + temp_v1,*(short *)(temp_v9 + 10) + temp_v7,0xe2,1);
        efctSetSpeed();
      }
    }
  }
  return;
}

} /* extern "C" */
