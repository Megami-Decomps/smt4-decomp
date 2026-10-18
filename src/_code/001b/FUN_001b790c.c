/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b790c` (_code @ 0x1b790c, 0x56c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern int DAT_004342c8; /* 0x4342c8 */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_0027dc18. */
extern unsigned int FUN_0027dc58(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_0027dca0. */
extern int FUN_0027dd20(unsigned char *, int);
extern int FUN_0027dd78(unsigned int);
/* Supplied declaration required: FUN_002820a4. */
/* Supplied declaration required: FUN_00282b94. */
/* Supplied declaration required: FUN_00293c98. */
/* Supplied declaration required: FUN_00293ca8. */
extern int FUN_00297004(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002b740c. */
extern unsigned char *FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c615c. */
/* Supplied declaration required: FUN_003c1710. */
/* Supplied declaration required: FUN_003c1974. */


unsigned int FUN_001b790c(void)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 15 native warning(s); review required */
  unsigned char *pbVar1;
  int temp_v0;
  int temp_v1;
  unsigned char *pbVar4;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar8;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned short temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned char temp_v13;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  unsigned long long temp_v17;
  float temp_v18;
  unsigned long long temp_v19;
  unsigned long long temp_v20;
  
  pbVar1 = (unsigned char *)FUN_002c0ac8();
  temp_v16 = 0.0f;
  temp_v18 = temp_v16;
  if (DAT_004342c8 != 0) {
    temp_v0 = FUN_0027dd78(0);
    temp_v14 = *(float *)(temp_v0 + 0x10) - *(float *)(temp_v0 + 4);
    temp_v2 = in_fpscr & 0xfffffff;
    in_fpscr = temp_v2 | ((unsigned int)(temp_v14 == temp_v16) << 0x1e);
    temp_v13 = 0;
    temp_v18 = *(float *)(temp_v0 + 0xc);
    if (romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
      in_fpscr = temp_v2 | ((unsigned int)(*(float *)(temp_v0 + 0x18) - *(float *)(temp_v0 + 0xc) == temp_v16) <<
                         0x1e);
      temp_v13 = romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0);
      temp_v18 = temp_v16;
    }
    if (!temp_v13) {
      FUN_002820a4();
      temp_v18 = temp_v14;
    }
    in_s0 = 3.1415927f;
    temp_v18 = temp_v18 - 3.1415927f;
  }
  temp_v0 = 0;
  temp_v17 = CONCAT44(temp_v16,0x3f800000);
  temp_v20 = 0x3fc90fdb;
  temp_v19 = CONCAT44(0x4222f983,temp_v18);
  do {
    temp_v10 = *(int *)(pbVar1 + 0x1e98) + temp_v0 * 0x114;
    if ((temp_v10 != 0) && ((*(unsigned int *)(temp_v10 + 0x50) & 1) != 0)) {
      temp_v1 = FUN_0027dd20(pbVar1,temp_v10);
      if (temp_v1 < 0) {
        temp_v1 = 0;
      }
      pbVar4 = pbVar1;
      FUN_0027dca0(pbVar1,(int)*(short *)(temp_v10 + 0x62));
      if ((pbVar4 != (unsigned char *)0x0) && ((*(unsigned short *)(pbVar4 + 0xfa) & 0x10) != 0)) {
        temp_v2 = *(int *)(temp_v10 + 0x98) + 1;
        *(unsigned int *)(temp_v10 + 0x98) = temp_v2;
        if (((*pbVar4 & 3) != 0) && (*(unsigned int *)(temp_v10 + 0x9c) <= temp_v2)) {
          FUN_00282b94(pbVar1,(int)*(short *)(temp_v10 + 0x62));
          temp_v3 = FUN_00297004(2,6);
          *(int *)(temp_v10 + 0x9c) = temp_v3 * 0x1e;
          *(unsigned int *)(temp_v10 + 0x98) = 0;
        }
      }
      switch(*(unsigned int *)(temp_v10 + 0x48)) {
      case 0:
        if ((*(unsigned int *)(temp_v10 + 0x50) & 2) != 0) {
          *(unsigned int *)(temp_v10 + 0xa0) = 0;
          *(int *)(temp_v10 + 0xa4) = (int)((unsigned long long)temp_v17 >> 0x20);
          temp_v4 = FUN_0027dc58(pbVar1,*(unsigned int *)(pbVar4 + temp_v1 * 4 + 0xc));
          *(short *)(temp_v10 + 0x5a) = *(short *)(temp_v10 + 0x5a) + 2;
          FUN_00293ca8(temp_v4,0);
          in_s0 = (float)(int)in_s0;
          FUN_002c615c(*(unsigned short *)(temp_v10 + 0x5a),in_s0);
          *(unsigned short *)(temp_v10 + 0x5a) = temp_v7;
        }
        break;
      case 1:
        if (((*(unsigned int *)(temp_v10 + 0x50) & 2) != 0) &&
           (*(unsigned int *)(temp_v10 + 0xa0) <= *(unsigned int *)(temp_v10 + 0x4c))) {
          *(unsigned int *)(temp_v10 + 0xa0) = 0;
          *(unsigned int *)(temp_v10 + 0x100) = 0;
          *(unsigned int *)(temp_v10 + 0x104) = 0;
          *(unsigned int *)(temp_v10 + 0x108) = 0;
          *(unsigned int *)(temp_v10 + 0x10c) = 0;
          *(unsigned int *)(temp_v10 + 0x110) = 0;
          *(unsigned int *)(temp_v10 + 0x4c) = 0;
          temp_v1 = FUN_00293c98();
          FUN_0027dca0(temp_v1,(int)*(short *)(temp_v10 + 0x62));
          if (temp_v1 != 0) {
            if ((*(unsigned short *)(temp_v1 + 0xfa) & 0x180) != 0) {
              FUN_00293c98();
              *(unsigned int *)(temp_v10 + 0x48) = 3;
              *(unsigned int *)(temp_v10 + 0x4c) = 0;
              *(unsigned int *)(temp_v10 + 0xa0) = 0;
            }
            else if ((*(unsigned int *)(temp_v10 + 0x50) & 0x80) != 0) {
              *(unsigned int *)(temp_v10 + 0x48) = 0;
              *(unsigned int *)(temp_v10 + 0x4c) = 0;
              *(unsigned int *)(temp_v10 + 0xa0) = 0;
              if (-1 < *(short *)(temp_v10 + 0x60)) {
                temp_v3 = FUN_00293c98();
                puVar8 = (unsigned int *)(*(int *)(temp_v3 + 0x1fc0) + *(short *)(temp_v10 + 0x60) * 0x288);
                *puVar8 = *puVar8 & 0xfff7ffff;
              }
            }
            if (-1 < *(short *)(temp_v10 + 0x60)) {
              temp_v3 = FUN_00293c98();
              puVar8 = (unsigned int *)(*(int *)(temp_v3 + 0x1fc0) + *(short *)(temp_v10 + 0x60) * 0x288);
              if (puVar8 != (unsigned int *)0x0) {
                if ((*(unsigned short *)(temp_v1 + 0xfa) & 1000) == 0) {
                  temp_v2 = *puVar8 & 0xfff7ffff;
                }
                else {
                  temp_v2 = *puVar8 | 0x80000;
                }
                *puVar8 = temp_v2;
              }
            }
          }
        }
        break;
      case 4:
        FUN_003c1974(pbVar1,temp_v10);
      }
      *(int *)(temp_v10 + 0x28) = (int)temp_v19;
      temp_v18 = (float)temp_v17;
      if ((*(unsigned int *)(temp_v10 + 0x50) & 0x1000) != 0) {
        temp_v1 = *(int *)(temp_v10 + 0x70);
        temp_v3 = *(int *)(temp_v10 + 0x74);
        if (temp_v1 < temp_v3) {
          *(unsigned int *)(temp_v10 + 0x50) = *(unsigned int *)(temp_v10 + 0x50) & 0xffffefff;
        }
        else {
          temp_v16 = temp_v18;
          if (temp_v1 != 0) {
            temp_v16 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v14 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v16 = temp_v16 / temp_v14;
          }
          temp_v8 = *(unsigned int *)(temp_v10 + 0x84);
          temp_v12 = *(unsigned int *)(temp_v10 + 0x88);
          temp_v2 = temp_v8 & 0xff000000;
          temp_v5 = temp_v12 & 0xff000000;
          if (temp_v2 < temp_v5) {
            temp_v1 = temp_v5 - temp_v2;
            temp_v14 = temp_v18 - temp_v16;
          }
          else {
            temp_v1 = temp_v2 - temp_v5;
            temp_v14 = temp_v16;
          }
          temp_v15 = (float)VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v1 = VectorFloatToUnsigned(temp_v15 * temp_v14,3);
          if (temp_v5 <= temp_v2) {
            temp_v2 = temp_v5;
          }
          temp_v5 = temp_v8 & 0xff0000;
          temp_v6 = temp_v12 & 0xff0000;
          if (temp_v5 < temp_v6) {
            temp_v11 = temp_v6 - temp_v5;
            temp_v14 = temp_v18 - temp_v16;
          }
          else {
            temp_v11 = temp_v5 - temp_v6;
            temp_v14 = temp_v16;
          }
          temp_v15 = (float)VectorUnsignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v11 = VectorFloatToUnsigned(temp_v15 * temp_v14,3);
          if (temp_v6 <= temp_v5) {
            temp_v5 = temp_v6;
          }
          temp_v8 = temp_v8 & 0xff00;
          temp_v12 = temp_v12 & 0xff00;
          if (temp_v8 < temp_v12) {
            temp_v16 = temp_v18 - temp_v16;
            temp_v9 = temp_v12 - temp_v8;
          }
          else {
            temp_v9 = temp_v8 - temp_v12;
          }
          temp_v14 = (float)VectorUnsignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
          in_s0 = (float)VectorFloatToUnsigned(temp_v14 * temp_v16,3);
          if (temp_v12 <= temp_v8) {
            temp_v8 = temp_v12;
          }
          *(unsigned int *)(temp_v10 + 100) =
               ((temp_v8 + (int)in_s0) & 0xff00) |
               (*(unsigned int *)(temp_v10 + 100) & 0xff) | ((temp_v2 + temp_v1) & 0xff000000) |
               ((temp_v11 + temp_v5) & 0xff0000);
          *(int *)(temp_v10 + 0x74) = temp_v3 + 1;
        }
      }
      if ((*(unsigned int *)(temp_v10 + 0x50) & 0x2000) != 0) {
        temp_v1 = *(int *)(temp_v10 + 0x78);
        temp_v3 = *(int *)(temp_v10 + 0x7c);
        if (temp_v1 < temp_v3) {
          *(unsigned int *)(temp_v10 + 0x50) = *(unsigned int *)(temp_v10 + 0x50) & 0xffffdfff;
        }
        else {
          temp_v16 = temp_v18;
          if (temp_v1 != 0) {
            temp_v16 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v14 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v16 = temp_v16 / temp_v14;
          }
          temp_v8 = *(unsigned int *)(temp_v10 + 0x84) & 0xff;
          temp_v2 = *(unsigned int *)(temp_v10 + 0x88) & 0xff;
          if (temp_v8 < temp_v2) {
            temp_v1 = temp_v2 - temp_v8;
            temp_v16 = temp_v18 - temp_v16;
          }
          else {
            temp_v1 = temp_v8 - temp_v2;
          }
          temp_v18 = (float)VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
          in_s0 = (float)VectorFloatToUnsigned(temp_v18 * temp_v16,3);
          temp_v5 = temp_v2;
          if (temp_v8 < temp_v2) {
            temp_v5 = temp_v8 + (int)in_s0;
          }
          if (temp_v2 <= temp_v8) {
            temp_v5 = temp_v5 + (int)in_s0;
          }
          *(int *)(temp_v10 + 0x7c) = temp_v3 + 1;
          *(unsigned int *)(temp_v10 + 100) = (*(unsigned int *)(temp_v10 + 100) & 0xffffff00) | (temp_v5 & 0xff);
        }
      }
      FUN_003c1710(pbVar1,temp_v10);
      FUN_0027dc18();
      temp_v2 = *(unsigned int *)(temp_v10 + 0x4c);
      in_s0 = *(float *)(temp_v10 + 0xa4) * *(float *)(temp_v10 + 0xb8) * in_s0;
      if ((temp_v2 & 1) != 0) {
        in_s0 = -in_s0;
      }
      *(float *)(temp_v10 + 0xbc) = in_s0;
      if (temp_v2 < *(unsigned int *)(temp_v10 + 0xa0)) {
        temp_v18 = (float)VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v16 = (float)VectorUnsignedToFloat(*(unsigned int *)(temp_v10 + 0xa0),(unsigned char)(in_fpscr >> 0x16) & 3)
        ;
        temp_v18 = ((temp_v18 * (float)temp_v20) / temp_v16) * (float)((unsigned long long)temp_v19 >> 0x20);
        FUN_002b740c();
        in_s0 = ((float)temp_v17 - temp_v18) * *(float *)(temp_v10 + 0xdc);
        *(float *)(temp_v10 + 0xa4) = in_s0;
        if ((int)in_s0 < 0x3d4ccccd) {
          *(int *)(temp_v10 + 0xa4) = (int)((unsigned long long)temp_v17 >> 0x20);
        }
      }
      else {
        *(int *)(temp_v10 + 0xa4) = (int)((unsigned long long)temp_v17 >> 0x20);
      }
      if (*(unsigned int *)(temp_v10 + 0x4c) < 0xffff) {
        *(unsigned int *)(temp_v10 + 0x4c) = *(unsigned int *)(temp_v10 + 0x4c) + 1;
      }
    }
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x6d) {
      return 0;
    }
  } while( 1 );
}
