/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014ff04` (_code @ 0x14ff04, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 6 slot(s), 15 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned char sp28; /* 0x28: local_28 */
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned char sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_6_stack;

extern unsigned int FUN_00153a98(unsigned int, unsigned int *, unsigned char *, unsigned char *, unsigned char *, unsigned int *);
/* Supplied declaration required: FUN_002bb308. */
/* Supplied declaration required: FUN_002bb378. */


unsigned int
FUN_0014ff04(unsigned int param_1,unsigned int *param_2,unsigned char *param_3,unsigned char *param_4,
            unsigned char *param_5,unsigned int *param_6)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int uStack_34;
  unsigned char temp_v3 [4];
  unsigned char temp_v4 [4];
  unsigned char temp_v5 [4];
  unsigned int temp_v6 [2];
  
  FUN_002bb378();
  temp_v0 = FUN_00153a98(param_1,(unsigned int *)&temp_v2,temp_v3,temp_v4,temp_v5,temp_v6);
  FUN_002bb308();
  if ((temp_v0 & 0x80000000) != 0) {
    temp_v1 = 0;
  }
  else {
    if (param_2 != (unsigned int *)0x0) {
      *param_2 = temp_v2;
      param_2[1] = uStack_34;
    }
    if (param_3 != (unsigned char *)0x0) {
      *param_3 = temp_v3[0];
    }
    if (param_4 != (unsigned char *)0x0) {
      *param_4 = temp_v4[0];
    }
    if (param_5 != (unsigned char *)0x0) {
      *param_5 = temp_v5[0];
    }
    if (param_6 != (unsigned int *)0x0) {
      *param_6 = temp_v6[0];
    }
    temp_v1 = 1;
  }
  return temp_v1;
}
