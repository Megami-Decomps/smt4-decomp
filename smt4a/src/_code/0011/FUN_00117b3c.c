/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00117b3c` (_code @ 0x117b3c, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00559ee4; /* 0x559ee4 */

/* Supplied declaration required: FUN_0012cfde. */
extern unsigned int FUN_002e9e80(unsigned char *);
/* Supplied declaration required: FUN_002e9f64. */
extern int FUN_002ea0e4(unsigned int *);
extern int FUN_00302f28(int);
extern int FUN_003038fc(int, unsigned int);
extern int FUN_00303928(int, unsigned int, unsigned int);
extern int FUN_0030395c(int, unsigned int);


int FUN_00117b3c(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [12];
  unsigned char temp_v3 [12];
  
  *param_1 = (unsigned int)&DAT_00559ee4;
  *(unsigned char *)(param_1 + 1) = 0;
  temp_v0 = FUN_002ea0e4(param_1 + 6);
  temp_v0 = FUN_003038fc(temp_v0 + 0xc,0);
  temp_v1 = FUN_002e9e80(temp_v2);
  temp_v0 = FUN_00303928(temp_v0 + 0x20,3,temp_v1);
  FUN_002e9f64(temp_v2);
  temp_v1 = FUN_002e9e80(temp_v3);
  temp_v0 = FUN_00303928(temp_v0 + 0x14,3,temp_v1);
  FUN_002e9f64(temp_v3);
  temp_v0 = FUN_00302f28(temp_v0 + 0x18);
  temp_v0 = FUN_00302f28(temp_v0 + 8);
  temp_v0 = FUN_00302f28(temp_v0 + 0x18);
  temp_v0 = FUN_00302f28(temp_v0 + 8);
  temp_v0 = FUN_0030395c(temp_v0 + 8,0);
  temp_v0 = temp_v0 + 0xc;
  FUN_0012cfde(temp_v0,0);
  return temp_v0 - 0xac;
}
