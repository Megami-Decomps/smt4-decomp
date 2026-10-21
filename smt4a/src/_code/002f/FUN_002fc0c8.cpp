/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fc0c8` (_code @ 0x2fc0c8, 0xf58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00419d8c(...);
int FUN_00422124(void);

int CONCAT44(...);
int FUN_001d3d38(...);
int FUN_00419c34(...);
int FUN_00419ce0(...);
int FUN_00421e9c(...);
int FUN_00421f34(...);
int FUN_00421f90(void);
int FUN_00421fec(void);
int FUN_00422048(void);
int FUN_004fefe0(...);
int VectorFloatToUnsigned(...);
int VectorUnsignedToFloat(...);
int nn_math_ARMv6_MTX34CopyAsm(unsigned char [60], unsigned int *);
int nn_math_ARMv6_MTX34MultAsm(...);
int nn_math_ARMv6_MTX34MultTranslateAsm(...);

typedef int romwright_code(...);
/* stack frame of param_1: 31 slot(s), 124 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
} param_1_stack;

extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */
extern int DAT_0056fcbc; /* 0x56fcbc */
extern int *DAT_0057aa08; /* 0x57aa08 */
extern unsigned int DAT_005c4c2c; /* 0x5c4c2c */
extern unsigned int DAT_0064c054; /* 0x64c054 */
extern unsigned int DAT_0064c058; /* 0x64c058 */
extern unsigned int DAT_0064c05c; /* 0x64c05c */
extern unsigned int DAT_0064c060; /* 0x64c060 */
extern unsigned int DAT_0064c064; /* 0x64c064 */
extern unsigned int DAT_0064c068; /* 0x64c068 */
extern unsigned int DAT_0064c06c; /* 0x64c06c */
extern unsigned int DAT_0064c070; /* 0x64c070 */
extern unsigned int DAT_0064c074; /* 0x64c074 */
extern unsigned int DAT_0064c078; /* 0x64c078 */
extern unsigned int DAT_0064c07c; /* 0x64c07c */
extern unsigned int DAT_0064c080; /* 0x64c080 */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001d3d38. */
extern int __cxa_guard_acquire(unsigned int *);
extern unsigned int resourceGetIndexedEntry(int, unsigned int);
/* Supplied declaration required: FUN_00419c34. */
/* Supplied declaration required: FUN_00419ce0. */
/* Supplied declaration required: FUN_00419d8c. */
extern unsigned int FUN_00421e18(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00421e9c. */
/* Supplied declaration required: FUN_00421f34. */
/* Supplied declaration required: FUN_00421f90. */
/* Supplied declaration required: FUN_00421fec. */
/* Supplied declaration required: FUN_00422048. */
/* Supplied declaration required: FUN_00422124. */
extern unsigned int FUN_0042c5cc(unsigned int);
/* Supplied declaration required: FUN_004fefe0. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultTranslateAsm. */


/* WARNING: Removing unreachable block (ram,0x002fcb00) */
/* WARNING: Removing unreachable block (ram,0x002fc3a4) */
/* WARNING: Removing unreachable block (ram,0x002fc75c) */
/* WARNING: Removing unreachable block (ram,0x002fcea0) */
/* WARNING: Removing unreachable block (ram,0x002fcb14) */
/* WARNING: Removing unreachable block (ram,0x002fc3b8) */
/* WARNING: Removing unreachable block (ram,0x002fc770) */
/* WARNING: Removing unreachable block (ram,0x002fceb4) */

void FUN_002fc0c8(unsigned int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 25 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  float *pfVar3;
  unsigned int temp_v2;
  float *pfVar5;
  float *pfVar6;
  int temp_v3;
  unsigned int *puVar8;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int *unaff_r10;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  float temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  unsigned long long temp_v20;
  float temp_v21;
  float temp_v22;
  unsigned char temp_v23 [48];
  float temp_v24;
  float temp_v25;
  float temp_v26;
  unsigned int temp_v27;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  unsigned int temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  unsigned int temp_v35;
  unsigned char temp_v36 [60];
  unsigned int temp_v37;
  unsigned int temp_v38;
  int temp_v39;
  unsigned int temp_v40;
  unsigned int temp_v41;
  unsigned int temp_v42;
  unsigned int temp_v43;
  unsigned int temp_v44;
  float temp_v45;
  float temp_v46;
  float temp_v47;
  float temp_v48;
  float temp_v49;
  float temp_v50;
  float temp_v51;
  float temp_v52;
  int temp_v53;
  int temp_v54;
  int temp_v55;
  
  temp_v20 = 0;
  puVar8 = *(unsigned int **)(DAT_0056fcbc + 0xa8);
  if (((DAT_005c4c2c & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&DAT_005c4c2c), temp_v0 != 0)) {
    in_s0 = 1.0f;
    DAT_0064c054 = 0x3f800000;
    DAT_0064c058 = (unsigned int)((unsigned long long)temp_v20 >> 0x20);
    DAT_0064c068 = 0x3f800000;
    DAT_0064c07c = 0x3f800000;
    DAT_0064c05c = DAT_0064c058;
    DAT_0064c060 = DAT_0064c058;
    DAT_0064c064 = DAT_0064c058;
    DAT_0064c06c = DAT_0064c058;
    DAT_0064c070 = DAT_0064c058;
    DAT_0064c074 = DAT_0064c058;
    DAT_0064c078 = DAT_0064c058;
    DAT_0064c080 = DAT_0064c058;
  }
  nn_math_ARMv6_MTX34CopyAsm(temp_v36,&DAT_0064c054);
  temp_v0 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  FUN_00422048();
  *puVar8 = param_1;
  FUN_00421f90();
  *puVar8 = param_1;
  temp_v3 = 0;
  temp_v1 = (**(romwright_code **)(*DAT_0057aa08 + 8))();
  if (0 < temp_v1) {
    unaff_r10 = &DAT_00536d14;
  }
  temp_v22 = 40.743664f;
  temp_v21 = 65536.0f;
  if (0 < temp_v1) {
    do {
      temp_v1 = (**(romwright_code **)(*DAT_0057aa08 + 0xc))(DAT_0057aa08,temp_v3);
      if (temp_v1 != 0) {
        (**(romwright_code **)(*DAT_0057aa08 + 0x18))(DAT_0057aa08,temp_v3);
        in_fpscr = (in_fpscr & 0xfffffff) |
                   ((unsigned int)(in_s0 == (float)((unsigned long long)temp_v20 >> 0x20)) << 0x1e);
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
          temp_v6 = in_s0;
          temp_v43 = (**(romwright_code **)(*DAT_0057aa08 + 0x20))(DAT_0057aa08,temp_v3);
          temp_v14 = (float)((unsigned long long)temp_v20 >> 0x20);
          if ((temp_v43 & 0xff) != 0) {
            temp_v37 = (**(romwright_code **)(*DAT_0057aa08 + 0x10))(DAT_0057aa08,temp_v3);
            temp_v52 = (float)(**(romwright_code **)(*DAT_0057aa08 + 0x14))(DAT_0057aa08,temp_v3);
            (**(romwright_code **)(*DAT_0057aa08 + 0x1c))(DAT_0057aa08,temp_v3);
            temp_v48 = temp_v6;
            temp_v49 = temp_v6;
            temp_v50 = temp_v6;
            temp_v1 = (**(romwright_code **)(*DAT_0057aa08 + 0x28))(DAT_0057aa08,temp_v3);
            temp_v39 = temp_v1;
            FUN_004fefe0(temp_v1,temp_v37);
            in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v14 <= in_s0 * temp_v22) << 0x1d);
            temp_v20 = CONCAT44(temp_v14,temp_v14);
            temp_v45 = (float)(unsigned int)!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0);
            for (temp_v6 = romwright_fabs_4(in_s0 * temp_v22); temp_v15 = temp_v14, (int)temp_v6 >= 0x47800000;
                temp_v6 = temp_v6 - temp_v21) {
            }
            for (; (int)temp_v15 >= 0x47800000; temp_v15 = temp_v15 - temp_v21) {
            }
            temp_v7 = VectorFloatToUnsigned(temp_v14,3);
            temp_v10 = VectorFloatToUnsigned(temp_v6,3);
            temp_v11 = VectorFloatToUnsigned(temp_v15,3);
            temp_v16 = (float)VectorUnsignedToFloat(temp_v7 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
            pfVar5 = (float *)(unaff_r10 + (temp_v7 & 0xff) * 4);
            temp_v17 = (float)VectorUnsignedToFloat(temp_v10 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v18 = (float)VectorUnsignedToFloat(temp_v11 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
            pfVar3 = (float *)(unaff_r10 + (temp_v11 & 0xff) * 4);
            pfVar6 = (float *)(unaff_r10 + (temp_v10 & 0xff) * 4);
            temp_v12 = *pfVar5 + (temp_v14 - temp_v16) * pfVar5[2];
            temp_v8 = *pfVar6 + (temp_v6 - temp_v17) * pfVar6[2];
            temp_v14 = pfVar5[1] + (temp_v14 - temp_v16) * pfVar5[3];
            temp_v16 = *pfVar3 + (temp_v15 - temp_v18) * pfVar3[2];
            temp_v15 = pfVar3[1] + (temp_v15 - temp_v18) * pfVar3[3];
            if (temp_v45 != 0.0f) {
              temp_v8 = -temp_v8;
            }
            temp_v34 = pfVar6[1] + (temp_v6 - temp_v17) * pfVar6[3];
            temp_v24 = temp_v15 * temp_v34;
            temp_v28 = temp_v16 * temp_v34;
            temp_v33 = temp_v12 * temp_v34;
            temp_v34 = temp_v14 * temp_v34;
            temp_v32 = -temp_v8;
            temp_v25 = temp_v12 * temp_v15 * temp_v8 - temp_v14 * temp_v16;
            in_s0 = temp_v14 * temp_v16 * temp_v8 - temp_v12 * temp_v15;
            temp_v26 = temp_v12 * temp_v16 + temp_v14 * temp_v15 * temp_v8;
            temp_v29 = temp_v14 * temp_v15 + temp_v12 * temp_v16 * temp_v8;
            temp_v27 = 0;
            temp_v31 = 0;
            temp_v35 = 0;
            temp_v30 = in_s0;
            temp_v53 = temp_v1;
            nn_math_ARMv6_MTX34MultTranslateAsm(temp_v23,temp_v36,temp_v52);
            FUN_001d3d38(temp_v23,temp_v23,&temp_v48);
            nn_math_ARMv6_MTX34MultAsm(temp_v23,temp_v23,&temp_v24);
            temp_v2 = param_1;
            if (temp_v0 != temp_v39) {
              temp_v2 = resourceGetIndexedEntry(temp_v39,0);
              FUN_00421e9c(param_1,temp_v2);
              *puVar8 = param_1;
              temp_v0 = temp_v39;
              temp_v2 = param_1;
            }
            if (temp_v4 != temp_v43) {
              temp_v2 = FUN_00421e18(temp_v2,temp_v43);
              *puVar8 = temp_v2;
              temp_v4 = temp_v43;
            }
            param_1 = *(unsigned int *)(temp_v39 + 0x44);
            FUN_00419c34(param_1,temp_v2,temp_v53,temp_v23);
            *puVar8 = param_1;
          }
        }
      }
      temp_v3 = temp_v3 + 1;
      temp_v1 = (**(romwright_code **)(*DAT_0057aa08 + 8))();
    } while (temp_v3 < temp_v1);
  }
  FUN_00421fec();
  *puVar8 = param_1;
  temp_v3 = 0;
  temp_v1 = (**(romwright_code **)(*DAT_0057aa08 + 8))();
  if (0 < temp_v1) {
    do {
      temp_v1 = (**(romwright_code **)(*DAT_0057aa08 + 0xc))(DAT_0057aa08,temp_v3);
      if (temp_v1 != 0) {
        (**(romwright_code **)(*DAT_0057aa08 + 0x18))(DAT_0057aa08,temp_v3);
        in_fpscr = (in_fpscr & 0xfffffff) |
                   ((unsigned int)(in_s0 == (float)((unsigned long long)temp_v20 >> 0x20)) << 0x1e);
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
          temp_v6 = in_s0;
          temp_v43 = (**(romwright_code **)(*DAT_0057aa08 + 0x20))(DAT_0057aa08,temp_v3);
          temp_v14 = (float)((unsigned long long)temp_v20 >> 0x20);
          if ((~temp_v43 & 0xff) == 0) {
            temp_v40 = (**(romwright_code **)(*DAT_0057aa08 + 0x24))(DAT_0057aa08,temp_v3);
            temp_v37 = (**(romwright_code **)(*DAT_0057aa08 + 0x10))(DAT_0057aa08,temp_v3);
            temp_v54 = (**(romwright_code **)(*DAT_0057aa08 + 0x14))(DAT_0057aa08,temp_v3);
            (**(romwright_code **)(*DAT_0057aa08 + 0x1c))(DAT_0057aa08,temp_v3);
            temp_v50 = temp_v6;
            temp_v51 = temp_v6;
            temp_v52 = temp_v6;
            temp_v1 = (**(romwright_code **)(*DAT_0057aa08 + 0x28))(DAT_0057aa08,temp_v3);
            temp_v39 = temp_v1;
            FUN_004fefe0(temp_v1,temp_v37);
            in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v14 <= in_s0 * temp_v22) << 0x1d);
            temp_v20 = CONCAT44(temp_v14,temp_v14);
            temp_v44 = (unsigned int)!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0);
            for (temp_v6 = romwright_fabs_4(in_s0 * temp_v22); temp_v15 = temp_v14, (int)temp_v6 >= 0x47800000;
                temp_v6 = temp_v6 - temp_v21) {
            }
            for (; (int)temp_v15 >= 0x47800000; temp_v15 = temp_v15 - temp_v21) {
            }
            temp_v11 = VectorFloatToUnsigned(temp_v14,3);
            temp_v9 = VectorFloatToUnsigned(temp_v6,3);
            temp_v7 = VectorFloatToUnsigned(temp_v15,3);
            temp_v10 = temp_v11 & 0xff;
            temp_v16 = (float)VectorUnsignedToFloat(temp_v11 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v11 = temp_v9 & 0xff;
            temp_v18 = (float)VectorUnsignedToFloat(temp_v9 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v19 = (float)VectorUnsignedToFloat(temp_v7 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v7 = temp_v7 & 0xff;
            temp_v12 = (float)(&DAT_00536d14)[temp_v10 * 4] +
                     (temp_v14 - temp_v16) * (float)(&DAT_00536d1c)[temp_v10 * 4];
            temp_v8 = (float)(&DAT_00536d14)[temp_v11 * 4] +
                     (temp_v6 - temp_v18) * (float)(&DAT_00536d1c)[temp_v11 * 4];
            temp_v16 = (float)(&DAT_00536d18)[temp_v10 * 4] +
                     (temp_v14 - temp_v16) * (float)(&DAT_00536d20)[temp_v10 * 4];
            temp_v17 = (float)(&DAT_00536d14)[temp_v7 * 4] +
                     (temp_v15 - temp_v19) * (float)(&DAT_00536d1c)[temp_v7 * 4];
            temp_v14 = (float)(&DAT_00536d18)[temp_v7 * 4] +
                     (temp_v15 - temp_v19) * (float)(&DAT_00536d20)[temp_v7 * 4];
            if (temp_v44 != 0) {
              temp_v8 = -temp_v8;
            }
            temp_v34 = (float)(&DAT_00536d18)[temp_v11 * 4] +
                        (temp_v6 - temp_v18) * (float)(&DAT_00536d20)[temp_v11 * 4];
            temp_v24 = temp_v14 * temp_v34;
            temp_v28 = temp_v17 * temp_v34;
            temp_v33 = temp_v12 * temp_v34;
            temp_v34 = temp_v16 * temp_v34;
            temp_v32 = -temp_v8;
            temp_v25 = temp_v12 * temp_v14 * temp_v8 - temp_v16 * temp_v17;
            temp_v26 = temp_v12 * temp_v17 + temp_v16 * temp_v14 * temp_v8;
            in_s0 = temp_v16 * temp_v17 * temp_v8 - temp_v12 * temp_v14;
            temp_v29 = temp_v16 * temp_v14 + temp_v12 * temp_v17 * temp_v8;
            temp_v27 = 0;
            temp_v35 = 0;
            temp_v31 = 0;
            temp_v30 = in_s0;
            temp_v55 = temp_v1;
            nn_math_ARMv6_MTX34MultTranslateAsm(temp_v23,temp_v36,temp_v54);
            FUN_001d3d38(temp_v23,temp_v23,&temp_v50);
            nn_math_ARMv6_MTX34MultAsm(temp_v23,temp_v23,&temp_v24);
            temp_v2 = param_1;
            if (temp_v0 != temp_v39) {
              temp_v2 = resourceGetIndexedEntry(temp_v39,0);
              FUN_00421e9c(param_1,temp_v2);
              *puVar8 = param_1;
              temp_v0 = temp_v39;
              temp_v2 = param_1;
            }
            if (temp_v4 != temp_v43) {
              temp_v2 = FUN_00421e18(temp_v2,temp_v43);
              *puVar8 = temp_v2;
              temp_v4 = temp_v43;
            }
            if (temp_v5 != temp_v40) {
              FUN_00421f34(temp_v2,temp_v40);
              *puVar8 = temp_v2;
              temp_v5 = temp_v40;
            }
            param_1 = *(unsigned int *)(temp_v39 + 0x44);
            FUN_00419ce0(param_1,temp_v2,temp_v55,temp_v23);
            *puVar8 = param_1;
          }
        }
      }
      temp_v3 = temp_v3 + 1;
      temp_v1 = (**(romwright_code **)(*DAT_0057aa08 + 8))();
    } while (temp_v3 < temp_v1);
  }
  FUN_00421fec();
  *puVar8 = param_1;
  temp_v3 = 0;
  temp_v1 = (**(romwright_code **)(*DAT_0057aa08 + 8))();
  if (0 < temp_v1) {
    do {
      temp_v1 = (**(romwright_code **)(*DAT_0057aa08 + 0xc))(DAT_0057aa08,temp_v3);
      if (temp_v1 != 0) {
        (**(romwright_code **)(*DAT_0057aa08 + 0x18))(DAT_0057aa08,temp_v3);
        in_fpscr = (in_fpscr & 0xfffffff) |
                   ((unsigned int)(in_s0 == (float)((unsigned long long)temp_v20 >> 0x20)) << 0x1e);
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
          temp_v6 = in_s0;
          temp_v7 = (**(romwright_code **)(*DAT_0057aa08 + 0x20))(DAT_0057aa08,temp_v3);
          temp_v14 = (float)((unsigned long long)temp_v20 >> 0x20);
          if ((temp_v7 & 0xff) != 0 && (temp_v7 & 0xff) != 0xff) {
            temp_v41 = (**(romwright_code **)(*DAT_0057aa08 + 0x24))(DAT_0057aa08,temp_v3);
            temp_v37 = (**(romwright_code **)(*DAT_0057aa08 + 0x10))(DAT_0057aa08,temp_v3);
            temp_v53 = (**(romwright_code **)(*DAT_0057aa08 + 0x14))(DAT_0057aa08,temp_v3);
            (**(romwright_code **)(*DAT_0057aa08 + 0x1c))(DAT_0057aa08,temp_v3);
            temp_v45 = temp_v6;
            temp_v46 = temp_v6;
            temp_v47 = temp_v6;
            temp_v1 = (**(romwright_code **)(*DAT_0057aa08 + 0x28))(DAT_0057aa08,temp_v3);
            temp_v39 = temp_v1;
            FUN_004fefe0(temp_v1,temp_v37);
            in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v14 <= in_s0 * temp_v22) << 0x1d);
            for (temp_v6 = romwright_fabs_4(in_s0 * temp_v22); temp_v15 = temp_v14, (int)temp_v6 >= 0x47800000;
                temp_v6 = temp_v6 - temp_v21) {
            }
            for (; (int)temp_v15 >= 0x47800000; temp_v15 = temp_v15 - temp_v21) {
            }
            temp_v9 = VectorFloatToUnsigned(temp_v14,3);
            temp_v10 = VectorFloatToUnsigned(temp_v6,3);
            temp_v13 = VectorFloatToUnsigned(temp_v15,3);
            temp_v11 = temp_v9 & 0xff;
            temp_v16 = (float)VectorUnsignedToFloat(temp_v9 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v9 = temp_v13 & 0xff;
            temp_v18 = (float)VectorUnsignedToFloat(temp_v10 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v19 = (float)VectorUnsignedToFloat(temp_v13 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v10 = temp_v10 & 0xff;
            temp_v20 = CONCAT44(temp_v14,(&DAT_00536d1c)[temp_v10 * 4]);
            temp_v17 = (float)(&DAT_00536d14)[temp_v11 * 4] +
                     (temp_v14 - temp_v16) * (float)(&DAT_00536d1c)[temp_v11 * 4];
            temp_v8 = (float)(&DAT_00536d14)[temp_v10 * 4] +
                     (temp_v6 - temp_v18) * (float)(&DAT_00536d1c)[temp_v10 * 4];
            temp_v12 = (float)(&DAT_00536d14)[temp_v9 * 4] +
                     (temp_v15 - temp_v19) * (float)(&DAT_00536d1c)[temp_v9 * 4];
            temp_v16 = (float)(&DAT_00536d18)[temp_v11 * 4] +
                     (temp_v14 - temp_v16) * (float)(&DAT_00536d20)[temp_v11 * 4];
            temp_v14 = (float)(&DAT_00536d18)[temp_v9 * 4] +
                     (temp_v15 - temp_v19) * (float)(&DAT_00536d20)[temp_v9 * 4];
            if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
              temp_v8 = -temp_v8;
            }
            temp_v34 = (float)(&DAT_00536d18)[temp_v10 * 4] +
                        (temp_v6 - temp_v18) * (float)(&DAT_00536d20)[temp_v10 * 4];
            temp_v24 = temp_v14 * temp_v34;
            temp_v28 = temp_v12 * temp_v34;
            temp_v33 = temp_v17 * temp_v34;
            temp_v34 = temp_v16 * temp_v34;
            temp_v32 = -temp_v8;
            temp_v25 = temp_v17 * temp_v14 * temp_v8 - temp_v16 * temp_v12;
            temp_v26 = temp_v17 * temp_v12 + temp_v16 * temp_v14 * temp_v8;
            in_s0 = temp_v16 * temp_v12 * temp_v8 - temp_v17 * temp_v14;
            temp_v29 = temp_v16 * temp_v14 + temp_v17 * temp_v12 * temp_v8;
            temp_v27 = 0;
            temp_v31 = 0;
            temp_v35 = 0;
            temp_v30 = in_s0;
            temp_v54 = temp_v1;
            nn_math_ARMv6_MTX34MultTranslateAsm(temp_v23,temp_v36,temp_v53);
            FUN_001d3d38(temp_v23,temp_v23,&temp_v45);
            nn_math_ARMv6_MTX34MultAsm(temp_v23,temp_v23,&temp_v24);
            temp_v2 = param_1;
            if (temp_v0 != temp_v39) {
              temp_v2 = resourceGetIndexedEntry(temp_v39,0);
              FUN_00421e9c(param_1,temp_v2);
              *puVar8 = param_1;
              temp_v0 = temp_v39;
              temp_v2 = param_1;
            }
            if (temp_v4 != temp_v7) {
              temp_v2 = FUN_00421e18(temp_v2,temp_v7);
              *puVar8 = temp_v2;
              temp_v4 = temp_v7;
            }
            if (temp_v5 != temp_v41) {
              FUN_00421f34(temp_v2,temp_v41);
              *puVar8 = temp_v2;
              temp_v5 = temp_v41;
            }
            param_1 = *(unsigned int *)(temp_v39 + 0x44);
            FUN_00419ce0(param_1,temp_v2,temp_v54,temp_v23);
            *puVar8 = param_1;
          }
        }
      }
      temp_v3 = temp_v3 + 1;
      temp_v1 = (**(romwright_code **)(*DAT_0057aa08 + 8))();
    } while (temp_v3 < temp_v1);
  }
  FUN_00422124();
  *puVar8 = param_1;
  temp_v3 = 0;
  temp_v1 = (**(romwright_code **)(*DAT_0057aa08 + 8))();
  if (0 < temp_v1) {
    do {
      temp_v1 = (**(romwright_code **)(*DAT_0057aa08 + 0xc))(DAT_0057aa08,temp_v3);
      if (temp_v1 != 0) {
        (**(romwright_code **)(*DAT_0057aa08 + 0x18))(DAT_0057aa08,temp_v3);
        in_fpscr = (in_fpscr & 0xfffffff) |
                   ((unsigned int)(in_s0 == (float)((unsigned long long)temp_v20 >> 0x20)) << 0x1e);
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
          temp_v6 = in_s0;
          temp_v40 = (**(romwright_code **)(*DAT_0057aa08 + 0x20))(DAT_0057aa08,temp_v3);
          temp_v14 = (float)((unsigned long long)temp_v20 >> 0x20);
          if ((temp_v40 & 0xff) != 0) {
            temp_v41 = (**(romwright_code **)(*DAT_0057aa08 + 0x24))(DAT_0057aa08,temp_v3);
            temp_v38 = (**(romwright_code **)(*DAT_0057aa08 + 0x10))(DAT_0057aa08,temp_v3);
            temp_v54 = (**(romwright_code **)(*DAT_0057aa08 + 0x14))(DAT_0057aa08,temp_v3);
            (**(romwright_code **)(*DAT_0057aa08 + 0x1c))(DAT_0057aa08,temp_v3);
            temp_v45 = temp_v6;
            temp_v46 = temp_v6;
            temp_v47 = temp_v6;
            temp_v1 = (**(romwright_code **)(*DAT_0057aa08 + 0x28))(DAT_0057aa08,temp_v3);
            temp_v39 = temp_v1;
            FUN_004fefe0(temp_v1,temp_v38);
            in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v14 <= in_s0 * temp_v22) << 0x1d);
            temp_v20 = CONCAT44(temp_v14,temp_v14);
            temp_v42 = (unsigned int)!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0);
            for (temp_v6 = romwright_fabs_4(in_s0 * temp_v22); temp_v15 = temp_v14, (int)temp_v6 >= 0x47800000;
                temp_v6 = temp_v6 - temp_v21) {
            }
            for (; (int)temp_v15 >= 0x47800000; temp_v15 = temp_v15 - temp_v21) {
            }
            temp_v7 = VectorFloatToUnsigned(temp_v14,3);
            temp_v11 = VectorFloatToUnsigned(temp_v6,3);
            temp_v9 = VectorFloatToUnsigned(temp_v15,3);
            temp_v10 = temp_v7 & 0xff;
            temp_v16 = (float)VectorUnsignedToFloat(temp_v7 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v7 = temp_v9 & 0xff;
            temp_v18 = (float)VectorUnsignedToFloat(temp_v11 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v11 = temp_v11 & 0xff;
            temp_v19 = (float)VectorUnsignedToFloat(temp_v9 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v12 = (float)(&DAT_00536d14)[temp_v10 * 4] +
                     (temp_v14 - temp_v16) * (float)(&DAT_00536d1c)[temp_v10 * 4];
            temp_v8 = (float)(&DAT_00536d14)[temp_v11 * 4] +
                     (temp_v6 - temp_v18) * (float)(&DAT_00536d1c)[temp_v11 * 4];
            temp_v16 = (float)(&DAT_00536d18)[temp_v10 * 4] +
                     (temp_v14 - temp_v16) * (float)(&DAT_00536d20)[temp_v10 * 4];
            temp_v17 = (float)(&DAT_00536d14)[temp_v7 * 4] +
                     (temp_v15 - temp_v19) * (float)(&DAT_00536d1c)[temp_v7 * 4];
            temp_v14 = (float)(&DAT_00536d18)[temp_v7 * 4] +
                     (temp_v15 - temp_v19) * (float)(&DAT_00536d20)[temp_v7 * 4];
            if (temp_v42 != 0) {
              temp_v8 = -temp_v8;
            }
            temp_v34 = (float)(&DAT_00536d18)[temp_v11 * 4] +
                        (temp_v6 - temp_v18) * (float)(&DAT_00536d20)[temp_v11 * 4];
            temp_v24 = temp_v14 * temp_v34;
            temp_v28 = temp_v17 * temp_v34;
            temp_v33 = temp_v12 * temp_v34;
            temp_v34 = temp_v16 * temp_v34;
            temp_v32 = -temp_v8;
            temp_v25 = temp_v12 * temp_v14 * temp_v8 - temp_v16 * temp_v17;
            in_s0 = temp_v16 * temp_v17 * temp_v8 - temp_v12 * temp_v14;
            temp_v26 = temp_v12 * temp_v17 + temp_v16 * temp_v14 * temp_v8;
            temp_v29 = temp_v16 * temp_v14 + temp_v12 * temp_v17 * temp_v8;
            temp_v27 = 0;
            temp_v35 = 0;
            temp_v31 = 0;
            temp_v30 = in_s0;
            temp_v55 = temp_v1;
            nn_math_ARMv6_MTX34MultTranslateAsm(temp_v23,temp_v36,temp_v54);
            FUN_001d3d38(temp_v23,temp_v23,&temp_v45);
            nn_math_ARMv6_MTX34MultAsm(temp_v23,temp_v23,&temp_v24);
            temp_v2 = param_1;
            if (temp_v0 != temp_v39) {
              temp_v2 = resourceGetIndexedEntry(temp_v39,0);
              FUN_00421e9c(param_1,temp_v2);
              *puVar8 = param_1;
              temp_v0 = temp_v39;
              temp_v2 = param_1;
            }
            if (temp_v4 != temp_v40) {
              temp_v2 = FUN_00421e18(temp_v2,temp_v40);
              *puVar8 = temp_v2;
              temp_v4 = temp_v40;
            }
            if (temp_v5 != temp_v41) {
              FUN_00421f34(temp_v2,temp_v41);
              *puVar8 = temp_v2;
              temp_v5 = temp_v41;
            }
            param_1 = *(unsigned int *)(temp_v39 + 0x44);
            FUN_00419d8c(param_1,temp_v2,temp_v55,temp_v23);
            *puVar8 = param_1;
          }
        }
      }
      temp_v3 = temp_v3 + 1;
      temp_v1 = (**(romwright_code **)(*DAT_0057aa08 + 8))();
    } while (temp_v3 < temp_v1);
  }
  temp_v2 = FUN_0042c5cc(param_1);
  *puVar8 = temp_v2;
  return;
}

} /* extern "C" */
