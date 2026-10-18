/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023c7e8` (_code @ 0x23c7e8, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_001b1710; /* 0x1b1710 */

/* Supplied declaration required: FUN_002b48dc. */
extern unsigned int FUN_002c0e4c(unsigned int);
extern unsigned int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


void FUN_0023c7e8(unsigned short param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short temp_v2 [6];
  
  temp_v0 = FUN_002c0ec4(0x11,2);
  temp_v1 = FUN_002c0e9c();
  temp_v0 = FUN_002c0e4c(temp_v0);
  temp_v2[0] = param_1;
  FUN_002b48dc(temp_v2,temp_v1,temp_v0,0xc,&LAB_001b1710);
  return;
}
