/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027281c` (_code @ 0x27281c, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0027281c_arg0 fn_0027281c_arg0;
struct fn_0027281c_arg0 {
    unsigned char pad_0x0[0x166];
    unsigned char field_0x166; /* +0x166 */
    unsigned char pad_0x167[0x291];
    int field_0x3f8; /* +0x3f8 */
    int field_0x3fc; /* +0x3fc */
    unsigned char pad_0x400[0x4];
    int field_0x404; /* +0x404 */
};

/* Supplied declaration required: FUN_0019cac4. */
/* Supplied declaration required: FUN_001aba54. */


unsigned int FUN_0027281c(fn_0027281c_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  if (param_1->field_0x3f8 != 0) {
    temp_v2 = 0;
    do {
      temp_v0 = (unsigned int)*(unsigned short *)(param_1->field_0x3f8 + temp_v2 * 2 + 0x34);
      FUN_001aba54();
      if ((temp_v0 != 0) && (*(char *)(temp_v0 + 0x23) == '\x03')) {
        return 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 8);
  }
  if (param_1->field_0x3fc != 0) {
    temp_v2 = 0;
    do {
      temp_v0 = (unsigned int)*(unsigned short *)(param_1->field_0x3fc + temp_v2 * 2 + 0x34);
      FUN_001aba54();
      if ((temp_v0 != 0) && (*(char *)(temp_v0 + 0x23) == '\x03')) {
        return 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 8);
  }
  if (param_1->field_0x404 != 0) {
    temp_v0 = (unsigned int)*(unsigned short *)&param_1->field_0x166;
    FUN_0019cac4();
    temp_v2 = 0;
    do {
      temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + temp_v2 * 2 + 0x50);
      FUN_001aba54();
      if ((temp_v1 != 0) && (*(char *)(temp_v1 + 0x23) == '\x03')) {
        return 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 8);
  }
  return 0;
}
