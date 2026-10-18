/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031e8e8` (_code @ 0x31e8e8, 0x98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_0043e18c; /* 0x43e18c */

/* Supplied declaration required: FUN_00201040. */
/* Supplied declaration required: FUN_00220458. */
extern unsigned int FUN_0028686c(void);
/* Supplied declaration required: FUN_00286928. */
/* Supplied declaration required: FUN_00289640. */
extern unsigned int FUN_00296f60(unsigned int);
/* Supplied declaration required: FUN_002b8574. */


unsigned int FUN_0031e8e8(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v0 = DAT_0043e18c;
  FUN_00220458();
  FUN_00201040();
  if (DAT_0043e18c != 0) {
    *(unsigned char *)(DAT_0043e18c + 0xa11) = 0x14;
  }
  temp_v1 = FUN_0028686c();
  temp_v2 = FUN_00296f60(0);
  temp_v3 = FUN_00289640();
  FUN_00286928(temp_v1,temp_v2,temp_v3,6,0,0);
  temp_v4 = FUN_00289640();
  if (temp_v4 == 0) {
    FUN_002b8574(*(unsigned int *)(temp_v0 + 4));
    *(unsigned char *)(temp_v0 + 0xa10) = 0;
    *(unsigned int *)(temp_v0 + 0xc) = *(unsigned int *)(temp_v0 + 0xc) | 0x20;
  }
  return temp_v1;
}
