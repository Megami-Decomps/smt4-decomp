/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a480` (_code @ 0x13a480, 0xe8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

/* Supplied declaration required: FUN_00146f44. */
/* Supplied declaration required: FUN_00146f88. */
/* Supplied declaration required: FUN_00146fd8. */
/* Supplied declaration required: FUN_00147020. */
/* Supplied declaration required: FUN_00147074. */
/* Supplied declaration required: FUN_001470e0. */
/* Supplied declaration required: FUN_00147128. */
/* Supplied declaration required: FUN_001471b4. */
/* Supplied declaration required: FUN_002a8608. */
/* Supplied declaration required: FUN_002a8674. */
/* Supplied declaration required: FUN_002a86e4. */


void FUN_0013a480(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_002a86e4(&DAT_004e6f64);
  temp_v0 = 0;
  do {
    temp_v1 = (int)(char)temp_v0;
    FUN_002a8674(&DAT_004e6f64,temp_v1);
    FUN_002a8608(&DAT_004e6f64,temp_v1);
    FUN_00147074(&DAT_004e6f64,temp_v1,(int)*(char *)(param_1 + temp_v1 + 0x24));
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 2);
  FUN_001470e0(&DAT_004e6f64,*(unsigned char *)(param_1 + 2));
  FUN_00146fd8(&DAT_004e6f64,*(unsigned char *)(param_1 + 1));
  FUN_00147020(&DAT_004e6f64,*(unsigned short *)(param_1 + 0x28));
  FUN_001471b4(&DAT_004e6f64,*(unsigned char *)(param_1 + 0x27));
  FUN_00146f88(&DAT_004e6f64,*(unsigned short *)(param_1 + 0x2a));
  FUN_00147128(&DAT_004e6f64,*(unsigned short *)(param_1 + 0x32));
  *(unsigned int *)(param_1 + 0x2c) = 0;
  FUN_00146f44(&DAT_004e6f64,*(unsigned char *)(param_1 + 3));
  return;
}
