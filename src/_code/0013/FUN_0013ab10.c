/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013ab10` (_code @ 0x13ab10, 0xe8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

/* Supplied declaration required: FUN_0014702c. */
/* Supplied declaration required: FUN_00147070. */
/* Supplied declaration required: FUN_001470c0. */
/* Supplied declaration required: FUN_00147108. */
/* Supplied declaration required: FUN_0014715c. */
/* Supplied declaration required: FUN_001471c8. */
/* Supplied declaration required: FUN_00147210. */
/* Supplied declaration required: FUN_0014729c. */
/* Supplied declaration required: FUN_002a82c4. */
/* Supplied declaration required: FUN_002a8330. */
/* Supplied declaration required: FUN_002a83a0. */


void FUN_0013ab10(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_002a83a0(&DAT_004e6f64);
  temp_v0 = 0;
  do {
    temp_v1 = (int)(char)temp_v0;
    FUN_002a8330(&DAT_004e6f64,temp_v1);
    FUN_002a82c4(&DAT_004e6f64,temp_v1);
    FUN_0014715c(&DAT_004e6f64,temp_v1,(int)*(char *)(param_1 + temp_v1 + 0x24));
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 2);
  FUN_001471c8(&DAT_004e6f64,*(unsigned char *)(param_1 + 2));
  FUN_001470c0(&DAT_004e6f64,*(unsigned char *)(param_1 + 1));
  FUN_00147108(&DAT_004e6f64,*(unsigned short *)(param_1 + 0x28));
  FUN_0014729c(&DAT_004e6f64,*(unsigned char *)(param_1 + 0x27));
  FUN_00147070(&DAT_004e6f64,*(unsigned short *)(param_1 + 0x2a));
  FUN_00147210(&DAT_004e6f64,*(unsigned short *)(param_1 + 0x32));
  *(unsigned int *)(param_1 + 0x2c) = 0;
  FUN_0014702c(&DAT_004e6f64,*(unsigned char *)(param_1 + 3));
  return;
}
