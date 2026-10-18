/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00336cb8` (_code @ 0x336cb8, 0x114 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00336cb8_arg0 fn_00336cb8_arg0;
struct fn_00336cb8_arg0 {
    unsigned char pad_0x0[0x11c];
    short field_0x11c; /* +0x11c */
    unsigned char pad_0x11e[0x2e0a];
    void *field_0x2f28; /* +0x2f28 */
    unsigned char pad_0x2f2c[0x1574];
    uint field_0x44a0; /* +0x44a0 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp2A0; /* 0x2a0: local_2a0 */
} param_1_stack;

/* Supplied declaration required: FUN_00256078. */
/* Supplied declaration required: FUN_002562e4. */
/* Supplied declaration required: FUN_00256364. */
/* Supplied declaration required: FUN_002563d4. */
/* Supplied declaration required: FUN_0028f134. */
extern int FUN_002a8a08(void);
extern int FUN_002b6e78(void);
/* Supplied declaration required: FUN_00337f30. */
/* Supplied declaration required: FUN_003c8650. */
/* Supplied declaration required: FUN_003c88e4. */


void FUN_00336cb8(fn_00336cb8_arg0 *param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [448];
  
  if ((param_1->field_0x44a0 & 0x40000) != 0) {
    return;
  }
  if (param_1->field_0x11c != 0) {
    FUN_003c8650((int)param_1->field_0x11c);
  }
  else {
    temp_v0 = FUN_002b6e78();
    if ((int)param_1->field_0x2f28 >= 1) {
      if (temp_v0 != 1) {
        if (temp_v0 == 2) {
          FUN_00256364();
          FUN_0028f134();
        }
      }
      else {
        FUN_002563d4();
        FUN_0028f134();
      }
      FUN_002562e4(param_1->field_0x2f28);
    }
    else {
      if (temp_v0 == 0) {
        return;
      }
      if (temp_v0 != 1) {
        if (temp_v0 != 2) {
          return;
        }
      }
      else {
        FUN_003c88e4();
      }
    }
  }
  temp_v0 = FUN_002a8a08();
  if (*(short *)(temp_v0 + 0x9152) != 0) {
    FUN_00337f30(param_1,temp_v1);
    FUN_00256078(param_1,temp_v1,2,0x36,0);
  }
  return;
}
