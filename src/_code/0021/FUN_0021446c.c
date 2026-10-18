/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021446c` (_code @ 0x21446c, 0x35c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern int DAT_0044dc20; /* 0x44dc20 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
extern int FUN_00250f58(unsigned char, unsigned int);
/* Supplied declaration required: FUN_002840b8. */
extern int FUN_00295fac(unsigned int);
extern int FUN_0029ee4c(int, unsigned int);
extern int FUN_002a89e4(void);
extern int FUN_002a8a08(void);
extern int FUN_002b66ec(void);


/* WARNING: Removing unreachable block (ram,0x002144c8) */
/* WARNING: Removing unreachable block (ram,0x002144d4) */
/* WARNING: Removing unreachable block (ram,0x002144d8) */

void FUN_0021446c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  int temp_v14;
  unsigned char temp_v15;
  unsigned int in_fpscr;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  unsigned long long temp_v19;
  unsigned long long temp_v20;
  
  temp_v2 = DAT_0044dc20;
  temp_v3 = FUN_002a8a08();
  temp_v4 = FUN_002b66ec();
  *(unsigned char *)(temp_v2 + 0xd641) = *(unsigned char *)(param_1 + 0x3c);
  *(unsigned char *)(temp_v2 + 0xd642) = *(unsigned char *)(param_1 + 0x3d);
  temp_v14 = 0;
  *(int *)(temp_v2 + 0x3650) = *(int *)(temp_v2 + 0x3650) + *(int *)(param_1 + 0x30);
  do {
    temp_v9 = *(int *)(param_1 + temp_v14 * 4);
    if ((temp_v9 != 0) && (temp_v13 = *(int *)(param_1 + temp_v14 * 4 + 0x18), temp_v13 != 0)) {
      temp_v5 = 0;
      do {
        temp_v11 = temp_v2 + temp_v5 * 4;
        temp_v12 = *(int *)(temp_v11 + 0x3618);
        if (temp_v12 == temp_v9) {
          piVar7 = (int *)(temp_v2 + temp_v5 * 4 + 0x3630);
          *piVar7 = *piVar7 + temp_v13;
          break;
        }
        if (temp_v12 == 0) {
          *(int *)(temp_v2 + temp_v5 * 4 + 0x3618) = temp_v9;
          *(int *)(temp_v11 + 0x3630) = temp_v13;
          break;
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 6);
    }
    temp_v14 = temp_v14 + 1;
  } while (temp_v14 < 6);
  temp_v9 = *(int *)(param_1 + 0x34);
  temp_v10 = *(unsigned int *)(param_1 + 0x38);
  temp_v14 = (int)(temp_v9 + ((unsigned int)(temp_v9 >> 0x1f) >> 0x1e)) >> 2;
  if ((temp_v14 < 1) && (temp_v9 != 0)) {
    temp_v14 = 1;
  }
  temp_v4 = FUN_00250f58(*(unsigned char *)(temp_v4 + 0x76),temp_v10);
  temp_v4 = (temp_v14 * temp_v4) / 100;
  if ((temp_v4 < 1) && (temp_v14 != 0)) {
    temp_v4 = 1;
  }
  temp_v9 = FUN_00295fac(1);
  if ((temp_v9 == 0) && (temp_v9 = FUN_00295fac(10), temp_v9 == 0)) {
    *(int *)(temp_v2 + 0x35b4) = *(int *)(temp_v2 + 0x35b4) + temp_v4;
  }
  temp_v18 = 1.0f;
  temp_v19 = 0x42c800003c23d70a;
  temp_v20 = 0x3e99999a;
  temp_v4 = 0;
  do {
    if (-1 < *(char *)(temp_v3 + temp_v4 + 0x90f0)) {
      temp_v9 = FUN_002a89e4();
      temp_v13 = FUN_0029ee4c(temp_v9,1);
      if (((temp_v13 == 0) && (temp_v13 = FUN_0029ee4c(temp_v9,10), temp_v13 == 0)) &&
         (temp_v13 = FUN_0029ee4c(temp_v9,2), temp_v13 == 0)) {
        temp_v0 = *(char *)(temp_v3 + temp_v4 + 0x90f0);
        temp_v8 = 0;
        if (*(char *)(temp_v3 + 0x9108) != temp_v0) {
          temp_v1 = *(char *)(temp_v3 + 0x9109);
          temp_v15 = temp_v1 != temp_v0;
          if (temp_v15) {
            temp_v1 = *(char *)(temp_v3 + 0x910a);
          }
          if (!temp_v15 || temp_v1 == temp_v0) {
            temp_v8 = 1;
          }
        }
        else {
          temp_v8 = 1;
        }
        temp_v13 = FUN_002a89e4();
        temp_v5 = 0;
        temp_v17 = temp_v18;
        do {
          temp_v6 = (unsigned int)*(unsigned short *)(temp_v13 + 0x34 + temp_v5 * 2);
          if (temp_v6 != 0) {
            FUN_002840b8();
            temp_v7 = 0;
            if (temp_v6 != 0) {
              temp_v7 = (unsigned int)*(unsigned char *)(temp_v6 + 0x2f);
            }
            if (temp_v6 != 0 && temp_v7 != 0) {
              temp_v16 = (float)VectorUnsignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v17 = temp_v16 * (float)temp_v19 * temp_v17;
            }
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 8);
        temp_v6 = (unsigned int)(temp_v14 * (int)(temp_v17 * (float)((unsigned long long)temp_v19 >> 0x20))) / 100;
        temp_v13 = FUN_00250f58(*(unsigned char *)(temp_v13 + 0x48),temp_v10);
        temp_v7 = (temp_v6 * temp_v13) / 100;
        if ((temp_v7 == 0) && (temp_v6 != 0)) {
          temp_v7 = 1;
        }
        temp_v17 = (float)VectorUnsignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
        if (!temp_v8) {
          temp_v7 = VectorFloatToUnsigned(temp_v17 * (float)temp_v20,3);
        }
        if (((int)temp_v7 < 1) && (temp_v14 != 0)) {
          temp_v7 = 1;
        }
        piVar7 = (int *)(temp_v2 + (unsigned int)*(unsigned char *)(temp_v9 + 0x4a) * 4 + 0x35b8);
        *piVar7 = temp_v7 + *piVar7;
      }
    }
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 0x18) {
      return;
    }
  } while( 1 );
}
