/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049fe58` (_code @ 0x49fe58, 0x28c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
extern int FUN_001801a4(void);
extern int FUN_0018416c(unsigned short);
extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
extern int FUN_001b347c(void);
/* Supplied declaration required: FUN_00408184. */


void FUN_0049fe58(unsigned int param_1)

{
/* irregular: irregular input(s): in_d11, in_fpscr, in_s0; 6 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  short temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int in_fpscr;
  unsigned int temp_v11;
  float in_s0;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  int temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  unsigned long long in_d11;
  
  temp_v18 = 0.0f;
  temp_v11 = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 == 0.0f) << 0x1e) | ((unsigned int)(0.0f <= in_s0) << 0x1d);
  temp_v2 = (unsigned char)(temp_v11 >> 0x18);
  if ((unsigned char)((temp_v2 >> 5) & 1) && !(unsigned char)(temp_v2 >> 6)) {
    temp_v13 = (float)((unsigned long long)in_d11 >> 0x20);
    temp_v19 = 0.01f;
    temp_v17 = 1.0f;
    if ((((param_1 == 0 || param_1 == 2) || param_1 == 3) &&
        (temp_v4 = FUN_001801a4(), (*(unsigned short *)(temp_v4 + 0x5e) & 2) == 0)) &&
       (temp_v4 = FUN_001801a4(), (*(unsigned short *)(temp_v4 + 0x5e) & 0x400) == 0)) {
      temp_v4 = FUN_001801a4();
      temp_v13 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 0x1c),(unsigned char)(temp_v11 >> 0x16) & 3);
      temp_v4 = FUN_001801a4();
      temp_v13 = temp_v13 * in_s0 * temp_v19;
      temp_v15 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 0x2a),(unsigned char)(temp_v11 >> 0x16) & 3);
      if (temp_v13 <= temp_v18) {
        temp_v13 = temp_v17;
      }
      temp_v14 = temp_v15 - temp_v13;
      temp_v11 = (temp_v11 & 0xfffffff) | ((unsigned int)(temp_v14 == temp_v18) << 0x1e) |
               ((unsigned int)(temp_v18 <= temp_v14) << 0x1d);
      temp_v2 = (unsigned char)(temp_v11 >> 0x18);
      if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
        temp_v14 = temp_v17;
      }
      temp_v16 = (int)temp_v14;
      temp_v0 = (short)temp_v16;
      temp_v4 = FUN_001801a4();
      temp_v3 = *(short *)(temp_v4 + 0x1c);
      if ((temp_v0 <= *(short *)(temp_v4 + 0x1c)) && (temp_v3 = temp_v0, temp_v0 < 1)) {
        temp_v3 = 1;
      }
      temp_v14 = temp_v15 - temp_v14;
      *(short *)(temp_v4 + 0x2a) = temp_v3;
      temp_v1 = (temp_v11 & 0xfffffff) | ((unsigned int)(temp_v14 < temp_v18) << 0x1f) |
              ((unsigned int)(temp_v14 == temp_v18) << 0x1e);
      temp_v11 = temp_v1 | ((unsigned int)((temp_v14 != temp_v14) || (temp_v18 != temp_v18)) << 0x1c);
      temp_v2 = (unsigned char)(temp_v1 >> 0x18);
      if (!(unsigned char)((temp_v2 >> 6) & 1) && temp_v2 >> 7 == ((unsigned char)(temp_v11 >> 0x1c) & 1)) {
        FUN_00408184(0x17,(int)temp_v15 - temp_v16);
      }
    }
    if (param_1 >= 2) {
      if (param_1 != 2 && param_1 != 3) {
        return;
      }
      temp_v16 = 3;
      temp_v4 = FUN_001ab888();
      temp_v4 = temp_v4 + 0x1ca0;
    }
    else {
      temp_v16 = FUN_001b347c();
      temp_v4 = FUN_001ab888();
      temp_v4 = temp_v4 + 0x1c88;
    }
    if (0 < temp_v16) {
      temp_v13 = 1.25f;
    }
    temp_v8 = 0;
    if (temp_v8 < temp_v16) {
      do {
        if ((-1 < *(char *)(temp_v4 + temp_v8)) &&
           (temp_v5 = FUN_001ab854(),
           (*(unsigned short *)(temp_v5 + 0x60) & 2) == 0 && (*(unsigned short *)(temp_v5 + 0x60) & 0x400) == 0)) {
          if (temp_v5 == 0) {
            temp_v9 = 0;
          }
          else {
            temp_v9 = (int)*(short *)(temp_v5 + 0xe);
            temp_v6 = FUN_0018416c(*(unsigned short *)(temp_v5 + 0x62));
            if (temp_v6 != 0) {
              temp_v15 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(temp_v11 >> 0x16) & 3);
              temp_v9 = (int)(short)(int)(temp_v15 * temp_v13);
            }
          }
          temp_v15 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(temp_v11 >> 0x16) & 3);
          temp_v14 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 0x2a),
                                              (unsigned char)(temp_v11 >> 0x16) & 3);
          temp_v15 = temp_v15 * in_s0 * temp_v19;
          if (temp_v15 <= temp_v18) {
            temp_v15 = temp_v17;
          }
          temp_v15 = temp_v14 - temp_v15;
          temp_v11 = (temp_v11 & 0xfffffff) | ((unsigned int)(temp_v15 == temp_v18) << 0x1e) |
                   ((unsigned int)(temp_v18 <= temp_v15) << 0x1d);
          temp_v2 = (unsigned char)(temp_v11 >> 0x18);
          if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
            temp_v15 = temp_v17;
          }
          temp_v6 = (int)temp_v15;
          temp_v9 = (int)(short)temp_v6;
          if (temp_v5 != 0) {
            temp_v10 = (int)*(short *)(temp_v5 + 0xe);
            temp_v7 = FUN_0018416c(*(unsigned short *)(temp_v5 + 0x62));
            if (temp_v7 != 0) {
              temp_v12 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(temp_v11 >> 0x16) & 3);
              temp_v10 = (int)(short)(int)(temp_v12 * temp_v13);
            }
            if ((temp_v9 <= temp_v10) && (temp_v10 = temp_v9, temp_v9 < 1)) {
              temp_v10 = 1;
            }
            *(short *)(temp_v5 + 0x2a) = (short)temp_v10;
          }
          temp_v15 = temp_v14 - temp_v15;
          temp_v1 = (temp_v11 & 0xfffffff) | ((unsigned int)(temp_v15 < temp_v18) << 0x1f) |
                  ((unsigned int)(temp_v15 == temp_v18) << 0x1e);
          temp_v11 = temp_v1 | ((unsigned int)((temp_v15 != temp_v15) || (temp_v18 != temp_v18)) << 0x1c);
          temp_v2 = (unsigned char)(temp_v1 >> 0x18);
          if (!(unsigned char)((temp_v2 >> 6) & 1) && temp_v2 >> 7 == ((unsigned char)(temp_v11 >> 0x1c) & 1)) {
            FUN_00408184(0x17,(int)temp_v14 - temp_v6);
          }
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < temp_v16);
    }
  }
  return;
}
