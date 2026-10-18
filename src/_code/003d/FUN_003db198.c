/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003db198` (_code @ 0x3db198, 0x154 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Supplied declaration required: FUN_0023abd4. */
/* Supplied declaration required: FUN_0023adc4. */
/* Supplied declaration required: FUN_0023af8c. */
/* Supplied declaration required: FUN_0028c8a8. */
/* Supplied declaration required: FUN_00310914. */
/* Supplied declaration required: FUN_00323804. */


unsigned int FUN_003db198(int param_1)

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
          FUN_0023abd4(temp_v2 + 0x13a0,temp_v8);
          FUN_0023af8c(*(unsigned int *)(*piVar5 + 8),0,temp_v8);
          FUN_0023adc4(temp_v2 + 0x13a0,&temp_v5);
          temp_v5 = temp_v5 + *(float *)(temp_v0 + 0x1a0);
          temp_v6 = temp_v6 + *(float *)(temp_v0 + 0x1a4);
          temp_v7 = temp_v7 + *(float *)(temp_v0 + 0x1a8);
          FUN_0028c8a8(*(unsigned int *)(*piVar5 + 8),0,&temp_v5);
          FUN_00310914(temp_v4,*piVar5);
          FUN_00323804(*piVar5,temp_v2 + 0x13a0,temp_v4);
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
