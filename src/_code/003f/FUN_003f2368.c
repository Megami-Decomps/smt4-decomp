/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f2368` (_code @ 0x3f2368, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern unsigned char LAB_003576b8; /* 0x3576b8 */
extern unsigned int DAT_004656e0; /* 0x4656e0 */
extern unsigned int DAT_004656e4; /* 0x4656e4 */
extern unsigned int DAT_004e62a8; /* 0x4e62a8 */
extern unsigned int DAT_004e62b4; /* 0x4e62b4 */

/* Supplied declaration required: FUN_002c3b00. */


unsigned long long FUN_003f2368(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_3 + 8) = param_1;
  *(unsigned int *)(param_3 + 0xc) = param_1;
  DAT_004656e0 = 0;
  DAT_004656e4 = 0;
  DAT_004e62a8 = 0;
  FUN_002c3b00(&DAT_004e62a8);
  DAT_004e62b4 = 0;
  FUN_002c3b00(&DAT_004e62b4,&LAB_003576b8,0x100000);
  return 0x3576b8004e62b4;
}
