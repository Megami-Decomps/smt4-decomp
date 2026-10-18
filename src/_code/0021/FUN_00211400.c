/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00211400` (_code @ 0x211400, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00211400_arg0 fn_00211400_arg0;
struct fn_00211400_arg0 {
    unsigned char pad_0x0[0xd2c];
    undefined4 field_0xd2c; /* +0xd2c */
    unsigned char pad_0xd30[0x4];
    undefined4 field_0xd34; /* +0xd34 */
    unsigned char pad_0xd38[0x28];
    undefined1 field_0xd60; /* +0xd60 */
};

extern unsigned char FUN_002597f4(void);
/* Supplied declaration required: FUN_0026bc28. */
/* Supplied declaration required: FUN_0028a5d0. */
/* Supplied declaration required: FUN_0028ab8c. */
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002ccb60(void);
extern int FUN_002d73f4(void);
/* Supplied declaration required: FUN_002f5bc0. */
/* Supplied declaration required: FUN_003106dc. */


unsigned int FUN_00211400(fn_00211400_arg0 *param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0;
  temp_v1 = FUN_002ccb60();
  if (temp_v1 != 0) {
    temp_v1 = FUN_002d73f4();
    if (temp_v1 != 0) {
      FUN_003106dc();
      FUN_002b8b78(3);
      param_1->field_0xd34 = 0;
      param_1->field_0xd2c = 6;
      FUN_0026bc28();
      FUN_0028ab8c(1,0,0xffffffff);
      FUN_0028a5d0(1);
      temp_v0 = FUN_002597f4();
      temp_v2 = 2;
      param_1->field_0xd60 = temp_v0;
    }
  }
  else {
    FUN_002f5bc0();
  }
  return temp_v2;
}
