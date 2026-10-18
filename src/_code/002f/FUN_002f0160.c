/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f0160` (_code @ 0x2f0160, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp36; /* 0x36: local_36 */
} void_stack;

extern unsigned int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_002475e4. */
extern int FUN_0027eb98(unsigned int);
extern unsigned int FUN_00293c98(void);


unsigned int FUN_002f0160(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [2];
  short temp_v5;
  
  temp_v0 = FUN_0027eb98(DAT_0043427c);
  temp_v0 = *(int *)(temp_v0 + 0x28);
  *(unsigned short *)(temp_v0 + 0x14c) = 1;
  temp_v1 = FUN_0027eb98(DAT_0043427c);
  temp_v3 = *(unsigned int *)(temp_v1 + 0x20);
  temp_v2 = FUN_00293c98();
  FUN_002475e4(temp_v4,temp_v2,temp_v3);
  if (temp_v5 == 1) {
    *(unsigned short *)(temp_v0 + 0x14e) = 2;
  }
  else {
    *(unsigned short *)(temp_v0 + 0x14e) = 1;
  }
  return 1;
}
