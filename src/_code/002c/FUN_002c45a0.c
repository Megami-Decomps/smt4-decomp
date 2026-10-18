/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c45a0` (_code @ 0x2c45a0, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_004e3cf4; /* 0x4e3cf4 */

extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c43f4. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c45a0(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int unaff_r5;
  
  temp_v0 = FUN_002c0ac8();
  temp_v1 = *(unsigned int *)(temp_v0 + 4);
  if (temp_v1 == 0) {
    return;
  }
  temp_v0 = *(int *)(DAT_004e3cf4 + (temp_v1 >> 0x14) * 8);
  if (temp_v0 == 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( 1 );
  }
  if (*(unsigned int *)(temp_v0 + 0x24) == (temp_v1 & 0xfffff)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while (temp_v0 != 0) {
    temp_v2 = *(int *)(temp_v0 + 0x5c);
    *(unsigned short *)(temp_v0 + 0x36) = *(unsigned short *)(unaff_r5 + 0x36);
    FUN_002c43f4();
    temp_v0 = temp_v2;
  }
  switch(*(unsigned char *)(unaff_r5 + 0x98)) {
  default:
    return;
  case 1:
  case 2:
  case 3:
    *(unsigned char *)(unaff_r5 + 0x98) = 4;
    return;
  }
}
