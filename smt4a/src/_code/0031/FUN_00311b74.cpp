/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00311b74` (_code @ 0x311b74, 0xb10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int FUN_00233e10(int, unsigned int);
int FUN_002b4cf4(void);
int libc_strcpy(unsigned int *, int);
int mathPositionHeadingDegrees(void);
int FUN_0050d8e4(void);

/* stack frame of void: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spD0; /* 0xd0: local_d0 */
} void_stack;

extern int DAT_00580c90; /* 0x580c90 */
extern int DAT_005f1638; /* 0x5f1638 */
extern int DAT_005f163c; /* 0x5f163c */
extern unsigned int DAT_005f1640; /* 0x5f1640 */
extern int DAT_005f1644; /* 0x5f1644 */
extern int DAT_005f1648; /* 0x5f1648 */
extern int DAT_005f1658; /* 0x5f1658 */
extern unsigned int DAT_005f165c; /* 0x5f165c */
extern unsigned int DAT_005f1660; /* 0x5f1660 */
extern unsigned int DAT_005f16a0; /* 0x5f16a0 */
extern unsigned int DAT_005f16a4; /* 0x5f16a4 */
extern unsigned int DAT_005f16a8; /* 0x5f16a8 */
extern unsigned int DAT_005f16ac; /* 0x5f16ac */
extern unsigned int DAT_005f16b0; /* 0x5f16b0 */
extern unsigned int DAT_005f16b4; /* 0x5f16b4 */
extern unsigned int DAT_005f16b8; /* 0x5f16b8 */
extern float DAT_005f16bc; /* 0x5f16bc */
extern float DAT_005f16c0; /* 0x5f16c0 */
extern float DAT_005f16c4; /* 0x5f16c4 */
extern float DAT_005f16c8; /* 0x5f16c8 */
extern float DAT_005f16cc; /* 0x5f16cc */
extern int DAT_005f16d0; /* 0x5f16d0 */
extern int DAT_005f16d4; /* 0x5f16d4 */
extern int DAT_005f16e0; /* 0x5f16e0 */
extern signed char DAT_005f16e4; /* 0x5f16e4 */
extern unsigned char DAT_005f16e5; /* 0x5f16e5 */
extern unsigned char DAT_005f16e6; /* 0x5f16e6 */
extern unsigned char DAT_005f16e7; /* 0x5f16e7 */
extern unsigned char DAT_005f16e8; /* 0x5f16e8 */
extern unsigned short DAT_005f16ea; /* 0x5f16ea */
extern unsigned short DAT_005f16ec; /* 0x5f16ec */
extern signed char DAT_005f1725; /* 0x5f1725 */
extern unsigned char DAT_005f1726; /* 0x5f1726 */
extern signed char DAT_005f1727; /* 0x5f1727 */
extern unsigned char DAT_005f1728; /* 0x5f1728 */
extern signed char DAT_005f1729; /* 0x5f1729 */
extern unsigned char DAT_005f172a; /* 0x5f172a */
extern unsigned char DAT_005f185d; /* 0x5f185d */
extern unsigned char DAT_005f185e; /* 0x5f185e */
extern unsigned int DAT_005f1860; /* 0x5f1860 */
extern unsigned int DAT_005f1864; /* 0x5f1864 */
extern unsigned int DAT_005f1868; /* 0x5f1868 */
extern unsigned int DAT_005f186c; /* 0x5f186c */
extern unsigned int DAT_005f1870; /* 0x5f1870 */
extern unsigned int DAT_005f1874; /* 0x5f1874 */
extern unsigned int DAT_005f1878; /* 0x5f1878 */
extern unsigned char DAT_005f187c; /* 0x5f187c */
extern unsigned char DAT_005f32a0; /* 0x5f32a0 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_00233e10. */
/* Supplied declaration required: FUN_002b4cf4. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: mathPositionHeadingDegrees. */
/* Supplied declaration required: FUN_0050d8e4. */


void FUN_00311b74(void)

{
/* irregular: 3 goto(s); irregular input(s): in_s0, in_s1, in_s2, in_s3, in_s4, in_s5, in_s6; 8 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  float *pfVar7;
  int *piVar8;
  int temp_v6;
  int temp_v7;
  unsigned int *puVar11;
  float in_s0;
  float temp_v8;
  unsigned int in_s1;
  float temp_v9;
  float in_s2;
  float temp_v10;
  float temp_v11;
  float in_s3;
  float in_s4;
  float in_s5;
  float in_s6;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  int temp_v23;
  unsigned long long temp_v24;
  
  temp_v6 = 0;
  temp_v16 = (unsigned long long)in_s1;
  temp_v23 = 0;
  DAT_005f1638 = -1;
  DAT_005f165c = 0xffffffff;
  DAT_005f16ac = 0xffffffff;
  DAT_005f185d = 0;
  DAT_005f1860 = 0;
  DAT_005f1864 = 0;
  DAT_005f185e = 0;
  DAT_005f187c = 0;
  DAT_005f16e4 = '\0';
  DAT_005f16ec = 0xffff;
  if (0 < DAT_00580c90) {
    temp_v20 = 50.0f;
    temp_v22 = 45.0f;
    temp_v19 = 0.0f;
    temp_v21 = 360.0f;
    temp_v15 = in_s0;
    do {
      temp_v3 = temp_v6 * 0x17c;
      if (*(char *)(temp_v3 + 0x5f3404) == '\0') {
        temp_v5 = *(int *)(temp_v6 * 4 + 0x5f3020);
        piVar8 = *(int **)(*(int *)(temp_v5 + 0x14) + 0x1c);
        temp_v7 = *piVar8;
        temp_v10 = (float)temp_v16;
        if (temp_v7 != 0) {
          if (temp_v7 != 1) {
            if (temp_v7 == 2) {
              temp_v7 = 0;
              do {
                temp_v4 = temp_v7 * 0xc + temp_v6 * 0x17c;
                if ((temp_v15 * *(float *)(&DAT_005f32a0 + temp_v4 + 0x7c) +
                     (temp_v10 + temp_v22) * *(float *)(&DAT_005f32a0 + temp_v4 + 0x80) +
                    in_s2 * *(float *)(&DAT_005f32a0 + temp_v4 + 0x84)) -
                    *(float *)(&DAT_005f32a0 + temp_v7 * 4 + temp_v6 * 0x17c + 0xc4) < temp_v19)
                goto LAB_00312644;
                temp_v7 = temp_v7 + 1;
              } while (temp_v7 < 6);
              temp_v5 = *(int *)(*(int *)(temp_v5 + 0x14) + 4);
              if ((-1 < temp_v5) &&
                 (((temp_v10 = in_s3, *(char *)(temp_v3 + 0x5f33c8) == '\0' ||
                   (FUN_002b4cf4(), 0xc2b40000 < (unsigned int)in_s3)) ||
                  (temp_v0 = (int)in_s3 >= 0x42b40001, in_s3 = temp_v10, temp_v0)))) {
                temp_v7 = *(int *)(temp_v3 + 0x5f33cc);
                in_s3 = temp_v10;
                if (temp_v7 != 3) {
                  if (temp_v7 != 0x200) {
                    if (temp_v7 == 0x201) {
                      FUN_002b4cf4();
                      if ((0xc2b40000 < (unsigned int)temp_v10) || ((int)temp_v10 >= 0x42b40001)) {
                        DAT_005f185e = 1;
                        temp_v5 = *(int *)(temp_v6 * 4 + 0x5f3020);
                        DAT_005f1860 = *(unsigned int *)(*(int *)(temp_v5 + 0x14) + 0xc);
                        DAT_005f1864 = *(unsigned int *)(*(int *)(temp_v5 + 0x14) + 0x10);
                        DAT_005f1638 = 0x201;
                        DAT_005f163c = *(int *)(*(int *)(temp_v5 + 0x14) + 8);
                        DAT_005f1640 = *(unsigned int *)(temp_v3 + 0x5f33d0);
                      }
                    }
                    else if (temp_v7 != 0x204) {
                      if (temp_v7 == 0x202) {
                        temp_v8 = in_s0;
                        mathPositionHeadingDegrees();
                        FUN_002b4cf4();
                        in_s3 = temp_v10;
                        if ((0xc2b40000 < (unsigned int)temp_v8) || ((int)temp_v8 >= 0x42b40001)) {
                          DAT_005f187c = 1;
                          temp_v5 = *(int *)(temp_v6 * 4 + 0x5f3020);
                          puVar11 = *(unsigned int **)(temp_v5 + 0xc);
                          DAT_005f1868 = *puVar11;
                          DAT_005f186c = puVar11[1];
                          DAT_005f1870 = puVar11[2];
                          DAT_005f1874 = *(unsigned int *)(temp_v3 + 0x5f3318);
                          DAT_005f1878 = *(unsigned int *)(*(int *)(temp_v5 + 0x14) + 8);
                          DAT_005f185e = 1;
                          DAT_005f1860 = *(unsigned int *)(*(int *)(temp_v5 + 0x14) + 0xc);
                          DAT_005f1864 = *(unsigned int *)(*(int *)(temp_v5 + 0x14) + 0x10);
                        }
                      }
                      else {
                        DAT_005f1640 = *(unsigned int *)(temp_v3 + 0x5f33d0);
                        DAT_005f1644 = (int)*(short *)(temp_v3 + 0x5f340a);
                        DAT_005f1648 = (int)*(char *)(temp_v3 + 0x5f340c);
                        DAT_005f16e0 = (int)*(char *)(temp_v3 + 0x5f340d);
                        temp_v4 = *(int *)(temp_v6 * 4 + 0x5f3020);
                        DAT_005f16a0 = *(unsigned int *)(*(int *)(temp_v4 + 0x14) + 8);
                        DAT_005f16a4 = *(unsigned int *)(*(int *)(temp_v4 + 0x14) + 0xc);
                        DAT_005f16a8 = *(unsigned int *)(*(int *)(temp_v4 + 0x14) + 0x10);
                        DAT_005f16ac = *(unsigned int *)(temp_v3 + 0x5f33c4);
                        puVar11 = *(unsigned int **)(temp_v4 + 0xc);
                        DAT_005f16b0 = *puVar11;
                        DAT_005f16b4 = puVar11[1];
                        DAT_005f16b8 = puVar11[2];
                        DAT_005f1638 = temp_v5;
                        DAT_005f163c = temp_v7;
                        if (!(temp_v5 == 0x14 || temp_v5 == 0x16)) {
                          DAT_005f16bc = *(float *)(temp_v3 + 0x5f3318) + 180.0f;
                        }
                        else {
                          temp_v8 = in_s0;
                          mathPositionHeadingDegrees();
                          DAT_005f16bc = temp_v8;
                        }
                        if ((int)DAT_005f16bc >= 0x43b40001) {
                          DAT_005f16bc = DAT_005f16bc - temp_v21;
                        }
                        temp_v11 = *(float *)(temp_v3 + 0x5f3314);
                        temp_v9 = *(float *)(temp_v3 + 0x5f330c);
                        temp_v8 = *(float *)(temp_v3 + 0x5f3310);
                        DAT_005f16c8 = temp_v11 * 100.0f;
                        DAT_005f16c0 = temp_v9 * 100.0f;
                        DAT_005f16c4 = temp_v8 * 100.0f;
                        if (DAT_005f1638 == 0x3e) {
                          DAT_005f16c0 = temp_v9 * 400.0f;
                          DAT_005f16c4 = temp_v8 * 400.0f;
                          DAT_005f16c8 = temp_v11 * 400.0f;
                        }
                        if (*(int *)(temp_v3 + 0x5f33cc) == -0x7fdefbfa) {
                          DAT_005f16c4 = temp_v8 * 120.0f;
                          DAT_005f16c8 = temp_v11 * 120.0f;
                          DAT_005f16c0 = temp_v9 * 120.0f;
                        }
                        DAT_005f16c8 = *(float *)(temp_v3 + 0x5f3308) + DAT_005f16c8;
                        DAT_005f16c4 = *(float *)(temp_v3 + 0x5f3304) + DAT_005f16c4;
                        DAT_005f16c0 = *(float *)(temp_v3 + 0x5f3300) + DAT_005f16c0;
                        DAT_005f16cc = *(float *)(temp_v3 + 0x5f3318);
                        temp_v5 = *(int *)(temp_v6 * 4 + 0x5f3020);
                        DAT_005f1725 = *(char *)(*(int *)(temp_v5 + 0x14) + 0x14);
                        DAT_005f1726 = *(unsigned char *)(*(int *)(temp_v5 + 0x14) + 0x15);
                        DAT_005f1727 = *(char *)(*(int *)(temp_v5 + 0x14) + 0x16);
                        DAT_005f1728 = *(unsigned char *)(*(int *)(temp_v5 + 0x14) + 0x17);
                        DAT_005f1729 = *(char *)(*(int *)(temp_v5 + 0x14) + 0x18);
                        DAT_005f172a = *(unsigned char *)(*(int *)(temp_v5 + 0x14) + 0x19);
                        DAT_005f16d0 = (int)*(short *)(temp_v3 + 0x5f3406);
                        DAT_005f16d4 = (int)*(short *)(temp_v3 + 0x5f3408);
                        DAT_005f16ea = *(unsigned short *)(temp_v3 + 0x5f33fc);
                        DAT_005f16ec = *(unsigned short *)(temp_v3 + 0x5f33fe);
                        if (*(char *)(temp_v3 + 0x5f340e) != '\0') {
                          DAT_005f16e5 = *(unsigned char *)(temp_v3 + 0x5f340f);
                          DAT_005f16e6 = *(unsigned char *)(temp_v3 + 0x5f3410);
                          DAT_005f16e7 = *(unsigned char *)(temp_v3 + 0x5f3411);
                          DAT_005f16e8 = *(unsigned char *)(temp_v3 + 0x5f3412);
                          DAT_005f16e4 = *(char *)(temp_v3 + 0x5f340e);
                        }
                        if (DAT_005f1638 == 0x3a || DAT_005f1638 == 0x41) {
                          DAT_005f185e = 1;
                          DAT_005f1860 = *(unsigned int *)(*(int *)(temp_v5 + 0x14) + 8);
                          DAT_005f1864 = *(unsigned int *)(*(int *)(temp_v5 + 0x14) + 0xc);
                        }
                        if (((DAT_005f1638 == 0x3d || DAT_005f1638 == 0x3b) &&
                            ((DAT_005f1725 != '\0' || DAT_005f1727 != '\0') || DAT_005f1729 != '\0')
                            ) && (*(int *)(*(int *)(temp_v5 + 0x14) + 8) != 0)) {
                          DAT_005f185e = 1;
                          DAT_005f1860 = *(unsigned int *)(*(int *)(temp_v5 + 0x14) + 8);
                          DAT_005f1864 = *(unsigned int *)(*(int *)(temp_v5 + 0x14) + 0xc);
                        }
                        DAT_005f1658 = *(int *)(temp_v3 + 0x5f33d4);
                        if (DAT_005f1658 == -1) {
                          DAT_005f1658 = 0;
                        }
                        else {
                          DAT_005f165c = 0xffffffff;
                          libc_strcpy(&DAT_005f1660,temp_v3 + 0x5f33d8);
                        }
                        temp_v23 = FUN_00233e10(1,DAT_005f16ac);
                        in_s3 = temp_v10;
                      }
                    }
                    else {
                      DAT_005f185e = 1;
                      temp_v5 = *(int *)(temp_v6 * 4 + 0x5f3020);
                      DAT_005f1860 = *(unsigned int *)(*(int *)(temp_v5 + 0x14) + 0xc);
                      DAT_005f1864 = *(unsigned int *)(*(int *)(temp_v5 + 0x14) + 0x10);
                      DAT_005f1638 = 0x204;
                      DAT_005f163c = *(int *)(*(int *)(temp_v5 + 0x14) + 8);
                      DAT_005f1640 = *(unsigned int *)(temp_v3 + 0x5f33d0);
                    }
                  }
                  else {
                    FUN_002b4cf4();
                    if ((0xc2b40000 < (unsigned int)temp_v10) || ((int)temp_v10 >= 0x42b40001)) {
                      DAT_005f185e = 1;
                      temp_v3 = *(int *)(temp_v6 * 4 + 0x5f3020);
                      DAT_005f1860 = *(unsigned int *)(*(int *)(temp_v3 + 0x14) + 0xc);
                      DAT_005f1864 = *(unsigned int *)(*(int *)(temp_v3 + 0x14) + 0x10);
                    }
                  }
                }
                else {
                  DAT_005f185d = 1;
                  temp_v5 = *(int *)(temp_v6 * 4 + 0x5f3020);
                  puVar11 = *(unsigned int **)(temp_v5 + 0xc);
                  DAT_005f1868 = *puVar11;
                  DAT_005f186c = puVar11[1];
                  DAT_005f1870 = puVar11[2];
                  DAT_005f1874 = *(unsigned int *)(temp_v3 + 0x5f3318);
                  DAT_005f1878 = *(unsigned int *)(*(int *)(temp_v5 + 0x14) + 8);
                  FUN_002b4cf4();
                  if ((0xc2b40000 < (unsigned int)temp_v10) || ((int)temp_v10 >= 0x42b40001)) {
                    DAT_005f185e = 1;
                    temp_v3 = *(int *)(temp_v6 * 4 + 0x5f3020);
                    DAT_005f1860 = *(unsigned int *)(*(int *)(temp_v3 + 0x14) + 0xc);
                    DAT_005f1864 = *(unsigned int *)(*(int *)(temp_v3 + 0x14) + 0x10);
                  }
                }
              }
            }
          }
          else {
            puVar11 = *(unsigned int **)(temp_v5 + 0xc);
            temp_v14 = *puVar11;
            temp_v12 = puVar11[1];
            temp_v13 = puVar11[2];
            temp_v9 = (temp_v15 * *(float *)(temp_v3 + 0x5f331c) +
                      (temp_v10 + temp_v20) * *(float *)(temp_v3 + 0x5f3320) +
                     in_s2 * *(float *)(temp_v3 + 0x5f3324)) - *(float *)(temp_v3 + 0x5f3364);
            temp_v8 = (in_s4 * *(float *)(temp_v3 + 0x5f331c) +
                      (in_s5 + temp_v20) * *(float *)(temp_v3 + 0x5f3320) +
                     in_s6 * *(float *)(temp_v3 + 0x5f3324)) - *(float *)(temp_v3 + 0x5f3364);
            if ((temp_v19 > temp_v9) && (temp_v8 >= temp_v19)) {
              temp_v7 = -1;
            }
            else {
              if ((temp_v9 < temp_v19) || (temp_v19 <= temp_v8)) goto LAB_00312644;
              temp_v7 = 1;
            }
            temp_v9 = in_s2;
            temp_v8 = temp_v19;
            if (*(short *)(temp_v3 + 0x5f3418) != 0) {
              temp_v9 = temp_v19;
              temp_v8 = temp_v15;
            }
            temp_v4 = 0;
            do {
              temp_v2 = temp_v4 * 0xc + temp_v3;
              if ((temp_v8 * *(float *)(&DAT_005f32a0 + temp_v2 + 0x88) +
                   (temp_v10 + temp_v20) * *(float *)(&DAT_005f32a0 + temp_v2 + 0x8c) +
                  temp_v9 * *(float *)(&DAT_005f32a0 + temp_v2 + 0x90)) -
                  *(float *)(&DAT_005f32a0 + temp_v4 * 4 + temp_v3 + 200) < temp_v19) {
                *(unsigned short *)(temp_v3 + 0x5f341a) = 0;
                goto LAB_00312644;
              }
              temp_v4 = temp_v4 + 1;
            } while (temp_v4 < 4);
            *(short *)(temp_v3 + 0x5f341a) = (short)temp_v7;
            if ((*(char *)(temp_v3 + 0x5f33c8) == '\0' || temp_v7 == 1) &&
               (temp_v7 = *(int *)(*(int *)(temp_v5 + 0x14) + 4), -1 < temp_v7)) {
              DAT_005f163c = *(int *)(temp_v3 + 0x5f33cc);
              DAT_005f1640 = *(unsigned int *)(temp_v3 + 0x5f33d0);
              DAT_005f1644 = (int)*(short *)(temp_v3 + 0x5f340a);
              DAT_005f1648 = (int)*(char *)(temp_v3 + 0x5f340c);
              DAT_005f16e0 = (int)*(char *)(temp_v3 + 0x5f340d);
              DAT_005f16a0 = *(unsigned int *)(*(int *)(temp_v5 + 0x14) + 8);
              DAT_005f16a4 = *(unsigned int *)(*(int *)(temp_v5 + 0x14) + 0xc);
              DAT_005f16a8 = *(unsigned int *)(*(int *)(temp_v5 + 0x14) + 0x10);
              DAT_005f16cc = *(float *)(temp_v3 + 0x5f3318);
              DAT_005f16bc = DAT_005f16cc + 180.0f;
              if ((int)DAT_005f16bc >= 0x43b40001) {
                DAT_005f16bc = DAT_005f16bc - temp_v21;
              }
              DAT_005f16c0 = *(float *)(temp_v3 + 0x5f3300) + *(float *)(temp_v3 + 0x5f330c) * 100.0f;
              DAT_005f16c4 = *(float *)(temp_v3 + 0x5f3304) + *(float *)(temp_v3 + 0x5f3310) * 100.0f;
              DAT_005f16c8 = *(float *)(temp_v3 + 0x5f3308) + *(float *)(temp_v3 + 0x5f3314) * 100.0f;
              DAT_005f1725 = *(char *)(*(int *)(temp_v5 + 0x14) + 0x14);
              DAT_005f1726 = *(unsigned char *)(*(int *)(temp_v5 + 0x14) + 0x15);
              DAT_005f1727 = *(char *)(*(int *)(temp_v5 + 0x14) + 0x16);
              DAT_005f1728 = *(unsigned char *)(*(int *)(temp_v5 + 0x14) + 0x17);
              DAT_005f1729 = *(char *)(*(int *)(temp_v5 + 0x14) + 0x18);
              DAT_005f172a = *(unsigned char *)(*(int *)(temp_v5 + 0x14) + 0x19);
              DAT_005f16d0 = (int)*(short *)(temp_v3 + 0x5f3406);
              DAT_005f16d4 = (int)*(short *)(temp_v3 + 0x5f3408);
              DAT_005f16ea = *(unsigned short *)(temp_v3 + 0x5f33fc);
              DAT_005f16ec = *(unsigned short *)(temp_v3 + 0x5f33fe);
              if (*(char *)(temp_v3 + 0x5f340e) != '\0') {
                DAT_005f16e5 = *(unsigned char *)(temp_v3 + 0x5f340f);
                DAT_005f16e6 = *(unsigned char *)(temp_v3 + 0x5f3410);
                DAT_005f16e7 = *(unsigned char *)(temp_v3 + 0x5f3411);
                DAT_005f16e8 = *(unsigned char *)(temp_v3 + 0x5f3412);
                DAT_005f16e4 = *(char *)(temp_v3 + 0x5f340e);
              }
              DAT_005f1658 = *(int *)(temp_v3 + 0x5f33d4);
              DAT_005f1638 = temp_v7;
              DAT_005f16b0 = temp_v14;
              DAT_005f16b4 = temp_v12;
              DAT_005f16b8 = temp_v13;
              if (DAT_005f1658 == -1) {
                DAT_005f1658 = 0;
              }
              else {
                DAT_005f165c = 0xffffffff;
                libc_strcpy(&DAT_005f1660,temp_v3 + 0x5f33d8);
              }
            }
          }
        }
        else {
          pfVar7 = *(float **)(temp_v5 + 0xc);
          temp_v8 = (float)piVar8[1];
          temp_v17 = *pfVar7;
          temp_v16 = CONCAT44(temp_v17,temp_v10);
          temp_v9 = temp_v15 - temp_v17;
          temp_v18 = pfVar7[2];
          temp_v24 = CONCAT44(pfVar7[1],temp_v18);
          temp_v10 = temp_v10 - pfVar7[1];
          temp_v11 = in_s2 - temp_v18;
          if ((int)romwright_sqrt_4((temp_v17 - temp_v15) * (temp_v17 - temp_v15) + (temp_v18 - in_s2) * (temp_v18 - in_s2))
              < 0x43480000) {
            temp_v17 = in_s3;
            FUN_0050d8e4();
            FUN_002b4cf4();
            if (temp_v17 < temp_v19) {
              temp_v17 = -temp_v17;
            }
            if ((int)temp_v17 >= 0x42b40000) {
              temp_v1 = 0;
            }
            else {
              temp_v1 = 1;
            }
          }
          else {
            temp_v1 = 0;
          }
          if (((unsigned char)((romwright_sqrt_4(temp_v9 * temp_v9 + temp_v10 * temp_v10 + temp_v11 * temp_v11) < temp_v8 + 150.0f) &
                     temp_v1)) &&
             (temp_v5 = *(int *)(*(int *)(*(int *)(temp_v6 * 4 + 0x5f3020) + 0x14) + 4), -1 < temp_v5)) {
            DAT_005f163c = *(int *)(temp_v3 + 0x5f33cc);
            DAT_005f1640 = *(unsigned int *)(temp_v3 + 0x5f33d0);
            DAT_005f1644 = (int)*(short *)(temp_v3 + 0x5f340a);
            DAT_005f1648 = (int)*(char *)(temp_v3 + 0x5f340c);
            DAT_005f16e0 = (int)*(char *)(temp_v3 + 0x5f340d);
            DAT_005f16b0 = (unsigned int)(temp_v16 >> 0x20);
            DAT_005f16b4 = (unsigned int)((unsigned long long)temp_v24 >> 0x20);
            DAT_005f16b8 = (unsigned int)temp_v24;
            DAT_005f16ea = *(unsigned short *)(temp_v3 + 0x5f33fc);
            DAT_005f1658 = *(int *)(temp_v3 + 0x5f33d4);
            DAT_005f1638 = temp_v5;
            if (DAT_005f1658 == -1) {
              DAT_005f1658 = 0;
            }
            else {
              DAT_005f165c = 0xffffffff;
              libc_strcpy(&DAT_005f1660,temp_v3 + 0x5f33d8);
            }
          }
        }
      }
LAB_00312644:
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < DAT_00580c90);
    if (temp_v23 != 0) {
      return;
    }
  }
  FUN_00233e10(0,0xffffffff);
  return;
}

} /* extern "C" */
