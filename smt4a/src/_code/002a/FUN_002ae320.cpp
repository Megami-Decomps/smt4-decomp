/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ae320` (_code @ 0x2ae320, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003defe0(void);
int FUN_004185a4(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_0057f28c; /* 0x57f28c */

extern int FUN_002a4860(int);
extern int FUN_002a4894(int);
extern int FUN_002f7730(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003defe0. */
/* Supplied declaration required: FUN_004185a4. */


void FUN_002ae320(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v2 = DAT_0057f28c;
  if (*(char *)(DAT_0057f28c + 0x90c) != '\0') {
    temp_v5 = DAT_0057f28c + 0x948;
    temp_v3 = DAT_0057f28c + 0xa10;
  }
  else {
    temp_v5 = DAT_0057f28c + 0x9ac;
    temp_v3 = DAT_0057f28c + 0xad6;
  }
  temp_v0 = FUN_002a4860(temp_v5);
  temp_v5 = FUN_002a4894(temp_v5);
  temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + (temp_v5 + temp_v0) * 2);
  temp_v1 = temp_v4;
  FUN_003defe0();
  if ((temp_v1 != 0) && (temp_v2 = FUN_002f7730(*(unsigned int *)(temp_v2 + 0x910),temp_v4), temp_v2 == 3)) {
    FUN_004185a4(temp_v4);
    return;
  }
  return;
}

} /* extern "C" */
