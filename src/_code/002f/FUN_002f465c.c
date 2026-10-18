/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f465c` (_code @ 0x2f465c, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int DAT_00448c58; /* 0x448c58 */
extern int DAT_00448c84; /* 0x448c84 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001e38f8. */
/* Supplied declaration required: FUN_0025b98c. */


void FUN_002f465c(void)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  
  temp_v0 = DAT_00448c58 + DAT_00448c84 * 0x30;
  VectorSignedToFloat((int)*(short *)(temp_v0 + 0x1a),(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001e38f8(1,*(unsigned char *)(temp_v0 + 0x14),*(unsigned char *)(temp_v0 + 0x15),
               *(unsigned char *)(temp_v0 + 0x16),*(unsigned char *)(temp_v0 + 0x17),
               *(unsigned char *)(temp_v0 + 0x18),*(unsigned char *)(temp_v0 + 0x19),
               *(unsigned char *)(temp_v0 + 0x20),*(unsigned char *)(temp_v0 + 0x21),
               *(unsigned char *)(temp_v0 + 0x22),*(unsigned char *)(temp_v0 + 0x23),
               (int)*(short *)(temp_v0 + 0x24),(int)*(short *)(temp_v0 + 0x26));
  FUN_0025b98c();
  return;
}
