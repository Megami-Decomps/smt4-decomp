/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f0f98` (_code @ 0x1f0f98, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned long long FUN_001ef87c(void);


unsigned long long FUN_001f0f98(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned long long temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int unaff_r6;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned char temp_v13;
  int temp_v14;
  unsigned int *unaff_r11;
  int temp_v15;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  int temp_v19;
  
  temp_v1 = FUN_001ef87c();
  temp_v2 = unaff_r11[-0x80];
  temp_v3 = (unsigned int)*(unsigned char *)((int)unaff_r11 + 0x5ff);
  temp_v0 = temp_v2 >> 0x18;
  temp_v7 = ((int)(temp_v3 + temp_v0 + 1) >> 1) + unaff_r6 * 2;
  temp_v8 = temp_v7 - temp_v3;
  temp_v4 = temp_v3 * 4 + temp_v8;
  temp_v16 = (temp_v2 & 0xff) << 4;
  temp_v5 = temp_v4 + temp_v8;
  temp_v13 = temp_v2 >> 8;
  temp_v17 = temp_v13 << 4;
  temp_v6 = temp_v5 + temp_v8;
  temp_v3 = (temp_v2 >> 0x10) & 0xff;
  temp_v18 = temp_v3 << 4;
  temp_v19 = (temp_v2 >> 0x18) << 4;
  temp_v14 = temp_v0 << 2;
  temp_v15 = 4;
  do {
    temp_v14 = temp_v14 + (temp_v7 - temp_v0);
    temp_v9 = temp_v14 + (unsigned int)*(unsigned char *)((int)unaff_r11 - 1) * -4;
    temp_v16 = temp_v16 + temp_v4 + (temp_v2 & 0xff) * -4;
    temp_v17 = temp_v17 + temp_v5 + temp_v13 * -4;
    temp_v18 = temp_v18 + temp_v6 + temp_v3 * -4;
    temp_v19 = temp_v19 + temp_v6 + temp_v8 + (temp_v2 >> 0x18) * -4;
    temp_v10 = (unsigned int)*(unsigned char *)((int)unaff_r11 - 1) * 0x10 + temp_v9;
    temp_v11 = temp_v10 + temp_v9;
    temp_v12 = temp_v11 + temp_v9;
    *unaff_r11 = ((temp_v16 + temp_v10 + 0x10) >> 5) | (((temp_v17 + temp_v11 + 0x10) >> 5) << 8) |
                 (((temp_v18 + temp_v12 + 0x10) >> 5) << 0x10) |
                 (((temp_v19 + temp_v12 + temp_v9 + 0x10) >> 5) << 0x18);
    temp_v15 = temp_v15 - 1;
    unaff_r11 = unaff_r11 + 0x80;
  } while (temp_v15 != 0);
  return temp_v1;
}

} /* extern "C" */
