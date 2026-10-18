/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f81c8` (_code @ 0x2f81c8, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_002f8200; /* 0x2f8200 */

extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */


void FUN_002f81c8(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [12];
  unsigned char temp_v3 [16];
  
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(temp_v2,temp_v0 + 0x58);
  *(unsigned int *)(param_1 + 0x68) = param_2;
  temp_v1 = FUN_002ea3c0(temp_v3,0x10b911,0,&LAB_002f8200);
  FUN_002ea3d0(param_1,temp_v1);
  FUN_002e6e5c(temp_v2);
  return;
}
