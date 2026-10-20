/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002990a0` (_code @ 0x2990a0, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b8da0(int, int);
int FUN_002bd954(int, int, unsigned int, int, int);
int FUN_002bee58(int, int);
int FUN_002c09bc(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char DAT_0043e188; /* 0x43e188 */

/* Supplied declaration required: FUN_002b8da0. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: FUN_002c09bc. */


unsigned int FUN_002990a0(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0043e188 + 0x8));
  temp_v1 = FUN_002c09bc();
  if (*(int *)(temp_v1 + 0x1f454) != 0) {
    temp_v1 = FUN_002c09bc(*(int *)(temp_v1 + 0x1f454));
    *(unsigned int *)(temp_v0 + 0x9c) = *(unsigned int *)(temp_v1 + 0x1f454);
    *(unsigned char *)(temp_v0 + 0xa1) = 1;
    *(unsigned char *)(temp_v0 + 0xa0) = 1;
    temp_v1 = temp_v0 + 0x86c;
    FUN_002bd954(temp_v1,0xe,0xffffffff,temp_v0 + 0xa4,0xb);
    FUN_002b8da0(temp_v1,0x16);
    FUN_002bee58(temp_v1,6);
  }
  return 1;
}

} /* extern "C" */
