/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b6dc4` (_code @ 0x3b6dc4, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(void);
int FUN_001add24(int);
int FUN_002e3494(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_001add24. */
/* Supplied declaration required: FUN_002e3494. */


void FUN_003b6dc4(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  
  FUN_001add24(0x45);
  temp_v1 = g_aocSystem;
  temp_v2 = 0;
  piVar4 = (int *)(g_aocSystem + 0x44c);
  if (0 < *(int *)(g_aocSystem + 0x444)) {
    do {
      temp_v3 = temp_v2 * 0x10 + 4;
      if (*(int *)(*(int *)(temp_v1 + 0x44c) + temp_v3) != 0) {
        asdMemFree();
        *(unsigned int *)(*piVar4 + temp_v3) = 0;
      }
      if (*(int *)(*(int *)(temp_v1 + 0x44c) + temp_v2 * 0x10) != 0) {
        asdMemFree();
        *(unsigned int *)(*piVar4 + temp_v2 * 0x10) = 0;
      }
      temp_v3 = temp_v2 * 0x10;
      temp_v0 = temp_v2 * 0x10;
      temp_v2 = temp_v2 + 1;
      *(unsigned char *)(*(int *)(temp_v1 + 0x44c) + temp_v3 + 0xc) = 0;
      *(unsigned char *)(*piVar4 + temp_v0 + 0xd) = 0;
    } while (temp_v2 < *(int *)(temp_v1 + 0x444));
  }
  if (*(int *)(temp_v1 + 0x44c) != 0) {
    FUN_002e3494();
    *piVar4 = 0;
  }
  *(unsigned int *)(temp_v1 + 0x444) = 0;
  return;
}

} /* extern "C" */
