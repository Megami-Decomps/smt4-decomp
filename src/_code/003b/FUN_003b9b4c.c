/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b9b4c` (_code @ 0x3b9b4c, 0x124 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_003b9c74; /* 0x3b9c74 */
extern unsigned char LAB_003b9c8c; /* 0x3b9c8c */
extern unsigned short DAT_0049fa80; /* 0x49fa80 */
extern short DAT_0049fa82; /* 0x49fa82 */
extern unsigned char DAT_0049fa84; /* 0x49fa84 */

extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_0022b90c. */
extern unsigned int FUN_00291018(int, unsigned char *);
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002c0128. */
/* Supplied declaration required: FUN_002c4360. */
extern unsigned int FUN_002c5e2c(unsigned char *);


void FUN_003b9b4c(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  unsigned char temp_v2 [128];
  
  FUN_0022b90c();
  piVar3 = (int *)(param_1 + 0xdb4);
  if (*(int *)(param_1 + 0x2c) != 0) {
    if ((*(int *)(param_1 + 0x2c) == 1) &&
       (temp_v0 = FUN_0019dfbc(*(unsigned int *)(param_1 + 0xdbc)), temp_v0 == 2)) {
      FUN_002a755c(*(unsigned int *)(param_1 + 0xdbc));
      *(unsigned int *)(param_1 + 0xdbc) = 0;
      FUN_002c4360(*(unsigned int *)(param_1 + 0xdb4));
      *piVar3 = 0;
      FUN_002c4360(*(unsigned int *)(param_1 + 0xdb8));
      *(unsigned int *)(param_1 + 0xdb8) = 0;
      *(unsigned int *)(param_1 + 0x28) = 5;
      *(unsigned int *)(param_1 + 0x2c) = 0;
    }
    return;
  }
  DAT_0049fa80 = 0;
  FUN_002c0128();
  FUN_002be7fc(temp_v2,&LAB_003b9c74,(int)DAT_0049fa82,(int)DAT_0049fa82);
  temp_v1 = FUN_002c5e2c(temp_v2);
  *(unsigned int *)(param_1 + 0xdb4) = temp_v1;
  FUN_002be7fc(temp_v2,&LAB_003b9c8c,(int)DAT_0049fa82,(int)DAT_0049fa82);
  temp_v1 = FUN_002c5e2c(temp_v2);
  *(unsigned int *)(param_1 + 0xdb8) = temp_v1;
  temp_v0 = *piVar3;
  FUN_002972f8(temp_v0,temp_v1);
  *(int *)(param_1 + 0xdbc) = temp_v0;
  *(unsigned int *)(temp_v0 + 0x108) = 2;
  temp_v1 = FUN_00291018(*piVar3,&DAT_0049fa84);
  FUN_002971e4(*(unsigned int *)(param_1 + 0xdbc),temp_v1);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  return;
}
