/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00173818` (_code @ 0x173818, 0x1a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001743b8(int *);
int FUN_0018c87c(...);
int FUN_001b6668(int);
int FUN_002f5020(unsigned char *, unsigned char *, int, int);
int UnsignedDoesSaturate(int, int);
int UnsignedSaturate(int, int);
int nw_ut_internal_LinkListImpl_insert(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char LAB_00197f28; /* 0x197f28 */
extern unsigned int DAT_005c1d2c; /* 0x5c1d2c */
extern unsigned char DAT_00647778; /* 0x647778 */

/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: UnsignedDoesSaturate (CALLOTHER). */
/* Supplied declaration required: FUN_001743b8. */
/* Supplied declaration required: FUN_0018c87c. */
/* Supplied declaration required: FUN_001b6668. */
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


/* WARNING: Removing unreachable block (ram,0x0017396c) */

void FUN_00173818(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  int *piVar6;
  
  piVar5 = *(int **)(param_1 + 0x28);
  if (piVar5 != (int *)(param_1 + 0x28)) {
    do {
      piVar6 = (int *)*piVar5;
      if ((char)piVar5[-1] == '\x02') {
        FUN_001b6668(param_1 + 0x24);
        nw_ut_internal_LinkListImpl_insert(param_1 + 0x18,param_1 + 0x1c,piVar5);
      }
      piVar5 = piVar6;
    } while (piVar6 != (int *)(param_1 + 0x28));
  }
  piVar5 = *(int **)(param_1 + 4);
  if (*(int **)(param_1 + 4) != (int *)(param_1 + 4)) {
    do {
      piVar6 = (int *)*piVar5;
      FUN_001743b8(piVar5 + -0x40);
      piVar5 = piVar6;
    } while (piVar6 != (int *)(param_1 + 4));
  }
  if (*(unsigned int *)(param_1 + 0xc) >= 2) {
    if (((DAT_005c1d2c & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&DAT_005c1d2c), temp_v0 != 0)) {
      FUN_002f5020(&DAT_00647778,&LAB_00197f28,0xc,0x80);
    }
    while (*(int *)(param_1 + 0xc) != 0) {
      temp_v2 = *(int *)(param_1 + 0x10);
      FUN_0018c87c(param_1 + 0xc);
      temp_v1 = (unsigned int)*(unsigned char *)(temp_v2 - 0x6b) + *(int *)(temp_v2 - 0xb8);
      temp_v0 = UnsignedSaturate(temp_v1,7);
      UnsignedDoesSaturate(temp_v1,7);
      nw_ut_internal_LinkListImpl_insert(&DAT_00647778 + temp_v0 * 0xc,temp_v0 * 0xc + 0x64777c,temp_v2);
    }
    temp_v0 = 0;
    do {
      while (*(int *)(&DAT_00647778 + temp_v0 * 0xc) != 0) {
        temp_v3 = *(unsigned int *)(temp_v0 * 0xc + 0x64777c);
        FUN_0018c87c();
        nw_ut_internal_LinkListImpl_insert(param_1 + 0xc,param_1 + 0x10,temp_v3);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x80);
  }
  return;
}

} /* extern "C" */
