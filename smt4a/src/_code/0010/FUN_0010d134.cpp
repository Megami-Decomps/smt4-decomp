/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d134` (_code @ 0x10d134, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002eca44(void);
int FUN_002ecef0(void);
int FUN_002ed206(unsigned int, int);
int FUN_002f3d88(void);
int FUN_002f5940(void);

extern unsigned char DAT_005590bc; /* 0x5590bc */

extern int FUN_0011ff0c(int, unsigned int);
extern int operatorNew(unsigned int);
extern int FUN_002ea974(unsigned int *);
/* Supplied declaration required: FUN_002eca44. */
/* Supplied declaration required: FUN_002ecef0. */
extern int FUN_002ed0dc(int, unsigned int);
/* Supplied declaration required: FUN_002ed206. */
/* Supplied declaration required: FUN_002f3d88. */
/* Supplied declaration required: FUN_002f5940. */
extern unsigned short FUN_002f7270(void);


int FUN_0010d134(unsigned int *param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  param_1[2] = 0;
  *param_1 = (unsigned int)&DAT_005590bc;
  *(unsigned char *)(param_1 + 3) = 0;
  param_1 = param_1 + 4;
  FUN_002eca44();
  param_1[0x19] = 30000;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(unsigned char *)(param_1 + 0x27) = 1;
  temp_v1 = FUN_002ea974(param_1 + 0x28);
  *(unsigned int *)(temp_v1 - 0x38) = 0;
  FUN_002ecef0();
  FUN_002f5940();
  FUN_002f3d88();
  temp_v0 = FUN_002f7270();
  *(unsigned short *)(temp_v1 - 0x34) = temp_v0;
  *(unsigned char *)(temp_v1 - 0x32) = 0;
  *(unsigned int *)(temp_v1 - 0x30) = 1;
  *(unsigned char *)(temp_v1 - 0x24) = 0;
  *(unsigned int *)(temp_v1 - 0x2c) = 0;
  *(unsigned int *)(temp_v1 - 0x28) = 0;
  *(unsigned int *)(temp_v1 - 0x20) = 0;
  *(unsigned int *)(temp_v1 - 0x1c) = 0;
  *(unsigned int *)(temp_v1 - 0x18) = 0;
  *(unsigned int *)(temp_v1 - 0x14) = 0;
  *(unsigned int *)(temp_v1 - 0x40) = 0;
  temp_v2 = operatorNew(0x80);
  temp_v3 = 0;
  if (temp_v2 != 0) {
    temp_v3 = FUN_002ed0dc(temp_v2,0);
  }
  *(int *)(temp_v1 - 0x2c) = temp_v3;
  *(unsigned short *)(temp_v3 + 0x20) = 0xe;
  FUN_002ed206(*(unsigned int *)(temp_v1 - 0x2c),8);
  temp_v2 = operatorNew(0x60);
  temp_v3 = 0;
  if (temp_v2 != 0) {
    temp_v3 = FUN_0011ff0c(temp_v2,0);
  }
  *(int *)(temp_v1 - 0x28) = temp_v3;
  *(unsigned short *)(temp_v3 + 0x20) = 100;
  FUN_002ed206(*(unsigned int *)(temp_v1 - 0x28),8);
  return temp_v1 - 0xb0;
}

} /* extern "C" */
