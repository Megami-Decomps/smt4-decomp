/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029e648` (_code @ 0x29e648, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b8da0(int, int);
int FUN_002bd954(int, int, unsigned int, int, int);
int FUN_002bee58(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned char DAT_0043e188; /* 0x43e188 */

extern unsigned int *FUN_002a8764(void);
/* Supplied declaration required: FUN_002b8da0. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002bee58. */
extern unsigned int FUN_002d8c28(void);


unsigned int FUN_0029e648(unsigned char param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0043e188 + 0x8));
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043e188 + 0x8)) + 0x7d) = 1;
  *(unsigned char *)(temp_v0 + 0x7c) = 1;
  if (param_2 != 0) {
    temp_v1 = FUN_002d8c28();
    *(unsigned int *)(temp_v0 + 0x6c) = temp_v1;
    *(unsigned int *)(temp_v0 + 0x78) = temp_v1;
  }
  else {
    puVar4 = (unsigned int *)FUN_002a8764();
    temp_v1 = *puVar4;
    *(unsigned int *)(temp_v0 + 0x6c) = temp_v1;
    *(unsigned int *)(temp_v0 + 0x78) = temp_v1;
  }
  *(unsigned char *)(temp_v0 + 0x80) = 0;
  *(unsigned char *)(temp_v0 + 0x7f) = param_1;
  *(unsigned char *)(temp_v0 + 0xa1) = 0;
  temp_v2 = temp_v0 + 0x754;
  FUN_002bd954(temp_v2,0xe,0xffffffff,temp_v0 + 0xa4,0xb);
  FUN_002b8da0(temp_v2,0);
  FUN_002bee58(temp_v2,6);
  return 1;
}

} /* extern "C" */
