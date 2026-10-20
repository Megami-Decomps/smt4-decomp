/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cb054` (_code @ 0x2cb054, 0x78c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002be5a4(...);
int FUN_002be624(...);
int FUN_002bf288(...);
int FUN_002bf380(...);
int FUN_002bf4f8(...);
int dataTableGet(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 22 slot(s), 88 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} void_stack;

extern unsigned char LAB_002cb494; /* 0x2cb494 */
extern int g_titleConfig; /* 0x44e2d0 */
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0029d644(int);
extern int FUN_0029d65c(int);
extern int FUN_0029efa8(int);
extern int FUN_0029efc0(int);
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002be624. */
extern int vec2GetYInt(int);
extern int vec2GetXInt(int);
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
extern int dataTableGetEntries(void);
/* Supplied declaration required: dataTableGet. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


unsigned int FUN_002cb054(void)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar10;
  int temp_v9;
  unsigned int in_fpscr;
  int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  int temp_v27;
  int temp_v28;
  unsigned int temp_v29;
  
  temp_v1 = g_titleConfig;
  temp_v2 = vec2GetXInt(g_titleConfig + 0x5c);
  temp_v3 = vec2GetYInt(temp_v1 + 0x5c);
  temp_v26 = (unsigned int)(*(int *)(temp_v1 + 8) == 1);
  temp_v10 = 0;
  temp_v13 = 0;
  temp_v14 = 0;
  temp_v11 = 0;
  temp_v12 = 0;
  temp_v15 = 0;
  temp_v18 = 0;
  temp_v19 = 0;
  temp_v16 = 0;
  temp_v17 = 0;
  temp_v20 = 0;
  temp_v23 = 0;
  temp_v24 = 0;
  temp_v21 = 0;
  temp_v22 = 0;
  temp_v25 = 0;
  FUN_002bf380(2,0x2f,0xc,temp_v2,temp_v3,0xb);
  temp_v4 = FUN_0029efc0(temp_v1 + 0xe8);
  temp_v28 = FUN_0029efa8(temp_v1 + 0xe8);
  temp_v28 = temp_v28 + temp_v4;
  temp_v8 = 0;
  temp_v4 = FUN_0029d644(temp_v1 + 0xe8);
  if (0 < temp_v4) {
    do {
      temp_v10 = 0;
      temp_v11 = 0;
      temp_v12 = 0;
      temp_v13 = 0;
      temp_v14 = 0;
      temp_v15 = 0;
      temp_v16 = 0;
      temp_v17 = 0;
      temp_v18 = 0;
      temp_v19 = 0;
      temp_v20 = 0;
      temp_v0 = 0;
      temp_v21 = 0;
      temp_v22 = 0;
      temp_v23 = 0;
      temp_v24 = 0;
      temp_v25 = 0;
      temp_v29 = 0xe09800ff;
      if ((temp_v26 != 0) && (temp_v4 = FUN_0029efc0(temp_v1 + 0xe8), temp_v4 + temp_v8 == temp_v28)) {
        temp_v0 = 1;
        temp_v29 = 0x72e027ff;
      }
      temp_v5 = FUN_002bf4f8(0x2f,temp_v8 + 0x1f);
      temp_v4 = g_titleScene;
      temp_v27 = *(short *)(temp_v5 + 8) + temp_v2;
      temp_v9 = *(short *)(temp_v5 + 10) + temp_v3;
      temp_v6 = packNibblesAndByte(6,1,0);
      piVar10 = (int *)(temp_v4 + 0x12ac);
      temp_v7 = piVar10[*piVar10 + 2];
      piVar10[*piVar10 + 2] = temp_v6;
      if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v7 != temp_v6) {
        (**(romwright_code **)(temp_v4 + 0x12c8))();
        *(unsigned char *)(temp_v4 + 0x12c4) = 0;
      }
      if (temp_v0) {
        FUN_002bf288(2,0x2f,0xd,temp_v27,temp_v9,0xb);
      }
      else {
        FUN_002bf288(2,0x2f,0xc,temp_v27,temp_v9,0xb);
      }
      temp_v4 = g_titleScene;
      temp_v6 = packNibblesAndByte(6,7,0);
      piVar10 = (int *)(temp_v4 + 0x12ac);
      temp_v7 = piVar10[*piVar10 + 2];
      piVar10[*piVar10 + 2] = temp_v6;
      if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v7 != temp_v6) {
        (**(romwright_code **)(temp_v4 + 0x12c8))();
        *(unsigned char *)(temp_v4 + 0x12c4) = 0;
      }
      FUN_002bf380(2,0x2f,1,temp_v27,temp_v9,0x10);
      temp_v4 = g_titleScene;
      if (temp_v0) {
        temp_v6 = packNibblesAndByte(6,1,0);
        piVar10 = (int *)(temp_v4 + 0x12ac);
        temp_v7 = piVar10[*piVar10 + 2];
        piVar10[*piVar10 + 2] = temp_v6;
        if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v7 != temp_v6) {
          (**(romwright_code **)(temp_v4 + 0x12c8))();
          *(unsigned char *)(temp_v4 + 0x12c4) = 0;
        }
        FUN_002bf380(2,0x2f,2,temp_v27,temp_v9,0x15);
        temp_v4 = g_titleScene;
        temp_v6 = packNibblesAndByte(6,7,0);
        piVar10 = (int *)(temp_v4 + 0x12ac);
        temp_v7 = piVar10[*piVar10 + 2];
        piVar10[*piVar10 + 2] = temp_v6;
        if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v7 != temp_v6) {
          (**(romwright_code **)(temp_v4 + 0x12c8))();
          *(unsigned char *)(temp_v4 + 0x12c4) = 0;
        }
      }
      temp_v4 = FUN_002bf4f8(0x2f,0x1a);
      temp_v6 = FUN_0029efc0(temp_v1 + 0xe8);
      if ((unsigned int)(temp_v6 + temp_v8) < 3) {
        dataTableGet(0x3a,1);
        temp_v7 = dataTableGetEntries();
        FUN_002be624(&temp_v10,&LAB_002cb494,temp_v7 + (temp_v6 + temp_v8) * 0x96);
        VectorSignedToFloat((int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v3,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v2,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be5a4(2,temp_v29,&temp_v10,(int)*(short *)(temp_v4 + 8));
      }
      if (temp_v0) {
        FUN_002bf288(2,0x2f,0x1c,*(short *)(temp_v5 + 8) + temp_v2,*(short *)(temp_v5 + 10) + temp_v3,0x1f);
        temp_v6 = FUN_0029d65c((int)*(short *)(temp_v1 + 0x1c));
        temp_v4 = g_titleScene;
        if ((temp_v6 == 1 || temp_v6 == 2) || temp_v6 == 6) {
          temp_v6 = packNibblesAndByte(6,1,0);
          piVar10 = (int *)(temp_v4 + 0x12ac);
          temp_v7 = piVar10[*piVar10 + 2];
          piVar10[*piVar10 + 2] = temp_v6;
          if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v7 != temp_v6) {
            (**(romwright_code **)(temp_v4 + 0x12c8))();
            *(unsigned char *)(temp_v4 + 0x12c4) = 0;
          }
          FUN_002bf288(2,0x2f,0x1d,*(short *)(temp_v5 + 8) + temp_v2,*(short *)(temp_v5 + 10) + temp_v3,0x1f
                      );
          temp_v4 = g_titleScene;
          temp_v6 = packNibblesAndByte(6,7,0);
          piVar10 = (int *)(temp_v4 + 0x12ac);
          temp_v7 = piVar10[*piVar10 + 2];
          piVar10[*piVar10 + 2] = temp_v6;
          if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v7 != temp_v6) {
            (**(romwright_code **)(temp_v4 + 0x12c8))();
            *(unsigned char *)(temp_v4 + 0x12c4) = 0;
          }
        }
      }
      else {
        FUN_002bf288(2,0x2f,0x1b,*(short *)(temp_v5 + 8) + temp_v2,*(short *)(temp_v5 + 10) + temp_v3,0x1f);
      }
      temp_v27 = *(short *)(temp_v5 + 8) + temp_v2;
      temp_v6 = *(short *)(temp_v5 + 10) + temp_v3;
      temp_v5 = FUN_0029efc0(temp_v1 + 0xe8);
      temp_v4 = g_titleConfig;
      temp_v5 = *(int *)(temp_v1 + (temp_v5 + temp_v8) * 4 + 0x28);
      FUN_002bf380(2,0x2f,3,temp_v27,temp_v6,0x1f);
      temp_v5 = FUN_002bf4f8(0x2f,temp_v5 + 0x5b);
      if (temp_v0) {
        temp_v7 = FUN_0029d65c((int)*(short *)(temp_v4 + 0x1e));
        if (!((temp_v7 == 1 || temp_v7 == 2) || temp_v7 == 6)) {
          FUN_002bf380(2,0x2f,4,temp_v27,temp_v6,0x1f);
        }
        else {
          FUN_002bf380(2,0x2f,5,temp_v27,temp_v6,0x15);
        }
        temp_v7 = FUN_0029d65c((int)*(short *)(temp_v4 + 0x20));
        if (!((temp_v7 == 1 || temp_v7 == 2) || temp_v7 == 6)) {
          FUN_002bf380(2,0x2f,6,temp_v27,temp_v6,0x1f);
        }
        else {
          FUN_002bf380(2,0x2f,7,temp_v27,temp_v6,0x15);
        }
        temp_v4 = FUN_0029d65c((int)*(short *)(temp_v4 + 0x22));
        if (!((temp_v4 == 1 || temp_v4 == 2) || temp_v4 == 6)) {
          FUN_002bf288(2,0x2f,0x31,*(short *)(temp_v5 + 8) + temp_v27,*(short *)(temp_v5 + 10) + temp_v6,
                       0x29);
        }
        else {
          FUN_002bf288(2,0x2f,0x32,*(short *)(temp_v5 + 8) + temp_v27,*(short *)(temp_v5 + 10) + temp_v6,
                       0x29);
        }
      }
      else {
        FUN_002bf380(2,0x2f,4,temp_v27,temp_v6,0x1f);
        FUN_002bf380(2,0x2f,6,temp_v27,temp_v6,0x1f);
        FUN_002bf288(2,0x2f,0x31,*(short *)(temp_v5 + 8) + temp_v27,*(short *)(temp_v5 + 10) + temp_v6,
                     0x29);
      }
      temp_v8 = temp_v8 + 1;
      temp_v4 = FUN_0029d644(temp_v1 + 0xe8);
    } while (temp_v8 < temp_v4);
  }
  return 0;
}

} /* extern "C" */
