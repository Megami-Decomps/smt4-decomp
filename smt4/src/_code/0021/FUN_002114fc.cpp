/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002114fc` (_code @ 0x2114fc, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026b9bc(void);
int FUN_0028a368(int);
int FUN_0028a924(int, int, unsigned int);
int FUN_002b8838(int);
int FUN_002f5c08(void);
int FUN_00310678(void);

typedef struct fn_002114fc_arg0 fn_002114fc_arg0;
struct fn_002114fc_arg0 {
    unsigned char pad_0x0[0xd2c];
    undefined4 field_0xd2c; /* +0xd2c */
    unsigned char pad_0xd30[0x4];
    undefined4 field_0xd34; /* +0xd34 */
    unsigned char pad_0xd38[0x28];
    undefined1 field_0xd60; /* +0xd60 */
};

extern unsigned char FUN_002595bc(void);
/* Supplied declaration required: FUN_0026b9bc. */
/* Supplied declaration required: FUN_0028a368. */
/* Supplied declaration required: FUN_0028a924. */
/* Supplied declaration required: FUN_002b8838. */
extern int FUN_002ccc10(void);
extern int FUN_002d7460(void);
/* Supplied declaration required: FUN_002f5c08. */
/* Supplied declaration required: FUN_00310678. */


unsigned int FUN_002114fc(fn_002114fc_arg0 *param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0;
  temp_v1 = FUN_002ccc10();
  if (temp_v1 != 0) {
    temp_v1 = FUN_002d7460();
    if (temp_v1 != 0) {
      FUN_00310678();
      FUN_002b8838(3);
      param_1->field_0xd34 = 0;
      param_1->field_0xd2c = 6;
      FUN_0026b9bc();
      FUN_0028a924(1,0,0xffffffff);
      FUN_0028a368(1);
      temp_v0 = FUN_002595bc();
      temp_v2 = 2;
      param_1->field_0xd60 = temp_v0;
    }
  }
  else {
    FUN_002f5c08();
  }
  return temp_v2;
}

} /* extern "C" */
