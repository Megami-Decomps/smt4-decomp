/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ec814` (_code @ 0x3ec814, 0x1a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_003ec814_arg0 fn_003ec814_arg0;
struct fn_003ec814_arg0 {
    unsigned char pad_0x0[0x1ffc];
    void *field_0x1ffc; /* +0x1ffc */
    unsigned char pad_0x2000[0x25a0];
    uint field_0x45a0; /* +0x45a0 */
    uint field_0x45a4; /* +0x45a4 */
};

extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_005739a0; /* 0x5739a0 */
extern unsigned int DAT_005739a4; /* 0x5739a4 */
extern unsigned int DAT_00573ae8; /* 0x573ae8 */
extern unsigned int DAT_00573aec; /* 0x573aec */

extern int FUN_00213b5c(void);
extern int gameDataFlagTestBit(unsigned int);


unsigned char FUN_003ec814(fn_003ec814_arg0 *param_1)

{
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar6;
  unsigned char temp_v5;
  
  temp_v0 = (DAT_00573ae8 & param_1->field_0x45a0) == 0;
  temp_v1 = (param_1->field_0x45a4 & DAT_00573aec) == 0;
  temp_v5 = temp_v0 && temp_v1;
  if (!temp_v0 || !temp_v1) {
    return temp_v5;
  }
  puVar6 = (unsigned int *)param_1->field_0x1ffc;
  if (((((puVar6[1] & DAT_0057397c) == 0 && (*puVar6 & DAT_00573978) == 0) ||
       ((puVar6[1] & DAT_005739a4) != 0 || (DAT_005739a0 & *puVar6) != 0)) ||
      ((int)puVar6[0x96] < 1)) &&
     ((((puVar6[0x102] & DAT_00573978) == 0 && (puVar6[0x103] & DAT_0057397c) == 0 ||
       ((puVar6[0x103] & DAT_005739a4) != 0 || (DAT_005739a0 & puVar6[0x102]) != 0)) ||
      ((int)puVar6[0x198] < 1)))) {
    if ((((puVar6[0x205] & DAT_0057397c) == 0 && (puVar6[0x204] & DAT_00573978) == 0) ||
        ((puVar6[0x205] & DAT_005739a4) != 0 || (DAT_005739a0 & puVar6[0x204]) != 0)) ||
       ((int)puVar6[0x29a] < 1)) {
      if (((!((DAT_00573978 & puVar6[0x306]) == 0 && (DAT_0057397c & puVar6[0x307]) == 0)) &&
          (!((DAT_005739a0 & puVar6[0x306]) != 0 || (DAT_005739a4 & puVar6[0x307]) != 0))) &&
         ((int)puVar6[0x39c] >= 1)) {
        temp_v5 = 0;
      }
    }
    else {
      temp_v5 = 0;
    }
  }
  else {
    temp_v5 = 0;
  }
  temp_v2 = FUN_00213b5c();
  if ((temp_v2 == 4) || (temp_v2 = gameDataFlagTestBit(0x80), temp_v2 != 0)) {
    puVar6 = (unsigned int *)param_1->field_0x1ffc;
    temp_v3 = *puVar6;
    temp_v4 = puVar6[1];
    if ((DAT_0057397c & temp_v4) == 0 && (DAT_00573978 & temp_v3) == 0) {
      temp_v5 = 1;
    }
    if ((temp_v4 & DAT_005739a4) != 0 || (DAT_005739a0 & temp_v3) != 0) {
      temp_v5 = 1;
    }
  }
  return temp_v5;
}

} /* extern "C" */
