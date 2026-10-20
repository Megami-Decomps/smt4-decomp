/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f9f64` (_code @ 0x1f9f64, 0x518 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0020d8ec(void);
int FUN_00281e34(void);
int FUN_002ba1e0(...);
int VectorFloatToUnsigned(...);
int VectorUnsignedToFloat(unsigned int, int);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(float *, float *, float *);

/* stack frame of void: 31 slot(s), 124 byte(s) */
typedef struct {
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
} void_stack;

extern unsigned int DAT_00407ed0; /* 0x407ed0 */
extern unsigned int DAT_00407ed4; /* 0x407ed4 */
extern unsigned int DAT_00407ed8; /* 0x407ed8 */
extern unsigned int DAT_00407edc; /* 0x407edc */
extern int DAT_004474f4; /* 0x4474f4 */
extern int DAT_00447600; /* 0x447600 */
extern signed char DAT_0049f93c; /* 0x49f93c */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0020d8ec. */
/* Supplied declaration required: FUN_00281e34. */
/* Supplied declaration required: FUN_002ba1e0. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


/* WARNING: Removing unreachable block (ram,0x001fa188) */
/* WARNING: Removing unreachable block (ram,0x001fa0d8) */
/* WARNING: Removing unreachable block (ram,0x001fa0e0) */
/* WARNING: Removing unreachable block (ram,0x001fa198) */

void FUN_001f9f64(void)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned int in_fpscr;
  float temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  unsigned int temp_v20;
  float temp_v21;
  float temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  float temp_v25;
  float temp_v26;
  unsigned long long temp_v27;
  float temp_v28;
  float temp_v29;
  unsigned int temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  float temp_v39;
  float temp_v40;
  float temp_v41;
  float temp_v42;
  float temp_v43;
  float temp_v44;
  float temp_v45;
  unsigned int temp_v46;
  float temp_v47;
  float temp_v48;
  float temp_v49;
  unsigned int temp_v50;
  float temp_v51;
  float temp_v52;
  float temp_v53;
  unsigned int temp_v54;
  
  temp_v0 = DAT_00447600;
  if ((*(int *)(DAT_00447600 + 4) == 8) && (DAT_0049f93c == '\0')) {
    temp_v25 = 220.0f;
    temp_v21 = 20.0f;
    temp_v26 = 57.32484f;
    temp_v27 = 0x3f360b61;
    temp_v23 = 0x3f280000;
    temp_v24 = 0x3f7c0000;
    temp_v6 = 0;
    do {
      temp_v4 = temp_v0 + temp_v6 * 0x180;
      if (*(char *)(temp_v4 + 0x34) != '\0') {
        *(unsigned char *)(temp_v4 + 0x180) = 0;
        *(unsigned char *)(temp_v4 + 0x172) = 0;
        if (*(char *)(temp_v4 + 0x1b0) != '\0') {
          temp_v1 = *(int *)(temp_v4 + 0xb8);
          if (temp_v1 != 0xe) {
            if (temp_v1 < 0xe) {
              if ((temp_v1 == 6 || temp_v1 == 7) || (temp_v1 == 8 || temp_v1 == 0xd)) goto LAB_001fa01c;
            }
            else if ((temp_v1 == 0xf || temp_v1 == 0x15) || temp_v1 == 0x19) goto LAB_001fa01c;
          }
          else {
LAB_001fa01c:
            temp_v8 = temp_v1 == 0x15;
            if (temp_v8) {
              temp_v1 = *(int *)(temp_v4 + 0xbc);
            }
            if (!temp_v8 || temp_v1 != 0) {
              temp_v1 = *(int *)(temp_v4 + 0x70);
              temp_v18 = *(float *)(temp_v4 + 0x54);
              temp_v22 = *(float *)(temp_v4 + 0x58) + temp_v25;
              temp_v19 = *(float *)(temp_v4 + 0x5c);
              *(unsigned char *)(temp_v4 + 0x178) = 1;
              *(int *)(temp_v4 + 0x17c) = temp_v1;
              *(unsigned char *)(temp_v4 + 0x172) = 1;
              *(unsigned char *)(temp_v4 + 0x180) = 1;
              *(float *)(temp_v4 + 0x184) = temp_v18;
              *(float *)(temp_v4 + 0x188) = temp_v22;
              *(float *)(temp_v4 + 0x18c) = temp_v19;
              temp_v9 = *(float *)(DAT_004474f4 + 0x4c) - temp_v18;
              FUN_00281e34();
              temp_v9 = temp_v9 * temp_v26 * (float)temp_v27;
              temp_v10 = 0;
              in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v9) << 0x1d);
              for (temp_v9 = romwright_fabs_4(temp_v9); (int)temp_v9 >= 0x47800000; temp_v9 = temp_v9 - 65536.0f) {
              }
              temp_v11 = VectorFloatToUnsigned(0,3);
              temp_v12 = VectorFloatToUnsigned(temp_v9,3);
              temp_v13 = VectorFloatToUnsigned(0,3);
              temp_v3 = temp_v12;
              temp_v15 = (float)VectorUnsignedToFloat(temp_v12 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v12 = temp_v11 & 0xff;
              temp_v14 = (float)VectorUnsignedToFloat(temp_v11 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v11 = temp_v13 & 0xff;
              temp_v17 = (float)VectorUnsignedToFloat(temp_v13 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v16 = (float)(&DAT_00407ed0)[temp_v3 * 4] +
                       (temp_v9 - temp_v15) * (float)(&DAT_00407ed8)[temp_v3 * 4];
              temp_v53 = (float)(&DAT_00407ed4)[temp_v3 * 4] +
                         (temp_v9 - temp_v15) * (float)(&DAT_00407edc)[temp_v3 * 4];
              temp_v9 = (float)(&DAT_00407ed0)[temp_v12 * 4] +
                       (0.0f - temp_v14) * (float)(&DAT_00407ed8)[temp_v12 * 4];
              temp_v15 = (float)(&DAT_00407ed4)[temp_v12 * 4] +
                       (0.0f - temp_v14) * (float)(&DAT_00407edc)[temp_v12 * 4];
              temp_v14 = (float)(&DAT_00407ed0)[temp_v11 * 4] +
                       (0.0f - temp_v17) * (float)(&DAT_00407ed8)[temp_v11 * 4];
              temp_v17 = (float)(&DAT_00407ed4)[temp_v11 * 4] +
                       (0.0f - temp_v17) * (float)(&DAT_00407edc)[temp_v11 * 4];
              if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
                temp_v16 = -temp_v16;
              }
              temp_v43 = temp_v17 * temp_v53;
              temp_v51 = -temp_v16;
              temp_v47 = temp_v14 * temp_v53;
              temp_v52 = temp_v9 * temp_v53;
              temp_v53 = temp_v15 * temp_v53;
              temp_v45 = temp_v9 * temp_v14 + temp_v15 * temp_v17 * temp_v16;
              temp_v48 = temp_v15 * temp_v17 + temp_v9 * temp_v14 * temp_v16;
              temp_v44 = temp_v9 * temp_v17 * temp_v16 - temp_v15 * temp_v14;
              temp_v49 = temp_v15 * temp_v14 * temp_v16 - temp_v9 * temp_v17;
              temp_v9 = -temp_v21;
              temp_v46 = 0;
              temp_v50 = 0;
              temp_v54 = 0;
              temp_v30 = 0;
              temp_v28 = temp_v9;
              temp_v29 = temp_v21;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v31,&temp_v43,&temp_v28);
              temp_v28 = temp_v9;
              temp_v29 = temp_v9;
              temp_v30 = temp_v10;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v34,&temp_v43,&temp_v28);
              temp_v28 = temp_v21;
              temp_v29 = temp_v21;
              temp_v30 = temp_v10;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v37,&temp_v43,&temp_v28);
              temp_v28 = temp_v21;
              temp_v29 = temp_v9;
              temp_v30 = temp_v10;
              nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v40,&temp_v43,&temp_v28);
              temp_v31 = temp_v31 + temp_v18;
              temp_v32 = temp_v32 + temp_v22;
              temp_v33 = temp_v33 + temp_v19;
              temp_v34 = temp_v34 + temp_v18;
              temp_v35 = temp_v35 + temp_v22;
              temp_v36 = temp_v36 + temp_v19;
              temp_v37 = temp_v37 + temp_v18;
              temp_v38 = temp_v38 + temp_v22;
              temp_v39 = temp_v39 + temp_v19;
              temp_v40 = temp_v40 + temp_v18;
              temp_v41 = temp_v41 + temp_v22;
              temp_v42 = temp_v42 + temp_v19;
              temp_v2 = *(int *)(temp_v4 + 0x174) + 1;
              *(int *)(temp_v4 + 0x174) = temp_v2;
              temp_v20 = temp_v23;
              if (temp_v2 % 0x14 < 10) {
                temp_v20 = 0x3ea80000;
              }
              if (temp_v1 < 0x43c80000) {
                temp_v5 = 0xef6c3eff;
                temp_v7 = 0xfe0b22ff;
              }
              else if (temp_v1 < 0x44480000) {
                temp_v5 = 0xfbc30dff;
                temp_v7 = 0xff6c2bff;
              }
              else if (temp_v1 < 0x44960000) {
                temp_v5 = 0xfff2c0ff;
                temp_v7 = 0xffd52dff;
              }
              else {
                temp_v7 = 0x2db5ffff;
                temp_v5 = 0xffffffff;
              }
              FUN_0020d8ec();
              FUN_002ba1e0(temp_v5,temp_v7,temp_v5,temp_v7,temp_v20,temp_v10,temp_v20,temp_v23);
              FUN_002ba1e0(0xff,0xff,0xff,0xff,temp_v24,temp_v10,temp_v24,temp_v23);
            }
          }
        }
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x20);
  }
  return;
}

} /* extern "C" */
