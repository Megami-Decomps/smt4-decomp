/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f76d0` (_code @ 0x2f76d0, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_0028dcb0. */
extern unsigned int FUN_00296cc8(unsigned int);
/* Supplied declaration required: FUN_002b06c4. */
extern int FUN_002c09f4(short);


unsigned int FUN_002f76d0(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  unsigned int temp_v3 [4];
  
  temp_v0 = FUN_00296cc8(0) & 0xffff;
  FUN_002b06c4();
  temp_v3[0] = (unsigned int)*(unsigned short *)(temp_v0 + 0x58);
  temp_v3[1] = (unsigned int)*(unsigned short *)(temp_v0 + 0x5e);
  temp_v2 = (unsigned short)(temp_v3[0] != 0);
  temp_v3[2] = (unsigned int)*(unsigned short *)(temp_v0 + 100);
  if (temp_v3[1] != 0) {
    temp_v2 = temp_v2 + 1;
  }
  if (temp_v3[2] != 0) {
    temp_v2 = temp_v2 + 1;
  }
  temp_v0 = 0xffffffff;
  if (temp_v2 != 0) {
    temp_v1 = FUN_002c09f4(temp_v2 - 1);
    temp_v0 = temp_v3[temp_v1];
  }
  FUN_0028dcb0(temp_v0);
                    /* WARNING: Treating indirect jump as return */
  return 1;
}
