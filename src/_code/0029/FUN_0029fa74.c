/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029fa74` (_code @ 0x29fa74, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_001f64c4; /* 0x1f64c4 */

/* Supplied declaration required: FUN_002b48dc. */
extern unsigned int FUN_002c0e4c(unsigned int);
extern unsigned int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


void FUN_0029fa74(unsigned short param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short temp_v2 [14];
  
  temp_v0 = FUN_002c0ec4(5,4);
  temp_v1 = FUN_002c0e9c();
  temp_v0 = FUN_002c0e4c(temp_v0);
  temp_v2[0] = param_1;
  FUN_002b48dc(temp_v2,temp_v1,temp_v0,0x1c,&LAB_001f64c4);
  return;
}
