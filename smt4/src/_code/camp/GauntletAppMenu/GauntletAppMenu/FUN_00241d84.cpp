/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00241d84` (_code @ 0x241d84, 0x184 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027f3dc(...);
int FUN_002b7bca(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int FUN_0019d758(...); /* 0x19d758 */
extern int FUN_001a80b4(...); /* 0x1a80b4 */
extern int FUN_001a8214(...); /* 0x1a8214 */
extern int FUN_001b1974(...); /* 0x1b1974 */
extern int FUN_001f64c0(...); /* 0x1f64c0 */
extern int FUN_0020713c(...); /* 0x20713c */
extern int FUN_0020729c(...); /* 0x20729c */
extern int FUN_0021966c(...); /* 0x21966c */
extern int DAT_0043dc88; /* 0x43dc88 */

/* Supplied declaration required: FUN_0027f3dc. */
extern unsigned int FUN_0029ee54(int);
extern int FUN_002a0d0c(void);
/* Supplied declaration required: FUN_002b7bca. */


void FUN_00241d84(void)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned char *pbVar5;
  
  temp_v0 = DAT_0043dc88;
  temp_v1 = FUN_002a0d0c();
  pbVar5 = (unsigned char *)(temp_v1 + 0xd);
  temp_v3 = ~(*(unsigned char *)(temp_v1 + 0xd) >> 7) & 1;
  if ((*(unsigned char *)(temp_v1 + 0xd) & 0x7f) == 0x21) {
    if (temp_v3 != 0) {
      temp_v2 = FUN_0029ee54(temp_v0 + 0x10);
      FUN_002b7bca(temp_v0 + 0x74,temp_v2,4,FUN_001a80b4);
    }
    else {
      temp_v2 = FUN_0029ee54(temp_v0 + 0x10);
      FUN_002b7bca(temp_v0 + 0x74,temp_v2,4,FUN_0020713c);
    }
  }
  if ((*pbVar5 & 0x7f) == 0x15) {
    if (temp_v3 != 0) {
      temp_v2 = FUN_0029ee54(temp_v0 + 0x10);
      FUN_002b7bca(temp_v0 + 0x74,temp_v2,4,FUN_001b1974);
    }
    else {
      temp_v2 = FUN_0029ee54(temp_v0 + 0x10);
      FUN_002b7bca(temp_v0 + 0x74,temp_v2,4,FUN_0021966c);
    }
  }
  if ((*pbVar5 & 0x7f) == 0x16) {
    if (temp_v3 != 0) {
      temp_v2 = FUN_0029ee54(temp_v0 + 0x10);
      FUN_002b7bca(temp_v0 + 0x74,temp_v2,4,FUN_0019d758);
    }
    else {
      temp_v2 = FUN_0029ee54(temp_v0 + 0x10);
      FUN_002b7bca(temp_v0 + 0x74,temp_v2,4,FUN_001f64c0);
    }
  }
  if ((*pbVar5 & 0x7f) == 3) {
    if (temp_v3 != 0) {
      temp_v2 = FUN_0029ee54(temp_v0 + 0x10);
      FUN_0027f3dc(temp_v0 + 0x74,temp_v2,4,FUN_001a8214);
      return;
    }
    temp_v2 = FUN_0029ee54(temp_v0 + 0x10);
    FUN_0027f3dc(temp_v0 + 0x74,temp_v2,4,FUN_0020729c);
    return;
  }
  return;
}

} /* extern "C" */
