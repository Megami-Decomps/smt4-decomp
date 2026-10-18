/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb87c` (_code @ 0x2eb87c, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
} param_4_stack;

/* Supplied declaration required: FUN_0012d980. */
/* Supplied declaration required: FUN_002e9538. */
extern int FUN_002ede52(int);
/* Supplied declaration required: FUN_002ede60. */
/* Supplied declaration required: FUN_002ede78. */


int FUN_002eb87c(int param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  char cStack_ec;
  unsigned char *temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8 [32];
  unsigned char temp_v9 [36];
  unsigned char temp_v10 [68];
  unsigned char temp_v11 [36];
  int iStack_24;
  unsigned int uStack_20;
  int iStack_1c;
  int temp_v12;
  
  temp_v2 = 0;
  temp_v0 = *(unsigned int *)(param_3 + 8);
  if (((((temp_v0 & 0xff) != 0 || ((temp_v0 >> 8) & 0xff) != 0) || ((temp_v0 >> 0x10) & 0xff) != 0) ||
       temp_v0 >> 0x18 != 0) &&
     (iStack_24 = param_1, uStack_20 = param_2, iStack_1c = param_3, temp_v12 = param_4,
     temp_v1 = FUN_002ede52(param_3), temp_v1 != 0)) {
    temp_v6 = param_1 + 4;
    temp_v5 = temp_v10;
    temp_v7 = *(unsigned int *)(param_1 + 0x20);
    temp_v2 = FUN_002ede60(temp_v11,param_3);
    *(unsigned int *)(temp_v2 + 0x20) = temp_v7;
    temp_v1 = FUN_002ede60(temp_v8,param_2);
    FUN_002ede78(temp_v1 + 0x20,temp_v2);
    temp_v2 = FUN_002ede60(temp_v5,temp_v8);
    temp_v2 = FUN_002ede78(temp_v2 + 0x20,temp_v9);
    FUN_0012d980(&temp_v4,temp_v6,temp_v2 - 0x20);
    temp_v2 = (int)cStack_ec;
    if ((temp_v2 == 0) && (temp_v12 != 0)) {
      temp_v3 = *(unsigned int *)(param_1 + 0x20);
      FUN_002e9538(temp_v4 + 0x30,param_3);
      *(unsigned int *)(temp_v4 + 0x50) = temp_v3;
      temp_v2 = 1;
    }
  }
  return temp_v2;
}
