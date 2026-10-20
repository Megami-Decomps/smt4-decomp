/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030eb40` (_code @ 0x30eb40, 0x7a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int arrayElementAddress_0030eb14(int, unsigned int);
int FUN_0030ebe4(int, unsigned int, int *);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned int DAT_005c4c3c; /* 0x5c4c3c */

/* Supplied declaration required: arrayElementAddress_0030eb14. */
/* Supplied declaration required: FUN_0030ebe4. */


void FUN_0030eb40(int *param_1,int *param_2,unsigned int *param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  unsigned int *puVar2;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = param_4;
  if ((param_2[2] & 1U) == 0) {
    if (*param_3 == 0) {
      DAT_005c4c3c = DAT_005c4c3c + 1;
      *param_3 = DAT_005c4c3c;
    }
    (**(romwright_code **)(*param_2 + 8))(param_2,param_1);
    param_2[2] = param_2[2] | 1;
  }
  temp_v1 = *param_3;
  if (*(unsigned int *)(*param_1 + 0xc) <= temp_v1) {
    temp_v2 = 0;
    FUN_0030ebe4(*param_1 + 8,temp_v1 + 1,&temp_v2);
  }
  piVar1 = (int *)arrayElementAddress_0030eb14(*param_1 + 8,temp_v1);
  piVar1 = (int *)*piVar1;
  if ((piVar1 != (int *)0x0) && (temp_v0 = piVar1[3], piVar1[3] = temp_v0 - 1, temp_v0 - 1 == 0)) {
    (**(romwright_code **)(*piVar1 + 4))();
  }
  param_2[3] = param_2[3] + 1;
  puVar2 = (unsigned int *)arrayElementAddress_0030eb14(*param_1 + 8,temp_v1);
  *puVar2 = (unsigned int)param_2;
  return;
}

} /* extern "C" */
