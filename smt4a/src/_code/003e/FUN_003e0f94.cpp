/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e0f94` (_code @ 0x3e0f94, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004d7a70(int, int, unsigned int, int);

typedef struct fn_003e0f94_arg1 fn_003e0f94_arg1;
struct fn_003e0f94_arg1 {
    unsigned char pad_0x0[0x13];
    unsigned char field_0x13; /* +0x13 */
    unsigned char pad_0x14[0xf8];
    uint field_0x10c; /* +0x10c */
    uint field_0x110; /* +0x110 */
    unsigned char pad_0x114[0x40];
    int field_0x154; /* +0x154 */
    unsigned char pad_0x158[0x4448];
    uint field_0x45a0; /* +0x45a0 */
    uint field_0x45a4; /* +0x45a4 */
};

extern unsigned int DAT_00573858; /* 0x573858 */
extern unsigned int DAT_0057385c; /* 0x57385c */
extern unsigned int DAT_00573880; /* 0x573880 */
extern unsigned int DAT_00573884; /* 0x573884 */
extern int DAT_00573898; /* 0x573898 */

/* Supplied declaration required: FUN_004d7a70. */


unsigned int FUN_003e0f94(unsigned int param_1,fn_003e0f94_arg1 *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = DAT_00573898;
  FUN_004d7a70(DAT_00573898,0xb,0xffffffff,1);
  if (temp_v0 != 0) {
    temp_v1 = 5;
  }
  else {
    if ((param_2[1].field_0x13 == '\0') &&
       (((param_2->field_0x10c & 0x2000000) != 0 ||
        (((DAT_00573858 & param_2->field_0x45a0) != 0 || (DAT_0057385c & param_2->field_0x45a4) != 0
         && (param_2->field_0x154 == 0)))))) {
      return 1;
    }
    if (param_2->field_0x154 == 1) {
      temp_v1 = 2;
    }
    else if ((param_2->field_0x110 & 0x80) == 0) {
      temp_v1 = 0;
    }
    else if ((DAT_00573884 & param_2->field_0x45a4) == 0 &&
             (param_2->field_0x45a0 & DAT_00573880) == 0) {
      temp_v1 = 3;
    }
    else {
      temp_v1 = 4;
    }
  }
  return temp_v1;
}

} /* extern "C" */
