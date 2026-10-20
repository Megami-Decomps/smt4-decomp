/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003daf6c` (_code @ 0x3daf6c, 0x154 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023aa3c(int, unsigned char [16]);
int FUN_0023ac2c(int, float *);
int FUN_0023adf4(unsigned int, int, unsigned char [16]);
int nodeSetTranslation(unsigned int, int, float *);
int FUN_003108b0(unsigned char [520], int);
int FUN_0032360c(int, int, unsigned char [520]);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Supplied declaration required: FUN_0023aa3c. */
/* Supplied declaration required: FUN_0023ac2c. */
/* Supplied declaration required: FUN_0023adf4. */
/* Supplied declaration required: nodeSetTranslation. */
/* Supplied declaration required: FUN_003108b0. */
/* Supplied declaration required: FUN_0032360c. */


unsigned int FUN_003daf6c(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned char temp_v4 [520];
  float temp_v5;
  float temp_v6;
  float temp_v7;
  unsigned char temp_v8 [16];
  
  temp_v3 = 0;
  do {
    temp_v0 = param_1 + temp_v3 * 0x28;
    piVar5 = (int *)(temp_v0 + 400);
    if ((*(unsigned int *)(temp_v0 + 0x1b4) & 2) != 0) {
      temp_v1 = 0;
      while ((temp_v2 = param_1 + temp_v1 * 0x30, *(int *)(temp_v2 + 0x1398) != *(int *)(temp_v0 + 0x194) ||
             ((*(unsigned int *)(temp_v2 + 0x13c4) & 1) == 0))) {
        temp_v1 = temp_v1 + 1;
        if (temp_v1 >= 0x32) {
          return 0;
        }
      }
      temp_v1 = 0;
      do {
        temp_v2 = param_1 + temp_v1 * 0x30;
        if (*(int *)(temp_v2 + 0x1398) == *(int *)(temp_v0 + 0x194)) {
          FUN_0023aa3c(temp_v2 + 0x13a0,temp_v8);
          FUN_0023adf4(*(unsigned int *)(*piVar5 + 8),0,temp_v8);
          FUN_0023ac2c(temp_v2 + 0x13a0,&temp_v5);
          temp_v5 = temp_v5 + *(float *)(temp_v0 + 0x1a0);
          temp_v6 = temp_v6 + *(float *)(temp_v0 + 0x1a4);
          temp_v7 = temp_v7 + *(float *)(temp_v0 + 0x1a8);
          nodeSetTranslation(*(unsigned int *)(*piVar5 + 8),0,&temp_v5);
          FUN_003108b0(temp_v4,*piVar5);
          FUN_0032360c(*piVar5,temp_v2 + 0x13a0,temp_v4);
          break;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x32);
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 0x32) {
      return 1;
    }
  } while( 1 );
}

} /* extern "C" */
