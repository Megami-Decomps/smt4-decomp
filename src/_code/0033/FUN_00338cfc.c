/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00338cfc` (_code @ 0x338cfc, 0x2a4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int FUN_0023ea94(void);
extern int FUN_0023eae0(unsigned int);
extern int FUN_002542ec(int);
extern int FUN_002973ec(void);
extern int FUN_002a8764(void);
/* Supplied declaration required: FUN_002b06c4. */
extern int FUN_002b63ac(void);
/* Supplied declaration required: FUN_002b9024. */


void FUN_00338cfc(int param_1,int param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 5 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  short temp_v2;
  unsigned char temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int *puVar9;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  
  puVar9 = (unsigned int *)(param_1 + 0x44a0);
  temp_v4 = *puVar9;
  temp_v5 = temp_v4 & 0xfffffff9;
  *puVar9 = temp_v5;
  if ((*(unsigned int *)(param_1 + 0x44ac) & 0x20) != 0) {
    return;
  }
  if ((*(unsigned int *)(param_1 + 0x44a8) & 0x4000) != 0) {
    return;
  }
  if ((*(unsigned int *)(param_1 + 0x44a8) & 0x8000) != 0) {
    *puVar9 = temp_v5 | 6;
    return;
  }
  if ((temp_v4 & 0x200) != 0) {
    return;
  }
  temp_v7 = 0;
  if ((*(unsigned int *)(param_1 + 0xe0) & 0x10000) != 0) {
    *puVar9 = temp_v5 | 6;
    return;
  }
  if ((*(unsigned int *)(param_1 + 0xe0) & 0x20000) != 0) {
    return;
  }
  if (param_2 != 0) {
    temp_v7 = FUN_0023eae0(99);
    if (temp_v7 < 0x46) {
      return;
    }
  }
  else {
    temp_v0 = *(char *)(param_1 + 0x14c);
    if (temp_v0 == '\x01') {
      do {
        temp_v4 = *(unsigned int *)(param_1 + temp_v7 * 4 + 200);
        if (temp_v4 != 0) {
          temp_v4 = temp_v4 & 0xffff;
          FUN_002b9024();
          if ((temp_v4 != 0) && (*(char *)(temp_v4 + 2) == '\'')) goto LAB_00338da0;
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 6);
      temp_v4 = *puVar9 | 8;
      *puVar9 = temp_v4;
      return;
    }
    if (temp_v0 == '\x02') {
      *puVar9 = temp_v5 | 6;
      return;
    }
    if (temp_v0 == '\x03') {
      return;
    }
LAB_00338da0:
    temp_v9 = 0.0f;
    temp_v10 = temp_v9;
    temp_v7 = FUN_002b63ac();
    if ((*(unsigned short *)(temp_v7 + 0x72) & 2) == 0) {
      temp_v7 = FUN_002b63ac();
      temp_v2 = *(short *)(temp_v7 + 0x26);
      temp_v7 = FUN_002b63ac();
      temp_v9 = (float)VectorSignedToFloat((int)*(short *)(temp_v7 + 0x28) + (int)temp_v2,
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
    }
    temp_v7 = 0;
    do {
      temp_v6 = FUN_002a8764();
      if (-1 < *(char *)(temp_v6 + temp_v7 + 0x9108)) {
        temp_v6 = FUN_002542ec(temp_v7);
        temp_v1 = *(unsigned short *)(temp_v6 + 0x44);
        if (((temp_v1 & 2) == 0 && (temp_v1 & 0x400) == 0) && (temp_v1 & 4) == 0) {
          temp_v6 = (int)*(short *)(temp_v6 + 0x1a) + (int)*(short *)(temp_v6 + 0x18);
          temp_v8 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v8 < temp_v9) << 0x1f) |
                  ((unsigned int)(temp_v8 == temp_v9) << 0x1e);
          in_fpscr = temp_v4 | ((unsigned int)(NAN(temp_v8) || NAN(temp_v9)) << 0x1c);
          temp_v3 = (unsigned char)(temp_v4 >> 0x18);
          if (!(unsigned char)((temp_v3 >> 6) & 1) && temp_v3 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
            temp_v9 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
          }
        }
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 3);
    temp_v7 = 0;
    do {
      temp_v4 = *(unsigned int *)(param_1 + temp_v7 * 4 + 200);
      if (temp_v4 != 0) {
        temp_v4 = temp_v4 & 0xffff;
        FUN_002b06c4();
        if (temp_v4 != 0) {
          temp_v6 = (unsigned int)*(unsigned short *)(temp_v4 + 0x14) + (unsigned int)*(unsigned short *)(temp_v4 + 0x12);
          temp_v8 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v8 < temp_v10) << 0x1f) |
                  ((unsigned int)(temp_v8 == temp_v10) << 0x1e);
          in_fpscr = temp_v4 | ((unsigned int)(NAN(temp_v8) || NAN(temp_v10)) << 0x1c);
          temp_v3 = (unsigned char)(temp_v4 >> 0x18);
          if (!(unsigned char)((temp_v3 >> 6) & 1) && temp_v3 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
            temp_v10 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
          }
        }
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 6);
    temp_v7 = FUN_0023ea94();
    temp_v10 = (float)VectorSignedToFloat((int)((temp_v9 - temp_v10) * 0.2f) + 0x2d,
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = (int)(*(float *)(temp_v7 + 0x1c) * temp_v10);
    temp_v7 = FUN_002973ec();
    if (temp_v7 != 0) {
      temp_v7 = FUN_002973ec();
      if (temp_v7 == 1) {
        temp_v6 = 0x50;
      }
    }
    else if (temp_v6 < 0x1e) {
      temp_v6 = 0x1e;
    }
    else if (temp_v6 >= 0x47) {
      temp_v6 = 0x46;
    }
    temp_v7 = FUN_0023eae0(100);
    if (temp_v7 <= temp_v6) {
      return;
    }
  }
  temp_v4 = *puVar9 | 6;
  *puVar9 = temp_v4;
  return;
}
