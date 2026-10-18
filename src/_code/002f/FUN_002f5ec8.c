/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5ec8` (_code @ 0x2f5ec8, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_002f5f1c; /* 0x2f5f1c */

/* Supplied declaration required: FUN_0028df54. */
extern unsigned int FUN_00296f60(unsigned int);
/* Supplied declaration required: FUN_002be7fc. */
extern int FUN_002c1f28(void);
extern unsigned int FUN_002d8424(unsigned char *);


unsigned int FUN_002f5ec8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [68];
  
  temp_v0 = FUN_00296f60(0);
  temp_v2 = 0;
  temp_v1 = FUN_002c1f28();
  if (temp_v1 == 0) {
    FUN_002be7fc(temp_v3,&LAB_002f5f1c,temp_v0);
    temp_v2 = FUN_002d8424(temp_v3);
  }
  FUN_0028df54(temp_v2);
  return 1;
}
