/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a7084` (_code @ 0x3a7084, 0x114 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002313d4. */
extern int FUN_002334d8(int, int);
/* Supplied declaration required: FUN_00233804. */
/* Supplied declaration required: FUN_0029dc00. */
/* Supplied declaration required: FUN_002a0f68. */
/* Supplied declaration required: FUN_002b8b78. */
extern unsigned int FUN_002bef70(int);
extern unsigned int FUN_002bef7c(int);


void FUN_003a7084(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  
  temp_v0 = FUN_002334d8(param_1 + 0xdc,(int)*(short *)(param_1 + 0xa5b4));
  temp_v3 = param_1 + *(short *)(param_1 + 0xa5b4) * 0x8c + 0xfc;
  temp_v1 = FUN_002bef70(temp_v3);
  temp_v2 = FUN_002bef7c(temp_v3);
  FUN_002313d4(param_1 + 200,temp_v2,temp_v1);
  if (temp_v0 != 0) {
    if (*(char *)(param_1 + 0x5a4) != '\0') {
      if (*(char *)(param_1 + 0x5a5) == '\x01') {
        temp_v1 = 0x4c;
      }
      else {
        temp_v1 = 0x4d;
      }
      FUN_002b8b78(temp_v1);
    }
    else {
      FUN_002b8b78(0x2d);
    }
    FUN_0029dc00(param_1);
    FUN_002a0f68(0);
    *(unsigned int *)(param_1 + 0x14) = 2;
    *(unsigned int *)(param_1 + 0x18) = 0;
    FUN_002313d4(param_1 + 200,0,0);
    (**(romwright_code **)(**(int **)(param_1 + 0x590) + 8))(*(int **)(param_1 + 0x590),param_1 + 0x20);
    puVar4 = (unsigned short *)(*(int *)(param_1 + 0x590) + 4);
    *puVar4 = *puVar4 | 0x1000;
    temp_v0 = *(int *)(param_1 + 0x28);
    if (temp_v0 >= 10) {
      temp_v0 = 10;
    }
    FUN_00233804(param_1 + 0x55c,0x1d,0x40e,temp_v0);
    *(unsigned char *)(param_1 + 0x56c) = 1;
  }
  return;
}
