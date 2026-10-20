/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036cfb0` (_code @ 0x36cfb0, 0x17c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001681cc(int);
int FUN_001ab854(...);
int FUN_00227880(void);
int FUN_00237680(void);
int FUN_00275bc8(void);
int FUN_00275f44(...);
int FUN_002a6480(int);
int FUN_0031d890(void);
int FUN_0035b084(void);
int FUN_004bd400(unsigned int, int);

typedef struct fn_0036cfb0_arg0 fn_0036cfb0_arg0;
struct fn_0036cfb0_arg0 {
    unsigned char pad_0x0[0xe4];
    int field_0xe4; /* +0xe4 */
    int field_0xe8; /* +0xe8 */
    unsigned char pad_0xec[0x8];
    int field_0xf4; /* +0xf4 */
    unsigned char pad_0xf8[0x4c];
    undefined4 field_0x144; /* +0x144 */
    unsigned char pad_0x148[0x8];
    int field_0x150; /* +0x150 */
    unsigned char pad_0x154[0x14];
    undefined4 field_0x168; /* +0x168 */
};

/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_001ab854. */
extern int FUN_001ab888(void);
extern int FUN_00224880(int);
/* Supplied declaration required: FUN_00227880. */
/* Supplied declaration required: FUN_00237680. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_002a6480. */
/* Supplied declaration required: FUN_0031d890. */
/* Supplied declaration required: FUN_0035b084. */
extern int FUN_004bd340(unsigned int, unsigned int);
/* Supplied declaration required: FUN_004bd400. */


unsigned int FUN_0036cfb0(fn_0036cfb0_arg0 *param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v4 = 0;
  temp_v0 = param_1->field_0x150;
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if ((temp_v0 == 2) && (temp_v0 = FUN_00224880(param_1->field_0xf4), temp_v0 == 2)) {
        param_1->field_0x144 = 0xc;
        temp_v4 = 3;
        param_1->field_0x150 = 0;
      }
    }
    else {
      temp_v0 = FUN_00224880(param_1->field_0xf4);
      if (temp_v0 == 2) {
        temp_v0 = FUN_001ab888();
        temp_v3 = 0;
        do {
          if (-1 < *(char *)(temp_v0 + temp_v3 + 0x1c88)) {
            temp_v1 = FUN_001ab854();
            temp_v2 = FUN_004bd340(temp_v1,2);
            if (temp_v2 != 0) {
              temp_v1 = FUN_001ab854((int)*(char *)(temp_v0 + temp_v3 + 0x1c88));
              FUN_004bd400(temp_v1,4);
            }
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 0x18);
        FUN_002a6480(0);
        FUN_0031d890();
        FUN_00275f44(param_1->field_0xf4,0x1e);
        param_1->field_0x150 = param_1->field_0x150 + 1;
      }
    }
  }
  else {
    temp_v0 = param_1->field_0xe4;
    if ((temp_v0 != 0) && (param_1->field_0xe8 != 0)) {
      FUN_00275bc8();
      param_1->field_0xf4 = temp_v0;
      FUN_00275f44();
      FUN_001681cc(0x3e);
      FUN_00227880();
      FUN_0035b084();
      FUN_00237680();
      FUN_002a6480(0);
      param_1->field_0x150 = param_1->field_0x150 + 1;
    }
  }
  return temp_v4;
}

} /* extern "C" */
