/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146cd0` (_code @ 0x146cd0, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 8 slot(s), 30 byte(s) */
typedef struct {
    unsigned short sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char DAT_00558024; /* 0x558024 */

/* Supplied declaration required: FUN_0016e1a8. */
/* Supplied declaration required: FUN_00188374. */
/* Supplied declaration required: FUN_00188fbc. */
extern int FUN_00189388(unsigned char **, unsigned char *);


unsigned int FUN_00146cd0(unsigned short *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char *temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8 [4];
  unsigned short temp_v9;
  
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v1 = &DAT_00558024;
  temp_v2 = 0x55809c;
  temp_v0 = FUN_00189388(&temp_v1,temp_v8);
  FUN_00188fbc(temp_v8);
  FUN_0016e1a8(&temp_v1,temp_v8);
  *param_1 = temp_v9;
  if (temp_v0 != 0) {
    FUN_00188374(&temp_v1,0);
    return 0x11464;
  }
  FUN_00188374(&temp_v1,0);
  return 0;
}
