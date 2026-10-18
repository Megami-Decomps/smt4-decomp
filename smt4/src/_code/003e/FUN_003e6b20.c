/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e6b20` (_code @ 0x3e6b20, 0x10c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_7_stack;

extern unsigned char LAB_0037b480; /* 0x37b480 */
extern unsigned char DAT_00421c18; /* 0x421c18 */

extern int FUN_0037a34c(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_0037a540. */


unsigned int *
FUN_003e6b20(unsigned int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,int param_5,
            int param_6,int param_7)

{
/* irregular: irregular input(s): in_r12; 2 native warning(s); review required */
  int temp_v0;
  int in_r12;
  
  if ((*(char *)(in_r12 + 0x180) != '\0') && (param_3 >= 100)) {
    if (param_2 != (unsigned int *)0x0) {
      FUN_0037a540(param_2,param_4,0,0,(int)*(char *)(in_r12 + 0x181),&LAB_0037b480);
      param_2[0x15] = 0;
      *param_2 = (unsigned int)&DAT_00421c18;
      param_2[0x17] = 0xffffffff;
      param_2[0x16] = 0;
      param_2[0x18] = 0xffffffff;
      if (param_5 != 0 && param_6 != 0) {
        param_2[0x15] = param_5;
        param_2[0x16] = param_6;
      }
    }
    if (*(char *)(param_2 + 0x14) == '\0') {
      return (unsigned int *)0x0;
    }
    if (param_7 != 0) {
      if (param_7 != 1) {
        if (param_7 != 2) {
          return (unsigned int *)0x0;
        }
        temp_v0 = FUN_0037a34c(param_2,8);
      }
      else {
        temp_v0 = FUN_0037a34c(param_2,0xfffffff8);
      }
    }
    else {
      temp_v0 = FUN_0037a34c(param_2,0xfffffff0);
    }
    if (temp_v0 != 0) {
      return param_2;
    }
  }
  return (unsigned int *)0x0;
}
