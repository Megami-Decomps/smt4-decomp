/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002347b8` (_code @ 0x2347b8, 0xcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c3944(int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int FUN_002b5a48(int);
/* Supplied declaration required: FUN_002c3944. */


int FUN_002347b8(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned short *puVar7;
  int temp_v8;
  int temp_v9;
  unsigned int unaff_r11;
  int temp_v10;
  
  temp_v2 = FUN_002b5a48(param_2);
  temp_v9 = 0;
  if (temp_v2 != 0) {
    FUN_002c3944(param_3,0x80);
    if (0 < temp_v2) {
      unaff_r11 = 0xf890;
    }
    temp_v8 = 0;
    temp_v9 = 1;
    temp_v7 = 0;
    temp_v5 = temp_v4;
    temp_v10 = param_3;
    if (0 < temp_v2) {
      do {
        puVar7 = (unsigned short *)(param_2 + temp_v7 * 2);
        temp_v1 = *puVar7;
        temp_v3 = ((temp_v1 & 0xff) << 8) | (unsigned int)(temp_v1 >> 8);
        if (temp_v3 != unaff_r11) {
          temp_v5 = temp_v3 - 0xff00;
        }
        if (temp_v3 == unaff_r11 || temp_v5 == 0xff) {
          if (temp_v8 != 0) {
            return temp_v9;
          }
          return temp_v9 - 1;
        }
        if (temp_v3 == 0xf801) {
          if (temp_v9 >= 8) {
            return temp_v9;
          }
          param_3 = param_3 + 0x80;
          temp_v8 = 0;
          temp_v9 = temp_v9 + 1;
          FUN_002c3944(param_3,0x80);
          temp_v5 = temp_v6;
          temp_v10 = param_3;
        }
        else {
          temp_v1 = *puVar7;
          temp_v5 = (unsigned int)temp_v1;
          temp_v0 = temp_v8 * 2;
          temp_v8 = temp_v8 + 1;
          *(unsigned short *)(temp_v10 + temp_v0) = temp_v1;
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < temp_v2);
    }
  }
  return temp_v9;
}

} /* extern "C" */
