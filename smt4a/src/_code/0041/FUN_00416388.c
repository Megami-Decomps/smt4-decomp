/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00416388` (_code @ 0x416388, 0x268 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_001834a4(unsigned int, unsigned int);


void FUN_00416388(int param_1,int param_2,unsigned int *param_3)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned int in_fpscr;
  unsigned int temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  
  temp_v3 = param_1 + param_2 * 0xb0;
  temp_v18 = *(float *)(temp_v3 + 8);
  temp_v17 = *(float *)(temp_v3 + 0xc);
  temp_v3 = FUN_001834a4(*param_3,param_3[1]);
  temp_v1 = 0;
  temp_v13 = (temp_v18 - 45.0f) + 0.0f;
  temp_v12 = temp_v17 + 0.0f + 9.5f;
  temp_v17 = (temp_v17 - 9.5f) + 0.0f;
  temp_v18 = temp_v18 + 0.0f + 45.0f;
  do {
    if ((param_2 != temp_v1) && (temp_v2 = param_1 + temp_v1 * 0xb0, *(char *)(temp_v2 + 0xa0) != '\0')) {
      temp_v14 = *(float *)(temp_v2 + 8) - 45.0f;
      temp_v15 = *(float *)(temp_v2 + 0xc) + 9.5f;
      temp_v11 = *(float *)(temp_v2 + 0xc) - 9.5f;
      temp_v16 = *(float *)(temp_v2 + 8) + 45.0f;
      temp_v7 = (temp_v17 != temp_v17) || (temp_v11 != temp_v11);
      temp_v10 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v17 < temp_v11) << 0x1f) |
               ((unsigned int)(temp_v17 == temp_v11) << 0x1e);
      temp_v8 = (unsigned char)(temp_v10 >> 0x18);
      temp_v4 = (unsigned char)(temp_v8 >> 7);
      temp_v6 = (unsigned char)((temp_v8 >> 6) & 1);
      if (!temp_v6 && temp_v4 == temp_v7) {
        temp_v7 = (temp_v13 != temp_v13) || (temp_v14 != temp_v14);
        temp_v10 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v13 < temp_v14) << 0x1f) |
                 ((unsigned int)(temp_v13 == temp_v14) << 0x1e);
        temp_v8 = (unsigned char)(temp_v10 >> 0x18);
        temp_v4 = (unsigned char)(temp_v8 >> 7);
        temp_v6 = (unsigned char)((temp_v8 >> 6) & 1);
      }
      if (!(temp_v6 || temp_v4 != temp_v7)) {
        in_fpscr = (temp_v10 & 0xfffffff) | ((unsigned int)(temp_v15 <= temp_v17) << 0x1d);
        temp_v7 = romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0);
        if (!temp_v7) {
          in_fpscr = (temp_v10 & 0xfffffff) | ((unsigned int)(temp_v16 <= temp_v13) << 0x1d);
          temp_v7 = romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0);
        }
        if (!temp_v7) {
          temp_v15 = temp_v15 - temp_v17;
          temp_v13 = temp_v13 + 0.0f;
          temp_v18 = temp_v18 + 0.0f;
          temp_v17 = temp_v17 + temp_v15;
          temp_v12 = temp_v12 + temp_v15;
        }
      }
      else {
        temp_v10 = temp_v10 & 0xfffffff;
        temp_v0 = temp_v10 | ((unsigned int)(temp_v17 < temp_v11) << 0x1f) | ((unsigned int)(temp_v17 == temp_v11) << 0x1e);
        temp_v9 = temp_v0 | ((unsigned int)((temp_v17 != temp_v17) || (temp_v11 != temp_v11)) << 0x1c);
        temp_v8 = (unsigned char)(temp_v0 >> 0x18);
        if ((!((unsigned char)((temp_v8 >> 6) & 1) || temp_v8 >> 7 != ((unsigned char)(temp_v9 >> 0x1c) & 1))) &&
           (temp_v9 = temp_v10 | ((unsigned int)(temp_v14 <= temp_v13) << 0x1d), !romwright_subpiece_4_1_0(temp_v9 >> 0x1d,0))) {
          in_fpscr = temp_v10 | ((unsigned int)(temp_v15 <= temp_v17) << 0x1d);
          if ((!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) &&
             (temp_v10 = temp_v10 | ((unsigned int)(temp_v18 < temp_v14) << 0x1f) |
                       ((unsigned int)(temp_v18 == temp_v14) << 0x1e),
             in_fpscr = temp_v10 | ((unsigned int)((temp_v18 != temp_v18) || (temp_v14 != temp_v14)) << 0x1c),
             temp_v8 = (unsigned char)(temp_v10 >> 0x18),
             !(unsigned char)((temp_v8 >> 6) & 1) && temp_v8 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
            temp_v15 = temp_v15 - temp_v17;
            temp_v13 = temp_v13 + 0.0f;
            temp_v18 = temp_v18 + 0.0f;
            temp_v17 = temp_v17 + temp_v15;
            temp_v12 = temp_v12 + temp_v15;
          }
        }
        else {
          temp_v9 = temp_v9 & 0xfffffff;
          temp_v10 = temp_v9 | ((unsigned int)(temp_v11 <= temp_v17) << 0x1d);
          if ((!romwright_subpiece_4_1_0(temp_v10 >> 0x1d,0)) &&
             (temp_v0 = temp_v9 | ((unsigned int)(temp_v13 < temp_v14) << 0x1f) |
                      ((unsigned int)(temp_v13 == temp_v14) << 0x1e),
             temp_v10 = temp_v0 | ((unsigned int)((temp_v13 != temp_v13) || (temp_v14 != temp_v14)) << 0x1c),
             temp_v8 = (unsigned char)(temp_v0 >> 0x18),
             !((unsigned char)((temp_v8 >> 6) & 1) || temp_v8 >> 7 != ((unsigned char)(temp_v10 >> 0x1c) & 1)))) {
            temp_v10 = temp_v9 | ((unsigned int)(temp_v12 < temp_v11) << 0x1f) | ((unsigned int)(temp_v12 == temp_v11) << 0x1e)
            ;
            in_fpscr = temp_v10 | ((unsigned int)((temp_v12 != temp_v12) || (temp_v11 != temp_v11)) << 0x1c);
            temp_v8 = (unsigned char)(temp_v10 >> 0x18);
            if ((!(unsigned char)((temp_v8 >> 6) & 1) && temp_v8 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) &&
               (in_fpscr = temp_v9 | ((unsigned int)(temp_v16 <= temp_v13) << 0x1d), !romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)))
            {
              temp_v15 = temp_v11 - temp_v12;
              temp_v13 = temp_v13 + 0.0f;
              temp_v18 = temp_v18 + 0.0f;
              temp_v17 = temp_v17 + temp_v15;
              temp_v12 = temp_v12 + temp_v15;
            }
          }
          else {
            in_fpscr = (temp_v10 & 0xfffffff) | ((unsigned int)(temp_v11 <= temp_v17) << 0x1d);
            temp_v7 = romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0);
            if (!temp_v7) {
              in_fpscr = (temp_v10 & 0xfffffff) | ((unsigned int)(temp_v14 <= temp_v13) << 0x1d);
              temp_v7 = romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0);
            }
            if (!temp_v7) {
              temp_v10 = in_fpscr & 0xfffffff;
              temp_v9 = temp_v10 | ((unsigned int)(temp_v12 < temp_v11) << 0x1f) |
                       ((unsigned int)(temp_v12 == temp_v11) << 0x1e);
              in_fpscr = temp_v9 | ((unsigned int)((temp_v12 != temp_v12) || (temp_v11 != temp_v11)) << 0x1c);
              temp_v8 = (unsigned char)(temp_v9 >> 0x18);
              temp_v5 = temp_v8 >> 7;
              temp_v7 = (unsigned char)((temp_v8 >> 6) & 1);
              temp_v8 = (unsigned char)(in_fpscr >> 0x1c) & 1;
              if (!temp_v7 && temp_v5 == temp_v8) {
                in_fpscr = temp_v10 | ((unsigned int)(temp_v18 < temp_v14) << 0x1f) |
                           ((unsigned int)(temp_v18 == temp_v14) << 0x1e) |
                           ((unsigned int)((temp_v18 != temp_v18) || (temp_v14 != temp_v14)) << 0x1c);
                temp_v8 = (unsigned char)(in_fpscr >> 0x18);
                temp_v5 = temp_v8 >> 7;
                temp_v7 = (unsigned char)((temp_v8 >> 6) & 1);
                temp_v8 = (temp_v8 >> 4) & 1;
              }
              if (!temp_v7 && temp_v5 == temp_v8) {
                temp_v15 = temp_v11 - temp_v12;
                temp_v13 = temp_v13 + 0.0f;
                temp_v18 = temp_v18 + 0.0f;
                temp_v17 = temp_v17 + temp_v15;
                temp_v12 = temp_v12 + temp_v15;
              }
            }
          }
        }
      }
    }
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 0xc) {
      VectorSignedToFloat((int)**(short **)(temp_v3 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)(*(short **)(temp_v3 + 0xc))[1],(unsigned char)(in_fpscr >> 0x16) & 3);
      return;
    }
  } while( 1 );
}
