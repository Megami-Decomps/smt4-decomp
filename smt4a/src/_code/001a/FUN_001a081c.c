/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a081c` (_code @ 0x1a081c, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001a081c_arg0 fn_001a081c_arg0;
struct fn_001a081c_arg0 {
    unsigned char pad_0x0[0x1c];
    undefined1 field_0x1c; /* +0x1c */
    unsigned char pad_0x1d[0x3];
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    undefined4 field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    unsigned char pad_0x3c[0x1c];
    undefined1 field_0x58; /* +0x58 */
    unsigned char pad_0x59[0x3];
    undefined4 field_0x5c; /* +0x5c */
    unsigned char pad_0x60[0x1c];
    undefined1 field_0x7c; /* +0x7c */
    undefined1 field_0x7d; /* +0x7d */
    unsigned char pad_0x7e[0x2];
    undefined4 field_0x80; /* +0x80 */
    unsigned char pad_0x84[0x1c];
    undefined1 field_0xa0; /* +0xa0 */
    undefined1 field_0xa1; /* +0xa1 */
    unsigned char pad_0xa2[0x2];
    undefined4 field_0xa4; /* +0xa4 */
};

/* Supplied declaration required: FUN_001af0f4. */


int FUN_001a081c(fn_001a081c_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_001af0f4();
  *(unsigned char *)(temp_v0 + 0x1c) = 5;
  *(unsigned int *)(temp_v0 + 0x20) = 0;
  *(unsigned int *)(temp_v0 + 0x24) = 0;
  *(unsigned int *)(temp_v0 + 0x28) = 0;
  *(unsigned int *)(temp_v0 + 0x2c) = 0;
  *(unsigned int *)(temp_v0 + 0x30) = 0;
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  *(fn_001a081c_arg0 **)(temp_v0 + 0x38) = param_1;
  temp_v1 = FUN_001af0f4(temp_v0 + 0x3c);
  *(unsigned char *)(temp_v1 + 0x1c) = 0;
  *(int *)(temp_v1 + 0x20) = temp_v0;
  temp_v0 = FUN_001af0f4(temp_v1 + 0x24);
  *(unsigned char *)(temp_v0 + 0x1c) = 0;
  *(unsigned char *)(temp_v0 + 0x1d) = 0;
  *(int *)(temp_v0 + 0x20) = temp_v1 - 0x3c;
  temp_v1 = FUN_001af0f4(temp_v0 + 0x24);
  *(unsigned char *)(temp_v1 + 0x1c) = 0;
  *(unsigned char *)(temp_v1 + 0x1d) = 0;
  *(int *)(temp_v1 + 0x20) = temp_v0 - 0x60;
  return temp_v1 - 0x84;
}
