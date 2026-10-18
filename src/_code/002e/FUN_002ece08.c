/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ece08` (_code @ 0x2ece08, 0x184 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002ece08_arg0 fn_002ece08_arg0;
struct fn_002ece08_arg0 {
    unsigned char pad_0x0[0xcf4];
    int field_0xcf4; /* +0xcf4 */
    int field_0xcf8; /* +0xcf8 */
    unsigned char pad_0xcfc[0x8];
    int field_0xd04; /* +0xd04 */
    unsigned char pad_0xd08[0x24];
    undefined4 field_0xd2c; /* +0xd2c */
    unsigned char pad_0xd30[0x8];
    int field_0xd38; /* +0xd38 */
    unsigned char pad_0xd3c[0x20];
    undefined4 field_0xd5c; /* +0xd5c */
};

extern int FUN_0019dfbc(int);
/* Supplied declaration required: FUN_001a06d4. */
/* Supplied declaration required: FUN_001a9f2c. */
/* Supplied declaration required: FUN_00254840. */
/* Supplied declaration required: FUN_0025485c. */
/* Supplied declaration required: FUN_00263194. */
/* Supplied declaration required: FUN_0026bc28. */
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002972f8. */
extern int FUN_0029ee4c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002a89e4. */
extern int FUN_002a8a08(void);
/* Supplied declaration required: FUN_002b8b78. */


unsigned int FUN_002ece08(fn_002ece08_arg0 *param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = param_1->field_0xd38;
  temp_v4 = 0;
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if ((temp_v0 == 2) && (temp_v0 = FUN_0019dfbc(param_1->field_0xd04), temp_v0 == 2)) {
        param_1->field_0xd2c = 0xf;
        temp_v4 = 2;
        param_1->field_0xd38 = 0;
      }
    }
    else {
      temp_v0 = FUN_0019dfbc(param_1->field_0xd04);
      if (temp_v0 == 2) {
        temp_v0 = FUN_002a8a08();
        temp_v3 = 0;
        do {
          if (-1 < *(char *)(temp_v0 + temp_v3 + 0x90f0)) {
            temp_v1 = FUN_002a89e4();
            temp_v2 = FUN_0029ee4c(temp_v1,2);
            if (temp_v2 != 0) {
              temp_v1 = FUN_002a89e4((int)*(char *)(temp_v0 + temp_v3 + 0x90f0));
              FUN_00263194(temp_v1,4);
            }
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 0x18);
        FUN_00254840(0);
        FUN_0026bc28();
        FUN_002971e4(param_1->field_0xd04,0x1e);
        param_1->field_0xd38 = param_1->field_0xd38 + 1;
      }
    }
  }
  else {
    temp_v0 = param_1->field_0xcf4;
    if ((temp_v0 != 0) && (param_1->field_0xcf8 != 0)) {
      FUN_002972f8();
      param_1->field_0xd04 = temp_v0;
      FUN_002971e4();
      FUN_002b8b78(0x3c);
      FUN_001a06d4();
      FUN_0025485c();
      FUN_001a9f2c();
      FUN_00254840(0);
      param_1->field_0xd38 = param_1->field_0xd38 + 1;
    }
  }
  return temp_v4;
}
