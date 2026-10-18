/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100d88` (_code @ 0x100d88, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp48; /* 0x48: local_48 */
} param_4_stack;

extern unsigned char LAB_00101209; /* 0x101209 */
extern unsigned char LAB_00101229; /* 0x101229 */

/* Supplied declaration required: FUN_001011e0. */


void FUN_00100d88(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *temp_v0 [6];
  unsigned char *temp_v1;
  unsigned char *temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int uStack_10;
  unsigned int temp_v7;
  int uStack_8;
  unsigned int uStack_4;
  
  temp_v0[0] = (unsigned int *)&uStack_8;
  temp_v4 = 0xffffffff;
  temp_v6 = 0;
  temp_v1 = &LAB_00101209;
  temp_v2 = &LAB_00101229;
  temp_v3 = param_1;
  temp_v5 = param_1;
  uStack_10 = param_1;
  temp_v7 = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_001011e0(&temp_v3,param_2,temp_v0);
                    /* WARNING: Treating indirect jump as return */
  return;
}
