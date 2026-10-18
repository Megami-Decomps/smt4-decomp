/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d88a8` (_code @ 0x2d88a8, 0x21a bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_00249c70. */
/* Supplied declaration required: FUN_002544fc. */
/* Supplied declaration required: FUN_00254514. */
/* Supplied declaration required: FUN_0025506c. */
extern int FUN_00289640(void);
/* Supplied declaration required: FUN_00295904. */
/* Supplied declaration required: FUN_002a89e4. */
extern int FUN_002a8a08(void);
extern int FUN_002a8a1c(void);
extern int FUN_002b49d8(unsigned int);
/* Supplied declaration required: FUN_002bd25c. */
extern unsigned int FUN_002bd3ec(void);
/* Supplied declaration required: FUN_002c0128. */


int FUN_002d88a8(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  
  if (param_1 != 0) {
    if ((param_1 == 1) && (temp_v6 = FUN_00289640(), temp_v6 == 0)) {
      FUN_00249c70(0,1);
      FUN_00254514(0);
      FUN_00254514(1,0);
      FUN_00254514(2,0);
    }
    return 1;
  }
  temp_v6 = FUN_00289640();
  if (temp_v6 == 0) {
    FUN_00249c70(0,1);
    FUN_00254514(0);
    FUN_00254514(1,0);
    FUN_00254514(2,0);
  }
  temp_v0 = FUN_002b49d8(0x1e);
  temp_v6 = FUN_002544fc(0);
  if (temp_v6 != 0) {
    if (temp_v6 != 1) {
      if (temp_v6 != 2) {
        if (temp_v6 != 3) {
          return 0;
        }
      }
      else {
        temp_v6 = FUN_002a8a1c();
        temp_v3 = FUN_002a8a08();
        while (temp_v2 = FUN_002544fc(2), temp_v2 < temp_v6) {
          temp_v2 = FUN_002544fc(2);
          FUN_002a89e4((int)*(char *)(temp_v2 + temp_v3 + 0x90f0));
          temp_v2 = FUN_002544fc(2);
          FUN_00254514(2,temp_v2 + 1);
        }
        temp_v3 = FUN_002544fc(2);
        if (temp_v6 <= temp_v3) {
          return 1;
        }
      }
      temp_v6 = FUN_002a8a08();
      temp_v3 = FUN_002544fc(2);
      temp_v6 = FUN_002a89e4((int)*(char *)(temp_v3 + temp_v6 + 0x90f0));
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v6 + 0x46);
      FUN_002bd25c(temp_v4);
      FUN_00295904(0x28,temp_v4);
      temp_v5 = FUN_002544fc(1);
      FUN_0025506c(temp_v0,0xd,temp_v5,6,0);
      temp_v6 = FUN_002544fc(1);
      FUN_00254514(1,temp_v6 + 1);
      if (temp_v0 == 1) {
        FUN_00254514(0,2);
        FUN_00254514(1,0);
        temp_v6 = FUN_002544fc(2);
        FUN_00254514(2,temp_v6 + 1);
        temp_v0 = 0;
      }
    }
    else {
      temp_v5 = FUN_002bd3ec();
      FUN_00295904(0x28,temp_v5);
      temp_v5 = FUN_002544fc(1);
      FUN_0025506c(temp_v0,0xd,temp_v5,6,0);
      temp_v6 = FUN_002544fc(1);
      FUN_00254514(1,temp_v6 + 1);
    }
  }
  else {
    temp_v5 = 0xf;
    temp_v6 = FUN_002a8a1c();
    if (temp_v6 == 0) {
      temp_v5 = 0xe;
    }
    FUN_002c0128();
    temp_v1 = FUN_002544fc(1);
    FUN_0025506c(temp_v0,temp_v5,temp_v1,6,0);
    temp_v6 = FUN_002544fc(1);
    FUN_00254514(1,temp_v6 + 1);
  }
  return temp_v0;
}
