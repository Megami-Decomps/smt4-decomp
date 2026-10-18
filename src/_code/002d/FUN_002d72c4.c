/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d72c4` (_code @ 0x2d72c4, 0x104 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char DAT_00420420; /* 0x420420 */

/* Supplied declaration required: FUN_00294a64. */
extern unsigned int *FUN_00294a98(void);
/* Supplied declaration required: FUN_00294ad8. */
/* Supplied declaration required: FUN_002a0c54. */
extern int FUN_002a0dd4(void);
extern int FUN_002b8adc(void);
/* Supplied declaration required: FUN_002c23f8. */


void FUN_002d72c4(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_002a0dd4();
  if ((temp_v0 != 0) || (temp_v0 = FUN_002b8adc(), temp_v0 != 0)) {
    FUN_00294ad8(200,200,200,0x82,0x82,0x82,0x1e,0x1e,0x1e,0x96,0x96,0x96);
  }
  temp_v0 = 0x100;
  FUN_002c23f8(0x100,param_1);
  puVar2 = (unsigned int *)0x0;
  if (temp_v0 != 0) {
    puVar2 = (unsigned int *)FUN_00294a98();
    *puVar2 = (unsigned int)&DAT_00420420;
  }
  *(unsigned int **)(param_1 + 0x1c) = puVar2;
  FUN_00294a64();
  *(unsigned char *)(param_1 + 0x2c) = 0;
  temp_v0 = FUN_002b8adc();
  if ((temp_v0 == 0) && (temp_v0 = FUN_002a0dd4(), temp_v0 == 0)) {
    *(unsigned char *)(param_1 + 0x2c) = 1;
    FUN_002a0c54(0x2d73e0,0);
    return;
  }
  return;
}
