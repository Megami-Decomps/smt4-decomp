/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d896c` (_code @ 0x4d896c, 0x270 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00340c10(int);
int FUN_0035c708(int, unsigned int, int, unsigned int);
int FUN_00401178(int, int, int, int, int, int, int);
int FUN_0045b334(int, int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern int DAT_0056fcc0; /* 0x56fcc0 */
extern unsigned char DAT_0057aa00; /* 0x57aa00 */
extern unsigned char DAT_0057aa01; /* 0x57aa01 */
extern unsigned char DAT_0057aa02; /* 0x57aa02 */

/* Supplied declaration required: FUN_00340c10. */
/* Supplied declaration required: FUN_0035c708. */
/* Supplied declaration required: FUN_00401178. */
/* Supplied declaration required: FUN_0045b334. */


void FUN_004d896c(int param_1,int param_2,int param_3)

{
/* irregular: 4 native warning(s); review required */
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
  temp_v5 = *(int *)(param_1 + 0xc0);
  while( 1 ) {
    temp_v8 = (int)*(short *)(temp_v5 + temp_v7 * 0x2c);
    if (temp_v8 == -1) {
      return;
    }
    if ((temp_v8 == param_2) && (*(short *)(temp_v5 + temp_v7 * 0x2c + 2) == param_3)) break;
    temp_v7 = temp_v7 + 1;
    if (temp_v7 >= 0xa0) {
      return;
    }
  }
  FUN_00401178(param_1,*(unsigned char *)(temp_v5 + temp_v7 * 0x2c + 4),
               *(unsigned char *)(temp_v5 + temp_v7 * 0x2c + 5),*(unsigned char *)(temp_v5 + temp_v7 * 0x2c + 6),
               *(unsigned char *)(temp_v5 + temp_v7 * 0x2c + 7),(int)*(short *)(temp_v5 + temp_v7 * 0x2c + 8),
               (int)*(short *)(temp_v5 + temp_v7 * 0x2c + 10));
  if (0 < *(int *)(*(int *)(param_1 + 0xc0) + temp_v7 * 0x2c + 0x18)) {
    FUN_00340c10(0);
    FUN_0045b334(*(int *)(DAT_0056fcc0 + 4) + 0xcc,0x18);
  }
  temp_v5 = *(int *)(param_1 + 0xc0);
  temp_v6 = *(unsigned int *)(temp_v5 + temp_v7 * 0x2c + 0x10);
  FUN_0035c708(param_1,(temp_v6 << 0x18) | (((temp_v6 >> 8) & 0xff) << 0x10) |
                       (((temp_v6 >> 0x10) & 0xff) << 8) |
                       (unsigned int)*(unsigned char *)(temp_v5 + temp_v7 * 0x2c + 0x13),
               *(unsigned char *)(temp_v5 + temp_v7 * 0x2c + 0x14) - 0x100,
               (temp_v6 << 0x18) | (((temp_v6 >> 8) & 0xff) << 0x10) | (((temp_v6 >> 0x10) & 0xff) << 8) |
               (unsigned int)*(unsigned char *)(temp_v5 + temp_v7 * 0x2c + 0x15));
  temp_v6 = (unsigned int)*(unsigned char *)(*(int *)(param_1 + 0xc0) + temp_v7 * 0x2c + 0x16) * 0xff;
  temp_v8 = (int)(((long long)(int)temp_v6 * -0x7f7f7f7f + ((unsigned long long)temp_v6 << 0x20)) >> 0x20);
  temp_v9 = (int)(((long long)(int)temp_v6 * -0x7f7f7f7f + ((unsigned long long)temp_v6 << 0x20)) >> 0x20);
  temp_v5 = (int)(((long long)(int)temp_v6 * -0x7f7f7f7f + ((unsigned long long)temp_v6 << 0x20)) >> 0x20);
  temp_v0 = *(unsigned char *)(*(int *)(param_1 + 0xc0) + temp_v7 * 0x2c + 0x17);
  temp_v6 = (short)(unsigned short)temp_v0 * 199;
  temp_v4 = (short)(unsigned short)temp_v0 * 0x96;
  temp_v1 = (long long)(int)temp_v6 * -0x7f7f7f7f + ((unsigned long long)temp_v6 << 0x20);
  temp_v2 = (long long)(int)temp_v4 * -0x7f7f7f7f + ((unsigned long long)temp_v4 << 0x20);
  temp_v3 = (long long)(int)((unsigned int)temp_v0 * 0x24) * -0x7f7f7f7f +
          ((unsigned long long)((unsigned int)temp_v0 * 0x24) << 0x20);
  (*(signed char *)((unsigned char *)&(*(int *)((unsigned char *)&DAT_0057aa02 + 0x1a)) - 0x1c)) = (char)(int)(temp_v1 >> 0x27) - (char)(temp_v1 >> 0x3f);
  (*(signed char *)((unsigned char *)&DAT_0057aa00 + 0x1)) = (char)(int)(temp_v2 >> 0x27) - (char)(temp_v2 >> 0x3f);
  (*(signed char *)((unsigned char *)&DAT_0057aa01 + 0x1)) = (char)(int)(temp_v3 >> 0x27) - (char)(temp_v3 >> 0x3f);
  (*(int *)((unsigned char *)&DAT_0057aa02 + 0x1a)) = ((temp_v8 >> 7) - (temp_v8 >> 0x1f)) * 0x1000000 +
                 ((temp_v9 >> 7) - (temp_v9 >> 0x1f)) * 0x10000 +
                 ((temp_v5 >> 7) - (temp_v5 >> 0x1f)) * 0x100 + 0xff;
  return;
}

} /* extern "C" */
