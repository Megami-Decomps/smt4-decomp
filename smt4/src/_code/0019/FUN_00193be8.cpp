/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00193be8` (_code @ 0x193be8, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a1110(void);
int FUN_00291050(unsigned char *);
int FUN_002c4938(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */

/* Supplied declaration required: FUN_001a1110. */
/* Supplied declaration required: FUN_00291050. */
/* Supplied declaration required: FUN_002c4938. */


void FUN_00193be8(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0043e2a8 + 0x4));
  puVar2 = (unsigned char *)((*(int *)((unsigned char *)&DAT_0043e2a8 + 0x4)) + 0x80);
  FUN_00291050(puVar2);
  *puVar2 = 2;
  *(unsigned char *)(temp_v0 + 0x81) = 2;
  *(unsigned char *)(temp_v0 + 0x82) = 2;
  *(unsigned char *)(temp_v0 + 0x83) = 1;
  *(unsigned char *)(temp_v0 + 0x84) = 1;
  FUN_001a1110();
  FUN_002c4938((*(int *)((unsigned char *)&DAT_0043e2a8 + 0x4)),0x80);
  return;
}

} /* extern "C" */
