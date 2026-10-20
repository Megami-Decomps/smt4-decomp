/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00385444` (_code @ 0x385444, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0020f12c(unsigned int, unsigned int);
int FUN_00227a70(void);
int FUN_002a2e98(...);
int FUN_00353d74(void);
int FUN_00378000(void);
int FUN_00378924(void);
int FUN_00385a10(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00581274; /* 0x581274 */

extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_0020f12c. */
/* Supplied declaration required: FUN_00227a70. */
/* Supplied declaration required: FUN_002a2e98. */
/* Supplied declaration required: FUN_00353d74. */
/* Supplied declaration required: FUN_00378000. */
/* Supplied declaration required: FUN_00378924. */
/* Supplied declaration required: FUN_00385a10. */


void FUN_00385444(void)

{
/* irregular: 4 goto(s); 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  
  temp_v0 = DAT_00581274;
  if (DAT_00581274 == 0) {
    return;
  }
  FUN_00227a70();
  if (*(int *)(temp_v0 + 0x30) == 0x11) {
    if (*(int *)(temp_v0 + 0x34) == 1) {
      temp_v1 = FUN_0018719c(0xd9);
      if (temp_v1 != 0) goto LAB_00385484;
LAB_003854c8:
      FUN_002a2e98(*(unsigned int *)(temp_v0 + 0x30),*(unsigned int *)(temp_v0 + 0x34),
                   *(unsigned int *)(temp_v0 + 0x30),99);
      FUN_00378924();
      FUN_00385a10();
      FUN_00353d74();
      FUN_00378000();
      FUN_0020f12c(*(unsigned int *)(temp_v0 + 0x30),*(unsigned int *)(temp_v0 + 0x34));
      return;
    }
LAB_0038550c:
    temp_v5 = 0;
    temp_v2 = *(unsigned int *)(temp_v0 + 0x30);
    temp_v3 = *(unsigned int *)(temp_v0 + 0x34);
    temp_v4 = 0;
  }
  else {
LAB_00385484:
    if (*(int *)(temp_v0 + 0x30) == 5) {
      if (*(int *)(temp_v0 + 0x34) != 1) goto LAB_0038550c;
      temp_v1 = FUN_0018719c(0x1ca);
      if (temp_v1 == 0) goto LAB_003854c8;
    }
    temp_v1 = *(int *)(temp_v0 + 0x30);
    temp_v6 = temp_v1 != 3;
    if (!temp_v6) {
      temp_v1 = *(int *)(temp_v0 + 0x34);
    }
    if (((temp_v6 || temp_v1 != 3) || (temp_v1 = FUN_0018719c(0x171), temp_v1 == 0)) ||
       (temp_v1 = FUN_0018719c(0x177), temp_v1 != 0)) goto LAB_0038550c;
    temp_v2 = *(unsigned int *)(temp_v0 + 0x30);
    temp_v3 = *(unsigned int *)(temp_v0 + 0x34);
    temp_v5 = 99;
    temp_v4 = temp_v2;
  }
  FUN_002a2e98(temp_v2,temp_v3,temp_v4,temp_v5);
  FUN_00378924();
  FUN_00385a10();
  FUN_00353d74();
  FUN_00378000();
  FUN_0020f12c(*(unsigned int *)(temp_v0 + 0x30),*(unsigned int *)(temp_v0 + 0x34));
  return;
}

} /* extern "C" */
