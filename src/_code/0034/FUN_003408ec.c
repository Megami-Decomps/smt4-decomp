/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003408ec` (_code @ 0x3408ec, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_00376b84(); /* 0x376b84 */
extern unsigned char DAT_00421ba4; /* 0x421ba4 */

/* Supplied declaration required: FUN_001312cc. */
/* Supplied declaration required: FUN_002ac408. */
/* Supplied declaration required: FUN_002b4d78. */
extern unsigned int FUN_002bb0b4(unsigned int, unsigned int);
extern unsigned int FUN_002bb218(void);
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */
/* Supplied declaration required: FUN_002c68bc. */
extern int FUN_003804c0(unsigned int *);


int FUN_003408ec(unsigned int *param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  
  FUN_002c68bc(param_1 + 8,FUN_00376b84,4,8);
  puVar4 = param_1 + 1;
  *param_1 = (unsigned int)&DAT_00421ba4;
  FUN_002c3aa8(puVar4);
  if (param_1[4] != 0) {
    FUN_002c3aa8(param_1 + 1);
    FUN_002ac408(param_1 + 4);
    FUN_002c3a24(param_1 + 1);
    temp_v0 = FUN_002bb218();
    temp_v1 = FUN_002bb0b4(temp_v0,1);
    FUN_002b4d78(temp_v0,temp_v1);
    FUN_001312cc(param_1 + 4);
    FUN_002c3a24(puVar4);
  }
  else {
    FUN_002c3a24(puVar4);
  }
  param_1[3] = 0xffffffff;
  temp_v2 = FUN_003804c0(param_1 + 4);
  return temp_v2 - 0x10;
}
