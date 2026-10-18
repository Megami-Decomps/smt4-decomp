/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d2ac8` (_code @ 0x1d2ac8, 0xf0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001d2ac8_arg0 fn_001d2ac8_arg0;
struct fn_001d2ac8_arg0 {
    unsigned char pad_0x0[0xce];
    ushort field_0xce; /* +0xce */
    unsigned char pad_0xd0[0x1a8];
    int field_0x278; /* +0x278 */
    int field_0x27c; /* +0x27c */
    unsigned char pad_0x280[0x4];
    int field_0x284; /* +0x284 */
};

/* Supplied declaration required: FUN_002ae164. */
/* Supplied declaration required: FUN_002b9024. */


unsigned int FUN_001d2ac8(fn_001d2ac8_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  if (param_1->field_0x278 != 0) {
    temp_v2 = 0;
    do {
      temp_v0 = (unsigned int)*(unsigned short *)(param_1->field_0x278 + temp_v2 * 2 + 0x34);
      FUN_002ae164();
      if ((temp_v0 != 0) && (*(char *)(temp_v0 + 0x23) == '\x03')) {
        return 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 8);
  }
  if (param_1->field_0x27c != 0) {
    temp_v2 = 0;
    do {
      temp_v0 = (unsigned int)*(unsigned short *)(param_1->field_0x27c + temp_v2 * 2 + 0x34);
      FUN_002ae164();
      if ((temp_v0 != 0) && (*(char *)(temp_v0 + 0x23) == '\x03')) {
        return 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 8);
  }
  if (param_1->field_0x284 != 0) {
    temp_v0 = (unsigned int)param_1->field_0xce;
    FUN_002b9024();
    temp_v2 = 0;
    do {
      temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + temp_v2 * 2 + 0x3c);
      FUN_002ae164();
      if ((temp_v1 != 0) && (*(char *)(temp_v1 + 0x23) == '\x03')) {
        return 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 8);
  }
  return 0;
}
