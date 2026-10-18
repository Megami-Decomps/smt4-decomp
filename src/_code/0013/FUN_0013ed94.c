/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013ed94` (_code @ 0x13ed94, 0x138 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0013ed94_arg1 fn_0013ed94_arg1;
struct fn_0013ed94_arg1 {
    unsigned char pad_0x0[0x210];
    float field_0x210; /* +0x210 */
    float field_0x214; /* +0x214 */
    unsigned char pad_0x218[0x8];
    float field_0x220; /* +0x220 */
    float field_0x224; /* +0x224 */
    unsigned char pad_0x228[0x38];
    void *field_0x260; /* +0x260 */
    unsigned char pad_0x264[0x30];
    undefined4 field_0x294; /* +0x294 */
};

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
extern int FUN_002a7fd8(void);
/* Supplied declaration required: FUN_002ac0c4. */


void FUN_0013ed94(int param_1,fn_0013ed94_arg1 *param_2)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int *unaff_r4;
  unsigned int temp_v6;
  unsigned int *puVar9;
  int temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned long long temp_v13;
  float temp_v14;
  unsigned int temp_v15;
  float temp_v16;
  float temp_v17;
  unsigned long long temp_v18;
  unsigned long long temp_v19;
  
  temp_v7 = 0;
  temp_v2 = *(int *)(param_1 + 8);
  temp_v5 = *(int *)(temp_v2 + 200);
  if (temp_v5 != 0) {
    unaff_r4 = (unsigned int *)(temp_v5 + temp_v2 + 200);
  }
  temp_v4 = *(int *)(temp_v2 + 0xc4);
  if (temp_v5 == 0) {
    unaff_r4 = (unsigned int *)0x0;
  }
  if (temp_v4 != 0) {
    temp_v7 = temp_v4 + temp_v2 + 0xc4;
  }
  temp_v2 = (**(romwright_code **)(*(int *)param_2->field_0x260 + 0x14))();
  temp_v15 = *(unsigned int *)(temp_v2 + 4);
  puVar9 = *(unsigned int **)(param_1 + 0x150);
  temp_v13 = romwright_piece_4_4(param_2->field_0x294,*(unsigned int *)(temp_v2 + 8));
  temp_v2 = FUN_002a7fd8();
  if (((((temp_v2 != 0) && (temp_v2 = FUN_002a7fd8(), temp_v2 != 0)) &&
       (temp_v2 = FUN_002a7fd8(), temp_v2 != 0)) &&
      ((temp_v2 = FUN_002a7fd8(), temp_v2 != 0 && ((*unaff_r4 & 0xff) == *puVar9)))) &&
     ((temp_v2 = FUN_002a7fd8(), temp_v2 != 0 && (temp_v2 = FUN_002a7fd8(), temp_v2 != 0)))) {
    return;
  }
  *(unsigned int *)(param_1 + 0x158) = temp_v15;
  *(int *)(param_1 + 0x15c) = (int)temp_v13;
  *(int *)(param_1 + 0x160) = (int)((unsigned long long)temp_v13 >> 0x20);
  puVar9[3] = unaff_r4[3];
  *puVar9 = *unaff_r4 & 0xff;
  puVar9[2] = unaff_r4[2];
  puVar9[1] = unaff_r4[1];
  temp_v2 = 0;
  temp_v14 = 0.0f;
  if (*(int *)(temp_v7 + 0x10) != 0) {
    puVar4 = (unsigned int *)(temp_v7 + 0x10 + *(int *)(temp_v7 + 0x10));
  }
  else {
    puVar4 = (unsigned int *)0x0;
  }
  *puVar4 = 0;
  if (*(int *)(temp_v7 + 0x10) != 0) {
    temp_v5 = temp_v7 + 0x10 + *(int *)(temp_v7 + 0x10);
  }
  else {
    temp_v5 = 0;
  }
  *(unsigned int *)(temp_v5 + 4) = 0xf00e6;
  temp_v16 = -0.0078125f;
  temp_v17 = 0.0078125f;
  if (*(int *)(temp_v7 + 0x10) != 0) {
    temp_v5 = *(int *)(temp_v7 + 0x10) + temp_v7 + 0x10;
  }
  else {
    temp_v5 = 0;
  }
  temp_v19 = 0x45fff800;
  temp_v18 = 0x4580000040000000;
  temp_v13 = 0x450000003f800000;
  temp_v6 = 0;
  *(unsigned int *)(temp_v5 + 0xc) = 0x7ff00e8;
  temp_v10 = temp_v14;
  do {
    temp_v3 = in_fpscr & 0xfffffff;
    temp_v0 = temp_v3 | ((unsigned int)(*(float *)(param_1 + 0x160) == temp_v14) << 0x1e);
    if (romwright_subpiece_4_1_0(temp_v0 >> 0x1e,0)) {
      temp_v12 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(temp_v0 >> 0x16) & 3);
      temp_v12 = -(param_2->field_0x214 + param_2->field_0x210 * temp_v12 * temp_v16) /
               (param_2->field_0x224 + param_2->field_0x220 * temp_v12 * temp_v16);
    }
    else {
      temp_v12 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(temp_v0 >> 0x16) & 3);
      temp_v12 = *(float *)(param_1 + 0x158) +
               temp_v12 * temp_v17 * (*(float *)(param_1 + 0x15c) - *(float *)(param_1 + 0x158));
    }
    temp_v9 = (float)unaff_r4[1];
    in_fpscr = temp_v3 | ((unsigned int)(temp_v12 == temp_v9) << 0x1e) | ((unsigned int)(temp_v9 <= temp_v12) << 0x1d);
    temp_v1 = (unsigned char)(in_fpscr >> 0x18);
    if (!(unsigned char)((temp_v1 >> 5) & 1) || (unsigned char)(temp_v1 >> 6)) {
      temp_v8 = (float)temp_v13;
    }
    else {
      temp_v11 = (float)unaff_r4[2];
      temp_v3 = temp_v3 | ((unsigned int)(temp_v12 < temp_v11) << 0x1f) | ((unsigned int)(temp_v12 == temp_v11) << 0x1e);
      in_fpscr = temp_v3 | ((unsigned int)(NAN(temp_v12) || NAN(temp_v11)) << 0x1c);
      temp_v1 = (unsigned char)(temp_v3 >> 0x18);
      temp_v8 = temp_v14;
      if ((unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
        temp_v3 = *unaff_r4 & 0xff;
        if (temp_v3 != 1) {
          if (temp_v3 != 2) {
            temp_v8 = temp_v12;
            if (temp_v3 == 3) {
              temp_v12 = ((temp_v12 - temp_v9) * (float)unaff_r4[3]) / (temp_v11 - temp_v9);
              temp_v8 = -(temp_v12 * temp_v12);
              FUN_002ac0c4();
            }
          }
          else {
            temp_v8 = -((temp_v12 - temp_v9) * (float)unaff_r4[3]) / (temp_v11 - temp_v9);
            FUN_002ac0c4();
          }
        }
        else {
          temp_v8 = (temp_v11 - temp_v12) / (temp_v11 - temp_v9);
        }
      }
    }
    if (0 < (int)temp_v6) {
      temp_v11 = (float)((unsigned long long)temp_v13 >> 0x20);
      temp_v9 = ((temp_v8 - temp_v10) + (float)temp_v18) * temp_v11;
      temp_v12 = temp_v14;
      if ((temp_v14 <= temp_v9) && (temp_v12 = temp_v9, (int)temp_v9 >= 0x46000000)) {
        temp_v12 = (float)temp_v19;
      }
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v10 == temp_v14) << 0x1e) |
                 ((unsigned int)(temp_v14 <= temp_v10) << 0x1d);
      temp_v1 = (unsigned char)(in_fpscr >> 0x18);
      if ((!(unsigned char)((temp_v1 >> 5) & 1) || (unsigned char)(temp_v1 >> 6)) || ((unsigned int)romwright_fabs_4(temp_v10) >> 0x17 == 0xff))
      {
        temp_v3 = 0;
      }
      else {
        temp_v10 = temp_v10 * temp_v11;
        if ((int)temp_v10 >= 0x45000000) {
          temp_v3 = 0x7ff;
        }
        else {
          temp_v3 = VectorFloatToUnsigned(temp_v10,3);
        }
      }
      if (temp_v2 == 0) {
        temp_v5 = 2;
      }
      else {
        temp_v5 = temp_v2 + 3;
      }
      if (*(int *)(temp_v7 + 0x10) != 0) {
        temp_v4 = temp_v7 + 0x10 + *(int *)(temp_v7 + 0x10);
      }
      else {
        temp_v4 = 0;
      }
      temp_v2 = temp_v2 + 1;
      *(unsigned int *)(temp_v4 + temp_v5 * 4) =
           ((int)(temp_v12 - (float)((unsigned long long)temp_v18 >> 0x20)) & 0x1fffU) | ((temp_v3 & 0x7ff) << 0xd)
      ;
    }
    temp_v6 = temp_v6 + 1;
    temp_v10 = temp_v8;
    if (temp_v6 >= 0x81) {
      return;
    }
  } while( 1 );
}
