/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1b64` (_code @ 0x2e1b64, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(unsigned char *, unsigned char *);
int FUN_00180310(int, unsigned int, unsigned int, int, int, unsigned int, unsigned char [20]);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp58; /* 0x58: local_58 */
} param_4_stack;

extern unsigned char LAB_002e1c90; /* 0x2e1c90 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_00180310. */


void FUN_002e1b64(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 goto(s); 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [20];
  unsigned int uStack_34;
  unsigned int temp_v6;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  temp_v4 = 0;
  temp_v3 = 7;
  uStack_34 = param_1;
  temp_v6 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  do {
    temp_v2 = temp_v3 & 0xff;
    temp_v1 = 1;
    if (param_1 != 0) {
      if (temp_v2 != 1) {
LAB_002e1ba4:
        temp_v1 = 1;
        if ((temp_v3 & 1) == 0) {
          temp_v1 = 10;
        }
        for (temp_v0 = (temp_v2 - 1) >> 1; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
          temp_v1 = temp_v1 * 100;
        }
      }
      if (temp_v1 <= param_1) {
        temp_v1 = param_1;
        if (temp_v2 != 1) {
          if ((temp_v3 & 1) == 0) {
            temp_v1 = param_1 / 10;
          }
          for (temp_v2 = (temp_v2 - 1) >> 1; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
            temp_v1 = temp_v1 / 100;
          }
        }
        if (temp_v1 % 10 != 10) goto LAB_002e1c30;
      }
      temp_v5[temp_v4] = 0x20;
    }
    else {
      if (temp_v2 != 1) goto LAB_002e1ba4;
LAB_002e1c30:
      textFormatBuffer(temp_v5 + temp_v4,&LAB_002e1c90);
    }
    temp_v3 = temp_v3 - 1;
    temp_v4 = temp_v4 + 1;
    if ((int)temp_v3 < 1) {
      temp_v5[temp_v4] = 0;
      FUN_00180310(0,temp_v6,uStack_2c,0,5,param_4,temp_v5);
      return;
    }
  } while( 1 );
}

} /* extern "C" */
