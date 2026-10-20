/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c5da4` (_code @ 0x4c5da4, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0034a290(void);
int FUN_003f0e20(int, unsigned int);
int FUN_004c39b0(void);

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned int DAT_00571490; /* 0x571490 */
extern unsigned int DAT_00571494; /* 0x571494 */

extern int btlGetMainState(void);
extern int FUN_001633a0(unsigned int);
/* Supplied declaration required: FUN_0034a290. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004c39b0. */


int FUN_004c5da4(unsigned int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int unaff_r6;
  unsigned char temp_v4;
  unsigned short temp_v5 [12];
  
  temp_v1 = btlGetMainState();
  if ((*(unsigned int *)(temp_v1 + 0x45a0) & DAT_00571490) == 0 &&
      (*(unsigned int *)(temp_v1 + 0x45a4) & DAT_00571494) == 0) {
    FUN_003f0e20(temp_v1,param_1);
    temp_v1 = *(int *)(temp_v1 + 0xf0);
    if (temp_v1 != 0x16c) {
      if (temp_v1 < 0x16d) {
        if (temp_v1 - 0x169U < 2 || temp_v1 == 0x16b) {
          return 0;
        }
      }
      else if (temp_v1 == 0x17d || temp_v1 == 0x17e) {
        return 0;
      }
      temp_v5[0] = 0;
      temp_v5[1] = 0;
      temp_v5[2] = 0;
      temp_v5[3] = 0;
      temp_v5[4] = 0;
      temp_v5[5] = 0;
      temp_v5[6] = 0;
      temp_v5[7] = 0;
      temp_v5[8] = 0;
      temp_v5[9] = 0;
      FUN_004c39b0();
      temp_v1 = 0;
      do {
        temp_v2 = (unsigned int)temp_v5[temp_v1];
        if (temp_v2 != 0) {
          FUN_0034a290();
          temp_v4 = temp_v2 != 0;
          temp_v0 = 0;
          if (temp_v4) {
            temp_v0 = *(short *)(temp_v2 + 0x34);
          }
          if (temp_v4 && temp_v0 != 0) {
            unaff_r6 = (int)*(short *)(temp_v2 + 0x36);
          }
          if (((temp_v4 && temp_v0 != 0) && unaff_r6 != 0) &&
             ((param_2 == 0 || (temp_v3 = FUN_001633a0(99), temp_v3 < unaff_r6)))) {
            return (int)*(short *)(temp_v2 + 0x34);
          }
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 9);
    }
  }
  return 0;
}

} /* extern "C" */
