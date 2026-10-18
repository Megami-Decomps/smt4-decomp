/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00508948` (_code @ 0x508948, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_7_stack;

extern unsigned char LAB_00460e6c; /* 0x460e6c */

extern int FUN_00460108(int, unsigned int);
/* Supplied declaration required: FUN_00460378. */
/* Supplied declaration required: FUN_00460b34. */
/* Supplied declaration required: FUN_00460d1c. */


int FUN_00508948(int param_1,int param_2,unsigned int param_3,unsigned int param_4,int param_5,int param_6,
                int param_7)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if ((*(char *)(param_1 + 400) == '\0') || (param_3 < 0x7c)) {
    return 0;
  }
  if (param_2 == 0) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = param_2;
    FUN_00460378(param_2,param_4,0,0,(int)*(char *)(param_1 + 0x191),&LAB_00460e6c,param_1);
  }
  temp_v0 = 0;
  if (*(char *)(temp_v1 + 0x50) != '\0') {
    if (param_7 != 0) {
      if (param_7 != 1) {
        if (param_7 != 2) {
          return 0;
        }
        temp_v0 = FUN_00460108(temp_v1,8);
      }
      else {
        temp_v0 = FUN_00460108(temp_v1,0xfffffff8);
      }
    }
    else {
      temp_v0 = FUN_00460108(temp_v1,0xfffffff0);
    }
    if (temp_v0 == 0) {
      return 0;
    }
    temp_v0 = param_2 + 0x54;
    if (temp_v0 == 0) {
      temp_v0 = 0;
    }
    else {
      FUN_00460d1c(temp_v0,temp_v1);
      if ((temp_v0 != 0 && param_5 != 0) && param_6 != 0) {
        FUN_00460b34();
      }
    }
  }
  return temp_v0;
}
