/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035d65c` (_code @ 0x35d65c, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00237a7c(int, int *, int);
int FUN_00237a94(int [2], int);
int FUN_00237cfc(int *, int *);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: FUN_00237a7c. */
/* Supplied declaration required: FUN_00237a94. */
/* Supplied declaration required: FUN_00237cfc. */
extern int FUN_00237d9c(int, unsigned char);


unsigned int FUN_0035d65c(int *param_1,int *param_2,int *param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3 [2];
  
  FUN_00237cfc(&temp_v2,param_1);
  if (temp_v2 != 0) {
    FUN_00237a94(temp_v3,*param_3 + 8);
    if (temp_v3[0] != 0) {
      temp_v1 = temp_v2;
      FUN_00237a7c(temp_v3[0] + 8,&temp_v1,param_1[5]);
      temp_v0 = FUN_00237d9c(temp_v3[0] + 0x10,*(unsigned char *)(*param_1 + 10));
      if (temp_v0 != 0) {
        *param_2 = temp_v2;
        *param_1 = *(int *)(*param_1 + 4);
        return 0;
      }
    }
  }
  return 2;
}

} /* extern "C" */
