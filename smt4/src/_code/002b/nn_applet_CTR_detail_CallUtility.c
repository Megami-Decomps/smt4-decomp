/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_detail_CallUtility` (_code @ 0x2b5838, 0xcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_6_stack;

extern int FUN_0013b934(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_002bb308. */
/* Supplied declaration required: FUN_002bb378. */
/* Supplied declaration required: FUN_002c131c. */


int nn_applet_CTR_detail_CallUtility
              (unsigned int param_1,unsigned int *param_2,int param_3,int param_4,int param_5,
              unsigned int *param_6)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v1 = 0;
  temp_v2 = 0;
  FUN_002bb378();
  if ((param_2 == (unsigned int *)0x0) || (param_3 == 0)) {
    param_2 = (unsigned int *)&temp_v1;
  }
  temp_v0 = FUN_0013b934(param_1,param_2);
  if (temp_v0 < 0) {
    FUN_002c131c(temp_v0,0x2b58c8);
  }
  if (param_4 == 0 || param_5 == 0) {
    temp_v3 = 0;
  }
  if (param_6 != (unsigned int *)0x0) {
    *param_6 = temp_v3;
  }
  FUN_002bb308();
  return temp_v0;
}
