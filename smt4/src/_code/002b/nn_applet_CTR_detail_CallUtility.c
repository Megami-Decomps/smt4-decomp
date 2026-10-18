/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_detail_CallUtility` (_code @ 0x2b5838, 0xc9 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned int uRam00000000; /* 0x0 */
extern unsigned int uRam00000004; /* 0x4 */
extern unsigned int uRam00000008; /* 0x8 */
extern unsigned int uRam0000000c; /* 0xc */
extern unsigned int uRam00000010; /* 0x10 */
extern unsigned int uRam00000014; /* 0x14 */
extern int DAT_004652a0; /* 0x4652a0 */

/* Supplied declaration required: FUN_002bb378. */


/* WARNING: Control flow encountered bad instruction data */

void nn_applet_CTR_detail_CallUtility(void)

{
/* irregular: irregular input(s): in_r3; 4 native warning(s); review required */
  int in_r3;
  
  FUN_002bb378();
  if (in_r3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam00000000 = *(unsigned char *)(in_r3 + 0x12a42) | 0x80000000;
  DAT_004652a0 = DAT_004652a0 + 0x18;
  uRam00000004 = 0x804f02c0;
  uRam00000008 = uRam0000000c;
  uRam00000010 = 0x804f02c0;
  uRam00000014 = uRam00000000;
  return;
}
