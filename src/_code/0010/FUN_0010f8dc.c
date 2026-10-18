/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f8dc` (_code @ 0x10f8dc, 0xd8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_00471b48; /* 0x471b48 */
extern unsigned int DAT_00471b4c; /* 0x471b4c */

extern int FUN_002bbb04(int *, int, unsigned int, int, unsigned int, unsigned int);


int FUN_0010f8dc(unsigned int param_1)

{
  int temp_v0;
  int temp_v1 [2];
  
  temp_v0 = -0x1f1fe40e;
  if ((param_1 & 0xfff) == 0) {
    if (DAT_00471b4c < param_1) {
      if ((DAT_00471b4c == 0) || (((DAT_00471b4c | param_1) & 0xfffff) == 0)) {
        if (DAT_00471b4c != 0) {
          temp_v0 = DAT_00471b48 + DAT_00471b4c;
        }
        else {
          temp_v0 = 0;
        }
        temp_v0 = FUN_002bbb04(temp_v1,temp_v0,0,param_1 - DAT_00471b4c,0x10003,3);
        if (-1 < temp_v0) {
          if (DAT_00471b4c != 0) {
            DAT_00471b4c = param_1;
            return temp_v0;
          }
          DAT_00471b48 = temp_v1[0];
          DAT_00471b4c = param_1;
          return temp_v0;
        }
      }
    }
    else {
      temp_v0 = FUN_002bbb04(temp_v1,DAT_00471b48 + param_1,0,DAT_00471b4c - param_1,1,0);
      if (-1 < temp_v0) {
        if (param_1 == 0) {
          DAT_00471b48 = 0;
        }
        DAT_00471b4c = param_1;
        return temp_v0;
      }
    }
  }
  return temp_v0;
}
