/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032c288` (_code @ 0x32c288, 0x14c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027f3dc(...);
int FUN_002b7bca(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int FUN_001d1cb8(...); /* 0x1d1cb8 */
extern int FUN_001f628c(...); /* 0x1f628c */
extern int FUN_00206d9c(...); /* 0x206d9c */
extern int FUN_00206e20(...); /* 0x206e20 */
extern int FUN_002c6dbc(...); /* 0x2c6dbc */
extern int FUN_002dcb00(...); /* 0x2dcb00 */
extern int FUN_002e45f8(...); /* 0x2e45f8 */
extern int FUN_002e467c(...); /* 0x2e467c */
extern int DAT_0044e190; /* 0x44e190 */

/* Supplied declaration required: FUN_0027f3dc. */
extern int FUN_002a0d0c(void);
/* Supplied declaration required: FUN_002b7bca. */


void FUN_0032c288(void)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *pbVar3;
  
  temp_v0 = DAT_0044e190;
  temp_v1 = FUN_002a0d0c();
  pbVar3 = (unsigned char *)(temp_v1 + 0x16);
  if ((*(unsigned char *)(temp_v1 + 0x16) & 0x7f) == 1) {
    if ((char)*(unsigned char *)(temp_v1 + 0x16) < '\0') {
      FUN_002b7bca(temp_v0 + 0xe30,(int)*(short *)(temp_v0 + 0x2230),4,FUN_002e467c);
    }
    else {
      FUN_002b7bca(temp_v0 + 0xe30,(int)*(short *)(temp_v0 + 0x2230),4,FUN_00206e20);
    }
  }
  if ((*pbVar3 & 0x7f) == 8) {
    if ((char)*pbVar3 < '\0') {
      FUN_002b7bca(temp_v0 + 0xe30,(int)*(short *)(temp_v0 + 0x2230),4,FUN_002e45f8);
    }
    else {
      FUN_002b7bca(temp_v0 + 0xe30,(int)*(short *)(temp_v0 + 0x2230),4,FUN_00206d9c);
    }
  }
  if ((*pbVar3 & 0x7f) == 2) {
    if ((char)*pbVar3 < '\0') {
      FUN_002b7bca(temp_v0 + 0xe30,(int)*(short *)(temp_v0 + 0x2230),4,FUN_002c6dbc);
    }
    else {
      FUN_002b7bca(temp_v0 + 0xe30,(int)*(short *)(temp_v0 + 0x2230),4,FUN_001d1cb8);
    }
  }
  if ((*pbVar3 & 0x7f) != 3) {
    return;
  }
  if (-1 < (char)*pbVar3) {
    FUN_0027f3dc(temp_v0 + 0xe30,(int)*(short *)(temp_v0 + 0x2230),4,FUN_001f628c);
    return;
  }
  FUN_0027f3dc(temp_v0 + 0xe30,(int)*(short *)(temp_v0 + 0x2230),4,FUN_002dcb00);
  return;
}

} /* extern "C" */
