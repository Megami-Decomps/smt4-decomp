/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ece9c` (_code @ 0x3ece9c, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_0010063a(int, int, int, unsigned char *);
int FUN_001628c0(unsigned char *, unsigned int, int, int);
int FUN_0018719c(...);
int FUN_001aba54(void);
int FUN_002e3d04(void);
int FUN_002e6354(...);
int FUN_002e6490(int);
int FUN_003eaf20(void);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);
int rt_memcpy_w(int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char LAB_0047e678; /* 0x47e678 */
extern unsigned char LAB_0047ec84; /* 0x47ec84 */
extern unsigned int DAT_0057113c; /* 0x57113c */
extern unsigned int DAT_00573ab0; /* 0x573ab0 */
extern unsigned int DAT_00573ab4; /* 0x573ab4 */
extern unsigned int DAT_00573cd0; /* 0x573cd0 */
extern unsigned int DAT_00573cd4; /* 0x573cd4 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0010063a. */
extern int FUN_0014aa78(void);
extern unsigned int FUN_0014af98(void);
/* Supplied declaration required: FUN_001628c0. */
extern int FUN_001633a0(unsigned int);
extern unsigned int FUN_00187180(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0018719c. */
extern unsigned int FUN_00192748(unsigned int);
extern int FUN_00192798(void);
extern unsigned int FUN_0019acdc(unsigned short, unsigned int);
/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_002e3d04. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_002e6490. */
/* Supplied declaration required: FUN_003eaf20. */
extern unsigned char *FUN_004aa7b0(unsigned int);
extern unsigned char *FUN_004ec93c(unsigned int);
extern int FUN_004ee568(unsigned int);
/* Supplied declaration required: rt_memcpy_w. */


unsigned char * FUN_003ece9c(int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s1; 12 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  short *psVar8;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int *piVar13;
  unsigned int temp_v10;
  int *piVar15;
  unsigned int temp_v11;
  int temp_v12;
  short temp_v13;
  int temp_v14;
  int temp_v15;
  int temp_v16;
  unsigned char temp_v17;
  unsigned char temp_v18;
  unsigned int in_fpscr;
  float temp_v19;
  unsigned int in_s1;
  float temp_v20;
  unsigned long long temp_v21;
  unsigned int uStack_dc;
  unsigned char temp_v22 [128];
  unsigned char temp_v23 [24];
  unsigned long long uStack_38;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  temp_v0 = FUN_004ee568(DAT_0057113c);
  if ((temp_v0 != 0) &&
     (puVar2 = (unsigned char *)FUN_004ec93c(DAT_0057113c), puVar2 != (unsigned char *)0x0)) {
    return puVar2;
  }
  temp_v0 = param_1;
  FUN_003eaf20();
  if (temp_v0 == 0) {
    return (unsigned char *)0x0;
  }
  puVar2 = (unsigned char *)
           ((*(unsigned int *)(param_1 + 0x45a0) & DAT_00573ab0) |
           (*(unsigned int *)(param_1 + 0x45a4) & DAT_00573ab4));
  if (puVar2 != (unsigned char *)0x0) {
    return puVar2;
  }
  puVar2 = (unsigned char *)FUN_004aa7b0(DAT_0057a9c8);
  if (puVar2 != (unsigned char *)0x0) {
    return puVar2;
  }
  FUN_003eaf20();
  temp_v1 = FUN_0019acdc(*(unsigned short *)(*(int *)(param_1 + 0x400) + 300),1);
  temp_v0 = FUN_004ee568(DAT_0057113c);
  temp_v0 = *(int *)(temp_v0 + 0x28);
  temp_v13 = *(short *)(temp_v0 + 0x1be);
  if (temp_v13 != 1) {
    if (temp_v13 != 2) {
      if (temp_v13 != 8) {
        return (unsigned char *)(temp_v0 + 0x100);
      }
      temp_v10 = (unsigned int)*(short *)(temp_v0 + 0x1c0);
      temp_v8 = 0;
    }
    else {
      temp_v8 = (unsigned int)*(short *)(temp_v0 + 0x1c0);
      temp_v10 = 0;
    }
  }
  else {
    temp_v10 = 0;
    temp_v8 = 0xffffffff;
  }
  uStack_38 = romwright_piece_4_4(in_s1,0x3f4ccccd);
  temp_v21 = 0x3f4ccccd;
  uStack_dc = 0;
  uStack_30 = temp_v1;
  uStack_2c = temp_v8;
  uStack_28 = temp_v10;
  if (temp_v8 != 0) {
    if ((int)temp_v8 >= 0) {
      FUN_001aba54();
      switch(*(unsigned char *)(temp_v8 + 0x23)) {
      case 0:
      case 1:
      case 2:
      case 7:
      case 8:
      case 9:
      case 0xb:
        uStack_dc = 1;
        break;
      case 3:
      case 4:
        uStack_dc = 2;
        break;
      default:
        uStack_dc = 0;
      }
    }
    else {
      uStack_dc = 1;
    }
  }
  else if (temp_v10 != 0) {
    uStack_dc = 2;
  }
  temp_v2 = FUN_00187180(10,9);
  temp_v3 = FUN_00192798();
  temp_v8 = FUN_00192748(temp_v2);
  temp_v0 = temp_v8 << 2;
  temp_v4 = temp_v0;
  FUN_002e3d04();
  temp_v5 = temp_v0;
  FUN_002e3d04();
  FUN_002e6354(temp_v4,temp_v0);
  FUN_002e6354(temp_v5,temp_v0);
  temp_v15 = 0;
  temp_v14 = 0;
  temp_v17 = 0;
  temp_v11 = 0;
  if (temp_v11 < temp_v8) {
    do {
      psVar8 = (short *)(temp_v3 + temp_v11 * 0x10);
      temp_v9 = (unsigned int)*psVar8;
      temp_v18 = temp_v9 == temp_v1;
      if (temp_v18) {
        temp_v9 = (unsigned int)(unsigned short)psVar8[6];
      }
      if (((temp_v18 && temp_v9 == 99) && (psVar8[3] != 0)) && (temp_v6 = FUN_0018719c(), temp_v6 != 0)) {
        temp_v17 = 1;
        break;
      }
      temp_v11 = temp_v11 + 1;
    } while (temp_v11 < temp_v8);
  }
  temp_v11 = 0;
  if (temp_v8 != 0) {
    do {
      psVar8 = (short *)(temp_v3 + temp_v11 * 0x10);
      if (((int)*psVar8 == temp_v1) && ((!temp_v17 || (psVar8[6] == 99)))) {
        temp_v9 = (unsigned int)psVar8[1];
        if ((temp_v9 == 3) || (psVar8[2] != 0)) {
          temp_v10 = uStack_2c;
          if (((unsigned short)psVar8[2] == uStack_2c) &&
             ((psVar8[3] == 0 || (temp_v6 = FUN_0018719c(psVar8[3]), temp_v6 != 0)))) {
            *(short **)(temp_v5 + temp_v14 * 4) = psVar8;
            temp_v14 = temp_v14 + 1;
          }
        }
        else {
          if (temp_v9 != 0) {
            temp_v10 = uStack_dc;
          }
          if ((temp_v9 == 0 || temp_v9 == temp_v10) &&
             ((psVar8[3] == 0 || (temp_v6 = FUN_0018719c(psVar8[3]), temp_v6 != 0)))) {
            *(short **)(temp_v4 + temp_v15 * 4) = psVar8;
            temp_v15 = temp_v15 + 1;
          }
        }
      }
      temp_v11 = temp_v11 + 1;
    } while (temp_v11 < temp_v8);
    if (temp_v15 + temp_v14 != 0) {
      FUN_002e3d04();
      FUN_002e6354();
      if (temp_v14 != 0) {
        rt_memcpy_w(temp_v0,temp_v5,temp_v14 << 2);
        temp_v15 = temp_v14;
      }
      else {
        rt_memcpy_w(temp_v0,temp_v4,temp_v15 << 2);
      }
      FUN_0010063a(temp_v0,temp_v15,4,&LAB_0047e678);
      temp_v14 = temp_v14 << 2;
      FUN_002e3d04();
      FUN_002e6354();
      temp_v6 = 0;
      temp_v13 = 1;
      temp_v16 = 0;
      temp_v3 = 0;
      temp_v17 = 0;
      if (0 < temp_v15) {
        do {
          temp_v12 = *(int *)(temp_v0 + temp_v3 * 4);
          if (*(short *)(temp_v12 + 0xc) != 0) {
            if (*(short *)(temp_v12 + 0xc) != 99) {
              temp_v7 = FUN_0014aa78();
              if ((((DAT_00573cd4 & *(unsigned int *)(temp_v7 + 0x45a4)) == 0 &&
                    (*(unsigned int *)(temp_v7 + 0x45a0) & DAT_00573cd0) == 0) && (temp_v13 != 99)) &&
                 (temp_v13 <= *(short *)(temp_v12 + 0xc))) {
                *(int *)(temp_v14 + temp_v6 * 4) = temp_v12;
                temp_v7 = (int)*(short *)(temp_v12 + 0xe);
                temp_v13 = *(short *)(temp_v12 + 0xc);
                temp_v6 = temp_v6 + 1;
                temp_v12 = temp_v7;
                if (temp_v7 == 0) {
                  temp_v12 = 10;
                }
                temp_v16 = temp_v16 + temp_v12;
                if (temp_v7 == 10) {
                  temp_v17 = 1;
                }
              }
            }
            else {
              temp_v7 = FUN_0014aa78();
              if (((DAT_00573cd4 & *(unsigned int *)(temp_v7 + 0x45a4)) == 0 &&
                   (*(unsigned int *)(temp_v7 + 0x45a0) & DAT_00573cd0) == 0) &&
                 (temp_v7 = FUN_0018719c(*(unsigned short *)(temp_v12 + 6)), temp_v7 != 0)) {
                *(int *)(temp_v14 + temp_v6 * 4) = temp_v12;
                temp_v12 = (int)*(short *)(temp_v12 + 0xe);
                temp_v13 = 99;
                if (temp_v12 == 0) {
                  temp_v12 = 10;
                }
                temp_v16 = temp_v16 + temp_v12;
                temp_v6 = temp_v6 + 1;
              }
            }
          }
          else if ((temp_v13 != 99) && (!temp_v17)) {
            *(int *)(temp_v14 + temp_v6 * 4) = temp_v12;
            temp_v12 = (int)*(short *)(temp_v12 + 0xe);
            temp_v13 = 0;
            if (temp_v12 == 0) {
              temp_v12 = 10;
            }
            temp_v16 = temp_v16 + temp_v12;
            temp_v6 = temp_v6 + 1;
          }
          temp_v20 = (float)temp_v21;
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < temp_v15);
        if (temp_v6 != 0) {
          temp_v15 = temp_v16 << 2;
          FUN_002e3d04();
          FUN_002e6354();
          temp_v12 = 0;
          FUN_00100388(temp_v22,&LAB_0047ec84);
          temp_v3 = 0;
          if (temp_v3 < temp_v6) {
            do {
              temp_v1 = (unsigned int)*(short *)(*(int *)(temp_v14 + temp_v3 * 4) + 0xe);
              temp_v17 = -1 < (int)temp_v1;
              if (temp_v1 == 0) {
                temp_v1 = 10;
              }
              if (temp_v17) {
                piVar15 = (int *)(temp_v15 + temp_v12 * 4);
                piVar13 = piVar15 + -1;
                if ((temp_v1 & 1) != 0) {
                  *piVar15 = temp_v3;
                  piVar13 = piVar15;
                }
                for (temp_v7 = (int)temp_v1 >> 1; temp_v7 != 0; temp_v7 = temp_v7 - 1) {
                  piVar13[1] = temp_v3;
                  piVar13 = piVar13 + 2;
                  *piVar13 = temp_v3;
                }
                temp_v12 = temp_v12 + temp_v1;
              }
              temp_v3 = temp_v3 + 1;
            } while (temp_v3 < temp_v6);
          }
          temp_v3 = FUN_001633a0((temp_v16 - 1U) & 0xffff);
          temp_v1 = *(unsigned int *)(*(int *)(temp_v14 + *(int *)(temp_v15 + temp_v3 * 4) * 4) + 8);
          if (((temp_v1 & 0xfff) != 0) && ((temp_v1 & 0xffffff) >> 0xc != 0)) {
            temp_v1 = (temp_v1 << 0x14) | (((temp_v1 & 0xffffff) >> 0xc) << 8) | ((temp_v1 >> 0x14) & 0xf0);
          }
          else {
            temp_v1 = 0;
          }
          if ((temp_v1 & 0xfffff) >> 8 == 0 || temp_v1 >> 0x14 == 0) {
            puVar2 = (unsigned char *)0x0;
          }
          else {
            FUN_00100388(temp_v23,"I%03u%03u");
            if ((temp_v1 & 0xff) != 0) {
              FUN_00100388(temp_v23,"%s%s");
            }
            temp_v2 = FUN_0014af98();
            temp_v19 = (float)VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v1 = VectorFloatToUnsigned(temp_v19 * temp_v20,3);
            puVar2 = temp_v23;
            FUN_001628c0(puVar2,temp_v1 & 0xff,2,0);
          }
          FUN_002e6490(temp_v15);
          FUN_002e6490(temp_v14);
          FUN_002e6490(temp_v0);
          FUN_002e6490(temp_v5);
          FUN_002e6490(temp_v4);
          return puVar2;
        }
      }
      FUN_002e6490(temp_v14);
      FUN_002e6490(temp_v0);
    }
  }
  FUN_002e6490(temp_v5);
  FUN_002e6490(temp_v4);
  return (unsigned char *)0x0;
}

} /* extern "C" */
