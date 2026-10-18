/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031e6f4` (_code @ 0x31e6f4, 0x3b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern int DAT_00588c44; /* 0x588c44 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_001801a4. */
extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
extern int FUN_0022fd80(int, unsigned int);
/* Supplied declaration required: FUN_0034a290. */
extern int FUN_003e0044(unsigned int);
extern int FUN_003e4940(void);
extern int FUN_003e4cb4(unsigned int);
/* Supplied declaration required: FUN_003e503c. */
extern int FUN_004bd340(int, unsigned int);
extern int FUN_004ccd5c(unsigned short, unsigned int);


/* WARNING: Removing unreachable block (ram,0x0031e734) */
/* WARNING: Removing unreachable block (ram,0x0031e740) */
/* WARNING: Removing unreachable block (ram,0x0031e744) */

void FUN_0031e6f4(int *param_1)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int in_fpscr;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned long long temp_v15;
  unsigned long long temp_v16;
  
  temp_v1 = DAT_00588c44;
  temp_v2 = FUN_001ab888();
  FUN_001801a4();
  temp_v10 = param_1[2];
  temp_v11 = 0;
  *(int *)(temp_v1 + 0x4428) = *(int *)(temp_v1 + 0x4428) + temp_v10;
  do {
    temp_v7 = param_1[temp_v11 + 3];
    if (temp_v7 != 0) {
      temp_v10 = param_1[temp_v11 + 9];
    }
    if (temp_v7 != 0 && temp_v10 != 0) {
      temp_v3 = 0;
      do {
        temp_v8 = temp_v1 + temp_v3 * 4;
        temp_v9 = *(int *)(temp_v8 + 0x43f0);
        if (temp_v9 == temp_v7) {
          piVar5 = (int *)(temp_v1 + temp_v3 * 4 + 0x4408);
          *piVar5 = *piVar5 + temp_v10;
          break;
        }
        if (temp_v9 == 0) {
          *(int *)(temp_v1 + temp_v3 * 4 + 0x43f0) = temp_v7;
          *(int *)(temp_v8 + 0x4408) = temp_v10;
          break;
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 6);
    }
    temp_v11 = temp_v11 + 1;
    if (temp_v11 >= 6) {
      temp_v11 = *param_1;
      temp_v10 = FUN_003e0044(1);
      if ((temp_v10 == 0) && (temp_v10 = FUN_003e0044(10), temp_v10 == 0)) {
        temp_v10 = FUN_0022fd80(temp_v11,0);
        *(int *)(temp_v1 + 0x7870) = temp_v10 + *(int *)(temp_v1 + 0x7870);
      }
      temp_v14 = 0.01f;
      temp_v15 = 0x42c800003f800000;
      temp_v16 = 0x3e99999a;
      temp_v10 = 0;
      do {
        if (-1 < *(char *)(temp_v2 + temp_v10 + 0x1c88)) {
          temp_v7 = FUN_001ab854();
          temp_v3 = FUN_004bd340(temp_v7,1);
          if ((temp_v3 == 0) && (temp_v3 = FUN_004bd340(temp_v7,10), temp_v3 == 0)) {
            temp_v6 = 0;
            temp_v0 = *(char *)(temp_v2 + temp_v10 + 0x1c88);
            if ((*(char *)(temp_v2 + 0x1ca0) == temp_v0) ||
               ((*(char *)(temp_v2 + 0x1ca1) == temp_v0 || (*(char *)(temp_v2 + 0x1ca2) == temp_v0)))) {
              temp_v6 = 1;
            }
            temp_v3 = FUN_001ab854();
            temp_v13 = (float)temp_v15;
            temp_v8 = 0;
            do {
              temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 0x34 + temp_v8 * 2);
              if (temp_v4 != 0) {
                FUN_0034a290();
                temp_v5 = 0;
                if (temp_v4 != 0) {
                  temp_v5 = (unsigned int)*(unsigned char *)(temp_v4 + 0x2f);
                }
                if (temp_v4 != 0 && temp_v5 != 0) {
                  temp_v12 = (float)VectorUnsignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v13 = temp_v12 * temp_v14 * temp_v13;
                }
              }
              temp_v8 = temp_v8 + 1;
            } while (temp_v8 < 8);
            temp_v4 = (unsigned int)(temp_v11 * (int)(temp_v13 * (float)((unsigned long long)temp_v15 >> 0x20))) / 100;
            temp_v3 = FUN_004ccd5c(*(unsigned short *)(temp_v3 + 100),0);
            temp_v5 = (temp_v4 * temp_v3) / 100;
            if ((temp_v5 == 0) && (temp_v4 != 0)) {
              temp_v5 = 1;
            }
            temp_v13 = (float)VectorUnsignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
            if (!temp_v6) {
              temp_v5 = VectorFloatToUnsigned(temp_v13 * (float)temp_v16,3);
            }
            if (((int)temp_v5 < 1) && (temp_v11 != 0)) {
              temp_v5 = 1;
            }
            piVar5 = (int *)(temp_v1 + (unsigned int)*(unsigned char *)(temp_v7 + 0x66) * 0x28 + 0x7898);
            *piVar5 = temp_v5 + *piVar5;
          }
        }
        temp_v10 = temp_v10 + 1;
      } while (temp_v10 < 0x18);
      temp_v15 = 0x3f4ccccd;
      temp_v4 = 0;
      do {
        temp_v5 = temp_v4 & 0xffff;
        FUN_003e503c();
        temp_v10 = FUN_003e4940();
        if (temp_v10 != 0) {
          temp_v10 = FUN_003e4cb4(temp_v5);
          temp_v2 = FUN_004ccd5c(*(unsigned short *)(temp_v5 + 100),0);
          temp_v5 = (unsigned int)(temp_v11 * temp_v2) / 100;
          if ((temp_v5 == 0) && (temp_v11 != 0)) {
            temp_v5 = 1;
          }
          temp_v14 = (float)VectorUnsignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
          if (temp_v10 == 0) {
            temp_v5 = VectorFloatToUnsigned(temp_v14 * (float)temp_v15,3);
          }
          if (((int)temp_v5 < 1) && (temp_v11 != 0)) {
            temp_v5 = 1;
          }
          temp_v10 = temp_v4 + 0x19;
          if (temp_v10 >= 0x25) {
            temp_v10 = 0x24;
          }
          piVar5 = (int *)(temp_v1 + temp_v10 * 0x28 + 0x7870);
          *piVar5 = temp_v5 + *piVar5;
        }
        temp_v4 = temp_v4 + 1;
      } while ((int)temp_v4 < 0xc);
      return;
    }
  } while( 1 );
}
