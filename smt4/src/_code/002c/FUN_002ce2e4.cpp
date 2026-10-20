/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ce2e4` (_code @ 0x2ce2e4, 0x1ec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00283e48(void);
int FUN_002a8740(...);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern int DAT_0044dc20; /* 0x44dc20 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int dataTable09Sub3GetRecord(unsigned char, int);
/* Supplied declaration required: FUN_00283e48. */
extern int FUN_00295d08(unsigned int);
extern int flagWordTestBit(int, unsigned int);
/* Supplied declaration required: FUN_002a8740. */
extern int FUN_002a8764(void);
extern int FUN_002b63ac(void);


void FUN_002ce2e4(int *param_1)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned long long temp_v13;
  
  temp_v0 = DAT_0044dc20;
  temp_v1 = FUN_002a8764();
  temp_v2 = FUN_002b63ac();
  temp_v8 = *param_1;
  temp_v9 = param_1[1];
  temp_v2 = dataTable09Sub3GetRecord(*(unsigned char *)(temp_v2 + 0x76),temp_v9);
  temp_v2 = (temp_v8 * temp_v2) / 100;
  if ((temp_v2 < 1) && (temp_v8 != 0)) {
    temp_v2 = 1;
  }
  temp_v3 = FUN_00295d08(1);
  if ((temp_v3 == 0) && (temp_v3 = FUN_00295d08(10), temp_v3 == 0)) {
    piVar5 = (int *)(temp_v0 + 0x35b4);
    *piVar5 = *piVar5 + temp_v2;
  }
  temp_v12 = 1.0f;
  temp_v13 = 0x42c800003c23d70a;
  temp_v2 = 0;
  do {
    if (-1 < *(char *)(temp_v1 + temp_v2 + 0x90f0)) {
      temp_v3 = FUN_002a8740();
      temp_v4 = flagWordTestBit(temp_v3,1);
      if (((temp_v4 == 0) && (temp_v4 = flagWordTestBit(temp_v3,10), temp_v4 == 0)) &&
         (temp_v4 = flagWordTestBit(temp_v3,2), temp_v4 == 0)) {
        temp_v4 = FUN_002a8740((int)*(char *)(temp_v1 + temp_v2 + 0x90f0));
        temp_v7 = 0;
        temp_v11 = temp_v12;
        do {
          temp_v5 = (unsigned int)*(unsigned short *)(temp_v4 + 0x34 + temp_v7 * 2);
          if (temp_v5 != 0) {
            FUN_00283e48();
            temp_v6 = 0;
            if (temp_v5 != 0) {
              temp_v6 = (unsigned int)*(unsigned char *)(temp_v5 + 0x2f);
            }
            if (temp_v5 != 0 && temp_v6 != 0) {
              temp_v10 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v11 = temp_v10 * (float)temp_v13 * temp_v11;
            }
          }
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < 8);
        temp_v5 = (unsigned int)(temp_v8 * (int)(temp_v11 * (float)((unsigned long long)temp_v13 >> 0x20))) / 100;
        temp_v4 = dataTable09Sub3GetRecord(*(unsigned char *)(temp_v4 + 0x48),temp_v9);
        temp_v6 = (temp_v5 * temp_v4) / 100;
        if ((temp_v6 == 0) && (temp_v5 != 0)) {
          temp_v6 = 1;
        }
        if ((temp_v6 == 0) && (temp_v8 != 0)) {
          temp_v6 = 1;
        }
        piVar5 = (int *)(temp_v0 + (unsigned int)*(unsigned char *)(temp_v3 + 0x4a) * 4 + 0x35b8);
        *piVar5 = temp_v6 + *piVar5;
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x18);
  return;
}

} /* extern "C" */
