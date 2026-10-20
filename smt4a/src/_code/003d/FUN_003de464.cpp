/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003de464` (_code @ 0x3de464, 0x2d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ad9b4(void);

typedef struct fn_003de464_arg0 fn_003de464_arg0;
struct fn_003de464_arg0 {
    unsigned char pad_0x0[0x2];
    byte field_0x2; /* +0x2 */
    unsigned char pad_0x3[0x3];
    byte field_0x6; /* +0x6 */
    byte field_0x7; /* +0x7 */
    unsigned char pad_0x8[0xf8];
    ushort field_0x100; /* +0x100 */
    unsigned char pad_0x102[0x6];
    ushort field_0x108; /* +0x108 */
    unsigned char pad_0x10a[0x6];
    ushort field_0x110; /* +0x110 */
    unsigned char pad_0x112[0x6];
    ushort field_0x118; /* +0x118 */
};

extern int gameFlagBlockGetEntry(void);
/* Supplied declaration required: FUN_001ad9b4. */


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_003de464(fn_003de464_arg0 *param_1,unsigned char param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  char temp_v3;
  
  temp_v2 = gameFlagBlockGetEntry();
  FUN_001ad9b4();
  if (param_1 != (fn_003de464_arg0 *)0x0) {
    if (((*(unsigned char *)(temp_v2 + 2) & param_2) == 0) && ((param_1->field_0x7 & 0x10) != 0)) {
      return 0x11;
    }
    if ((param_1->field_0x7 & 8) != 0) {
      return 0xffffffff;
    }
    temp_v1 = param_1->field_0x100;
    temp_v0 = param_1->field_0x6;
    temp_v3 = temp_v1 != 0;
    if (param_1->field_0x108 != 0) {
      temp_v3 = temp_v3 + '\x01';
    }
    if (param_1->field_0x110 != 0) {
      temp_v3 = temp_v3 + '\x01';
    }
    if (param_1->field_0x118 != 0) {
      temp_v3 = temp_v3 + '\x01';
    }
    if (temp_v0 != 3) {
      if (temp_v0 >= 3) {
        if (temp_v0 != 7) {
          if (temp_v0 == 10 && temp_v1 == 8) {
            return 0x42;
          }
          return 0xffffffff;
        }
        if (temp_v3 == '\x01') {
          return 0x34;
        }
        if (temp_v3 != '\x02') {
          if (temp_v3 == '\x03') {
            return 0x36;
          }
          if (temp_v3 == '\x04') {
            return 0x37;
          }
          return 0xffffffff;
        }
        return 0x35;
      }
      if (temp_v0 != 0) {
        if (temp_v0 != 1) {
          return 0xffffffff;
        }
        if (temp_v3 == '\x01') {
          return 0x16;
        }
        if (temp_v3 == '\x02') {
          return 0x17;
        }
        if (temp_v3 != '\x03') {
          if (temp_v3 == '\x04') {
            return 0x19;
          }
          return 0xffffffff;
        }
        return 0x18;
      }
      if ((temp_v1 == 1) || (temp_v1 == 7)) {
        if (temp_v3 == '\x01') {
          return 0x12;
        }
        if (temp_v3 == '\x02') {
          return 0x13;
        }
        if (temp_v3 == '\x03') {
          return 0x14;
        }
        if (temp_v3 == '\x04') {
          return 0x15;
        }
        return 0xffffffff;
      }
      if (temp_v1 == 2) {
        if (temp_v3 == '\x01') {
          return 0x2e;
        }
        if (temp_v3 == '\x02') {
          return 0x2f;
        }
        if (temp_v3 == '\x03') {
          return 0x30;
        }
        if (temp_v3 == '\x04') {
          return 0x31;
        }
        return 0xffffffff;
      }
    }
    else {
      if ((temp_v1 == 1) || (temp_v1 == 7)) {
        if (temp_v3 == '\x01') {
          return 0x1a;
        }
        if (temp_v3 == '\x02') {
          return 0x1b;
        }
        if (temp_v3 == '\x03') {
          return 0x1c;
        }
        if (temp_v3 == '\x04') {
          return 0x1d;
        }
        return 0xffffffff;
      }
      if (temp_v1 == 2) {
        if (temp_v3 == '\x01') {
          return 0x1e;
        }
        if (temp_v3 == '\x02') {
          return 0x1f;
        }
        if (temp_v3 == '\x03') {
          return 0x20;
        }
        if (temp_v3 == '\x04') {
          return 0x21;
        }
        return 0xffffffff;
      }
    }
    if (temp_v1 == 6) {
      return 0x29;
    }
    if (temp_v1 == 5) {
      if (temp_v3 == '\x01') {
        return 0x2a;
      }
      if (temp_v3 == '\x02') {
        return 0x2b;
      }
      if (temp_v3 == '\x03') {
        return 0x2c;
      }
      if (temp_v3 == '\x04') {
        return 0x2d;
      }
    }
  }
  return 0xffffffff;
}

} /* extern "C" */
