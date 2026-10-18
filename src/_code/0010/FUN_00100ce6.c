/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100ce6` (_code @ 0x100ce6, 0x20 bytes) from smt4.cxi.
 * It reads the retail function; it does not reproduce its bytes. build.py only checks that it compiles. */
#include "romwright_types.h"

/* stack frame of param_4: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
} param_4_stack;

extern int DAT_00100d08; /* 0x100d08 */

/* Supplied declaration required: FUN_0010042c. */


void FUN_00100ce6(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0 [4];
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v5 = 1;
  temp_v3 = DAT_00100d08 + 0x100cf8;
  temp_v1 = param_4;
  temp_v2 = param_2;
  temp_v4 = param_1;
  FUN_0010042c(temp_v0,param_3);
  return;
}
