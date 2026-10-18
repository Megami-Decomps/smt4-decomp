/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00241eb4` (_code @ 0x241eb4, 0x184 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int FUN_0019d650(); /* 0x19d650 */
extern int FUN_001a7fa4(); /* 0x1a7fa4 */
extern int FUN_001a8104(); /* 0x1a8104 */
extern int FUN_001b1870(); /* 0x1b1870 */
extern int FUN_001f63d8(); /* 0x1f63d8 */
extern int FUN_00206fd8(); /* 0x206fd8 */
extern int FUN_00207138(); /* 0x207138 */
extern int FUN_00219570(); /* 0x219570 */
extern int DAT_0043dc88; /* 0x43dc88 */

/* Supplied declaration required: FUN_0027f3d4. */
extern unsigned int FUN_0029f0f4(int);
extern int FUN_002a0fac(void);
/* Supplied declaration required: FUN_002b7f0a. */


void FUN_00241eb4(void)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned char *pbVar5;
  
  temp_v0 = DAT_0043dc88;
  temp_v1 = FUN_002a0fac();
  pbVar5 = (unsigned char *)(temp_v1 + 0xd);
  temp_v3 = ~(*(unsigned char *)(temp_v1 + 0xd) >> 7) & 1;
  if ((*(unsigned char *)(temp_v1 + 0xd) & 0x7f) == 0x21) {
    if (temp_v3 != 0) {
      temp_v2 = FUN_0029f0f4(temp_v0 + 0x10);
      FUN_002b7f0a(temp_v0 + 0x74,temp_v2,4,FUN_001a7fa4);
    }
    else {
      temp_v2 = FUN_0029f0f4(temp_v0 + 0x10);
      FUN_002b7f0a(temp_v0 + 0x74,temp_v2,4,FUN_00206fd8);
    }
  }
  if ((*pbVar5 & 0x7f) == 0x15) {
    if (temp_v3 != 0) {
      temp_v2 = FUN_0029f0f4(temp_v0 + 0x10);
      FUN_002b7f0a(temp_v0 + 0x74,temp_v2,4,FUN_001b1870);
    }
    else {
      temp_v2 = FUN_0029f0f4(temp_v0 + 0x10);
      FUN_002b7f0a(temp_v0 + 0x74,temp_v2,4,FUN_00219570);
    }
  }
  if ((*pbVar5 & 0x7f) == 0x16) {
    if (temp_v3 != 0) {
      temp_v2 = FUN_0029f0f4(temp_v0 + 0x10);
      FUN_002b7f0a(temp_v0 + 0x74,temp_v2,4,FUN_0019d650);
    }
    else {
      temp_v2 = FUN_0029f0f4(temp_v0 + 0x10);
      FUN_002b7f0a(temp_v0 + 0x74,temp_v2,4,FUN_001f63d8);
    }
  }
  if ((*pbVar5 & 0x7f) == 3) {
    if (temp_v3 != 0) {
      temp_v2 = FUN_0029f0f4(temp_v0 + 0x10);
      FUN_0027f3d4(temp_v0 + 0x74,temp_v2,4,FUN_001a8104);
      return;
    }
    temp_v2 = FUN_0029f0f4(temp_v0 + 0x10);
    FUN_0027f3d4(temp_v0 + 0x74,temp_v2,4,FUN_00207138);
    return;
  }
  return;
}
