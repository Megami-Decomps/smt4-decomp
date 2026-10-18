/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00254ca8` (_code @ 0x254ca8, 0x334 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern short DAT_00465278; /* 0x465278 */
#ifndef ROMWRIGHT_STORAGE_s____Z____0046527a_10_2_DEFINED
#define ROMWRIGHT_STORAGE_s____Z____0046527a_10_2_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s____Z____0046527a_10_2 {
    char whole[10];
    unsigned char u1[10];
    signed char s1[10];
    unsigned short u2[5];
    short s2[5];
};
typedef char romwright_storage_s____Z____0046527a_10_2_size_check[(sizeof(union romwright_storage_s____Z____0046527a_10_2) == 10) ? 1 : -1];
typedef char romwright_storage_s____Z____0046527a_10_2_u1_width_check[(sizeof(((union romwright_storage_s____Z____0046527a_10_2 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s____Z____0046527a_10_2_s1_width_check[(sizeof(((union romwright_storage_s____Z____0046527a_10_2 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s____Z____0046527a_10_2_u2_width_check[(sizeof(((union romwright_storage_s____Z____0046527a_10_2 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_s____Z____0046527a_10_2_s2_width_check[(sizeof(((union romwright_storage_s____Z____0046527a_10_2 *)0)->s2[0]) == 2) ? 1 : -1];
#endif
extern union romwright_storage_s____Z____0046527a_10_2 s____Z____0046527a; /* 0x46527a */
extern short DAT_00465284; /* 0x465284 */
extern short DAT_00465286; /* 0x465286 */
extern signed char DAT_00465288; /* 0x465288 */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0027fbc8. */
/* Supplied declaration required: FUN_002820a4. */
/* Supplied declaration required: FUN_002b902c. */
/* Supplied declaration required: FUN_002bffbc. */
/* Supplied declaration required: FUN_002c17d4. */


unsigned int FUN_00254ca8(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  unsigned int temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13 [3];
  
  temp_v5 = 0;
  temp_v4 = 0;
  temp_v3 = 0;
  if (param_3 != 0) {
    if (param_3 != 1) {
      if (param_3 == 2) {
        temp_v4 = FUN_002c17d4();
        temp_v3 = FUN_002c17d4(param_2);
        temp_v5 = temp_v4 | temp_v3;
      }
    }
    else {
      temp_v4 = FUN_002b902c();
      temp_v3 = FUN_002b902c(param_2);
      temp_v6 = FUN_002c17d4(param_1);
      if ((temp_v6 != 0) && (temp_v6 = FUN_002c17d4(param_2), temp_v6 != 0)) {
        temp_v3 = 0;
      }
      temp_v5 = temp_v4 | temp_v3;
    }
  }
  else {
    temp_v4 = FUN_002bffbc();
    temp_v3 = FUN_002bffbc(param_2);
    temp_v5 = temp_v4 | temp_v3;
  }
  if ((!(param_1 == 0xc || param_1 == 0xd)) && (!(param_1 == 0xe || param_1 == 0xf))) {
    if ((param_2 != 0xc && param_2 != 0xd) && (param_2 != 0xe && param_2 != 0xf)) {
      return temp_v5;
    }
    temp_v6 = 2;
  }
  else {
    temp_v6 = 1;
  }
  if ((DAT_00465288 != '\0') &&
     ((((temp_v2 = FUN_002c17d4(0xe), temp_v2 != 0 || (temp_v2 = FUN_002c17d4(0xf), temp_v2 != 0)) ||
       (temp_v2 = FUN_002c17d4(0xc), temp_v2 != 0)) || (temp_v2 = FUN_002c17d4(0xd), temp_v2 != 0)))) {
    FUN_0027fbc8(&temp_v12,temp_v13,0);
    temp_v10 = temp_v12;
    FUN_002820a4();
    temp_v11 = 360.0f;
    temp_v10 = temp_v10 * 57.295776f;
    if (temp_v10 < 0.0f) {
      temp_v10 = temp_v10 + 360.0f;
    }
    temp_v8 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v12 == 0.0f) << 0x1e);
    temp_v7 = 0;
    if (romwright_subpiece_4_1_0(temp_v8 >> 0x1e,0)) {
      temp_v8 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v13[0] == 0.0f) << 0x1e);
      temp_v7 = romwright_subpiece_4_1_0(temp_v8 >> 0x1e,0);
    }
    if (!temp_v7) {
      temp_v2 = FUN_002c17d4(0xe);
      if (temp_v2 != 0) {
        temp_v2 = (int)DAT_00465278;
        temp_v9 = (float)VectorSignedToFloat(temp_v2 - (short)s____Z____0046527a.u2[0],
                                            (unsigned char)(temp_v8 >> 0x16) & 3);
        temp_v0 = (temp_v8 & 0xfffffff) | ((unsigned int)(temp_v9 + temp_v11 == temp_v10) << 0x1e) |
                ((unsigned int)(temp_v10 <= temp_v9 + temp_v11) << 0x1d);
        temp_v1 = (unsigned char)(temp_v0 >> 0x18);
        if ((!(unsigned char)((temp_v1 >> 5) & 1) || (unsigned char)(temp_v1 >> 6)) && ((int)temp_v10 < 0x43b40000)) {
          return temp_v5;
        }
        temp_v11 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(temp_v0 >> 0x16) & 3);
        temp_v8 = (temp_v8 & 0xfffffff) | ((unsigned int)(temp_v11 == temp_v10) << 0x1e) |
                ((unsigned int)(temp_v10 <= temp_v11) << 0x1d);
        temp_v1 = (unsigned char)(temp_v8 >> 0x18);
        if ((!(unsigned char)((temp_v1 >> 5) & 1) || (unsigned char)(temp_v1 >> 6)) &&
           (temp_v11 = (float)VectorSignedToFloat(temp_v2 + (short)s____Z____0046527a.u2[0],
                                                (unsigned char)(temp_v8 >> 0x16) & 3), temp_v10 < temp_v11)) {
          return temp_v5;
        }
      }
      else {
        temp_v2 = FUN_002c17d4(0xf);
        if (temp_v2 != 0) {
          temp_v11 = (float)VectorSignedToFloat((int)(short)s____Z____0046527a.u2[1] -
                                              (int)(short)s____Z____0046527a.u2[2],
                                              (unsigned char)(temp_v8 >> 0x16) & 3);
          temp_v8 = (temp_v8 & 0xfffffff) | ((unsigned int)(temp_v11 == temp_v10) << 0x1e) |
                  ((unsigned int)(temp_v10 <= temp_v11) << 0x1d);
          temp_v1 = (unsigned char)(temp_v8 >> 0x18);
          if ((!(unsigned char)((temp_v1 >> 5) & 1) || (unsigned char)(temp_v1 >> 6)) &&
             (temp_v11 = (float)VectorSignedToFloat((int)(short)s____Z____0046527a.u2[1] +
                                                  (int)(short)s____Z____0046527a.u2[2],
                                                  (unsigned char)(temp_v8 >> 0x16) & 3), temp_v10 < temp_v11)) {
            return temp_v5;
          }
        }
        else {
          temp_v2 = FUN_002c17d4(0xc);
          if (temp_v2 != 0) {
            temp_v11 = (float)VectorSignedToFloat((int)(short)s____Z____0046527a.u2[3] -
                                                (int)(short)s____Z____0046527a.u2[4],
                                                (unsigned char)(temp_v8 >> 0x16) & 3);
            temp_v8 = (temp_v8 & 0xfffffff) | ((unsigned int)(temp_v11 == temp_v10) << 0x1e) |
                    ((unsigned int)(temp_v10 <= temp_v11) << 0x1d);
            temp_v1 = (unsigned char)(temp_v8 >> 0x18);
            if ((!(unsigned char)((temp_v1 >> 5) & 1) || (unsigned char)(temp_v1 >> 6)) &&
               (temp_v11 = (float)VectorSignedToFloat((int)(short)s____Z____0046527a.u2[3] +
                                                    (int)(short)s____Z____0046527a.u2[4],
                                                    (unsigned char)(temp_v8 >> 0x16) & 3), temp_v10 < temp_v11)) {
              return temp_v5;
            }
          }
          else {
            temp_v2 = FUN_002c17d4(0xd);
            if (temp_v2 != 0) {
              temp_v11 = (float)VectorSignedToFloat((int)DAT_00465284 - (int)DAT_00465286,
                                                  (unsigned char)(temp_v8 >> 0x16) & 3);
              temp_v8 = (temp_v8 & 0xfffffff) | ((unsigned int)(temp_v11 == temp_v10) << 0x1e) |
                      ((unsigned int)(temp_v10 <= temp_v11) << 0x1d);
              temp_v1 = (unsigned char)(temp_v8 >> 0x18);
              if ((!(unsigned char)((temp_v1 >> 5) & 1) || (unsigned char)(temp_v1 >> 6)) &&
                 (temp_v11 = (float)VectorSignedToFloat((int)DAT_00465284 + (int)DAT_00465286,
                                                      (unsigned char)(temp_v8 >> 0x16) & 3), temp_v10 < temp_v11))
              {
                return temp_v5;
              }
            }
          }
        }
      }
      temp_v5 = temp_v3;
      if (temp_v6 != 1) {
        temp_v5 = temp_v4;
      }
    }
  }
  return temp_v5;
}
