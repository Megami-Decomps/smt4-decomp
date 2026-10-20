/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ed4d8` (_code @ 0x2ed4d8, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002866b4(unsigned int, unsigned int, unsigned int, int, int, int);
int scrGetCommandFrame(void);
int msgBoxFlagsSetBit7(unsigned int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int FUN_002865f8(void);
extern int FUN_0028660c(void);
/* Supplied declaration required: FUN_002866b4. */
/* Supplied declaration required: scrGetCommandFrame. */
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: msgBoxFlagsSetBit7. */


unsigned int FUN_002ed4d8(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v4 = *(int *)(param_1 + 4);
  temp_v0 = FUN_0028660c();
  if (temp_v0 == 0x14) {
    temp_v0 = 5;
  }
  temp_v1 = FUN_002865f8();
  temp_v2 = scrGetArg(0);
  temp_v3 = scrGetCommandFrame();
  FUN_002866b4(temp_v1,temp_v2,temp_v3,temp_v0,0,0);
  temp_v0 = scrGetCommandFrame();
  if (temp_v0 == 0) {
    msgBoxFlagsSetBit7(*(unsigned int *)(temp_v4 + 4));
    *(unsigned char *)(temp_v4 + 0xa10) = 0;
    *(unsigned int *)(temp_v4 + 0xc) = *(unsigned int *)(temp_v4 + 0xc) | 0x20;
  }
  return temp_v1;
}

} /* extern "C" */
