/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d25ec` (_code @ 0x1d25ec, 0x1e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_001d25ec(unsigned int *param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v1 = *param_1;
  temp_v2 = temp_v1;
  if (temp_v1 != 0) {
    temp_v3 = *param_1;
    temp_v0 = (temp_v3 & 0x3fc00) >> 10;
    if (temp_v0 != 0x28) {
      if (temp_v0 < 0x29) {
        if (temp_v0 != 0x11) {
          temp_v2 = temp_v3;
          if (temp_v0 == 0x20) {
            if (temp_v1 == 0xc8a08035) {
              temp_v1 = 0xc8613916;
            }
            return temp_v1;
          }
        }
        else {
          if ((((temp_v1 & 0x3fc00) != 0x4400) || ((temp_v1 & 0x3ff) < 0x104)) ||
             ((temp_v1 & 0x3ff) >= 0x118)) {
            return 0xc9413915;
          }
          temp_v2 = 0xc8a13909;
        }
      }
      else if ((temp_v0 != 0x2e) && (temp_v2 = temp_v3, temp_v0 == 0x34)) {
        if (((temp_v1 & 0x3fc00) == 0xd000) && (((temp_v1 & 0x3ff) >= 100 && ((temp_v1 & 0x3ff) < 300)))) {
          temp_v4 = temp_v1 + 0x36df2f6b;
          if (temp_v1 == 0xc920d095) {
            return 0xc941390d;
          }
          if ((int)temp_v1 < -0x36df2f6a) {
            if (temp_v4 == -0x22) {
              return 0xc941390a;
            }
            if (temp_v4 < -0x21) {
              if (temp_v4 == -0xc0002c) {
                return 0xc8613914;
              }
              if (temp_v4 == -0xc00027) {
                return 0xc8613913;
              }
              if (temp_v4 == -0x200020) {
                return 0xc8a13905;
              }
            }
            else {
              if (temp_v4 == -0xf) {
                return 0xc941390c;
              }
              if (temp_v4 == -9) {
                return 0xc941390e;
              }
              if (temp_v4 == -6) {
                return 0xc941390b;
              }
            }
          }
          else {
            if (temp_v1 == 0xe0a0d0a9) {
              return 0xc94138c2;
            }
            if ((int)temp_v1 < -0x1f5f2f56) {
              if (temp_v1 == 0xc920d0a4) {
                return 0xc941390f;
              }
              if (temp_v1 == 0xc920d0a7) {
                return 0xc9413910;
              }
              if (temp_v1 == 0xc920d0a8) {
                return 0xc9413940;
              }
            }
            else {
              if (temp_v1 == 0xe0c0d066) {
                return 0xe0c13897;
              }
              if (temp_v1 == 0xe0e0d068) {
                return 0xe0e1388f;
              }
            }
          }
        }
        if (temp_v1 == 0xc8a0d018) {
          temp_v2 = 0xc9413917;
        }
        else if (temp_v1 == 0xd860d020) {
          temp_v2 = 0xd861388e;
        }
        else {
          if (temp_v1 != 0xd860d024) {
            if (temp_v1 == 0xd880d023) {
              temp_v1 = 0xd8813896;
            }
            return temp_v1;
          }
          temp_v2 = 0xd861389a;
        }
      }
    }
  }
  return temp_v2;
}
