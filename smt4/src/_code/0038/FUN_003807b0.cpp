/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003807b0` (_code @ 0x3807b0, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b4f40(int, int);
int FUN_002b4f64(int, int);
int FUN_002bda30(int, int);

/* Supplied declaration required: FUN_002b4f40. */
/* Supplied declaration required: FUN_002b4f64. */
extern int FUN_002baed8(void);
/* Supplied declaration required: FUN_002bda30. */


void FUN_003807b0(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  if (*(char *)(param_1 + 0x45c) != '\x02') {
    if (*(char *)(param_1 + 0x45c) != '\x04') {
      return;
    }
    FUN_002bda30(param_1,0);
    temp_v0 = 0;
  }
  else {
    temp_v3 = *(unsigned int *)(param_1 + 0x450);
    temp_v4 = *(unsigned int *)(param_1 + 0x454);
    temp_v1 = FUN_002baed8();
    temp_v2 = temp_v1;
    FUN_002b4f64(temp_v1,10);
    *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v1 + 0x184);
    *(unsigned char *)(temp_v2 + 4) = 0x25;
    *(int *)(temp_v2 + 0x10) = param_1 + 0xf4;
    *(unsigned int *)(temp_v2 + 0x14) = temp_v3;
    *(unsigned int *)(temp_v2 + 0x18) = temp_v4;
    *(unsigned int *)(temp_v2 + 0x1c) = *(unsigned int *)(param_1 + 0x43c);
    *(unsigned int *)(temp_v2 + 0x20) = (unsigned int)*(unsigned char *)(param_1 + 0x440);
    *(unsigned int *)(temp_v2 + 0x24) = *(unsigned int *)(param_1 + 0x444);
    FUN_002b4f40(temp_v1,temp_v2);
    *(unsigned int *)(param_1 + 0x450) = temp_v3;
    *(unsigned int *)(param_1 + 0x454) = temp_v4;
    *(unsigned char *)(param_1 + 0x45e) = 1;
    temp_v0 = 3;
  }
  *(unsigned char *)(param_1 + 0x45c) = temp_v0;
  return;
}

} /* extern "C" */
