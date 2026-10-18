/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012bed0` (_code @ 0x12bed0, 0xe2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_0012bce9; /* 0x12bce9 */
extern unsigned char LAB_0012bfbc; /* 0x12bfbc */
extern unsigned char LAB_0012c1a1; /* 0x12c1a1 */

/* Supplied declaration required: FUN_0011f57c. */
/* Supplied declaration required: FUN_0012071c. */
extern int FUN_002e760a(unsigned int);
extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
/* Supplied declaration required: FUN_002e9af4. */
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002ea3c0. */
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002eb310. */
extern int FUN_002eb404(unsigned char *);
/* Supplied declaration required: FUN_002f7c94. */
/* Supplied declaration required: FUN_002f7cb0. */
/* Supplied declaration required: FUN_002f7cba. */
/* Supplied declaration required: FUN_0030c800. */


void FUN_0012bed0(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [8];
  unsigned char temp_v4 [12];
  unsigned char temp_v5 [12];
  int temp_v6;
  
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    FUN_0011f57c(temp_v3);
    for (temp_v0 = *(int *)(param_1 + 0x110); *(int *)(param_1 + 0x114) != temp_v0; temp_v0 = temp_v0 + 0x18
        ) {
      if (*(int *)(temp_v0 + 0x10) != 0) {
        FUN_002eb310(temp_v4,temp_v0 + 0x10);
      }
    }
    temp_v0 = FUN_002eb404(temp_v4);
    if (temp_v0 != 0) {
      temp_v1 = FUN_002ea3c0(temp_v5,&LAB_0012bce9,0,&LAB_0012bfbc);
      FUN_002ea3d0(param_1,temp_v1);
    }
    else {
      temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 0x70) + 0x74))
                        (*(int **)(param_1 + 0x70),param_1 + 0x80,temp_v3,param_1 + 0x3fc);
      if (temp_v0 != 0) {
        temp_v2 = *(unsigned int *)(param_1 + 0xc4);
        temp_v1 = FUN_002e9af4();
        FUN_002f7c94(temp_v1,*(unsigned int *)(param_1 + 0x68),temp_v2);
        FUN_002f7cb0(param_1);
        temp_v0 = FUN_002e760a(0x10);
        temp_v1 = 0;
        if (temp_v0 != 0) {
          temp_v1 = FUN_002ea3c0(temp_v0,&LAB_0012c1a1,0,&LAB_0012bfbc);
        }
        FUN_002f7cba(param_1,param_1 + 0x80,temp_v1);
      }
      else {
        temp_v6 = 0x8001000d;
        temp_v1 = FUN_002e7908(temp_v5,(unsigned int *)&temp_v6);
        FUN_0030c800(param_1,temp_v1);
      }
    }
    FUN_0012071c(temp_v3);
  }
  else {
    temp_v6 = 0x80010004;
    temp_v1 = FUN_002e7908(temp_v5,(unsigned int *)&temp_v6);
    FUN_0030c800(param_1,temp_v1);
  }
  return;
}
