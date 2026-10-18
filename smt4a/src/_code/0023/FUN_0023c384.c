/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023c384` (_code @ 0x23c384, 0x53c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp70; /* 0x70: local_70 */
} param_1_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: FUN_00169ddc. */
extern int FUN_001834a4(unsigned int, int);
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184b80. */
/* Supplied declaration required: FUN_001ab854. */
extern int FUN_001ab888(void);
extern int FUN_00203b1c(void);
extern long long FUN_002ffa9c(int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00358e94. */
/* Supplied declaration required: FUN_00387240. */
/* Supplied declaration required: FUN_004bd0d8. */
extern int FUN_004bd340(int, unsigned int);
/* Supplied declaration required: FUN_004bd3ec. */
extern unsigned int FUN_004ccdb8(unsigned short, int, int);


void FUN_0023c384(int param_1)

{
/* irregular: 9 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  short temp_v2;
  long long temp_v3;
  long long temp_v4;
  unsigned char temp_v5;
  int temp_v6;
  unsigned char *puVar8;
  unsigned int temp_v7;
  unsigned int *puVar10;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int *puVar14;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  long long temp_v17;
  
  temp_v13 = 0;
  do {
    temp_v11 = param_1 + temp_v13 * 0x28;
    if (*(int *)(temp_v11 + 0x7870) == 0) {
      *(unsigned char *)(temp_v11 + 0x788f) = 1;
    }
    temp_v6 = FUN_001ab888();
    temp_v0 = *(char *)(temp_v6 + temp_v13 + 0x1c88);
    temp_v6 = (int)temp_v0;
    if (temp_v6 < 0) {
      *(unsigned char *)(temp_v11 + 0x78b7) = 1;
    }
    else {
      temp_v12 = param_1 + temp_v6 * 0x28;
      puVar8 = (unsigned char *)(temp_v12 + 0x78b7);
      *puVar8 = 0;
      temp_v11 = FUN_001ab854(temp_v6);
      if (temp_v11 != 0) {
        temp_v14 = temp_v12 + 0x7800;
        if (*(char *)(temp_v12 + 0x78b6) != '\0') {
          temp_v7 = FUN_004ccdb8(*(unsigned short *)(temp_v11 + 0x62),
                               (int)*(short *)(temp_v12 + 0x78b2) + (unsigned int)*(unsigned short *)(temp_v11 + 100),
                               (int)*(short *)(temp_v12 + 0x78b8));
          *(unsigned int *)(temp_v12 + 0x78a8) = temp_v7 << 0xc;
          *(unsigned int *)(temp_v12 + 0x78ac) = temp_v7 >> 0x14;
          *(short *)(temp_v12 + 0x78b4) = *(short *)(temp_v12 + 0x78b4) + 1;
          FUN_00163aa4(param_1 + temp_v6 * 0x8c + 0x2550);
          if (*(short *)(temp_v12 + 0x78b4) >= 0x1f) {
            *(unsigned char *)(temp_v12 + 0x78b6) = 0;
            *(int *)(temp_v12 + 0x78a8) = 0;
            *(unsigned int *)(temp_v12 + 0x78ac) = 0;
            temp_v5 = 0;
            *(unsigned short *)(temp_v12 + 0x78b4) = 0;
            puVar8 = (unsigned char *)(param_1 + 0x7e40);
            *puVar8 = temp_v5;
          }
        }
        else {
          puVar14 = (unsigned int *)(temp_v12 + 0x78a0);
          temp_v15 = *(unsigned int *)(temp_v12 + 0x7898);
          temp_v7 = *puVar14;
          temp_v16 = *(unsigned int *)(temp_v12 + 0x78a4);
          temp_v4 = *(long long *)puVar14;
          temp_v3 = *(long long *)puVar14;
          if (temp_v15 >> 0x14 < temp_v16 || temp_v16 - (temp_v15 >> 0x14) < (unsigned int)(temp_v15 << 0xc <= temp_v7))
          {
            temp_v5 = 1;
            *puVar8 = temp_v5;
          }
          else {
            temp_v17 = FUN_002ffa9c(temp_v15 << 0xc,temp_v15 >> 0x14,0x2d,0);
            temp_v9 = (unsigned int)((unsigned long long)(temp_v17 + temp_v3) >> 0x20);
            if (temp_v15 >> 0x14 < temp_v9 ||
                temp_v9 - (temp_v15 >> 0x14) < (unsigned int)(temp_v15 << 0xc <= (unsigned int)(temp_v17 + temp_v3))) {
              temp_v17 = romwright_piece_4_4((temp_v15 >> 0x14) - (temp_v16 + (temp_v15 * 0x1000 < temp_v7)),
                                temp_v15 * 0x1000 - temp_v7);
            }
            puVar10 = (unsigned int *)(temp_v12 + 0x78a8);
            *(long long *)puVar10 = temp_v17 + *(long long *)puVar10;
            *(long long *)puVar14 = temp_v17 + temp_v4;
            temp_v8 = FUN_00203b1c();
            temp_v10 = (unsigned int)*(unsigned short *)(temp_v11 + 100) + (int)*(short *)(temp_v12 + 0x78b2);
            if (temp_v10 >= temp_v8) {
              *(unsigned char *)(temp_v12 + 0x78b6) = 0;
              *puVar10 = 0;
              *(unsigned int *)(temp_v12 + 0x78ac) = 0;
              *(unsigned short *)(temp_v12 + 0x78b4) = 0;
              *puVar8 = 1;
            }
            else {
              temp_v16 = FUN_004ccdb8(*(unsigned short *)(temp_v11 + 0x62),temp_v10,
                                    (int)*(short *)(temp_v12 + 0x78b8));
              temp_v7 = temp_v16 * 0x1000;
              temp_v15 = temp_v16 >> 0x14;
              if (temp_v15 < *(unsigned int *)(temp_v12 + 0x78ac) ||
                  *(unsigned int *)(temp_v12 + 0x78ac) - temp_v15 < (unsigned int)(temp_v7 <= *puVar10)) {
                temp_v8 = FUN_004bd340(temp_v11,2);
                *(unsigned short *)(temp_v11 + 0x60) = 0;
                if (temp_v8 != 0) {
                  FUN_004bd3ec(temp_v11,2);
                }
                temp_v16 = *puVar10 + temp_v16 * -0x1000;
                temp_v9 = *puVar14;
                *puVar14 = temp_v9 - temp_v16;
                *(unsigned int *)(temp_v12 + 0x78a4) =
                     *(int *)(temp_v12 + 0x78a4) -
                     ((*(int *)(temp_v12 + 0x78ac) - (temp_v15 + (*puVar10 < temp_v7))) +
                     (unsigned int)(temp_v9 < temp_v16));
                *(unsigned int *)(temp_v12 + 0x78ac) = temp_v15;
                *puVar10 = temp_v7;
                *(short *)(temp_v12 + 0x78b2) = *(short *)(temp_v12 + 0x78b2) + 1;
                *(unsigned char *)(temp_v12 + 0x78b6) = 1;
                temp_v8 = param_1 + (short)(temp_v0 + 1) * 2;
                *(unsigned char *)(temp_v12 + 0x78ba) = 1;
                if (*(short *)(temp_v8 + 0x74ea) < 0) {
                  *(unsigned short *)(temp_v8 + 0x74ea) = *(unsigned short *)(param_1 + 0x7536);
                  *(short *)(param_1 + 0x7536) = *(short *)(param_1 + 0x7536) + 1;
                }
                if (*(char *)(param_1 + 0x7e40) == '\0') {
                  FUN_00169ddc(0x100021e);
                  *(unsigned char *)(param_1 + 0x7e48) = 1;
                }
                *(unsigned char *)(param_1 + 0x7e40) = 1;
                temp_v11 = FUN_004bd0d8(temp_v11);
                if (temp_v11 == 0) {
                  temp_v14 = 0;
                }
                temp_v12 = 0;
                if (temp_v11 != 0) {
                  do {
                    temp_v11 = FUN_001ab888();
                    if (*(char *)(temp_v11 + temp_v12 + 0x1ca0) == temp_v6) break;
                    temp_v12 = temp_v12 + 1;
                  } while (temp_v12 < 3);
                  temp_v6 = param_1 + temp_v6 * 0x8c + 0x2550;
                  FUN_001846d0(temp_v6,2);
                  FUN_00184b80(temp_v6,0x1a);
                  FUN_00387240(temp_v6,0x1d,0x2f);
                  temp_v11 = FUN_001834a4(0x1d,temp_v12 + 0x31);
                  temp_v1 = *(short *)(temp_v11 + 10);
                  temp_v2 = *(short *)(temp_v11 + 8);
                }
                else {
                  do {
                    temp_v11 = FUN_001ab888();
                    if (-1 < *(char *)(temp_v11 + temp_v12 + 0x1c88)) {
                      temp_v11 = FUN_001ab888();
                      FUN_001ab854((int)*(char *)(temp_v11 + temp_v12 + 0x1c88));
                      temp_v11 = FUN_004bd0d8();
                      if (temp_v11 == 0) {
                        temp_v11 = FUN_001ab888();
                        if (*(char *)(temp_v11 + temp_v12 + 0x1c88) == temp_v6) break;
                        temp_v14 = temp_v14 + 1;
                      }
                    }
                    temp_v12 = temp_v12 + 1;
                  } while (temp_v12 < 0x18);
                  temp_v6 = param_1 + temp_v6 * 0x8c + 0x2550;
                  FUN_001846d0(temp_v6,3);
                  FUN_00184b80(temp_v6,0x62);
                  FUN_00387240(temp_v6,0x1d,0x67);
                  temp_v11 = FUN_001834a4(0x1d,temp_v14 + 0x68);
                  temp_v1 = *(short *)(temp_v11 + 10);
                  temp_v2 = *(short *)(temp_v11 + 8);
                }
                FUN_00358e94(temp_v6,(int)temp_v2,(int)temp_v1);
              }
            }
          }
        }
      }
    }
    temp_v13 = temp_v13 + 1;
    if (temp_v13 >= 0x18) {
      return;
    }
  } while( 1 );
}
