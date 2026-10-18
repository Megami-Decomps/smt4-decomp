/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00191cf8` (_code @ 0x191cf8, 0x18c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_001d1c78(); /* 0x1d1c78 */
extern int FUN_001f643c(); /* 0x1f643c */
extern int FUN_00207280(); /* 0x207280 */
extern int FUN_00219624(); /* 0x219624 */
extern int FUN_002c6e04(); /* 0x2c6e04 */
extern int FUN_002dceac(); /* 0x2dceac */
extern int FUN_002e4abc(); /* 0x2e4abc */
extern int FUN_002f2878(); /* 0x2f2878 */

/* Supplied declaration required: FUN_0027f3d4. */
extern int FUN_002a0fac(void);
/* Supplied declaration required: FUN_002b7f0a. */


void FUN_00191cf8(int *param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *pbVar3;
  unsigned char temp_v2;
  
  temp_v1 = *param_1;
  if (*(char *)(temp_v1 + 0x420) != '\x01') {
    temp_v0 = FUN_002a0fac();
    pbVar3 = (unsigned char *)(temp_v0 + 0x11);
  }
  else {
    temp_v0 = FUN_002a0fac();
    pbVar3 = (unsigned char *)(temp_v0 + 0x12);
  }
  temp_v2 = ~(*pbVar3 >> 7) & 1;
  if ((*pbVar3 & 0x7f) == 1) {
    if (temp_v2 != 0) {
      FUN_002b7f0a(temp_v1 + 0x6278,*(unsigned int *)(temp_v1 + 0x6670),2,FUN_00207280);
    }
    else {
      FUN_002b7f0a(temp_v1 + 0x6278,*(unsigned int *)(temp_v1 + 0x6670),2,FUN_002e4abc);
    }
  }
  if ((*pbVar3 & 0x7f) == 2) {
    if (temp_v2 != 0) {
      FUN_002b7f0a(temp_v1 + 0x6278,*(unsigned int *)(temp_v1 + 0x6670),2,FUN_001d1c78);
    }
    else {
      FUN_002b7f0a(temp_v1 + 0x6278,*(unsigned int *)(temp_v1 + 0x6670),2,FUN_002c6e04);
    }
  }
  if ((*pbVar3 & 0x7f) == 0x31) {
    if (temp_v2 != 0) {
      FUN_002b7f0a(temp_v1 + 0x6278,*(unsigned int *)(temp_v1 + 0x6670),2,FUN_00219624);
    }
    else {
      FUN_002b7f0a(temp_v1 + 0x6278,*(unsigned int *)(temp_v1 + 0x6670),2,FUN_002f2878);
    }
  }
  if ((*pbVar3 & 0x7f) != 3) {
    return;
  }
  if (temp_v2 == 0) {
    FUN_0027f3d4(temp_v1 + 0x6278,*(unsigned int *)(temp_v1 + 0x6670),2,FUN_002dceac);
    return;
  }
  FUN_0027f3d4(temp_v1 + 0x6278,*(unsigned int *)(temp_v1 + 0x6670),2,FUN_001f643c);
  return;
}
