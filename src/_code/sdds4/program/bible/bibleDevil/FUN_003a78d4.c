/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a78d4` (_code @ 0x3a78d4, 0x178 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp620; /* 0x620: local_620 */
} param_1_stack;

extern unsigned int DAT_0043d9cc; /* 0x43d9cc */

extern int FUN_0022df64(int);
/* Supplied declaration required: FUN_0022e008. */
/* Supplied declaration required: FUN_002333d4. */
extern int FUN_002337a0(int *);
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_0029d100. */
/* Supplied declaration required: FUN_0029da10. */
/* Supplied declaration required: FUN_0029dcd4. */
/* Supplied declaration required: FUN_0029e8c0. */
/* Supplied declaration required: FUN_0029e8e8. */
extern unsigned int FUN_002b0824(unsigned short);
/* Supplied declaration required: FUN_002b8b78. */


void FUN_003a78d4(int *param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [1548];
  
  temp_v1 = (**(romwright_code **)(*param_1 + 0x24))(param_1);
  if ((temp_v1 != 0) && (temp_v1 = FUN_0022df64((int)param_1 + 0x96), temp_v1 == 0)) {
    temp_v1 = param_1[0x166];
    FUN_002972f8(temp_v1,param_1[0x167]);
    param_1[0x168] = temp_v1;
    *(unsigned int *)(temp_v1 + 0x108) = 2;
    param_1[5] = 1;
    param_1[6] = 0;
    *(unsigned char *)((int)param_1 + 0x5a5) = 1;
    if ((char)param_1[0x169] != '\0') {
      temp_v1 = FUN_002337a0(param_1 + 8);
      temp_v1 = param_1[temp_v1 * 8 + 0x16b];
      FUN_002b8b78(0x4c);
      temp_v2 = FUN_002b0824((short)temp_v1);
      FUN_0029dcd4(0,1,(short)temp_v1,temp_v2);
    }
    else {
      temp_v1 = FUN_002337a0(param_1 + 8);
      temp_v0 = *(unsigned short *)(param_1 + temp_v1 * 8 + 0x16b);
      temp_v3 = (unsigned int)temp_v0;
      FUN_0029d100(temp_v3,*(unsigned char *)((int)param_1 + 0x5a5),0);
      FUN_0029e8e8(1,0);
      FUN_0029e8c0(-temp_v3,0);
      FUN_002b8b78(0x2d);
      FUN_0029da10(temp_v0,temp_v4);
      FUN_0029dcd4(0,1,temp_v0,temp_v4);
    }
    FUN_002333d4(param_1 + 0x37,0);
    FUN_002333d4(param_1 + 0x37,1);
    DAT_0043d9cc = 0xffffffff;
    FUN_0022e008(param_1);
    return;
  }
  return;
}
