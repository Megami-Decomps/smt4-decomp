/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00491abc` (_code @ 0x491abc, 0x160 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: MapNaviTable_GetCategoryCount. */
extern int MapNaviTable_GetCategoryRecord(unsigned char *, unsigned int);


int FUN_00491abc(unsigned int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr, in_s1; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar3;
  int temp_v2;
  int temp_v3;
  short *psVar6;
  int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  float in_s1;
  float temp_v9;
  unsigned char temp_v10 [16];
  
  puVar3 = temp_v10;
  MapNaviTable_GetCategoryCount();
  temp_v2 = MapNaviTable_GetCategoryRecord(temp_v10,0);
  temp_v3 = 0;
  if (temp_v3 < (int)puVar3) {
    do {
      psVar6 = (short *)(temp_v2 + temp_v3 * 0x14);
      if (*psVar6 == -1) break;
      if ((*psVar6 == param_2) && (psVar6[1] == param_3)) {
        temp_v4 = (int)(char)psVar6[5];
        temp_v8 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v9 = (float)VectorSignedToFloat((int)*(char *)((int)psVar6 + 0xb),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v8 = temp_v8 * 100.0f - 50.0f;
        temp_v9 = temp_v9 * 100.0f - 50.0f;
        if (param_2 == 0x17) {
          if (((param_3 == 1) || ((param_3 == 2 || param_3 == 3) || param_3 == 6)) && (temp_v4 == 8))
          {
            temp_v8 = temp_v8 - 300.0f;
          }
          if (param_3 == 4) {
            if (temp_v4 == 5) {
              temp_v8 = temp_v8 - 200.0f;
            }
            if (*(char *)((int)psVar6 + 0xb) == 2) {
              temp_v9 = temp_v9 + 100.0f;
            }
          }
        }
        temp_v0 = in_fpscr & 0xfffffff;
        temp_v1 = temp_v0 | ((unsigned int)(in_s1 < temp_v8) << 0x1f) | ((unsigned int)(in_s1 == temp_v8) << 0x1e);
        in_fpscr = temp_v1 | ((unsigned int)((in_s1 != in_s1) || (temp_v8 != temp_v8)) << 0x1c);
        temp_v7 = (unsigned char)(temp_v1 >> 0x18);
        temp_v5 = temp_v7 >> 7;
        temp_v6 = (unsigned char)((temp_v7 >> 6) & 1);
        temp_v7 = (unsigned char)(in_fpscr >> 0x1c) & 1;
        if (!temp_v6 && temp_v5 == temp_v7) {
          in_fpscr = temp_v0 | ((unsigned int)(temp_v9 < in_s1) << 0x1f) | ((unsigned int)(temp_v9 == in_s1) << 0x1e) |
                     ((unsigned int)((temp_v9 != temp_v9) || (in_s1 != in_s1)) << 0x1c);
          temp_v7 = (unsigned char)(in_fpscr >> 0x18);
          temp_v5 = temp_v7 >> 7;
          temp_v6 = (unsigned char)((temp_v7 >> 6) & 1);
          temp_v7 = (temp_v7 >> 4) & 1;
        }
        if (!temp_v6 && temp_v5 == temp_v7) {
          return temp_v2 + temp_v3 * 0x14;
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < (int)puVar3);
  }
  temp_v3 = 0;
  if (temp_v3 < (int)puVar3) {
    do {
      psVar6 = (short *)(temp_v2 + temp_v3 * 0x14);
      temp_v4 = (int)*psVar6;
      if (temp_v4 == -1) {
        return 0;
      }
      if ((temp_v4 == param_2) && (psVar6[1] == param_3)) {
        return temp_v2 + temp_v3 * 0x14;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < (int)puVar3);
  }
  return 0;
}
