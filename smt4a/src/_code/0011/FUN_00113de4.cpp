/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00113de4` (_code @ 0x113de4, 0x76 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], int);
int FUN_002e6e5c(unsigned char [12]);
int FUN_002fe9ea(int [2]);
int FUN_002fea02(int *, int, int *);

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
} param_2_stack;

extern unsigned char DAT_00594958; /* 0x594958 */

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002fe9ea. */
extern int FUN_002fe9f2(int *, int *);
/* Supplied declaration required: FUN_002fea02. */


void FUN_00113de4(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [12];
  int temp_v4 [2];
  int temp_v5;
  int iStack_1c;
  int temp_v6;
  
  if ((*(signed char *)((unsigned char *)&DAT_00594958 + 0x5)) != '\0') {
    iStack_1c = param_1;
    temp_v6 = param_2;
    FUN_002e6e34(temp_v3,param_1 + 0x18);
    temp_v2 = *(int *)(param_1 + 8);
    piVar2 = (int *)(param_1 + 0x10);
    while (temp_v0 = FUN_002fe9f2(&temp_v2,piVar2), temp_v0 != 0) {
      temp_v4[0] = temp_v2;
      temp_v0 = *piVar2;
      while ((temp_v4[0] != temp_v0 && (temp_v4[0] != temp_v6))) {
        FUN_002fe9ea(temp_v4);
      }
      temp_v2 = temp_v4[0];
      temp_v0 = FUN_002fe9f2(&temp_v2,piVar2);
      if (temp_v0 != 0) {
        temp_v1 = temp_v2;
        FUN_002fea02(&temp_v5,param_1 + 4,&temp_v1);
        temp_v2 = temp_v5;
      }
    }
    FUN_002e6e5c(temp_v3);
  }
  return;
}

} /* extern "C" */
