/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f283c` (_code @ 0x4f283c, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_004f283c_arg0 fn_004f283c_arg0;
struct fn_004f283c_arg0 {
    unsigned char pad_0x0[0x580];
    float field_0x580; /* +0x580 */
    int field_0x584; /* +0x584 */
    int field_0x588; /* +0x588 */
    unsigned char pad_0x58c[0xc];
    float field_0x598; /* +0x598 */
    float field_0x59c; /* +0x59c */
    int field_0x5a0; /* +0x5a0 */
    unsigned char pad_0x5a4[0xc];
    int field_0x5b0; /* +0x5b0 */
    unsigned char pad_0x5b4[0xc];
    int field_0x5c0; /* +0x5c0 */
    unsigned char pad_0x5c4[0x140];
    float field_0x704; /* +0x704 */
    unsigned char pad_0x708[0xc];
    float field_0x714; /* +0x714 */
    unsigned char pad_0x718[0x20];
    float field_0x738; /* +0x738 */
    float field_0x73c; /* +0x73c */
    float field_0x740; /* +0x740 */
    unsigned char pad_0x744[0xc];
    float field_0x750; /* +0x750 */
    float field_0x754; /* +0x754 */
    float field_0x758; /* +0x758 */
};


unsigned int FUN_004f283c(fn_004f283c_arg0 *param_1)

{
  int temp_v0;
  unsigned char temp_v1;
  
  if (param_1->field_0x5c0 == 0x420c0000) {
    temp_v1 = 0;
    if (param_1->field_0x598 == 0.0f) {
      temp_v1 = param_1->field_0x59c == 0.0f;
    }
    if (temp_v1) {
      temp_v1 = 0;
      if (param_1->field_0x5a0 == -0x40800000) {
        temp_v1 = param_1->field_0x580 == 0.0f;
      }
      if ((temp_v1) && (param_1->field_0x584 == 0x40f00000)) {
        temp_v0 = param_1->field_0x588;
        temp_v1 = temp_v0 == 0x42320000;
        if (temp_v1) {
          temp_v0 = param_1->field_0x5b0;
        }
        if (temp_v1 && temp_v0 == 0x42320000) {
          temp_v1 = 0;
          if (param_1->field_0x750 == 0.0f) {
            temp_v1 = param_1->field_0x754 == 0.0f;
          }
          if (temp_v1) {
            temp_v1 = 0;
            if (param_1->field_0x758 == 0.0f) {
              temp_v1 = param_1->field_0x704 == 0.0f;
            }
            if (temp_v1) {
              temp_v1 = 0;
              if (param_1->field_0x714 == 0.0f) {
                temp_v1 = param_1->field_0x738 == 0.0f;
              }
              if (temp_v1) {
                temp_v1 = 0;
                if (param_1->field_0x73c == 0.0f) {
                  temp_v1 = param_1->field_0x740 == 0.0f;
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

} /* extern "C" */
