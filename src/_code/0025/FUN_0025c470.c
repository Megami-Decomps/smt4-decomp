/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025c470` (_code @ 0x25c470, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_004474f4; /* 0x4474f4 */
extern unsigned char DAT_0049f3f0; /* 0x49f3f0 */

/* Supplied declaration required: FUN_002c20a8. */


void FUN_0025c470(void)

{
/* irregular: irregular input(s): in_s3, in_s4, in_s5; 5 native warning(s); review required */
  float in_s3;
  float in_s4;
  float in_s5;
  float temp_v0;
  float temp_v1;
  float temp_v2;
  unsigned char temp_v3 [20];
  
  temp_v0 = in_s3 + *(float *)(DAT_004474f4 + 0x294);
  temp_v1 = in_s4 + *(float *)(DAT_004474f4 + 0x298);
  temp_v2 = in_s5 + *(float *)(DAT_004474f4 + 0x29c);
  FUN_002c20a8(&DAT_0049f3f0,temp_v3,&temp_v0,DAT_004474f4 + 0x1c);
                    /* WARNING: Treating indirect jump as return */
  return;
}
