/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a611c` (_code @ 0x3a611c, 0x15c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int FUN_00275bc8(void);
int FUN_00275f44(int, int);
int FUN_0035b084(void);

typedef struct fn_003a611c_arg0 fn_003a611c_arg0;
struct fn_003a611c_arg0 {
    unsigned char pad_0x0[0x350];
    int field_0x350; /* +0x350 */
    int field_0x354; /* +0x354 */
    unsigned char pad_0x358[0x8];
    int field_0x360; /* +0x360 */
    unsigned char pad_0x364[0x4c];
    undefined4 field_0x3b0; /* +0x3b0 */
    unsigned char pad_0x3b4[0x8];
    int field_0x3bc; /* +0x3bc */
    unsigned char pad_0x3c0[0x20];
    int field_0x3e0; /* +0x3e0 */
    unsigned char pad_0x3e4[0x3f1];
    byte field_0x7d5; /* +0x7d5 */
};

/* Supplied declaration required: sysPlaySe. */
extern int FUN_00224880(int);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_0035b084. */


unsigned int FUN_003a611c(fn_003a611c_arg0 *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0;
  if (param_1->field_0x3bc != 0) {
    if ((param_1->field_0x3bc == 2) && (temp_v1 = FUN_00224880(param_1->field_0x360), temp_v1 == 2)) {
      param_1->field_0x3b0 = 9;
      temp_v2 = 3;
      param_1->field_0x3bc = 0;
    }
  }
  else {
    temp_v1 = param_1->field_0x350;
    if ((temp_v1 != 0) && (param_1->field_0x354 != 0)) {
      FUN_00275bc8();
      temp_v0 = param_1->field_0x3e0;
      param_1->field_0x360 = temp_v1;
      if (temp_v0 != 1) {
        if (temp_v0 != 2) {
          if (temp_v0 != 5) {
            if (temp_v0 != 6) {
              if (temp_v0 != 3) {
                FUN_00275f44(temp_v1,0x1c);
              }
              else {
                FUN_00275f44(temp_v1,0x1b);
              }
            }
            else {
              FUN_00275f44(temp_v1,0x25);
            }
          }
          else {
            FUN_00275f44(temp_v1,0x1d);
          }
        }
        else {
          FUN_00275f44(temp_v1,0x1a);
        }
      }
      else {
        FUN_00275f44(temp_v1,0x19);
      }
      sysPlaySe(0x3e);
      if ((param_1->field_0x3e0 == 1 || param_1->field_0x3e0 == 2) && (param_1->field_0x7d5 == 0)) {
        FUN_0035b084();
      }
      param_1->field_0x3bc = 2;
    }
  }
  return temp_v2;
}

} /* extern "C" */
