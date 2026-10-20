/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00113d9c` (_code @ 0x113d9c, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, int *);
int FUN_002e6e5c(int *);
int FUN_002fe9ea(int **);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_00594958; /* 0x594958 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002fe9ea. */
extern int FUN_002fe9f2(int **, int *);


unsigned long long FUN_00113d9c(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *temp_v1;
  int uStack_14;
  unsigned int uStack_10;
  unsigned int uStack_c;
  
  temp_v1 = param_1;
  uStack_14 = param_2;
  if ((*(signed char *)((unsigned char *)&DAT_00594958 + 0x5)) != '\0') {
    uStack_10 = param_3;
    uStack_c = param_4;
    FUN_002e6e34(&uStack_14,param_1 + 6);
    temp_v1 = (int *)param_1[2];
    while (temp_v0 = FUN_002fe9f2(&temp_v1,param_1 + 4), temp_v0 != 0) {
      (**(romwright_code **)(*temp_v1 + 8))();
      FUN_002fe9ea(&temp_v1);
    }
    FUN_002e6e5c(&uStack_14);
  }
  return romwright_piece_4_4(uStack_14,temp_v1);
}

} /* extern "C" */
