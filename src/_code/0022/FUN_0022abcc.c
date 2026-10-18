/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022abcc` (_code @ 0x22abcc, 0xd0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 6 slot(s), 22 byte(s) */
typedef struct {
    unsigned short sp26; /* 0x26: local_26 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_2_stack;

/* Supplied declaration required: FUN_0022ad74. */
/* Supplied declaration required: FUN_002475e4. */
/* Supplied declaration required: FUN_002840b8. */
extern unsigned int FUN_00293c98(void);
/* Supplied declaration required: FUN_002ae3f0. */


unsigned int FUN_0022abcc(unsigned int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned short temp_v4 [10];
  unsigned char temp_v5 [22];
  short temp_v6;
  
  temp_v0 = FUN_00293c98();
  FUN_002475e4(temp_v5,temp_v0,param_1);
  temp_v1 = (int)temp_v6;
  if (temp_v1 != 0) {
    FUN_002ae3f0();
    temp_v2 = 0;
    if (temp_v1 != 0) {
      temp_v2 = (unsigned int)*(unsigned char *)(temp_v1 + 0x3c);
    }
    if ((temp_v1 != 0 && temp_v2 != 0) && (temp_v2 - 1 == param_2)) {
      return 1;
    }
  }
  temp_v4[0] = 0;
  temp_v4[1] = 0;
  temp_v4[2] = 0;
  temp_v4[3] = 0;
  temp_v4[4] = 0;
  temp_v4[5] = 0;
  temp_v4[6] = 0;
  temp_v4[7] = 0;
  temp_v4[8] = 0;
  temp_v4[9] = 0;
  FUN_0022ad74(param_1,temp_v4);
  temp_v1 = 0;
  do {
    temp_v2 = (unsigned int)temp_v4[temp_v1];
    if (temp_v2 != 0) {
      FUN_002840b8();
      temp_v3 = 0;
      if (temp_v2 != 0) {
        temp_v3 = (unsigned int)*(unsigned char *)(temp_v2 + 0x32);
      }
      if ((temp_v2 != 0 && temp_v3 != 0) && (temp_v3 - 1 == param_2)) {
        return 1;
      }
    }
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 9) {
      return 0;
    }
  } while( 1 );
}
