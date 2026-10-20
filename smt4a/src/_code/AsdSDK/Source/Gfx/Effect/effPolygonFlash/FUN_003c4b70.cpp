/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c4b70` (_code @ 0x3c4b70, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167ab4(int, int, int, int, int, int);
int FUN_00212500(void);
int FUN_002b3b58(unsigned int, int, int, unsigned char *, int);
int FUN_00381830(unsigned int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char DAT_005c1f82; /* 0x5c1f82 */

/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_00212500. */
/* Supplied declaration required: FUN_002b3b58. */
extern unsigned int FUN_0037a834(unsigned int);
/* Supplied declaration required: FUN_00381830. */


int * FUN_003c4b70(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  piVar1 = (int *)0x10000;
  FUN_00167ab4(0x10000,0x100,0,*(int *)(param_1 + 0x38) * 0x20 + 0x10,0x10,1);
  *piVar1 = (int)(piVar1 + 4);
  piVar1[2] = (int)piVar1;
  temp_v0 = *(unsigned int *)(param_1 + 0x38) & 0xffff;
  FUN_002b3b58(temp_v0,2,4,&DAT_005c1f82,0x4c);
  piVar1[1] = temp_v0;
  if (param_2 != 0) {
    FUN_00381830(temp_v0,param_2);
  }
  else {
    temp_v1 = FUN_0037a834(0x13);
    *(unsigned int *)(temp_v0 + 4) = temp_v1;
    FUN_00212500();
  }
  temp_v0 = *(unsigned int *)(param_1 + 0x38);
  if (temp_v0 != 0) {
    temp_v2 = 0;
    puVar3 = *(unsigned int **)(*(int *)(piVar1[1] + 8) + 0x3c);
    do {
      if ((temp_v2 & 1) != 0) {
        *puVar3 = 0x3f000000;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0x3f000000;
        puVar3[5] = 0x3f800000;
        puVar3[6] = 0;
        puVar3[7] = 0x3f800000;
      }
      else {
        *puVar3 = 0x3f800000;
        puVar3[1] = 0;
        puVar3[2] = 0x3f000000;
        puVar3[3] = 0;
        puVar3[4] = 0x3f800000;
        puVar3[5] = 0x3f800000;
        puVar3[6] = 0x3f000000;
        puVar3[7] = 0x3f800000;
      }
      temp_v2 = temp_v2 + 1;
      puVar3 = puVar3 + 8;
    } while (temp_v2 < temp_v0);
  }
  return piVar1;
}

} /* extern "C" */
