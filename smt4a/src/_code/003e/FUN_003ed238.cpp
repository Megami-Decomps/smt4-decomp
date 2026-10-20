/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ed238` (_code @ 0x3ed238, 0x4b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001568f8(int, int);
int FUN_003e7b5c(int, unsigned int);
int FUN_003e7cc8(int, unsigned int);
int FUN_003f0e20(int, int);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp80; /* 0x80: local_80 */
} param_2_stack;

extern int DAT_00571508; /* 0x571508 */
extern float DAT_00573974; /* 0x573974 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001568f8. */
extern int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
extern unsigned int FUN_001a6f60(int, unsigned int);
/* Supplied declaration required: FUN_003e7b5c. */
/* Supplied declaration required: FUN_003e7cc8. */
/* Supplied declaration required: FUN_003f0e20. */


void FUN_003ed238(int param_1,unsigned int param_2)

{
/* irregular: 3 goto(s); irregular input(s): in_fpscr; 6 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  short *psVar5;
  int temp_v4;
  float *pfVar7;
  int temp_v5;
  unsigned int *puVar9;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  int temp_v9;
  int *piVar14;
  int temp_v10;
  unsigned int in_fpscr;
  float temp_v11;
  unsigned int temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned int temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  unsigned long long temp_v25;
  float temp_v26 [9];
  int temp_v27;
  unsigned int temp_v28;
  
  temp_v10 = 0;
  temp_v17 = 0.0f;
  temp_v23 = -23.0f;
  temp_v26[0] = 0.0f;
  temp_v26[1] = 15.0f;
  temp_v26[2] = -20.0f;
  temp_v18 = DAT_00573974 * 2.0f + 46.0f;
  if ((param_2 & 0x400) != 0) {
    temp_v9 = 4;
    piVar14 = (int *)(param_1 + 0x1ed4);
    do {
      temp_v27 = param_1;
      temp_v28 = param_2;
      if (*(char *)(*(int *)(param_1 + 0x1ffc) + temp_v9 * 0x408 + 0x23a) != '\0') {
        temp_v10 = 4;
        temp_v25 = 0x3f360b61;
        do {
          temp_v1 = *(unsigned int *)(*piVar14 + temp_v10 * 0x1d0 + 0x50);
          if ((((temp_v1 & 1) != 0 && (temp_v1 & 0x80) != 0) && ((temp_v1 & 0x10) == 0)) &&
             ((temp_v1 & 0x200000) != 0)) {
            temp_v9 = temp_v27;
            FUN_003f0e20(temp_v27,(int)*(short *)(*piVar14 + temp_v10 * 0x1d0 + 0x6a));
            temp_v0 = *(unsigned short *)(temp_v9 + 0x166);
            psVar5 = (short *)0x0;
            if (*(int *)(param_1 + 0x2294) != 0) {
              temp_v2 = FUN_001a6f60(*(int *)(param_1 + 0x2294),0);
              temp_v9 = dataTableGetEntries();
              temp_v3 = dataTableGetCount(temp_v2);
              temp_v5 = 0;
              if (temp_v5 < temp_v3) {
                do {
                  psVar5 = (short *)(temp_v9 + temp_v5 * 0x38);
                  if ((int)*psVar5 == (unsigned int)temp_v0) goto LAB_003ed39c;
                  temp_v5 = temp_v5 + 1;
                } while (temp_v5 < temp_v3);
              }
              psVar5 = (short *)0x0;
            }
LAB_003ed39c:
            *(unsigned int *)(*piVar14 + temp_v10 * 0x1d0 + 0x40) = *(unsigned int *)(psVar5 + 2);
            temp_v2 = *(unsigned int *)(psVar5 + 0x10);
            temp_v12 = *(unsigned int *)(psVar5 + 0x12);
            temp_v15 = *(unsigned int *)(psVar5 + 0x14);
            puVar9 = (unsigned int *)(*piVar14 + temp_v10 * 0x1d0);
            *puVar9 = temp_v2;
            puVar9[1] = temp_v12;
            puVar9[2] = temp_v15;
            puVar9 = (unsigned int *)(*piVar14 + temp_v10 * 0x1d0 + 0xc);
            *puVar9 = temp_v2;
            puVar9[1] = temp_v12;
            puVar9[2] = temp_v15;
            temp_v9 = DAT_00571508;
            temp_v2 = *(unsigned int *)(psVar5 + 0x16);
            *(unsigned int *)(DAT_00571508 + 0xc) = temp_v2;
            temp_v17 = *(float *)(psVar5 + 0x18) * (float)temp_v25;
            *(float *)(temp_v9 + 0x10) = temp_v17;
            *(unsigned int *)(temp_v9 + 0x14) = temp_v2;
            *(float *)(temp_v9 + 0x18) = temp_v17;
          }
          temp_v10 = temp_v10 + 1;
          if (temp_v10 >= 0x36) {
            return;
          }
        } while( 1 );
      }
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < 0x36);
    temp_v9 = 0;
    temp_v20 = 0.5f;
    temp_v13 = temp_v17;
    do {
      temp_v8 = 0;
      temp_v3 = 4;
      temp_v16 = temp_v13;
      do {
        temp_v5 = temp_v27;
        temp_v6 = *piVar14;
        temp_v1 = *(unsigned int *)(temp_v6 + temp_v3 * 0x1d0 + 0x50);
        if ((((temp_v1 & 1) != 0 && (temp_v1 & 0x80) != 0) &&
            ((temp_v1 & 0x10) == 0 && (temp_v1 & 0x200000) == 0)) &&
           (*(char *)(temp_v6 + temp_v3 * 0x1d0 + 0x3c) == temp_v9)) {
          temp_v4 = temp_v27;
          FUN_001568f8(temp_v27,(int)*(short *)(temp_v6 + temp_v3 * 0x1d0 + 0x6a));
          temp_v6 = 0;
          do {
            temp_v7 = *(int *)(temp_v5 + temp_v6 * 4 + 0x216c);
            if ((temp_v7 != 0) && (*(int *)(temp_v7 + 4) == *(int *)(temp_v4 + 0xc))) {
              temp_v5 = *(int *)(temp_v5 + temp_v6 * 4 + 0x216c);
              goto LAB_003ed4bc;
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < 0x2a);
          temp_v5 = 0;
LAB_003ed4bc:
          temp_v8 = 1;
          temp_v10 = temp_v10 + 1;
          temp_v11 = (float)VectorUnsignedToFloat
                                    ((unsigned int)*(unsigned short *)(*(int *)(temp_v5 + 0x10) + 0x24),
                                     (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v17 = temp_v17 + temp_v11 * *(float *)(*piVar14 + temp_v3 * 0x1d0 + 0x40);
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 0x36);
      if (temp_v8) {
        temp_v13 = (float)VectorSignedToFloat(temp_v10 + 1,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v13 = (temp_v18 - temp_v17) / temp_v13;
      }
      temp_v11 = temp_v16;
      if (temp_v10 != 1) {
        temp_v14 = temp_v16;
        if (temp_v10 >= 2) {
          temp_v11 = (temp_v13 + temp_v23) - DAT_00573974;
          temp_v14 = temp_v26[temp_v9];
        }
      }
      else {
        temp_v14 = temp_v26[temp_v9];
      }
      temp_v3 = 4;
      temp_v19 = temp_v16;
      do {
        temp_v5 = temp_v27;
        temp_v6 = *piVar14;
        temp_v1 = *(unsigned int *)(temp_v6 + temp_v3 * 0x1d0 + 0x50);
        if ((((temp_v1 & 1) != 0 && (temp_v1 & 0x80) != 0) && ((temp_v1 & 0x10) == 0)) &&
           (*(char *)(temp_v6 + temp_v3 * 0x1d0 + 0x3c) == temp_v9 && (temp_v1 & 0x200000) == 0)) {
          temp_v4 = temp_v27;
          FUN_001568f8(temp_v27,(int)*(short *)(temp_v6 + temp_v3 * 0x1d0 + 0x6a));
          temp_v6 = 0;
          do {
            temp_v7 = *(int *)(temp_v5 + temp_v6 * 4 + 0x216c);
            if ((temp_v7 != 0) && (*(int *)(temp_v7 + 4) == *(int *)(temp_v4 + 0xc))) {
              temp_v5 = *(int *)(temp_v5 + temp_v6 * 4 + 0x216c);
              goto LAB_003ed62c;
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < 0x2a);
          temp_v5 = 0;
LAB_003ed62c:
          temp_v5 = *(int *)(temp_v5 + 0x10);
          temp_v21 = *(float *)(temp_v3 * 0x1d0 + 0x40 + *piVar14);
          temp_v22 = (float)VectorUnsignedToFloat
                                    ((unsigned int)*(unsigned short *)(temp_v5 + 0x24),(unsigned char)(in_fpscr >> 0x16) & 3);
          pfVar7 = (float *)(*piVar14 + temp_v3 * 0x1d0);
          temp_v24 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 0x12) -
                                              ((int)*(short *)(temp_v5 + 0x20) +
                                              (unsigned int)(*(unsigned short *)(temp_v5 + 0x24) >> 1)),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v22 = temp_v21 * temp_v22 * temp_v20;
          temp_v21 = temp_v24 * temp_v21;
          if (temp_v10 != 1) {
            temp_v24 = temp_v21 + temp_v22;
          }
          if (temp_v10 != 1) {
            temp_v11 = temp_v11 + temp_v24;
          }
          *pfVar7 = temp_v11;
          pfVar7[1] = temp_v16;
          pfVar7[2] = temp_v14;
          pfVar7 = (float *)(*piVar14 + temp_v3 * 0x1d0 + 0xc);
          *pfVar7 = temp_v11;
          temp_v11 = temp_v11 + ((temp_v22 + temp_v13) - temp_v21);
          pfVar7[1] = temp_v16;
          pfVar7[2] = temp_v14;
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 0x36);
      temp_v9 = temp_v9 + 1;
      temp_v13 = temp_v19;
    } while (temp_v9 < 3);
    FUN_003e7cc8(temp_v27,temp_v28);
    FUN_003e7b5c(temp_v27,temp_v28);
  }
  return;
}

} /* extern "C" */
