/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a2904` (_code @ 0x3a2904, 0x58c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017efa4(int, int, int);
int mathPositionHeadingDegrees(void);
int FUN_0050d8e4(void);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);
int nn_math_ARMv6_MTX34MultAsm(int, int, float *);

/* stack frame of void: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} void_stack;

extern unsigned char LAB_003a2c30; /* 0x3a2c30 */
extern unsigned char LAB_003a2e90; /* 0x3a2e90 */
extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */
extern int g_mapGimic; /* 0x580ca0 */
extern int DAT_00580ca4; /* 0x580ca4 */
extern int g_lmapScene; /* 0x581288 */

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
/* Supplied declaration required: FUN_0017efa4. */
extern int FUN_001a7a20(int, unsigned char *, unsigned int);
extern unsigned int wstrlen(unsigned char *);
/* Supplied declaration required: mathPositionHeadingDegrees. */
/* Supplied declaration required: FUN_0050d8e4. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */


/* WARNING: Removing unreachable block (ram,0x003a2b64) */
/* WARNING: Removing unreachable block (ram,0x003a2de0) */
/* WARNING: Removing unreachable block (ram,0x003a2de8) */

void FUN_003a2904(void)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  unsigned int temp_v8;
  float temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  unsigned int temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  unsigned long long temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  unsigned int temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  unsigned int temp_v32;
  float temp_v33;
  float temp_v34;
  float fStack_70;
  unsigned int temp_v35;
  
  temp_v3 = 0;
  temp_v18 = 0.0f;
  temp_v22 = 2078.0f;
  temp_v20 = 57.32484f;
  temp_v21 = 360.0f;
  temp_v23 = 44.0f;
  temp_v19 = 0.7111111f;
  temp_v24 = 0x43340000;
  do {
    temp_v0 = g_mapGimic + temp_v3 * 0x3c;
    if (*(char *)(temp_v0 + 0x90) != '\0') {
      if (*(short *)(temp_v0 + 0xa6) != 0x2a) {
        if (*(short *)(temp_v0 + 0xa6) != 0x2c) {
          temp_v3 = temp_v3 + 1;
          if (temp_v3 >= 0x23) {
            return;
          }
          continue;
        }
        DAT_00580ca4 = DAT_00580ca4 + 1;
        temp_v4 = *(int *)(*(int *)(temp_v0 + 0xa8) + 4);
        temp_v0 = *(int *)(temp_v4 + 0x210);
        temp_v1 = wstrlen(&LAB_003a2e90);
        temp_v0 = FUN_001a7a20(temp_v0 + 0x74,&LAB_003a2e90,temp_v1);
        temp_v5 = *(int *)(temp_v4 + 0x108);
        temp_v2 = *(int *)(temp_v5 + 0xc);
        temp_v7 = *(float *)(g_lmapScene + 0x1c);
        mathPositionHeadingDegrees();
        FUN_0050d8e4();
        temp_v7 = (temp_v7 + (float)temp_v24) * temp_v19;
        in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v18 <= temp_v7) << 0x1d);
        for (temp_v7 = romwright_fabs_4(temp_v7); (int)temp_v7 >= 0x47800000; temp_v7 = temp_v7 - 65536.0f) {
        }
        temp_v8 = VectorFloatToUnsigned(temp_v18,3);
        temp_v10 = VectorFloatToUnsigned(temp_v18,3);
        temp_v12 = VectorFloatToUnsigned(temp_v7,3);
        temp_v6 = temp_v8;
        temp_v13 = (float)VectorUnsignedToFloat(temp_v8 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v15 = (float)VectorUnsignedToFloat(temp_v10 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v17 = (float)VectorUnsignedToFloat(temp_v12 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v10 = temp_v10 & 0xff;
        temp_v12 = temp_v12 & 0xff;
        temp_v11 = (float)(&DAT_00536d14)[temp_v6 * 4] +
                 (temp_v18 - temp_v13) * (float)(&DAT_00536d1c)[temp_v6 * 4];
        temp_v9 = (float)(&DAT_00536d14)[temp_v10 * 4] +
                 (temp_v18 - temp_v15) * (float)(&DAT_00536d1c)[temp_v10 * 4];
        temp_v13 = (float)(&DAT_00536d18)[temp_v6 * 4] +
                 (temp_v18 - temp_v13) * (float)(&DAT_00536d20)[temp_v6 * 4];
        temp_v34 = (float)(&DAT_00536d18)[temp_v10 * 4] +
                   (temp_v18 - temp_v15) * (float)(&DAT_00536d20)[temp_v10 * 4];
        temp_v15 = (float)(&DAT_00536d14)[temp_v12 * 4] +
                 (temp_v7 - temp_v17) * (float)*(unsigned long long *)(&DAT_00536d1c + temp_v12 * 4);
        temp_v7 = (float)(&DAT_00536d18)[temp_v12 * 4] +
                (temp_v7 - temp_v17) *
                (float)((unsigned long long)*(unsigned long long *)(&DAT_00536d1c + temp_v12 * 4) >> 0x20);
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
          temp_v15 = -temp_v15;
        }
        temp_v25 = temp_v7 * temp_v34;
        temp_v29 = temp_v15 * temp_v34;
        fStack_70 = temp_v13 * temp_v34;
        temp_v34 = temp_v11 * temp_v34;
        temp_v33 = -temp_v9;
        temp_v27 = temp_v11 * temp_v15 + temp_v13 * temp_v7 * temp_v9;
        temp_v30 = temp_v13 * temp_v7 + temp_v11 * temp_v15 * temp_v9;
        temp_v26 = temp_v11 * temp_v7 * temp_v9 - temp_v13 * temp_v15;
        temp_v31 = temp_v13 * temp_v15 * temp_v9 - temp_v11 * temp_v7;
        temp_v28 = 0;
        temp_v32 = 0;
        temp_v35 = 0;
        temp_v0 = temp_v2 + temp_v0 * 0x40 + 0x10;
        nn_math_ARMv6_MTX34MultAsm(temp_v0,temp_v0,&temp_v25);
      }
      else {
        DAT_00580ca4 = DAT_00580ca4 + 1;
        temp_v4 = *(int *)(*(int *)(temp_v0 + 0xa8) + 4);
        temp_v0 = *(int *)(temp_v4 + 0x210);
        temp_v7 = temp_v22;
        temp_v1 = wstrlen(&LAB_003a2c30);
        temp_v0 = FUN_001a7a20(temp_v0 + 0x74,&LAB_003a2c30,temp_v1);
        temp_v5 = *(int *)(temp_v4 + 0x108);
        temp_v2 = *(int *)(temp_v5 + 0xc);
        temp_v9 = *(float *)(g_lmapScene + 0x1c);
        mathPositionHeadingDegrees();
        temp_v7 = temp_v7 - *(float *)(g_lmapScene + 0x20);
        FUN_0050d8e4();
        temp_v7 = temp_v7 * temp_v20;
        if (temp_v7 < temp_v18) {
          temp_v7 = temp_v7 + temp_v21;
        }
        if ((int)temp_v7 >= 0x43b40001) {
          temp_v7 = temp_v7 - temp_v21;
        }
        if ((int)temp_v7 >= 0x42300001) {
          temp_v7 = temp_v23;
        }
        in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v18 <= temp_v9 * temp_v19) << 0x1d);
        temp_v11 = romwright_fabs_4(temp_v9 * temp_v19);
        for (temp_v9 = romwright_fabs_4(temp_v7 * temp_v19); (int)temp_v9 >= 0x47800000; temp_v9 = temp_v9 - 65536.0f) {
        }
        for (; (int)temp_v11 >= 0x47800000; temp_v11 = temp_v11 - 65536.0f) {
        }
        temp_v8 = VectorFloatToUnsigned(temp_v18,3);
        temp_v10 = VectorFloatToUnsigned(temp_v9,3);
        temp_v12 = VectorFloatToUnsigned(temp_v11,3);
        temp_v6 = temp_v8;
        temp_v17 = (float)VectorUnsignedToFloat(temp_v8 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v14 = (float)VectorUnsignedToFloat(temp_v10 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v10 = temp_v10 & 0xff;
        temp_v16 = (float)VectorUnsignedToFloat(temp_v12 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v12 = temp_v12 & 0xff;
        temp_v15 = (float)(&DAT_00536d14)[temp_v6 * 4] +
                 (temp_v18 - temp_v17) * (float)(&DAT_00536d1c)[temp_v6 * 4];
        temp_v13 = (float)(&DAT_00536d14)[temp_v10 * 4] +
                 (temp_v9 - temp_v14) * (float)(&DAT_00536d1c)[temp_v10 * 4];
        temp_v17 = (float)(&DAT_00536d18)[temp_v6 * 4] +
                 (temp_v18 - temp_v17) * (float)(&DAT_00536d20)[temp_v6 * 4];
        temp_v34 = (float)(&DAT_00536d18)[temp_v10 * 4] +
                   (temp_v9 - temp_v14) * (float)(&DAT_00536d20)[temp_v10 * 4];
        temp_v9 = (float)(&DAT_00536d14)[temp_v12 * 4] +
                 (temp_v11 - temp_v16) * (float)*(unsigned long long *)(&DAT_00536d1c + temp_v12 * 4);
        temp_v11 = (float)(&DAT_00536d18)[temp_v12 * 4] +
                 (temp_v11 - temp_v16) *
                 (float)((unsigned long long)*(unsigned long long *)(&DAT_00536d1c + temp_v12 * 4) >> 0x20);
        if (temp_v7 * temp_v19 < temp_v18) {
          temp_v13 = -temp_v13;
        }
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
          temp_v9 = -temp_v9;
        }
        temp_v25 = temp_v11 * temp_v34;
        temp_v29 = temp_v9 * temp_v34;
        fStack_70 = temp_v17 * temp_v34;
        temp_v34 = temp_v15 * temp_v34;
        temp_v33 = -temp_v13;
        temp_v27 = temp_v15 * temp_v9 + temp_v17 * temp_v11 * temp_v13;
        temp_v30 = temp_v17 * temp_v11 + temp_v15 * temp_v9 * temp_v13;
        temp_v26 = temp_v15 * temp_v11 * temp_v13 - temp_v17 * temp_v9;
        temp_v31 = temp_v17 * temp_v9 * temp_v13 - temp_v15 * temp_v11;
        temp_v28 = 0;
        temp_v32 = 0;
        temp_v35 = 0;
        temp_v0 = temp_v2 + temp_v0 * 0x40 + 0x10;
        nn_math_ARMv6_MTX34MultAsm(temp_v0,temp_v0,&temp_v25);
      }
      FUN_0017efa4(temp_v5,temp_v4 + 0x120,0);
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 0x23) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
