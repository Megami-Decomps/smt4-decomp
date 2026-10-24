/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00131c98` (_code @ 0x131c98, 0x678 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001385ac(void);
int _ZSt16__insertion_sortIP11KeyedRecord15KeyedRecordLessEvT_S3_T0_(...);
int FUN_00144a64(unsigned int *, unsigned int *, int);
int allocationTrackPairedResult(unsigned int, unsigned int, int, int, int);
int FUN_002abe38(void);
int FUN_002c5be8(void);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(unsigned int, int);
int nw_gfx_Fog_Update(int, int);

typedef int romwright_code(...);
/* stack frame of param_3: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_3_stack;

extern unsigned int DAT_00464b58; /* 0x464b58 */
extern unsigned int DAT_004720f0; /* 0x4720f0 */
extern unsigned int DAT_00472950; /* 0x472950 */
extern unsigned int DAT_00472954; /* 0x472954 */
extern unsigned int DAT_00472958; /* 0x472958 */

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
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_001385ac. */
extern int asdGxIsReady(void);
/* Supplied declaration required: _ZSt16__insertion_sortIP11KeyedRecord15KeyedRecordLessEvT_S3_T0_. */
/* Supplied declaration required: FUN_00144a64. */
/* Supplied declaration required: allocationTrackPairedResult. */
/* Supplied declaration required: FUN_002abe38. */
/* Supplied declaration required: FUN_002c5be8. */
/* Supplied declaration required: nw_gfx_Fog_Update. */


void FUN_00131c98(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 11 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int *puVar10;
  unsigned int *puVar11;
  unsigned int *puVar12;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int *puVar15;
  unsigned int *puVar16;
  unsigned int temp_v10;
  unsigned int *unaff_r7;
  int *piVar18;
  int unaff_r9;
  unsigned int temp_v11;
  int *piVar20;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v12;
  float temp_v13;
  unsigned int temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  unsigned int temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  unsigned int temp_v25;
  unsigned long long temp_v26;
  unsigned long long temp_v27;
  unsigned long long temp_v28;
  float temp_v29;
  
  temp_v25 = 0;
  temp_v3 = *(int *)(param_2 + 4);
  temp_v1 = *(int *)(param_1 + 4);
  temp_v5 = *(int *)(*(int *)(temp_v1 + 0xac) + param_3 * 4);
  *(int *)(temp_v1 + 0xb8) = param_3;
  if (*(int *)(temp_v1 + 0xa4) != temp_v5) {
    *(int *)(temp_v1 + 0xa4) = temp_v5;
    in_s0 = *(float *)(temp_v5 + 0x294);
    in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 == 0.0f) << 0x1e);
    if (romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
      DAT_004720f0 = 0;
    }
    else {
      in_s0 = -in_s0;
      DAT_004720f0 = 0;
      if (((unsigned int)in_s0 & 0x80000000) != 0) {
        DAT_004720f0 = 0x800000;
      }
      if (romwright_fabs_4(in_s0) == 0.0f) {
        temp_v6 = 0;
        DAT_004720f0 = DAT_004720f0 | (((unsigned int)in_s0 & 0x7fffff) >> 7) | ((temp_v6 & 0x7f) << 0x10);
      }
      else {
        temp_v6 = ((unsigned int)romwright_fabs_4(in_s0) >> 0x17) - 0x40;
        if ((int)temp_v6 >= 0) {
          if ((int)temp_v6 >= 0x80) {
            DAT_004720f0 = 0x7f0000;
          }
          else {
            DAT_004720f0 = DAT_004720f0 | (((unsigned int)in_s0 & 0x7fffff) >> 7) | ((temp_v6 & 0x7f) << 0x10)
            ;
          }
        }
      }
    }
  }
  temp_v1 = *(int *)(temp_v1 + 0xa4);
  piVar18 = *(int **)(temp_v3 + 0x5c);
  piVar20 = *(int **)(temp_v3 + 0x60);
  FUN_001385ac();
  if (in_s0 != 1.0f) {
    if (piVar18 != piVar20) {
      temp_v27 = 0x3c000000bc000000;
      temp_v24 = 1.0f;
      temp_v29 = 8191.0f;
      temp_v28 = 0x4580000040000000;
      temp_v26 = romwright_piece_4_4(0x45000000,temp_v25);
      do {
        if (*piVar18 != 0) {
          temp_v5 = *(int *)(*piVar18 + 8);
          temp_v7 = *(int *)(temp_v5 + 200);
          if (temp_v7 != 0) {
            unaff_r7 = (unsigned int *)(temp_v7 + temp_v5 + 200);
          }
          temp_v4 = *(int *)(temp_v5 + 0xc4);
          if (temp_v7 == 0) {
            unaff_r7 = (unsigned int *)0x0;
          }
          if (temp_v4 != 0) {
            unaff_r9 = temp_v4 + temp_v5 + 0xc4;
          }
          if (temp_v4 == 0) {
            unaff_r9 = 0;
          }
          temp_v22 = in_s0;
          temp_v5 = (**(romwright_code **)(**(int **)(temp_v1 + 0x260) + 0x10))();
          if (*(int *)(unaff_r9 + 0x10) != 0) {
            puVar12 = (unsigned int *)(unaff_r9 + 0x10 + *(int *)(unaff_r9 + 0x10));
          }
          else {
            puVar12 = (unsigned int *)0x0;
          }
          temp_v21 = *(float *)(temp_v5 + 4);
          temp_v12 = *(float *)(temp_v5 + 8);
          temp_v23 = *(float *)(temp_v1 + 0x294);
          *puVar12 = 0;
          if (*(int *)(unaff_r9 + 0x10) != 0) {
            temp_v5 = unaff_r9 + 0x10 + *(int *)(unaff_r9 + 0x10);
          }
          else {
            temp_v5 = 0;
          }
          temp_v12 = temp_v12 - temp_v21;
          *(unsigned int *)(temp_v5 + 4) = 0xf00e6;
          if (*(int *)(unaff_r9 + 0x10) != 0) {
            temp_v5 = unaff_r9 + 0x10 + *(int *)(unaff_r9 + 0x10);
          }
          else {
            temp_v5 = 0;
          }
          temp_v16 = (float)temp_v26;
          temp_v7 = 0;
          temp_v6 = 0;
          *(unsigned int *)(temp_v5 + 0xc) = 0x7ff00e8;
          do {
            temp_v2 = in_fpscr & 0xfffffff;
            temp_v8 = temp_v2 | ((unsigned int)(temp_v23 == (float)temp_v26) << 0x1e);
            if (romwright_subpiece_4_1_0(temp_v8 >> 0x1e,0)) {
              temp_v13 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(temp_v8 >> 0x16) & 3);
              temp_v13 = temp_v13 * (float)temp_v27;
              temp_v13 = -(*(float *)(temp_v1 + 0x214) + *(float *)(temp_v1 + 0x210) * temp_v13) /
                       (*(float *)(temp_v1 + 0x224) + *(float *)(temp_v1 + 0x220) * temp_v13);
            }
            else {
              temp_v13 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(temp_v8 >> 0x16) & 3);
              temp_v13 = temp_v21 + temp_v13 * (float)((unsigned long long)temp_v27 >> 0x20) * temp_v12;
            }
            temp_v15 = (float)unaff_r7[1];
            in_fpscr = temp_v2 | ((unsigned int)(temp_v13 == temp_v15) << 0x1e) |
                       ((unsigned int)(temp_v15 <= temp_v13) << 0x1d);
            temp_v0 = (unsigned char)(in_fpscr >> 0x18);
            temp_v17 = temp_v24;
            temp_v18 = temp_v16;
            if ((unsigned char)((temp_v0 >> 5) & 1) && !(unsigned char)(temp_v0 >> 6)) {
              temp_v20 = (float)unaff_r7[2];
              temp_v2 = temp_v2 | ((unsigned int)(temp_v13 < temp_v20) << 0x1f) | ((unsigned int)(temp_v13 == temp_v20) << 0x1e)
              ;
              in_fpscr = temp_v2 | ((unsigned int)((temp_v13 != temp_v13) || (temp_v20 != temp_v20)) << 0x1c);
              temp_v0 = (unsigned char)(temp_v2 >> 0x18);
              temp_v17 = (float)temp_v26;
              if ((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                temp_v2 = *unaff_r7 & 0xff;
                if (temp_v2 != 1) {
                  if (temp_v2 != 2) {
                    temp_v17 = temp_v13;
                    if (temp_v2 == 3) {
                      temp_v13 = ((temp_v13 - temp_v15) * (float)unaff_r7[3]) / (temp_v20 - temp_v15);
                      temp_v17 = -(temp_v13 * temp_v13);
                      FUN_002abe38();
                      temp_v18 = temp_v16;
                    }
                  }
                  else {
                    temp_v17 = -((temp_v13 - temp_v15) * (float)unaff_r7[3]) / (temp_v20 - temp_v15);
                    FUN_002abe38();
                    temp_v18 = temp_v16;
                  }
                }
                else {
                  temp_v17 = (temp_v20 - temp_v13) / (temp_v20 - temp_v15);
                }
              }
            }
            temp_v16 = temp_v24 - temp_v22 * (temp_v24 - temp_v17);
            if (0 < (int)temp_v6) {
              temp_v20 = (float)((unsigned long long)temp_v26 >> 0x20);
              temp_v17 = ((temp_v16 - temp_v18) + (float)temp_v28) * temp_v20;
              temp_v15 = (float)temp_v26;
              temp_v13 = temp_v15;
              if ((temp_v15 <= temp_v17) && (temp_v13 = temp_v17, (int)temp_v17 >= 0x46000000)) {
                temp_v13 = temp_v29;
              }
              in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v18 == temp_v15) << 0x1e) |
                         ((unsigned int)(temp_v15 <= temp_v18) << 0x1d);
              temp_v0 = (unsigned char)(in_fpscr >> 0x18);
              if ((!(unsigned char)((temp_v0 >> 5) & 1) || (unsigned char)(temp_v0 >> 6)) ||
                 ((unsigned int)romwright_fabs_4(temp_v18) >> 0x17 == 0xff)) {
                temp_v2 = 0;
              }
              else {
                temp_v18 = temp_v18 * temp_v20;
                if ((int)temp_v18 < 0x45000000) {
                  temp_v2 = VectorFloatToUnsigned(temp_v18,3);
                }
                else {
                  temp_v2 = 0x7ff;
                }
              }
              if (temp_v7 == 0) {
                temp_v5 = 2;
              }
              else {
                temp_v5 = temp_v7 + 3;
              }
              if (*(int *)(unaff_r9 + 0x10) != 0) {
                temp_v4 = unaff_r9 + 0x10 + *(int *)(unaff_r9 + 0x10);
              }
              else {
                temp_v4 = 0;
              }
              temp_v7 = temp_v7 + 1;
              *(unsigned int *)(temp_v4 + temp_v5 * 4) =
                   ((int)(temp_v13 - (float)((unsigned long long)temp_v28 >> 0x20)) & 0x1fffU) |
                   ((temp_v2 & 0x7ff) << 0xd);
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < 0x81);
        }
        piVar18 = piVar18 + 1;
      } while (piVar18 != piVar20);
    }
  }
  else {
    for (; piVar18 != piVar20; piVar18 = piVar18 + 1) {
      if (*piVar18 != 0) {
        nw_gfx_Fog_Update(*piVar18,temp_v1);
      }
    }
  }
  temp_v5 = *(int *)(param_1 + 0x14);
  temp_v6 = *(unsigned int *)(temp_v5 + 0x10);
  temp_v2 = *(unsigned int *)(temp_v5 + 0xc);
  if (temp_v2 >= temp_v6) {
    temp_v8 = 0;
  }
  else {
    temp_v8 = ((temp_v6 - temp_v2) & 0x1f) >> 4;
  }
  temp_v4 = temp_v8 + 1;
  temp_v7 = (int)(temp_v6 - temp_v2) >> 4;
  if (temp_v4 < temp_v7 + 1) {
    do {
      temp_v4 = temp_v4 + 2;
    } while (temp_v4 < temp_v7 + 1);
  }
  *(unsigned int *)(temp_v5 + 0x10) = temp_v2;
  *(unsigned char *)(temp_v5 + 0x28) = 0;
  temp_v5 = asdGxIsReady();
  if ((temp_v5 != 0) && (param_3 == 0)) {
    allocationTrackPairedResult(*(unsigned int *)(param_1 + 0x14),DAT_00472950,0,0,0);
    temp_v5 = FUN_002c5be8();
    if (temp_v5 != 0) {
      temp_v9 = *(unsigned int *)(param_1 + 0x14);
      temp_v25 = FUN_002c5be8();
      (**(romwright_code **)(**(int **)(param_2 + 0xc) + 0x20))
                (*(int **)(param_2 + 0xc),temp_v9,*(unsigned int *)(param_2 + 4),temp_v25,1,1,
                 &DAT_00464b58,*(unsigned char *)(param_1 + 0x1c));
    }
    allocationTrackPairedResult(*(unsigned int *)(param_1 + 0x14),DAT_00472954,0,0,1);
    allocationTrackPairedResult(*(unsigned int *)(param_1 + 0x14),DAT_00472958,0,1,1);
  }
  (**(romwright_code **)(**(int **)(param_2 + 0xc) + 0x18))
            (*(int **)(param_2 + 0xc),*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_2 + 4),
             temp_v1,2,*(unsigned char *)(param_1 + 0x1c));
  piVar20 = *(int **)(temp_v3 + 0x20);
  for (piVar18 = *(int **)(temp_v3 + 0x1c); piVar18 != piVar20; piVar18 = piVar18 + 1) {
    temp_v1 = *piVar18;
    allocationTrackPairedResult(*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(temp_v1 + 0x14c),
                 *(unsigned char *)(temp_v1 + 0x148),*(unsigned char *)(temp_v1 + 0x149),
                 *(unsigned char *)(temp_v1 + 0x14a));
  }
  puVar16 = *(unsigned int **)(*(int *)(param_1 + 0x14) + 0xc);
  puVar15 = *(unsigned int **)(*(int *)(param_1 + 0x14) + 0x10);
  if (puVar16 != puVar15) {
    temp_v1 = ((int)puVar15 - (int)puVar16) >> 4;
    FUN_00144a64(puVar16,puVar15,temp_v1);
    if (temp_v1 >= 0x11) {
      _ZSt16__insertion_sortIP11KeyedRecord15KeyedRecordLessEvT_S3_T0_(puVar16,puVar16 + 0x40);
      for (puVar16 = puVar16 + 0x40; puVar16 != puVar15; puVar16 = puVar16 + 4) {
        temp_v6 = *puVar16;
        temp_v8 = puVar16[1];
        temp_v14 = puVar16[2];
        temp_v19 = puVar16[3];
        temp_v2 = puVar16[-3];
        puVar2 = puVar16 + -4;
        puVar10 = puVar16;
        puVar11 = puVar16;
        if (temp_v8 <= temp_v2 && (unsigned int)(puVar16[-4] <= temp_v6) <= temp_v8 - temp_v2) {
          do {
            puVar11 = puVar2;
            temp_v10 = puVar11[2];
            temp_v11 = puVar11[3];
            *puVar10 = *puVar11;
            puVar10[1] = temp_v2;
            puVar10[2] = temp_v10;
            puVar10[3] = temp_v11;
            temp_v2 = puVar11[-3];
            puVar2 = puVar11 + -4;
            puVar10 = puVar11;
          } while (temp_v8 <= temp_v2 && (unsigned int)(puVar11[-4] <= temp_v6) <= temp_v8 - temp_v2);
        }
        *puVar11 = temp_v6;
        puVar11[1] = temp_v8;
        puVar11[2] = temp_v14;
        puVar11[3] = temp_v19;
      }
    }
    else {
      _ZSt16__insertion_sortIP11KeyedRecord15KeyedRecordLessEvT_S3_T0_(puVar16,puVar15);
    }
  }
  return;
}

} /* extern "C" */
