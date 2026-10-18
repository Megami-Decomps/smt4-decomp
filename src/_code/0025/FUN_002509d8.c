/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002509d8` (_code @ 0x2509d8, 0xa8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_00250a84; /* 0x250a84 */
extern int DAT_0043dd50; /* 0x43dd50 */

/* Supplied declaration required: FUN_002bda00. */
/* Supplied declaration required: FUN_002bda10. */
extern unsigned int FUN_002bda1c(unsigned int);
extern unsigned int FUN_002c5e2c(unsigned char *);


void FUN_002509d8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = DAT_0043dd50;
  temp_v1 = FUN_002c5e2c(&LAB_00250a84);
  *(unsigned int *)(temp_v0 + 0x5e4) = temp_v1;
  temp_v1 = FUN_002bda1c(0);
  *(unsigned int *)(temp_v0 + 0x5d4) = temp_v1;
  FUN_002bda10(temp_v1,0x320202ff);
  FUN_002bda00(*(unsigned int *)(temp_v0 + 0x5d4),0,0x646464ff);
  temp_v1 = FUN_002bda1c(0);
  *(unsigned int *)(temp_v0 + 0x5d8) = temp_v1;
  FUN_002bda10(temp_v1,0x323232ff);
  FUN_002bda00(*(unsigned int *)(temp_v0 + 0x5d8),0,0x646464ff);
  temp_v1 = FUN_002bda1c(0);
  *(unsigned int *)(temp_v0 + 0x5dc) = temp_v1;
  FUN_002bda10(temp_v1,0x320202ff);
  FUN_002bda00(*(unsigned int *)(temp_v0 + 0x5dc),0,0x646464ff);
  return;
}
