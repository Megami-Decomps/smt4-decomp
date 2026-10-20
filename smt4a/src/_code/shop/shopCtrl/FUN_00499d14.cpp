/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00499d14` (_code @ 0x499d14, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00178b04(int, unsigned char *, int);
int FUN_00284f90(int);
int FUN_002c7ce8(int);
int FUN_002c7e6c(void);
int FUN_002c85b0(unsigned int);
int FUN_0033449c(int);
int FUN_00345718(void);
int FUN_003720a0(unsigned int, int);
int FUN_00372100(unsigned int, int);
int FUN_0040aa6c(void);

typedef struct fn_00499d14_arg0 fn_00499d14_arg0;
struct fn_00499d14_arg0 {
    unsigned char pad_0x0[0x14];
    int field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x15fec];
    undefined4 field_0x16004; /* +0x16004 */
    undefined4 field_0x16008; /* +0x16008 */
    unsigned char pad_0x1600c[0x1c];
    int field_0x16028; /* +0x16028 */
};

extern unsigned char LAB_00499dbc; /* 0x499dbc */

/* Supplied declaration required: FUN_00178b04. */
extern unsigned int gameGetPlayerData(void);
/* Supplied declaration required: FUN_00284f90. */
/* Supplied declaration required: FUN_002c7ce8. */
/* Supplied declaration required: FUN_002c7e6c. */
/* Supplied declaration required: FUN_002c85b0. */
/* Supplied declaration required: FUN_0033449c. */
/* Supplied declaration required: FUN_00345718. */
/* Supplied declaration required: FUN_003720a0. */
/* Supplied declaration required: FUN_00372100. */
/* Supplied declaration required: FUN_0040aa6c. */
extern int FUN_0040ac08(void);


void FUN_00499d14(fn_00499d14_arg0 *param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  FUN_002c7e6c();
  if (param_1->field_0x14 == 1) {
    temp_v0 = 3;
  }
  else {
    temp_v0 = 8;
  }
  FUN_002c85b0(temp_v0);
  FUN_002c7ce8(0);
  temp_v0 = gameGetPlayerData();
  FUN_0033449c(1);
  FUN_003720a0(temp_v0,0);
  FUN_00372100(temp_v0,0);
  param_1->field_0x16004 = 1;
  FUN_00345718();
  FUN_00284f90(0);
  if (param_1->field_0x16028 == 0) {
    temp_v1 = 0x20;
    FUN_00178b04(0x20,&LAB_00499dbc,0x7cd);
    temp_v2 = 0;
    if (temp_v1 != 0) {
      temp_v2 = FUN_0040ac08();
    }
    param_1->field_0x16028 = temp_v2;
    FUN_0040aa6c();
  }
  param_1->field_0x16008 = 0;
  return;
}

} /* extern "C" */
