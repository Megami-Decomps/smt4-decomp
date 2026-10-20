/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00388968` (_code @ 0x388968, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(int, int, int, int, int);
int FUN_001846d0(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char DAT_0057f588; /* 0x57f588 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_001846d0. */
extern unsigned int scrGetArg(unsigned int);
extern int FUN_002deb84(void);


unsigned char FUN_00388968(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f588 + 0x8));
  temp_v1 = FUN_002deb84();
  if (temp_v1 == 0) {
    temp_v2 = scrGetArg(0);
    temp_v1 = (*(int *)((unsigned char *)&DAT_0057f588 + 0x8));
    temp_v3 = (*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0x144c;
    FUN_0014e188(temp_v3,4,0xabe1,(*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0x194,0xb);
    FUN_001846d0(temp_v3,0xb);
    *(unsigned int *)(temp_v1 + 0x19f4) = temp_v2;
    *(unsigned char *)(temp_v1 + 0x19f1) = 1;
    *(unsigned char *)(temp_v1 + 0x19f2) = 1;
    *(unsigned char *)(temp_v1 + 0x19f0) = 1;
  }
  return *(char *)(temp_v0 + 0x19f1) == '\0';
}

} /* extern "C" */
