/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d700c` (_code @ 0x3d700c, 0xf4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003d700c_arg0 fn_003d700c_arg0;
struct fn_003d700c_arg0 {
    unsigned char pad_0x0[0x568];
    float field_0x568; /* +0x568 */
    int field_0x56c; /* +0x56c */
    int field_0x570; /* +0x570 */
    unsigned char pad_0x574[0xc];
    float field_0x580; /* +0x580 */
    float field_0x584; /* +0x584 */
    int field_0x588; /* +0x588 */
    unsigned char pad_0x58c[0xc];
    int field_0x598; /* +0x598 */
    unsigned char pad_0x59c[0xc];
    int field_0x5a8; /* +0x5a8 */
    unsigned char pad_0x5ac[0xec];
    float field_0x698; /* +0x698 */
    unsigned char pad_0x69c[0xc];
    float field_0x6a8; /* +0x6a8 */
    unsigned char pad_0x6ac[0x20];
    float field_0x6cc; /* +0x6cc */
    float field_0x6d0; /* +0x6d0 */
    float field_0x6d4; /* +0x6d4 */
    unsigned char pad_0x6d8[0xc];
    float field_0x6e4; /* +0x6e4 */
    float field_0x6e8; /* +0x6e8 */
    float field_0x6ec; /* +0x6ec */
};


unsigned int FUN_003d700c(fn_003d700c_arg0 *param_1)

{
  int temp_v0;
  unsigned char temp_v1;
  
  if (param_1->field_0x5a8 == 0x420c0000) {
    temp_v1 = 0;
    if (param_1->field_0x580 == 0.0f) {
      temp_v1 = param_1->field_0x584 == 0.0f;
    }
    if (temp_v1) {
      temp_v1 = 0;
      if (param_1->field_0x588 == -0x40800000) {
        temp_v1 = param_1->field_0x568 == 0.0f;
      }
      if ((temp_v1) && (param_1->field_0x56c == 0x40c9999a)) {
        temp_v0 = param_1->field_0x570;
        temp_v1 = temp_v0 == 0x42320000;
        if (temp_v1) {
          temp_v0 = param_1->field_0x598;
        }
        if (temp_v1 && temp_v0 == 0x42320000) {
          temp_v1 = 0;
          if (param_1->field_0x6e4 == 0.0f) {
            temp_v1 = param_1->field_0x6e8 == 0.0f;
          }
          if (temp_v1) {
            temp_v1 = 0;
            if (param_1->field_0x6ec == 0.0f) {
              temp_v1 = param_1->field_0x698 == 0.0f;
            }
            if (temp_v1) {
              temp_v1 = 0;
              if (param_1->field_0x6a8 == 0.0f) {
                temp_v1 = param_1->field_0x6cc == 0.0f;
              }
              if (temp_v1) {
                temp_v1 = 0;
                if (param_1->field_0x6d0 == 0.0f) {
                  temp_v1 = param_1->field_0x6d4 == 0.0f;
                }
                if (temp_v1) {
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
