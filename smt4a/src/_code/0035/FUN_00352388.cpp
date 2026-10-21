/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00352388` (_code @ 0x352388, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00292b84(void);
int settings5BSetValue(int);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char DAT_005806a0; /* 0x5806a0 */

/* Supplied declaration required: FUN_00292b84. */
extern int mapStateGet(void);
/* Supplied declaration required: settings5BSetValue. */


void FUN_00352388(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  if (*(int **)((*(int *)((unsigned char *)&DAT_005806a0 + 0x4)) + 700) != (int *)0x0) {
    (**(romwright_code **)(**(int **)((*(int *)((unsigned char *)&DAT_005806a0 + 0x4)) + 700) + 4))();
    *(unsigned int *)((*(int *)((unsigned char *)&DAT_005806a0 + 0x4)) + 700) = 0;
  }
  temp_v0 = (*(int *)((unsigned char *)&DAT_005806a0 + 0x4));
  temp_v1 = *(unsigned int *)((*(int *)((unsigned char *)&DAT_005806a0 + 0x4)) + 0x2cc);
  temp_v2 = *(unsigned int *)((*(int *)((unsigned char *)&DAT_005806a0 + 0x4)) + 0x2d0);
  temp_v3 = *(unsigned int *)((*(int *)((unsigned char *)&DAT_005806a0 + 0x4)) + 0x2d4);
  puVar2 = (unsigned int *)((*(int *)((unsigned char *)&DAT_005806a0 + 0x4)) + 0x48);
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_005806a0 + 0x4)) + 0x44) = temp_v1;
  *puVar2 = temp_v2;
  *(unsigned int *)(temp_v0 + 0x4c) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x38) = *(unsigned int *)(temp_v0 + 0x2c0);
  *(unsigned int *)(temp_v0 + 0x5c) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x50) = *(unsigned int *)(temp_v0 + 0x2c0);
  *(unsigned int *)(temp_v0 + 0x3c) = *(unsigned int *)(temp_v0 + 0x2c4);
  *(unsigned int *)(temp_v0 + 0x40) = *(unsigned int *)(temp_v0 + 0x2c8);
  *(unsigned int *)(temp_v0 + 0x60) = temp_v2;
  *(unsigned int *)(temp_v0 + 100) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x54) = *(unsigned int *)(temp_v0 + 0x2c4);
  *(unsigned int *)(temp_v0 + 0x58) = *(unsigned int *)(temp_v0 + 0x2c8);
  *(unsigned char *)(temp_v0 + 0x2b8) = 0;
  *(unsigned char *)(temp_v0 + 0x304) = 0;
  FUN_00292b84();
  temp_v0 = mapStateGet();
  if (temp_v0 != 0) {
    settings5BSetValue(1);
    return;
  }
  return;
}

} /* extern "C" */
