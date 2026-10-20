/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028d5ac` (_code @ 0x28d5ac, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00220d24(int);
int FUN_00295214(int);
int FUN_0029ee6c(int, int);
int FUN_002b8cc8(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char g_useCounter; /* 0x43dd20 */

/* Supplied declaration required: FUN_00220d24. */
/* Supplied declaration required: FUN_00295214. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: FUN_002b8cc8. */


void FUN_0028d5ac(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&g_useCounter + 0x4));
  temp_v1 = 0;
  *(unsigned int *)((*(int *)((unsigned char *)&g_useCounter + 0x4)) + 0x744) = 4;
  if (0 < *(short *)(temp_v0 + 0x786)) {
    do {
      *(unsigned short *)(temp_v0 + temp_v1 * 2 + 0x76c) = 0xffff;
      FUN_002b8cc8();
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(short *)(temp_v0 + 0x786));
  }
  if (*(char *)(temp_v0 + 0x74e) != '\x02' && *(char *)(temp_v0 + 0x74e) != '\x01') {
    if (*(char *)(temp_v0 + 0x7f4) == '\0') {
      FUN_00295214(0);
      return;
    }
    if (*(char *)(temp_v0 + 0x7f5) != '\0') {
      FUN_00220d24(1);
    }
    else {
      FUN_0029ee6c(temp_v0 + 0x7f6,0x323232ff);
    }
    *(unsigned char *)(temp_v0 + 0x7f4) = 0;
  }
  return;
}

} /* extern "C" */
