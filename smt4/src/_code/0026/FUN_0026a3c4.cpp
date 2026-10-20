/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026a3c4` (_code @ 0x26a3c4, 0x180 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00282f80(int);
int FUN_0029f848(int, int, int, int, int, int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int DAT_0043da90; /* 0x43da90 */

/* Supplied declaration required: FUN_00282f80. */
extern int FUN_0028e9d4(unsigned int);
extern int FUN_0028fb40(unsigned int);
/* Supplied declaration required: FUN_0029f848. */


void FUN_0026a3c4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  if (param_1 != 0xb) {
    if (param_1 != 0xc) {
      if (param_1 != 0xd) {
        return;
      }
      temp_v2 = 0x33f;
      temp_v3 = DAT_0043da90 + 0x1cc4;
      temp_v4 = 0x3b6;
      temp_v5 = DAT_0043da90 + 0x178;
    }
    else {
      temp_v2 = 0x3b7;
      temp_v3 = DAT_0043da90 + 0x14f4;
      temp_v4 = 0x47e;
      temp_v5 = DAT_0043da90 + 0x114;
    }
  }
  else {
    temp_v2 = 1;
    temp_v4 = 0x3c;
    temp_v3 = DAT_0043da90 + 0x147c;
    temp_v5 = DAT_0043da90 + 0xb0;
  }
  if (temp_v3 == 0 || temp_v5 == 0) {
    return;
  }
  temp_v1 = 0;
  if (temp_v2 <= temp_v4) {
    do {
      temp_v0 = FUN_0028e9d4(temp_v2);
      if (temp_v0 != 0) {
        temp_v0 = temp_v1 * 2;
        temp_v1 = temp_v1 + 1;
        *(short *)(temp_v3 + temp_v0) = (short)temp_v2;
      }
      temp_v2 = temp_v2 + 1;
    } while ((int)temp_v2 <= (int)temp_v4);
  }
  if (param_1 == 0xc) {
    temp_v2 = 0x47f;
    do {
      temp_v0 = FUN_0028e9d4(temp_v2);
      if (temp_v0 != 0) {
        temp_v0 = temp_v1 * 2;
        temp_v1 = temp_v1 + 1;
        *(short *)(temp_v3 + temp_v0) = (short)temp_v2;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x79f);
  }
  else if (param_1 == 0xd) {
    temp_v2 = 0x79f;
    do {
      temp_v0 = FUN_0028e9d4(temp_v2);
      if ((temp_v0 != 0) && (temp_v0 = FUN_0028fb40(temp_v2), 0 < temp_v0)) {
        temp_v0 = temp_v1 * 2;
        temp_v1 = temp_v1 + 1;
        *(short *)(temp_v3 + temp_v0) = (short)temp_v2;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x803);
  }
  FUN_0029f848(temp_v5,temp_v1,0xb,1,1,1);
  FUN_00282f80(param_1);
  return;
}

} /* extern "C" */
