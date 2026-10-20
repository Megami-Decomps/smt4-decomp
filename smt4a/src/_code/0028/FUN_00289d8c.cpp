/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00289d8c` (_code @ 0x289d8c, 0x178 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(...);
int FUN_003fc0b8(...);
int FUN_004ff364(...);

typedef struct fn_00289d8c_arg0 fn_00289d8c_arg0;
struct fn_00289d8c_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    float field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    byte field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x1f];
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    unsigned char pad_0x3c[0x4];
    float field_0x40; /* +0x40 */
    byte field_0x44; /* +0x44 */
};

extern int FUN_00162ea4(void);
/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_003fc0b8. */
extern int FUN_003fce08(unsigned int, unsigned int);
extern int FUN_003fcf5c(unsigned int);
extern unsigned int FUN_00409fe8(int, unsigned int);
/* Supplied declaration required: FUN_004ff364. */


unsigned int FUN_00289d8c(fn_00289d8c_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  float temp_v3;
  
  temp_v0 = FUN_00164a9c();
  temp_v1 = *(int *)(temp_v0 + 4);
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if (temp_v1 != 2) {
        if (temp_v1 != 3) {
          return 0;
        }
        temp_v1 = FUN_003fce08(*(unsigned int *)(temp_v0 + 0x34),1);
        if (temp_v1 == 0) {
          return 0;
        }
        temp_v2 = 0;
      }
      else {
        temp_v1 = FUN_003fcf5c(*(unsigned int *)(temp_v0 + 0x34));
        if (temp_v1 == 0) {
          return 0;
        }
        FUN_003fc0b8(*(unsigned int *)(temp_v0 + 0x34),7);
        temp_v2 = 3;
      }
      *(unsigned int *)(temp_v0 + 4) = temp_v2;
    }
    else {
      temp_v1 = FUN_00162ea4();
      if ((temp_v1 == 0) && (*(int *)(temp_v0 + 0x38) != 0)) {
        temp_v2 = FUN_00409fe8(*(int *)(temp_v0 + 0x38),1);
        *(unsigned int *)(temp_v0 + 4) = 2;
        *(unsigned int *)(temp_v0 + 0x34) = temp_v2;
      }
    }
  }
  else {
    if ((*(int *)(temp_v0 + 0x34) != 0) && (*(char *)(temp_v0 + 0x44) != '\0')) {
      temp_v3 = *(float *)(temp_v0 + 0x40) + 2.0f;
      *(float *)(temp_v0 + 0x40) = temp_v3;
      FUN_004ff364(*(int *)(temp_v0 + 0x34),0);
      if (temp_v3 <= *(float *)(temp_v0 + 0x40)) {
        *(float *)(temp_v0 + 0x40) = *(float *)(temp_v0 + 0x40) - temp_v3;
      }
    }
    if (*(float *)(temp_v0 + 0x10) != 0.0f) {
      temp_v3 = *(float *)(temp_v0 + 0xc) + *(float *)(temp_v0 + 0x10);
      *(float *)(temp_v0 + 0xc) = temp_v3;
      if (0.0f > temp_v3) {
        *(unsigned int *)(temp_v0 + 0xc) = 0;
        *(unsigned int *)(temp_v0 + 0x10) = 0;
        if (*(char *)(temp_v0 + 0x14) != '\0') {
          FUN_001631d0(param_1,0);
        }
      }
      else if ((int)temp_v3 >= 0x3f800001) {
        *(unsigned int *)(temp_v0 + 0xc) = 0x3f800000;
        *(unsigned int *)(temp_v0 + 0x10) = 0;
      }
    }
  }
  return 0;
}

} /* extern "C" */
