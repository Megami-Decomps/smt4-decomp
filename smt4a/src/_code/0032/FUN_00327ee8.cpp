/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00327ee8` (_code @ 0x327ee8, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00324cc0(void);
int FUN_003250ac(unsigned char [44]);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern unsigned char DAT_005f162f; /* 0x5f162f */
extern unsigned char DAT_005f1631; /* 0x5f1631 */
extern int DAT_006160dc; /* 0x6160dc */

/* Supplied declaration required: FUN_00324cc0. */
/* Supplied declaration required: FUN_003250ac. */


void FUN_00327ee8(void)

{
/* irregular: 1 goto(s); irregular input(s): in_d10, in_d8; 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  float temp_v5;
  unsigned long long in_d8;
  unsigned long long in_d10;
  unsigned long long temp_v6;
  unsigned long long temp_v7;
  unsigned char temp_v8 [44];
  
  temp_v4 = 0;
  temp_v6 = in_d10 >> 0x20;
  DAT_005f162f = 0xff;
  DAT_005f1631 = 0xff;
  if (0 < DAT_006160dc) {
    temp_v6 = 0;
  }
  temp_v6 = temp_v6 << 0x20;
  if (0 < DAT_006160dc) {
    do {
      temp_v7 = temp_v6 >> 0x20;
      temp_v3 = 0;
      temp_v0 = temp_v4 * 0x7c;
      do {
        if (temp_v3 != 0) {
          if (temp_v3 != 1) {
            if (temp_v3 != 2) {
              if (temp_v3 == 3) {
                in_d8 = (unsigned long long)*(unsigned int *)(temp_v0 + 0x614dec);
                FUN_003250ac(temp_v8);
              }
            }
            else {
              in_d8 = (unsigned long long)*(unsigned int *)(temp_v0 + 0x614dd4);
              FUN_003250ac(temp_v8);
            }
          }
          else {
            in_d8 = (unsigned long long)*(unsigned int *)(temp_v0 + 0x614dbc);
            FUN_003250ac(temp_v8);
          }
        }
        else {
          in_d8 = (unsigned long long)*(unsigned int *)(temp_v0 + 0x614da4);
          FUN_003250ac(temp_v8);
        }
        temp_v5 = (float)in_d8;
        FUN_00324cc0();
        temp_v2 = DAT_005f162f;
        if (temp_v5 < (float)temp_v7) goto LAB_00328050;
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 4);
      temp_v1 = (unsigned char)*(unsigned short *)(temp_v0 + 0x614d96);
      temp_v2 = temp_v1;
      if (*(short *)(temp_v0 + 0x614d94) != 0) {
        temp_v2 = DAT_005f162f;
        DAT_005f1631 = temp_v1;
      }
LAB_00328050:
      DAT_005f162f = temp_v2;
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < DAT_006160dc);
  }
  return;
}

} /* extern "C" */
