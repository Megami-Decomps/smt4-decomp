/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00221544` (_code @ 0x221544, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
} param_1_stack;

extern unsigned char LAB_00206bd8; /* 0x206bd8 */

/* Supplied declaration required: FUN_002b48dc. */
extern unsigned int FUN_002c0e4c(unsigned int);
extern unsigned int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


unsigned short * FUN_00221544(unsigned short param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned short temp_v2 [48];
  
  temp_v0 = FUN_002c0ec4(0xc,1);
  temp_v1 = FUN_002c0e9c();
  temp_v0 = FUN_002c0e4c(temp_v0);
  puVar3 = temp_v2;
  temp_v2[0] = param_1;
  FUN_002b48dc(puVar3,temp_v1,temp_v0,0x60,&LAB_00206bd8);
  return puVar3 + 1;
}
