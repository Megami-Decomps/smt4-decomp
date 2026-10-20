/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032aa84` (_code @ 0x32aa84, 0x1f4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027f3dc(...);
int FUN_002b7bca(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_001b1824(...); /* 0x1b1824 */
extern int FUN_001e16ec(...); /* 0x1e16ec */
extern int FUN_001e1794(...); /* 0x1e1794 */
extern int FUN_001f62ec(...); /* 0x1f62ec */
extern int FUN_002193bc(...); /* 0x2193bc */
extern int FUN_00219488(...); /* 0x219488 */
extern int FUN_002d0470(...); /* 0x2d0470 */
extern int FUN_002d04ac(...); /* 0x2d04ac */
extern int FUN_002dcb60(...); /* 0x2dcb60 */
extern int FUN_002f2798(...); /* 0x2f2798 */
extern int DAT_0043dd50; /* 0x43dd50 */

/* Supplied declaration required: FUN_0027f3dc. */
extern unsigned int FUN_0029ee54(int);
extern int FUN_002a0d0c(void);
/* Supplied declaration required: FUN_002b7bca. */


void FUN_0032aa84(int param_1)

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
    temp_v0 = FUN_002a0d0c();
    pbVar3 = (unsigned char *)(temp_v0 + 0xe);
    temp_v3 = temp_v4 + 0x660;
    temp_v4 = temp_v4 + 0x78a;
    temp_v2 = ~(*(unsigned char *)(temp_v0 + 0xe) >> 7) & 1;
    if ((*(unsigned char *)(temp_v0 + 0xe) & 0x7f) == 0x22) {
      if (temp_v2 != 0) {
        temp_v1 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v4,temp_v1,2,FUN_001e16ec);
      }
      else {
        temp_v1 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v4,temp_v1,2,FUN_002d0470);
      }
    }
    if ((*pbVar3 & 0x7f) == 0x21) {
      if (temp_v2 != 0) {
        temp_v1 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v4,temp_v1,2,FUN_001f62ec);
      }
      else {
        temp_v1 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v4,temp_v1,2,FUN_002dcb60);
      }
    }
    if ((*pbVar3 & 0x7f) == 0x18) {
      if (temp_v2 != 0) {
        temp_v1 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v4,temp_v1,2,FUN_00219488);
      }
      else {
        temp_v1 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v4,temp_v1,2,FUN_002f2798);
      }
    }
    if ((*pbVar3 & 0x7f) == 0x19) {
      if (temp_v2 != 0) {
        temp_v1 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v4,temp_v1,2,FUN_001b1824);
      }
      else {
        temp_v1 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v4,temp_v1,2,FUN_002193bc);
      }
    }
    if ((*pbVar3 & 0x7f) == 0x1a) {
      if (temp_v2 != 0) {
        temp_v1 = FUN_0029ee54(temp_v3);
        FUN_0027f3dc(temp_v4,temp_v1,2,FUN_001e1794);
        return;
      }
      temp_v1 = FUN_0029ee54(temp_v3);
      FUN_0027f3dc(temp_v4,temp_v1,2,FUN_002d04ac);
      return;
    }
  }
  return;
}

} /* extern "C" */
