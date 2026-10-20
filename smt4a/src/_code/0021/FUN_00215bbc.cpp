/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00215bbc` (_code @ 0x215bbc, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiSpriteSelectAnim(int, int);
int uiSpriteSetKeyframe(...);
int uiSpriteSetImageKeyframe(int, int, int);
int FUN_002c8538(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00588fd4; /* 0x588fd4 */

/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: FUN_002c8538. */


/* WARNING: Removing unreachable block (ram,0x0020b700) */
/* WARNING: Removing unreachable block (ram,0x0020b708) */
/* WARNING: Removing unreachable block (ram,0x0020b70c) */

void FUN_00215bbc(void)

{
/* irregular: irregular input(s): in_r3; 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_r3;
  unsigned int unaff_r4;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  FUN_002c8538(1);
  temp_v0 = DAT_00588fd4;
  uiSpriteSelectAnim(DAT_00588fd4 + 0x4a4,0);
  uiSpriteSelectAnim(temp_v0 + 0x530,1);
  uiSpriteSelectAnim(temp_v0 + 0x5bc,2);
  temp_v2 = 0;
  do {
    temp_v3 = temp_v0 + temp_v2 * 0x8c;
    temp_v4 = temp_v3 + 0x7ec;
    uiSpriteSetKeyframe(temp_v4,0x10,0,in_r3,unaff_r4);
    uiSpriteSetImageKeyframe(temp_v4,0xd,0);
    uiSpriteSetKeyframe(temp_v3 + 0xd64,1,0);
    temp_v3 = DAT_00588fd4;
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 10);
  *(unsigned char *)(DAT_00588fd4 + 0x2011) = 0;
  if ((*(char *)(temp_v3 + 0x2018) != '\n') &&
     (temp_v2 = *(int *)(temp_v3 + 0x1368), (temp_v2 == 5 || temp_v2 == 6) || temp_v2 == 7)) {
    *(unsigned int *)(temp_v3 + 0x136c) = 0;
  }
  *(unsigned int *)(temp_v0 + 0x18) = 0;
  *(unsigned char *)(temp_v0 + 0x1380) = 0;
  *(unsigned int *)(temp_v0 + 0x1c) = 0;
  *(unsigned char *)(temp_v0 + 0x20) = 0;
  temp_v0 = DAT_00588fd4;
  *(unsigned int *)(DAT_00588fd4 + 0x10) = 0;
  temp_v1 = *(unsigned int *)(temp_v0 + 0x1368);
  *(unsigned int *)(temp_v0 + 0x1368) = 2;
  *(unsigned int *)(temp_v0 + 0x1370) = temp_v1;
  return;
}

} /* extern "C" */
