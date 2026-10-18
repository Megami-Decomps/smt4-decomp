/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cfed0` (_code @ 0x1cfed0, 0x21c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001cfed0_arg0 fn_001cfed0_arg0;
struct fn_001cfed0_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    int field_0x8; /* +0x8 */
    int field_0xc; /* +0xc */
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x8];
    int field_0x1c; /* +0x1c */
    int field_0x20; /* +0x20 */
    unsigned char pad_0x24[0x8];
    byte field_0x2c; /* +0x2c */
};

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
extern int FUN_0026a86c(void);
/* Supplied declaration required: FUN_0026a904. */
/* Supplied declaration required: FUN_002840b8. */
/* Supplied declaration required: FUN_0029ec14. */
/* Supplied declaration required: FUN_002ae3f0. */


unsigned int FUN_001cfed0(fn_001cfed0_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  
  temp_v6 = 0;
  temp_v7 = -1;
  temp_v9 = 0.0f;
  if (0 < param_1->field_0x8) {
    temp_v11 = 0.01f;
    temp_v10 = 1.0f;
    do {
      temp_v1 = (unsigned int)*(unsigned short *)(param_1->field_0x4 + temp_v6 * 2);
      if ((temp_v1 != 0) && (FUN_0026a904(), temp_v1 == 6)) {
        FUN_0029ec14(*(unsigned short *)(param_1->field_0x4 + temp_v6 * 2));
        temp_v4 = (unsigned int)*(unsigned short *)(param_1->field_0x4 + temp_v6 * 2);
        temp_v1 = temp_v4;
        FUN_0029ec14();
        temp_v8 = (float)VectorUnsignedToFloat
                                 (*(unsigned char *)(temp_v1 + 3) & 0x1f,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v8 = temp_v8 + temp_v8 * temp_v11;
        temp_v2 = temp_v4;
        FUN_0026a904();
        if (param_1->field_0x2c == temp_v2) {
          temp_v8 = temp_v8 + temp_v10;
        }
        FUN_002ae3f0();
        if ((temp_v4 != 0) && (temp_v5 = 0, 0 < param_1->field_0x10)) {
          do {
            if (*(short *)(param_1->field_0xc + temp_v5 * 2) != 0) {
              FUN_002840b8();
              temp_v3 = FUN_0026a86c();
              if (temp_v3 != 0) {
                temp_v8 = temp_v8 + temp_v10;
                break;
              }
            }
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < param_1->field_0x10);
        }
        temp_v5 = 0;
        if (temp_v5 < param_1->field_0x20) {
          do {
            temp_v4 = (unsigned int)*(unsigned short *)(param_1->field_0x1c + temp_v5 * 2);
            FUN_0026a904();
            if (temp_v4 == temp_v2) {
              temp_v8 = temp_v8 - temp_v10;
            }
            temp_v4 = (unsigned int)*(unsigned short *)(param_1->field_0x1c + temp_v5 * 2);
            FUN_0029ec14();
            temp_v5 = temp_v5 + 1;
            if (*(char *)(temp_v1 + 2) == *(char *)(temp_v4 + 2)) {
              temp_v8 = temp_v8 - temp_v10;
            }
          } while (temp_v5 < param_1->field_0x20);
        }
        if (-1 >= temp_v7) {
          temp_v7 = temp_v6;
          temp_v9 = temp_v8;
        }
        else {
          temp_v1 = in_fpscr & 0xfffffff;
          temp_v2 = temp_v1 | ((unsigned int)(temp_v9 < temp_v8) << 0x1f) | ((unsigned int)(temp_v9 == temp_v8) << 0x1e);
          in_fpscr = temp_v2 | ((unsigned int)(NAN(temp_v9) || NAN(temp_v8)) << 0x1c);
          temp_v0 = (unsigned char)(temp_v2 >> 0x18);
          if ((!(!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1))) &&
             ((in_fpscr = temp_v1 | ((unsigned int)(temp_v9 == temp_v8) << 0x1e), !romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0) ||
              (*(unsigned short *)(param_1->field_0x4 + temp_v7 * 2) >=
               *(unsigned short *)(param_1->field_0x4 + temp_v6 * 2))))) {
            temp_v7 = temp_v6;
            temp_v9 = temp_v8;
          }
        }
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < param_1->field_0x8);
    if (-1 < temp_v7) {
      *(unsigned short *)(param_1->field_0x1c + param_1->field_0x20 * 2) =
           *(unsigned short *)(param_1->field_0x4 + temp_v7 * 2);
      param_1->field_0x20 = param_1->field_0x20 + 1;
      *(unsigned short *)(param_1->field_0x4 + temp_v7 * 2) = 0;
      return 1;
    }
  }
  return 0;
}
