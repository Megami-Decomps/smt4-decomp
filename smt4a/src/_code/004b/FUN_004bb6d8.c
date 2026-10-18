/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bb6d8` (_code @ 0x4bb6d8, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: FUN_00148d68. */
extern int FUN_00152978(unsigned char, unsigned char);
extern int FUN_0015fa74(unsigned char, unsigned char);
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern int FUN_0018719c(void);
extern int FUN_00192748(unsigned int);
extern int FUN_00192798(void);
/* Supplied declaration required: FUN_003fd63c. */


void FUN_004bb6d8(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  
  if (param_2 != 0) {
    temp_v2 = FUN_0018719c();
    if (temp_v2 != 0) {
      return;
    }
  }
  else {
    temp_v2 = FUN_0018719c();
    if (temp_v2 == 0) {
      return;
    }
  }
  temp_v3 = FUN_00187180(2,0);
  temp_v2 = FUN_00192798();
  temp_v4 = FUN_00192748(temp_v3);
  temp_v9 = 0;
  if (temp_v9 < temp_v4) {
    do {
      temp_v5 = temp_v2 + temp_v9 * 0xa4;
      temp_v8 = (unsigned int)*(unsigned short *)(temp_v5 + 0xe);
      temp_v10 = temp_v8 != param_1;
      if (temp_v10) {
        temp_v8 = (unsigned int)*(unsigned short *)(temp_v5 + 0x10);
      }
      if (!temp_v10 || temp_v8 == param_1) {
        temp_v0 = *(unsigned char *)(temp_v5 + 1);
        temp_v1 = *(unsigned char *)(temp_v2 + temp_v9 * 0xa4);
        temp_v5 = FUN_00152978(temp_v1,temp_v0);
        temp_v6 = FUN_0015fa74(temp_v1,temp_v0);
        FUN_003fd63c(param_1,param_2,0);
        temp_v7 = FUN_0015fa74(temp_v1,temp_v0);
        if (temp_v6 != temp_v7) {
          *(unsigned char *)(temp_v5 + 2) = 0;
          *(unsigned char *)(temp_v5 + 3) = *(unsigned char *)(temp_v5 + 3) & 0xe0;
          FUN_00148d68(temp_v1,temp_v0,0);
        }
        FUN_003fd63c(param_1,param_2 ^ 1,0);
      }
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < temp_v4);
  }
  return;
}
