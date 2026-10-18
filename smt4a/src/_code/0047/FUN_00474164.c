/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00474164` (_code @ 0x474164, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp90; /* 0x90: local_90 */
} param_1_stack;

extern unsigned char LAB_004741d4; /* 0x4741d4 */
extern unsigned char LAB_004741e4; /* 0x4741e4 */
extern unsigned int DAT_0057027c; /* 0x57027c */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_00471fec. */


void FUN_00474164(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0 [128];
  
  FUN_002e6354(temp_v0,0x80);
  *(unsigned int *)(param_1 + 0x38) = 0;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(unsigned int *)(param_1 + 0x40) = 0;
  *(unsigned char *)(param_1 + 0x44) = 0;
  *(unsigned char *)(param_1 + 0x45) = 0;
  FUN_00100388(temp_v0,&LAB_004741e4,param_1 + 0x24,&LAB_004741d4);
  FUN_00471fec(DAT_0057027c,temp_v0,param_1 + 0x48,1,0x80,param_1 + 0x38);
  return;
}
