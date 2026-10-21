/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047815c` (_code @ 0x47815c, 0x170 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int multibyteToUtf16(int, int, int);
int FUN_00473e98(int, int, unsigned char *, int, int, int, int);
int FUN_00477d10(int, unsigned int, int);
int FUN_0047bcdc(int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_004782d0; /* 0x4782d0 */
extern int g_aocMain; /* 0x570260 */

/* Supplied declaration required: multibyteToUtf16. */
/* Supplied declaration required: FUN_00473e98. */
/* Supplied declaration required: FUN_00477d10. */
/* Supplied declaration required: FUN_0047bcdc. */


void FUN_0047815c(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = g_aocMain;
  temp_v0 = *(int *)(param_1 + 8);
  if (temp_v0 == 0) {
    *(unsigned int *)(param_1 + 8) = 1;
  }
  else {
    if (temp_v0 == 1) {
      *(unsigned int *)(g_aocMain + 0x694) = 0;
      *(unsigned int *)(temp_v1 + 0x698) = 0;
      *(unsigned int *)(temp_v1 + 0x69c) = 0;
      *(unsigned int *)(temp_v1 + 0x6a0) = 0;
      *(unsigned int *)(temp_v1 + 0x6a4) = 0;
      *(unsigned int *)(temp_v1 + 0x6a8) = 0;
      *(unsigned int *)(temp_v1 + 0x6ac) = 0;
      *(unsigned int *)(temp_v1 + 0x6b0) = 0;
      *(unsigned int *)(temp_v1 + 0x6b4) = 0;
      *(unsigned int *)(temp_v1 + 0x6b8) = 0;
      *(unsigned int *)(temp_v1 + 0x6bc) = 0;
      *(unsigned int *)(temp_v1 + 0x6c0) = 0;
      *(unsigned int *)(temp_v1 + 0x6c4) = 0;
      *(unsigned int *)(temp_v1 + 0x6c8) = 0;
      *(unsigned int *)(temp_v1 + 0x6cc) = 0;
      *(unsigned int *)(temp_v1 + 0x6d0) = 0;
      FUN_00473e98(temp_v1,temp_v1 + 0x694,&LAB_004782d0,0x10,0,1,temp_v1 + 0x6d4);
      if (temp_v1 == 0) {
        *(unsigned int *)(param_1 + 8) = 2;
        *(unsigned int *)(param_1 + 0xc) = 3;
        return;
      }
      multibyteToUtf16(g_aocMain + 0x6d4,g_aocMain + 0x694,0x40);
      *(unsigned int *)(param_1 + 4) = 0xe;
      *(unsigned int *)(param_1 + 8) = 0;
      if (*(int **)(param_1 + 0x208) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(param_1 + 0x208) + 4))();
        *(unsigned int *)(param_1 + 0x208) = 0;
      }
      FUN_0047bcdc(param_1,0);
      FUN_00477d10(param_1,0xffffffff,0);
      return;
    }
    if ((temp_v0 == 2) &&
       (temp_v1 = *(int *)(param_1 + 0xc) - 1, *(int *)(param_1 + 0xc) = temp_v1, temp_v1 < 1)) {
      *(unsigned int *)(param_1 + 4) = 6;
      *(unsigned int *)(param_1 + 8) = 0;
      if (*(int **)(param_1 + 0x208) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(param_1 + 0x208) + 4))();
        *(unsigned int *)(param_1 + 0x208) = 0;
      }
    }
  }
  return;
}

} /* extern "C" */
