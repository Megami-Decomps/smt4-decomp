/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00333474` (_code @ 0x333474, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e59f8(...);

typedef struct fn_00333474_arg0 fn_00333474_arg0;
struct fn_00333474_arg0 {
    unsigned char pad_0x0[0x1];
    byte field_0x1; /* +0x1 */
    byte field_0x2; /* +0x2 */
    unsigned char pad_0x3[0xc];
    byte field_0xf; /* +0xf */
    byte field_0x10; /* +0x10 */
    byte field_0x11; /* +0x11 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_0057f69c; /* 0x57f69c */

/* Supplied declaration required: FUN_002e59f8. */


void FUN_00333474(fn_00333474_arg0 *param_1)

{
/* irregular: 2 goto(s); 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  temp_v3 = 0;
  temp_v2 = DAT_0057f69c + 0x88;
  while( 1 ) {
    temp_v0 = temp_v2 + temp_v3 * 100;
    temp_v1 = temp_v0 + 0x27184;
    temp_v4 = *(short *)(temp_v0 + 0x271b8) == 0;
    if (temp_v4) {
      temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + 0x271e4);
    }
    if (temp_v4 && temp_v1 == 0) break;
    temp_v3 = temp_v3 + 1;
    if ((int)temp_v3 >= 0x20) {
      temp_v3 = 0x1f;
LAB_003334d4:
      if (temp_v3 != 0) {
LAB_003334e0:
        temp_v2 = 0;
        temp_v1 = temp_v3;
        while (temp_v1 = temp_v1 - 1, -1 < (int)temp_v1) {
          temp_v0 = 0;
          if (temp_v1 < 0x20) {
            temp_v0 = DAT_0057f69c + temp_v1 * 100 + 0x2720c;
          }
          if (temp_v3 - temp_v2 < 0x20) {
            FUN_002e59f8(temp_v0,DAT_0057f69c + (temp_v3 - temp_v2) * 100 + 0x2720c,100);
          }
          temp_v2 = temp_v2 + 1;
        }
        temp_v2 = DAT_0057f69c + 0x88;
      }
      FUN_002e59f8(param_1,temp_v2 + 0x27184,100);
      return;
    }
  }
  if (temp_v3 != 0xffffffff) goto LAB_003334d4;
  temp_v3 = 0x1f;
  goto LAB_003334e0;
}

} /* extern "C" */
