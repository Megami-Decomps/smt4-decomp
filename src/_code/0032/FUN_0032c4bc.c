/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032c4bc` (_code @ 0x32c4bc, 0x14c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int FUN_001d1bb8(); /* 0x1d1bb8 */
extern int FUN_001f61a4(); /* 0x1f61a4 */
extern int FUN_00206c38(); /* 0x206c38 */
extern int FUN_00206cbc(); /* 0x206cbc */
extern int FUN_002c6d30(); /* 0x2c6d30 */
extern int FUN_002dca98(); /* 0x2dca98 */
extern int FUN_002e4584(); /* 0x2e4584 */
extern int FUN_002e4608(); /* 0x2e4608 */
extern int DAT_0044e190; /* 0x44e190 */

/* Supplied declaration required: FUN_0027f3d4. */
extern int FUN_002a0fac(void);
/* Supplied declaration required: FUN_002b7f0a. */


void FUN_0032c4bc(void)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *pbVar3;
  
  temp_v0 = DAT_0044e190;
  temp_v1 = FUN_002a0fac();
  pbVar3 = (unsigned char *)(temp_v1 + 0x16);
  if ((*(unsigned char *)(temp_v1 + 0x16) & 0x7f) == 1) {
    if ((char)*(unsigned char *)(temp_v1 + 0x16) < '\0') {
      FUN_002b7f0a(temp_v0 + 0xe30,(int)*(short *)(temp_v0 + 0x2230),4,FUN_002e4608);
    }
    else {
      FUN_002b7f0a(temp_v0 + 0xe30,(int)*(short *)(temp_v0 + 0x2230),4,FUN_00206cbc);
    }
  }
  if ((*pbVar3 & 0x7f) == 8) {
    if ((char)*pbVar3 < '\0') {
      FUN_002b7f0a(temp_v0 + 0xe30,(int)*(short *)(temp_v0 + 0x2230),4,FUN_002e4584);
    }
    else {
      FUN_002b7f0a(temp_v0 + 0xe30,(int)*(short *)(temp_v0 + 0x2230),4,FUN_00206c38);
    }
  }
  if ((*pbVar3 & 0x7f) == 2) {
    if ((char)*pbVar3 < '\0') {
      FUN_002b7f0a(temp_v0 + 0xe30,(int)*(short *)(temp_v0 + 0x2230),4,FUN_002c6d30);
    }
    else {
      FUN_002b7f0a(temp_v0 + 0xe30,(int)*(short *)(temp_v0 + 0x2230),4,FUN_001d1bb8);
    }
  }
  if ((*pbVar3 & 0x7f) != 3) {
    return;
  }
  if (-1 < (char)*pbVar3) {
    FUN_0027f3d4(temp_v0 + 0xe30,(int)*(short *)(temp_v0 + 0x2230),4,FUN_001f61a4);
    return;
  }
  FUN_0027f3d4(temp_v0 + 0xe30,(int)*(short *)(temp_v0 + 0x2230),4,FUN_002dca98);
  return;
}
