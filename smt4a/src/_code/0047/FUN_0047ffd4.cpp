/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047ffd4` (_code @ 0x47ffd4, 0x16c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192608(void);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

/* Supplied declaration required: FUN_00192608. */
extern int affinityShouldReplaceState(unsigned short, unsigned int);


void FUN_0047ffd4(int param_1,unsigned short *param_2)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  short temp_v6;
  int temp_v7;
  unsigned int temp_v8 [3];
  
  temp_v8[0] = 0;
  temp_v8[1] = 0;
  temp_v2 = (unsigned int)*(unsigned short *)(param_1 + 8);
  if (temp_v2 != 0) {
    FUN_00192608();
    temp_v8[0] = temp_v2;
  }
  temp_v2 = (unsigned int)*(unsigned short *)(param_1 + 0xc);
  if (temp_v2 != 0) {
    FUN_00192608();
    temp_v8[1] = temp_v2;
  }
  temp_v5 = 0;
  do {
    temp_v7 = 0;
    temp_v2 = 0;
    temp_v4 = temp_v5 * 2 + 0x44;
    do {
      if (temp_v8[temp_v2] != 0) {
        temp_v0 = ((int)*(short *)(temp_v8[temp_v2] + temp_v4) & 0x3ffffU) >> 10;
        temp_v3 = affinityShouldReplaceState(*param_2 >> 10,temp_v0);
        if (temp_v3 != 0) {
          *param_2 = (unsigned short)(temp_v0 << 10) | (*param_2 & 0x3ff);
          temp_v7 = (int)((unsigned int)*(unsigned short *)(temp_v8[temp_v2] + temp_v4) << 0x16) >> 0x16;
        }
        temp_v6 = (short)temp_v7;
        if (temp_v2 == 1) {
          if (0 < *(short *)(temp_v8[1] + 0x6e)) {
            temp_v1 = (unsigned short)(((((int)*(short *)(temp_v8[1] + temp_v4) & 0x3ffffffU) >> 10) & 0x3f) <<
                            10) |
                    ((unsigned short)(((int)*(short *)(temp_v8[1] + temp_v4) << 0x16) >> 0x16) & 0x3ff);
            goto LAB_00480128;
          }
          break;
        }
      }
      temp_v6 = (short)temp_v7;
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 2);
    temp_v1 = (*param_2 & 0xfc00) | (((*param_2 & 0x3ff) + temp_v6) & 0x3ff);
LAB_00480128:
    temp_v5 = temp_v5 + 1;
    *param_2 = temp_v1;
    param_2 = param_2 + 1;
    if (temp_v5 >= 0x15) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
