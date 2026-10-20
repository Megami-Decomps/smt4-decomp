/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a2ee0` (_code @ 0x4a2ee0, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163aa4(int);
int FUN_002c8538(int);
int FUN_0033449c(int);
int FUN_004935b0(int, unsigned int, unsigned int);

/* Supplied declaration required: FUN_00163aa4. */
extern unsigned int vec2GetXInt(int);
extern unsigned int vec2GetYInt(int);
extern int FUN_0026c3a0(void);
/* Supplied declaration required: FUN_002c8538. */
extern int FUN_002e19f8(void);
/* Supplied declaration required: FUN_0033449c. */
/* Supplied declaration required: FUN_004935b0. */
extern int FUN_004a6d44(int);


void FUN_004a2ee0(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = param_1 + 0x5e8;
  *(unsigned short *)(param_1 + 0xa874) = 9;
  FUN_00163aa4(temp_v2);
  temp_v0 = vec2GetYInt(temp_v2);
  temp_v1 = vec2GetXInt(temp_v2);
  FUN_004935b0(param_1 + 200,temp_v1,temp_v0);
  temp_v2 = FUN_0026c3a0();
  if ((((temp_v2 != 0) && (*(char *)(param_1 + 0x672) != '\0')) &&
      (temp_v2 = FUN_002e19f8(), temp_v2 != 0)) && (temp_v2 = FUN_004a6d44(param_1 + 0x96), temp_v2 == 0)) {
    FUN_002c8538(0);
    FUN_0033449c(0);
    *(unsigned int *)(param_1 + 0x14) = 0xe;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}

} /* extern "C" */
