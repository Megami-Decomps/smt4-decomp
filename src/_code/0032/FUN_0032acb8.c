/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032acb8` (_code @ 0x32acb8, 0x1f4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_001b1720(); /* 0x1b1720 */
extern int FUN_001e15ec(); /* 0x1e15ec */
extern int FUN_001e1694(); /* 0x1e1694 */
extern int FUN_001f6204(); /* 0x1f6204 */
extern int FUN_002192c0(); /* 0x2192c0 */
extern int FUN_0021938c(); /* 0x21938c */
extern int FUN_002d03c4(); /* 0x2d03c4 */
extern int FUN_002d0400(); /* 0x2d0400 */
extern int FUN_002dcaf8(); /* 0x2dcaf8 */
extern int FUN_002f274c(); /* 0x2f274c */
extern int DAT_0043dd50; /* 0x43dd50 */

/* Supplied declaration required: FUN_0027f3d4. */
extern unsigned int FUN_0029f0f4(int);
extern int FUN_002a0fac(void);
/* Supplied declaration required: FUN_002b7f0a. */


void FUN_0032acb8(int param_1)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char *pbVar3;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v4 = DAT_0043dd50;
  if (param_1 == 0) {
    temp_v0 = FUN_002a0fac();
    pbVar3 = (unsigned char *)(temp_v0 + 0xe);
    temp_v3 = temp_v4 + 0x660;
    temp_v4 = temp_v4 + 0x78a;
    temp_v2 = ~(*(unsigned char *)(temp_v0 + 0xe) >> 7) & 1;
    if ((*(unsigned char *)(temp_v0 + 0xe) & 0x7f) == 0x22) {
      if (temp_v2 != 0) {
        temp_v1 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v4,temp_v1,2,FUN_001e15ec);
      }
      else {
        temp_v1 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v4,temp_v1,2,FUN_002d03c4);
      }
    }
    if ((*pbVar3 & 0x7f) == 0x21) {
      if (temp_v2 != 0) {
        temp_v1 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v4,temp_v1,2,FUN_001f6204);
      }
      else {
        temp_v1 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v4,temp_v1,2,FUN_002dcaf8);
      }
    }
    if ((*pbVar3 & 0x7f) == 0x18) {
      if (temp_v2 != 0) {
        temp_v1 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v4,temp_v1,2,FUN_0021938c);
      }
      else {
        temp_v1 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v4,temp_v1,2,FUN_002f274c);
      }
    }
    if ((*pbVar3 & 0x7f) == 0x19) {
      if (temp_v2 != 0) {
        temp_v1 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v4,temp_v1,2,FUN_001b1720);
      }
      else {
        temp_v1 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v4,temp_v1,2,FUN_002192c0);
      }
    }
    if ((*pbVar3 & 0x7f) == 0x1a) {
      if (temp_v2 != 0) {
        temp_v1 = FUN_0029f0f4(temp_v3);
        FUN_0027f3d4(temp_v4,temp_v1,2,FUN_001e1694);
        return;
      }
      temp_v1 = FUN_0029f0f4(temp_v3);
      FUN_0027f3d4(temp_v4,temp_v1,2,FUN_002d0400);
      return;
    }
  }
  return;
}
