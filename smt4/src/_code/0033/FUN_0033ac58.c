/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033ac58` (_code @ 0x33ac58, 0x19c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0023fb84. */
/* Supplied declaration required: FUN_00293f98. */
extern int FUN_00294fe0(int);
extern int FUN_0029505c(int);


unsigned int FUN_0033ac58(int param_1)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  
  temp_v2 = 0;
  temp_v4 = 1;
  if (temp_v2 < *(int *)(param_1 + 0x438c)) {
    do {
      temp_v3 = param_1 + temp_v2 * 8;
      temp_v0 = 0;
      do {
        temp_v1 = *(int *)(param_1 + temp_v0 * 4 + 0x2134);
        if ((temp_v1 != 0) && (*(int *)(temp_v1 + 4) == *(int *)(temp_v3 + 0x1fe8))) {
          temp_v0 = *(int *)(param_1 + temp_v0 * 4 + 0x2134);
          goto LAB_0033acc8;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 0x2a);
      temp_v0 = 0;
LAB_0033acc8:
      puVar5 = (unsigned int *)(temp_v3 + 0x1fe4);
      if ((*puVar5 & 1) == 0) {
        temp_v3 = FUN_0029505c(temp_v0);
        if (temp_v3 == 0) {
          temp_v4 = 0;
        }
        else {
          *puVar5 = *puVar5 | 1;
          FUN_00293f98(temp_v0,7);
        }
      }
      if ((*puVar5 & 2) == 0) {
        temp_v3 = FUN_00294fe0(temp_v0);
        if (temp_v3 == 0) {
          temp_v4 = 0;
        }
        else {
          FUN_0023fb84(temp_v0);
          *puVar5 = *puVar5 | 2;
          temp_v3 = param_1 + temp_v2 * 0x48;
          *(unsigned int *)(temp_v3 + 0x3580) = *(unsigned int *)(temp_v0 + 4);
          *(unsigned int *)(temp_v3 + 0x3584) = *(unsigned int *)(temp_v0 + 8);
          *(unsigned int *)(temp_v3 + 0x3588) = *(unsigned int *)(temp_v0 + 0xc);
          *(unsigned int *)(temp_v3 + 0x358c) = *(unsigned int *)(temp_v0 + 0x10);
          *(unsigned int *)(temp_v3 + 0x3590) = *(unsigned int *)(temp_v0 + 0x14);
          *(unsigned int *)(temp_v3 + 0x3594) = *(unsigned int *)(temp_v0 + 0x18);
          *(unsigned int *)(temp_v3 + 0x3598) = *(unsigned int *)(temp_v0 + 0x1c);
          *(unsigned int *)(temp_v3 + 0x359c) = *(unsigned int *)(temp_v0 + 0x20);
          *(unsigned int *)(temp_v3 + 0x35a0) = *(unsigned int *)(temp_v0 + 0x24);
          *(unsigned int *)(temp_v3 + 0x35a4) = *(unsigned int *)(temp_v0 + 0x28);
          *(unsigned int *)(temp_v3 + 0x35a8) = *(unsigned int *)(temp_v0 + 0x2c);
          *(unsigned int *)(temp_v3 + 0x35ac) = *(unsigned int *)(temp_v0 + 0x30);
          *(unsigned int *)(temp_v3 + 0x35b0) = *(unsigned int *)(temp_v0 + 0x34);
          *(unsigned int *)(temp_v3 + 0x35b4) = *(unsigned int *)(temp_v0 + 0x38);
          *(unsigned char *)(temp_v3 + 0x35b8) = *(unsigned char *)(temp_v0 + 0x3c);
          *(unsigned char *)(temp_v3 + 0x35b9) = *(unsigned char *)(temp_v0 + 0x3d);
          *(unsigned int *)(temp_v3 + 0x35bc) = *(unsigned int *)(temp_v0 + 0x40);
          *(unsigned int *)(temp_v3 + 0x35c0) = *(unsigned int *)(temp_v0 + 0x44);
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(int *)(param_1 + 0x438c));
  }
  return temp_v4;
}
