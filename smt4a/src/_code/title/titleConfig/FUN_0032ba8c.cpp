/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032ba8c` (_code @ 0x32ba8c, 0x71c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00162790(...);
int FUN_00164b5c(...);
int efctSetSpeed(void);
int FUN_001834a4(...);
int FUN_001835b4(...);
int dataTableGet(...);
int FUN_0019d880(void);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 23 slot(s), 92 byte(s) */
typedef struct {
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
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
} void_stack;

extern unsigned char LAB_0032be6c; /* 0x32be6c */
extern int g_titleConfig; /* 0x589164 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164b5c. */
extern int FUN_001654d8(int);
extern int FUN_001654e4(int);
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: dataTableGet. */
extern int dataTableGetEntries(void);
/* Supplied declaration required: FUN_0019d880. */
extern int FUN_00284140(int);
extern int FUN_002a4860(int);
extern int FUN_002a4894(int);
extern int FUN_00348ed0(int);


unsigned int FUN_0032ba8c(void)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int *piVar11;
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
  int temp_v30;
  
  temp_v1 = g_titleConfig;
  temp_v2 = FUN_001654d8(g_titleConfig + 0x5c);
  temp_v3 = FUN_001654e4(temp_v1 + 0x5c);
  temp_v26 = (unsigned int)(*(int *)(temp_v1 + 8) == 1);
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
  temp_v21 = 0;
  temp_v22 = 0;
  temp_v23 = 0;
  temp_v24 = 0;
  temp_v25 = 0;
  efctSetSpeed();
  FUN_00164b5c(2,0x24,0xc,temp_v2,temp_v3,0xb);
  temp_v4 = FUN_002a4860(temp_v1 + 0xf0);
  temp_v28 = FUN_002a4894(temp_v1 + 0xf0);
  temp_v28 = temp_v28 + temp_v4;
  temp_v8 = 0;
  temp_v4 = FUN_00348ed0(temp_v1 + 0xf0);
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
      temp_v29 = 0x9fddddff;
      if ((temp_v26 != 0) && (temp_v4 = FUN_002a4860(temp_v1 + 0xf0), temp_v4 + temp_v8 == temp_v28)) {
        temp_v0 = 1;
        temp_v29 = 0x2bceffff;
      }
      temp_v4 = FUN_001834a4(0x24,temp_v8 + 0x1f);
      temp_v27 = *(short *)(temp_v4 + 8) + temp_v2;
      temp_v9 = *(short *)(temp_v4 + 10) + temp_v3;
      temp_v30 = g_titleConfig;
      if (temp_v0) {
        FUN_001835b4(2,0x24,0xd,temp_v27,temp_v9,0xb);
      }
      else {
        FUN_001835b4(2,0x24,0xc,temp_v27,temp_v9,0xb);
      }
      FUN_00164b5c(2,0x24,1,temp_v27,temp_v9,0x10);
      temp_v6 = g_renderCtx;
      if (temp_v0) {
        temp_v5 = FUN_00169294(6,1,0);
        piVar11 = (int *)(temp_v6 + 0x12b8);
        temp_v7 = piVar11[*piVar11 + 2];
        piVar11[*piVar11 + 2] = temp_v5;
        if (*(char *)(temp_v6 + 0x12d0) != '\0' || temp_v7 != temp_v5) {
          (**(romwright_code **)(temp_v6 + 0x12d4))();
          *(unsigned char *)(temp_v6 + 0x12d0) = 0;
        }
        FUN_0019d880();
        efctSetSpeed();
        FUN_00164b5c(2,0x24,2,temp_v27,temp_v9,0x15);
        efctSetSpeed();
        temp_v9 = g_renderCtx;
        temp_v6 = FUN_00169294(6,7,0);
        piVar11 = (int *)(temp_v9 + 0x12b8);
        temp_v5 = piVar11[*piVar11 + 2];
        piVar11[*piVar11 + 2] = temp_v6;
        if (*(char *)(temp_v9 + 0x12d0) != '\0' || temp_v5 != temp_v6) {
          (**(romwright_code **)(temp_v9 + 0x12d4))();
          *(unsigned char *)(temp_v9 + 0x12d0) = 0;
        }
      }
      temp_v9 = FUN_001834a4(0x24,0x1a);
      temp_v6 = FUN_002a4860(temp_v1 + 0xf0);
      if ((unsigned int)(temp_v6 + temp_v8) < 3) {
        dataTableGet(0x3a,1);
        temp_v5 = dataTableGetEntries();
        FUN_00100388(&temp_v10,&LAB_0032be6c,temp_v5 + (temp_v6 + temp_v8) * 0x94);
        VectorSignedToFloat((int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v9 + 10) + temp_v3,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v9 + 8) + temp_v2,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00162790(2,temp_v29,&temp_v10,(int)*(short *)(temp_v9 + 8));
      }
      if (temp_v0) {
        FUN_001835b4(2,0x24,0x1c,*(short *)(temp_v4 + 8) + temp_v2,*(short *)(temp_v4 + 10) + temp_v3,0x1f);
        temp_v6 = FUN_00284140((int)*(short *)(temp_v1 + 0x1c));
        temp_v9 = g_renderCtx;
        if ((temp_v6 == 1 || temp_v6 == 2) || temp_v6 == 6) {
          temp_v6 = FUN_00169294(6,1,0);
          piVar11 = (int *)(temp_v9 + 0x12b8);
          temp_v5 = piVar11[*piVar11 + 2];
          piVar11[*piVar11 + 2] = temp_v6;
          if (*(char *)(temp_v9 + 0x12d0) != '\0' || temp_v5 != temp_v6) {
            (**(romwright_code **)(temp_v9 + 0x12d4))();
            *(unsigned char *)(temp_v9 + 0x12d0) = 0;
          }
          FUN_001835b4(2,0x24,0x1d,*(short *)(temp_v4 + 8) + temp_v2,*(short *)(temp_v4 + 10) + temp_v3,0x1f
                      );
          temp_v9 = g_renderCtx;
          temp_v6 = FUN_00169294(6,7,0);
          piVar11 = (int *)(temp_v9 + 0x12b8);
          temp_v5 = piVar11[*piVar11 + 2];
          piVar11[*piVar11 + 2] = temp_v6;
          if (*(char *)(temp_v9 + 0x12d0) != '\0' || temp_v5 != temp_v6) {
            (**(romwright_code **)(temp_v9 + 0x12d4))();
            *(unsigned char *)(temp_v9 + 0x12d0) = 0;
          }
        }
      }
      else {
        FUN_001835b4(2,0x24,0x1b,*(short *)(temp_v4 + 8) + temp_v2,*(short *)(temp_v4 + 10) + temp_v3,0x1f);
      }
      temp_v27 = *(short *)(temp_v4 + 8) + temp_v2;
      temp_v6 = *(short *)(temp_v4 + 10) + temp_v3;
      temp_v9 = FUN_002a4860(temp_v1 + 0xf0);
      temp_v4 = g_titleConfig;
      temp_v9 = *(int *)(temp_v1 + (temp_v9 + temp_v8) * 4 + 0x28);
      FUN_00164b5c(2,0x24,3,temp_v27,temp_v6,0x1f);
      temp_v9 = FUN_001834a4(0x24,temp_v9 + 0x5b);
      if (temp_v0) {
        temp_v5 = FUN_00284140((int)*(short *)(temp_v4 + 0x1e));
        if (!((temp_v5 == 1 || temp_v5 == 2) || temp_v5 == 6)) {
          FUN_00164b5c(2,0x24,4,temp_v27,temp_v6,0x1f);
        }
        else {
          FUN_00164b5c(2,0x24,5,temp_v27,temp_v6,0x15);
        }
        temp_v5 = FUN_00284140((int)*(short *)(temp_v4 + 0x20));
        if (!((temp_v5 == 1 || temp_v5 == 2) || temp_v5 == 6)) {
          FUN_00164b5c(2,0x24,6,temp_v27,temp_v6,0x1f);
        }
        else {
          FUN_00164b5c(2,0x24,7,temp_v27,temp_v6,0x15);
        }
        temp_v4 = FUN_00284140((int)*(short *)(temp_v4 + 0x22));
        temp_v6 = *(short *)(temp_v9 + 10) + temp_v6;
        temp_v9 = *(short *)(temp_v9 + 8) + temp_v27;
        if (!((temp_v4 == 1 || temp_v4 == 2) || temp_v4 == 6)) {
          FUN_001835b4(2,0x24,0x31,temp_v9,temp_v6,0x29);
        }
        else {
          FUN_001835b4(2,0x24,0x32,temp_v9,temp_v6,0x29);
        }
      }
      else {
        FUN_00164b5c(2,0x24,4,temp_v27,temp_v6,0x1f);
        FUN_00164b5c(2,0x24,6,temp_v27,temp_v6,0x1f);
        FUN_001835b4(2,0x24,0x31,*(short *)(temp_v9 + 8) + temp_v27,*(short *)(temp_v9 + 10) + temp_v6,
                     0x29);
      }
      temp_v8 = temp_v8 + 1;
      temp_v4 = FUN_00348ed0(temp_v1 + 0xf0);
    } while (temp_v8 < temp_v4);
  }
  efctSetSpeed();
  return 0;
}

} /* extern "C" */
