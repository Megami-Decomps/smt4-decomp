/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00221168` (_code @ 0x221168, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_0043e18c; /* 0x43e18c */
extern int DAT_0043e190; /* 0x43e190 */

extern unsigned int FUN_0028686c(void);
/* Supplied declaration required: FUN_00286928. */
/* Supplied declaration required: FUN_00289640. */
/* Supplied declaration required: FUN_0028df3c. */
extern unsigned int FUN_00296f60(unsigned int);


void FUN_00221168(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  FUN_0028df3c(0);
  temp_v1 = FUN_00289640();
  temp_v0 = DAT_0043e190;
  if (temp_v1 == 0) {
    if (DAT_0043e190 != 0) {
      *(unsigned char *)(DAT_0043e190 + 0x30) = 1;
    }
    *(unsigned char *)(temp_v0 + 0x31) = 1;
  }
  if (DAT_0043e18c != 0) {
    *(unsigned char *)(DAT_0043e18c + 0xa11) = 0x14;
  }
  temp_v2 = FUN_0028686c();
  temp_v3 = FUN_00296f60(0);
  temp_v4 = FUN_00289640();
  FUN_00286928(temp_v2,temp_v3,temp_v4,6,1,0);
  return;
}
