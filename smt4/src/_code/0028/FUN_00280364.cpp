/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00280364` (_code @ 0x280364, 0x17c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025247c(unsigned char [48]);
int FUN_002c86ec(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern unsigned char DAT_0049f94b; /* 0x49f94b */
extern unsigned char DAT_0049f94d; /* 0x49f94d */
extern int DAT_004c2420; /* 0x4c2420 */

/* Supplied declaration required: FUN_0025247c. */
/* Supplied declaration required: FUN_002c86ec. */


void FUN_00280364(void)

{
/* irregular: 1 goto(s); irregular input(s): in_d8; 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  float temp_v5;
  unsigned long long in_d8;
  unsigned int temp_v6;
  unsigned long long temp_v7;
  unsigned long long temp_v8;
  unsigned char temp_v9 [48];
  
  temp_v4 = 0;
  DAT_0049f94b = 0xff;
  DAT_0049f94d = 0xff;
  if (0 < DAT_004c2420) {
    temp_v7 = 0;
    do {
      temp_v8 = temp_v7 >> 0x20;
      temp_v3 = 0;
      temp_v0 = temp_v4 * 0x7c;
      do {
        temp_v6 = (unsigned int)(temp_v7 >> 0x20);
        if (temp_v3 != 0) {
          if (temp_v3 != 1) {
            if (temp_v3 != 2) {
              if (temp_v3 == 3) {
                in_d8 = (unsigned long long)*(unsigned int *)(temp_v0 + 0x4c1510);
                temp_v7 = (unsigned long long)temp_v6 << 0x20;
                FUN_0025247c(temp_v9);
              }
            }
            else {
              in_d8 = (unsigned long long)*(unsigned int *)(temp_v0 + 0x4c14f8);
              temp_v7 = (unsigned long long)temp_v6 << 0x20;
              FUN_0025247c(temp_v9);
            }
          }
          else {
            in_d8 = (unsigned long long)*(unsigned int *)(temp_v0 + 0x4c14e0);
            temp_v7 = (unsigned long long)temp_v6 << 0x20;
            FUN_0025247c(temp_v9);
          }
        }
        else {
          in_d8 = (unsigned long long)*(unsigned int *)(temp_v0 + 0x4c14c8);
          temp_v7 = (unsigned long long)temp_v6 << 0x20;
          FUN_0025247c(temp_v9);
        }
        temp_v5 = (float)in_d8;
        FUN_002c86ec();
        temp_v2 = DAT_0049f94b;
        if (temp_v5 < (float)temp_v8) goto LAB_002804c4;
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 4);
      temp_v1 = (unsigned char)*(unsigned short *)(temp_v0 + 0x4c14ba);
      temp_v2 = temp_v1;
      if (*(short *)(temp_v0 + 0x4c14b8) != 0) {
        temp_v2 = DAT_0049f94b;
        DAT_0049f94d = temp_v1;
      }
LAB_002804c4:
      DAT_0049f94b = temp_v2;
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < DAT_004c2420);
  }
  return;
}

} /* extern "C" */
