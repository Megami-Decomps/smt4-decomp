/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c7cf0` (_code @ 0x3c7cf0, 0x204 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern signed char DAT_00439ce0; /* 0x439ce0 */
extern signed char DAT_00439ce1; /* 0x439ce1 */
extern signed char DAT_00439ce2; /* 0x439ce2 */
extern int DAT_00439cf8; /* 0x439cf8 */

/* Supplied declaration required: FUN_002e23c0. */
/* Supplied declaration required: FUN_00340334. */


void FUN_003c7cf0(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  long long temp_v1;
  long long temp_v2;
  long long temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  
  temp_v7 = 0;
  temp_v5 = *(int *)(param_1 + 0xa0);
  while( 1 ) {
    temp_v8 = (int)*(short *)(temp_v5 + temp_v7 * 0x18);
    if (temp_v8 == -1) {
      return;
    }
    if ((temp_v8 == param_2) && (*(short *)(temp_v5 + temp_v7 * 0x18 + 2) == param_3)) break;
    temp_v7 = temp_v7 + 1;
    if (temp_v7 >= 0x50) {
      return;
    }
  }
  FUN_00340334(param_1,*(unsigned char *)(temp_v5 + temp_v7 * 0x18 + 4),
               *(unsigned char *)(temp_v5 + temp_v7 * 0x18 + 5),*(unsigned char *)(temp_v5 + temp_v7 * 0x18 + 6),
               *(unsigned char *)(temp_v5 + temp_v7 * 0x18 + 7),(int)*(short *)(temp_v5 + temp_v7 * 0x18 + 8),
               (int)*(short *)(temp_v5 + temp_v7 * 0x18 + 10));
  temp_v5 = *(int *)(param_1 + 0xa0);
  temp_v6 = *(unsigned int *)(temp_v5 + temp_v7 * 0x18 + 0x10);
  FUN_002e23c0(param_1,(temp_v6 << 0x18) | (((temp_v6 >> 8) & 0xff) << 0x10) |
                       (((temp_v6 >> 0x10) & 0xff) << 8) |
                       (unsigned int)*(unsigned char *)(temp_v5 + temp_v7 * 0x18 + 0x13),
               *(unsigned char *)(temp_v5 + temp_v7 * 0x18 + 0x14) - 0x100,
               (temp_v6 << 0x18) | (((temp_v6 >> 8) & 0xff) << 0x10) | (((temp_v6 >> 0x10) & 0xff) << 8) |
               (unsigned int)*(unsigned char *)(temp_v5 + temp_v7 * 0x18 + 0x15));
  temp_v6 = (unsigned int)*(unsigned char *)(*(int *)(param_1 + 0xa0) + temp_v7 * 0x18 + 0x16) * 0xff;
  temp_v8 = (int)(((long long)(int)temp_v6 * -0x7f7f7f7f + ((unsigned long long)temp_v6 << 0x20)) >> 0x20);
  temp_v9 = (int)(((long long)(int)temp_v6 * -0x7f7f7f7f + ((unsigned long long)temp_v6 << 0x20)) >> 0x20);
  temp_v5 = (int)(((long long)(int)temp_v6 * -0x7f7f7f7f + ((unsigned long long)temp_v6 << 0x20)) >> 0x20);
  temp_v0 = *(unsigned char *)(*(int *)(param_1 + 0xa0) + temp_v7 * 0x18 + 0x17);
  temp_v6 = (short)(unsigned short)temp_v0 * 199;
  temp_v4 = (short)(unsigned short)temp_v0 * 0x96;
  temp_v1 = (long long)(int)temp_v6 * -0x7f7f7f7f + ((unsigned long long)temp_v6 << 0x20);
  temp_v2 = (long long)(int)temp_v4 * -0x7f7f7f7f + ((unsigned long long)temp_v4 << 0x20);
  temp_v3 = (long long)(int)((unsigned int)temp_v0 * 0x24) * -0x7f7f7f7f +
          ((unsigned long long)((unsigned int)temp_v0 * 0x24) << 0x20);
  DAT_00439ce0 = (char)(int)(temp_v1 >> 0x27) - (char)(temp_v1 >> 0x3f);
  DAT_00439ce1 = (char)(int)(temp_v2 >> 0x27) - (char)(temp_v2 >> 0x3f);
  DAT_00439ce2 = (char)(int)(temp_v3 >> 0x27) - (char)(temp_v3 >> 0x3f);
  DAT_00439cf8 = ((temp_v8 >> 7) - (temp_v8 >> 0x1f)) * 0x1000000 +
                 ((temp_v9 >> 7) - (temp_v9 >> 0x1f)) * 0x10000 +
                 ((temp_v5 >> 7) - (temp_v5 >> 0x1f)) * 0x100 + 0xff;
  return;
}
