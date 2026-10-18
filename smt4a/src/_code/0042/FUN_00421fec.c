/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00421fec` (_code @ 0x421fec, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 8 slot(s), 8 byte(s) */
typedef struct {
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned char sp32; /* 0x32: local_32 */
    unsigned char sp33; /* 0x33: local_33 */
    unsigned char sp34; /* 0x34: local_34 */
    unsigned char sp56; /* 0x56: local_56 */
    unsigned char sp57; /* 0x57: local_57 */
    unsigned char sp58; /* 0x58: local_58 */
    unsigned char sp88; /* 0x88: local_88 */
} param_1_stack;

/* Supplied declaration required: FUN_0016d1f4. */
/* Supplied declaration required: FUN_00500a98. */


void FUN_00421fec(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0 [48];
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  
  FUN_0016d1f4(temp_v0);
  temp_v4 = 1;
  temp_v5 = 1;
  temp_v1 = 1;
  temp_v2 = 0;
  temp_v6 = 5;
  temp_v7 = 0;
  temp_v3 = 6;
  temp_v0[0] = 1;
  FUN_00500a98(temp_v0,param_1,1);
  return;
}
