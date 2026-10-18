/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e364c` (_code @ 0x2e364c, 0x5e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char DAT_00580204; /* 0x580204 */
extern unsigned char DAT_00580205; /* 0x580205 */
extern int DAT_00580218; /* 0x580218 */
extern unsigned int DAT_005ed634; /* 0x5ed634 */
extern unsigned int DAT_005ed638; /* 0x5ed638 */
extern unsigned int DAT_005ed63c; /* 0x5ed63c */
extern unsigned int DAT_005ed640; /* 0x5ed640 */
extern unsigned int DAT_005ed644; /* 0x5ed644 */
extern unsigned int DAT_005ed648; /* 0x5ed648 */
extern unsigned int DAT_005ed64c; /* 0x5ed64c */
extern unsigned int DAT_005ed650; /* 0x5ed650 */
extern unsigned int DAT_005ed654; /* 0x5ed654 */
extern unsigned int DAT_005ed658; /* 0x5ed658 */
extern unsigned int DAT_005ed65c; /* 0x5ed65c */
extern unsigned int DAT_005ed660; /* 0x5ed660 */
extern unsigned int DAT_005f15fc; /* 0x5f15fc */
extern unsigned char DAT_005f1630; /* 0x5f1630 */
extern unsigned char DAT_005f1632; /* 0x5f1632 */
extern int DAT_005f1844; /* 0x5f1844 */
extern unsigned short DAT_005f1854; /* 0x5f1854 */
extern unsigned short DAT_005f187e; /* 0x5f187e */
extern unsigned short DAT_005f1880; /* 0x5f1880 */
extern unsigned int DAT_005f1a84; /* 0x5f1a84 */
extern unsigned int DAT_005f1a88; /* 0x5f1a88 */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002c28dc. */
/* Supplied declaration required: FUN_00314bbc. */
/* Supplied declaration required: FUN_00319f64. */
/* Supplied declaration required: FUN_003278c8. */
/* Supplied declaration required: FUN_00328150. */
/* Supplied declaration required: FUN_0033ab6c. */


unsigned int FUN_002e364c(float *param_1)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  unsigned int temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned long long temp_v9;
  unsigned long long temp_v10;
  float temp_v11 [7];
  
  temp_v2 = DAT_00580218;
  temp_v5 = 0;
  temp_v3 = 0x5e2714;
  temp_v4 = 0;
  DAT_00580204 = 0;
  DAT_00580205 = 0;
  temp_v10 = 0;
  temp_v7 = 65.0f;
  temp_v8 = *param_1;
  temp_v9 = *(unsigned long long *)(param_1 + 1);
  DAT_005f1854 = 0;
  DAT_005f1630 = 0xff;
  DAT_005f1632 = 0xff;
  DAT_005f1a84 = 0;
  DAT_005f1a88 = 0;
  if (0 < DAT_00580218) {
    do {
      if (*(char *)(temp_v3 + 8) != '\0') {
        temp_v1 = *(char *)(temp_v3 + 9);
        temp_v6 = romwright_fabs_4((temp_v8 * *(float *)(temp_v3 + 0xc) + (float)temp_v9 * *(float *)(temp_v3 + 0x10) +
                    (float)((unsigned long long)temp_v9 >> 0x20) * *(float *)(temp_v3 + 0x14)) -
                    *(float *)(temp_v3 + 0x18));
        if (temp_v1 != '\x01') {
          if (temp_v1 != '\x02') {
            if (temp_v1 != '\x03') {
              if (temp_v1 != '\x0e') {
                if (temp_v1 != '\x0f') {
                  if (temp_v1 != '\x04') {
                    if (temp_v1 != '\b') {
                      if (temp_v1 != '\t') {
                        if (temp_v1 != '\n') {
                          if (temp_v1 != '\v') {
                            if (((temp_v1 == '\r') && ((temp_v5 & 0x2000) == 0)) &&
                               (in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v7 <= temp_v6) << 0x1d)
                               , !romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0))) {
                              FUN_002c28dc(temp_v11,(int)*(char *)(temp_v3 + 4),
                                           (int)*(char *)(temp_v3 + 5),temp_v3);
                              temp_v0 = (in_fpscr & 0xfffffff) |
                                      ((unsigned int)(temp_v11[0] < (float)temp_v10) << 0x1f);
                              in_fpscr = temp_v0 | ((unsigned int)(NAN(temp_v11[0]) || NAN((float)temp_v10)) <<
                                                 0x1c);
                              if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                                FUN_003278c8((int)*(short *)(temp_v3 + 6));
                                FUN_00319f64((int)*(short *)(temp_v3 + 6));
                                DAT_005f1880 = *(unsigned short *)(temp_v3 + 10);
                                temp_v5 = temp_v5 | 0x2000;
                              }
                            }
                          }
                          else if (((temp_v5 & 0x800) == 0) &&
                                  (in_fpscr = (in_fpscr & 0xfffffff) |
                                              ((unsigned int)(temp_v7 <= temp_v6) << 0x1d),
                                  !romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0))) {
                            FUN_002c28dc(temp_v11,(int)*(char *)(temp_v3 + 4),
                                         (int)*(char *)(temp_v3 + 5),temp_v3);
                            temp_v0 = (in_fpscr & 0xfffffff) |
                                    ((unsigned int)(temp_v11[0] < (float)temp_v10) << 0x1f);
                            in_fpscr = temp_v0 | ((unsigned int)(NAN(temp_v11[0]) || NAN((float)temp_v10)) <<
                                               0x1c);
                            if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                              FUN_003278c8((int)*(short *)(temp_v3 + 6));
                              FUN_00319f64((int)*(short *)(temp_v3 + 6));
                              DAT_005f187e = *(unsigned short *)(temp_v3 + 10);
                              temp_v5 = temp_v5 | 0x800;
                            }
                          }
                        }
                        else if (((temp_v5 & 0x400) == 0) &&
                                (in_fpscr = (in_fpscr & 0xfffffff) |
                                            ((unsigned int)(temp_v7 <= temp_v6) << 0x1d),
                                !romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0))) {
                          FUN_002c28dc(temp_v11,(int)*(char *)(temp_v3 + 4),(int)*(char *)(temp_v3 + 5),
                                       temp_v3);
                          temp_v0 = (in_fpscr & 0xfffffff) |
                                  ((unsigned int)(temp_v11[0] < (float)temp_v10) << 0x1f);
                          in_fpscr = temp_v0 | ((unsigned int)(NAN(temp_v11[0]) || NAN((float)temp_v10)) << 0x1c
                                             );
                          if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                            temp_v5 = temp_v5 | 0x400;
                            DAT_005f1632 = (unsigned char)*(unsigned short *)(temp_v3 + 10);
                            DAT_005f1a84 = *(unsigned int *)(temp_v3 + 0x60);
                          }
                        }
                      }
                      else if (((temp_v5 & 0x200) == 0) &&
                              (in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v7 <= temp_v6) << 0x1d),
                              !romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0))) {
                        FUN_002c28dc(temp_v11,(int)*(char *)(temp_v3 + 4),(int)*(char *)(temp_v3 + 5),
                                     temp_v3);
                        temp_v0 = (in_fpscr & 0xfffffff) |
                                ((unsigned int)(temp_v11[0] < (float)temp_v10) << 0x1f);
                        in_fpscr = temp_v0 | ((unsigned int)(NAN(temp_v11[0]) || NAN((float)temp_v10)) << 0x1c);
                        if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                          temp_v5 = temp_v5 | 0x200;
                          DAT_005f1630 = (unsigned char)*(unsigned short *)(temp_v3 + 10);
                          DAT_005f1a84 = *(unsigned int *)(temp_v3 + 0x60);
                        }
                      }
                    }
                    else if (((temp_v5 & 0x100) == 0) &&
                            (in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v7 <= temp_v6) << 0x1d),
                            !romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0))) {
                      FUN_002c28dc(temp_v11,(int)*(char *)(temp_v3 + 4),(int)*(char *)(temp_v3 + 5),
                                   temp_v3);
                      temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v11[0] < (float)temp_v10) << 0x1f)
                      ;
                      in_fpscr = temp_v0 | ((unsigned int)(NAN(temp_v11[0]) || NAN((float)temp_v10)) << 0x1c);
                      if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                        DAT_005f1854 = *(unsigned short *)(temp_v3 + 10);
                        temp_v5 = temp_v5 | 0x100;
                      }
                    }
                  }
                  else if (((temp_v5 & 0x10) == 0) &&
                          (in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v7 <= temp_v6) << 0x1d),
                          !romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0))) {
                    FUN_002c28dc(temp_v11,(int)*(char *)(temp_v3 + 4),(int)*(char *)(temp_v3 + 5),temp_v3)
                    ;
                    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v11[0] < (float)temp_v10) << 0x1f);
                    in_fpscr = temp_v0 | ((unsigned int)(NAN(temp_v11[0]) || NAN((float)temp_v10)) << 0x1c);
                    if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                      DAT_005f1844 = (int)*(short *)(temp_v3 + 6);
                      temp_v5 = temp_v5 | 0x10;
                    }
                  }
                }
                else if (((temp_v5 & 0x8000) == 0) &&
                        (in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v7 <= temp_v6) << 0x1d),
                        !romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0))) {
                  FUN_002c28dc(temp_v11,(int)*(char *)(temp_v3 + 4),(int)*(char *)(temp_v3 + 5),temp_v3);
                  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v11[0] < (float)temp_v10) << 0x1f);
                  in_fpscr = temp_v0 | ((unsigned int)(NAN(temp_v11[0]) || NAN((float)temp_v10)) << 0x1c);
                  if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                    temp_v5 = temp_v5 | 0x8000;
                    DAT_005f1a88 = VectorSignedToFloat((int)*(short *)(temp_v3 + 10),
                                                       (unsigned char)(in_fpscr >> 0x16) & 3);
                  }
                }
              }
              else if (((temp_v5 & 0x4000) == 0) &&
                      (in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v7 <= temp_v6) << 0x1d),
                      !romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0))) {
                FUN_002c28dc(temp_v11,(int)*(char *)(temp_v3 + 4),(int)*(char *)(temp_v3 + 5),temp_v3);
                temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v11[0] < (float)temp_v10) << 0x1f);
                in_fpscr = temp_v0 | ((unsigned int)(NAN(temp_v11[0]) || NAN((float)temp_v10)) << 0x1c);
                if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                  DAT_005ed634 = *(unsigned int *)(temp_v3 + 0x5c);
                  DAT_005ed638 = *(unsigned int *)(temp_v3 + 0x60);
                  DAT_005ed63c = *(unsigned int *)(temp_v3 + 100);
                  temp_v5 = temp_v5 | 0x4000;
                  DAT_005ed640 = *(unsigned int *)(temp_v3 + 0x68);
                  DAT_005ed644 = *(unsigned int *)(temp_v3 + 0x6c);
                  DAT_005ed648 = *(unsigned int *)(temp_v3 + 0x70);
                  DAT_005ed64c = *(unsigned int *)(temp_v3 + 0x74);
                  DAT_005ed650 = *(unsigned int *)(temp_v3 + 0x78);
                  DAT_005ed654 = *(unsigned int *)(temp_v3 + 0x7c);
                  DAT_005ed658 = *(unsigned int *)(temp_v3 + 0x80);
                  DAT_005ed65c = *(unsigned int *)(temp_v3 + 0x84);
                  DAT_005ed660 = *(unsigned int *)(temp_v3 + 0x88);
                  DAT_00580204 = 1;
                  DAT_00580205 = 1;
                }
              }
            }
            else if (((temp_v5 & 8) == 0) &&
                    (in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v7 <= temp_v6) << 0x1d),
                    !romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0))) {
              FUN_002c28dc(temp_v11,(int)*(char *)(temp_v3 + 4),(int)*(char *)(temp_v3 + 5),temp_v3);
              temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v11[0] < (float)temp_v10) << 0x1f);
              in_fpscr = temp_v0 | ((unsigned int)(NAN(temp_v11[0]) || NAN((float)temp_v10)) << 0x1c);
              if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                DAT_005ed634 = *(unsigned int *)(temp_v3 + 0x5c);
                DAT_005ed638 = *(unsigned int *)(temp_v3 + 0x60);
                DAT_005ed63c = *(unsigned int *)(temp_v3 + 100);
                temp_v5 = temp_v5 | 8;
                DAT_005ed640 = *(unsigned int *)(temp_v3 + 0x68);
                DAT_005ed644 = *(unsigned int *)(temp_v3 + 0x6c);
                DAT_005ed648 = *(unsigned int *)(temp_v3 + 0x70);
                DAT_005ed64c = *(unsigned int *)(temp_v3 + 0x74);
                DAT_005ed650 = *(unsigned int *)(temp_v3 + 0x78);
                DAT_005ed654 = *(unsigned int *)(temp_v3 + 0x7c);
                DAT_005ed658 = *(unsigned int *)(temp_v3 + 0x80);
                DAT_005ed65c = *(unsigned int *)(temp_v3 + 0x84);
                DAT_005ed660 = *(unsigned int *)(temp_v3 + 0x88);
                DAT_00580204 = 1;
              }
            }
          }
          else if (((temp_v5 & 4) == 0) &&
                  (in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v7 <= temp_v6) << 0x1d),
                  !romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0))) {
            FUN_002c28dc(temp_v11,(int)*(char *)(temp_v3 + 4),(int)*(char *)(temp_v3 + 5),temp_v3);
            temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v11[0] < (float)temp_v10) << 0x1f);
            in_fpscr = temp_v0 | ((unsigned int)(NAN(temp_v11[0]) || NAN((float)temp_v10)) << 0x1c);
            if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              FUN_0033ab6c((int)*(short *)(temp_v3 + 6),1);
              FUN_00319f64((int)*(short *)(temp_v3 + 6));
              temp_v5 = temp_v5 | 4;
              FUN_00328150(DAT_005f15fc,(int)*(short *)(temp_v3 + 6));
              FUN_00314bbc();
            }
          }
        }
        else if (((temp_v5 & 2) == 0) &&
                (in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v7 <= temp_v6) << 0x1d),
                !romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0))) {
          FUN_002c28dc(temp_v11,(int)*(char *)(temp_v3 + 4),(int)*(char *)(temp_v3 + 5),temp_v3);
          temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v11[0] < (float)temp_v10) << 0x1f);
          in_fpscr = temp_v0 | ((unsigned int)(NAN(temp_v11[0]) || NAN((float)temp_v10)) << 0x1c);
          if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
            temp_v5 = temp_v5 | 2;
          }
        }
      }
      temp_v4 = temp_v4 + 1;
      temp_v3 = temp_v3 + 0xa8;
    } while (temp_v4 < temp_v2);
  }
  return temp_v5;
}
