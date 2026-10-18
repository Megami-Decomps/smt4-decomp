/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00309fdc` (_code @ 0x309fdc, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_0043e190; /* 0x43e190 */

extern unsigned int FUN_0028686c(void);
/* Supplied declaration required: FUN_00286928. */
/* Supplied declaration required: FUN_002892a0. */
/* Supplied declaration required: FUN_00289640. */
/* Supplied declaration required: FUN_0028df3c. */
extern unsigned int FUN_00296f60(unsigned int);
extern unsigned char FUN_003823c8(void);


void FUN_00309fdc(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  FUN_002892a0();
  temp_v1 = FUN_003823c8();
  FUN_0028df3c(0);
  temp_v2 = FUN_00289640();
  temp_v0 = DAT_0043e190;
  if (temp_v2 == 0) {
    if (DAT_0043e190 != 0) {
      *(unsigned char *)(DAT_0043e190 + 0x30) = 1;
    }
    *(unsigned char *)(temp_v0 + 0x31) = 1;
  }
  temp_v3 = FUN_0028686c();
  temp_v4 = FUN_00296f60(0);
  temp_v5 = FUN_00289640();
  FUN_00286928(temp_v3,temp_v4,temp_v5,temp_v1,1,0);
  return;
}
