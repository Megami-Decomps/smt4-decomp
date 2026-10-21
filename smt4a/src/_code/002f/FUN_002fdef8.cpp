/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fdef8` (_code @ 0x2fdef8, 0xae bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int strAssign(unsigned char [36], int, int, unsigned int);
int FUN_002e7614(unsigned char [32], unsigned int);
int strInit(unsigned char [36]);
int strDestroy(...);
int FUN_002fd03a(int *, unsigned char [32]);

typedef int romwright_code(...);
/* Supplied declaration required: strAssign. */
/* Supplied declaration required: FUN_002e7614. */
/* Supplied declaration required: strInit. */
/* Supplied declaration required: strDestroy. */
/* Supplied declaration required: FUN_002fd03a. */
extern int stringRefEqual(unsigned char *, unsigned char *);


unsigned int FUN_002fdef8(int *param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [32];
  unsigned char temp_v5 [36];
  
  temp_v1 = (**(romwright_code **)(*param_1 + 0x10))(param_1);
  if (temp_v1 != 0) {
    if ((char)param_1[2] == '\0') {
      temp_v0 = (**(romwright_code **)(*param_1 + 0x1c))(param_1);
      *(unsigned char *)(param_1 + 2) = temp_v0;
    }
    if ((unsigned int)*(unsigned char *)(param_1 + 2) <= *(unsigned int *)(param_2 + 0x10)) {
      strInit(temp_v5);
      temp_v1 = *(int *)(param_2 + 0x10) - (unsigned int)*(unsigned char *)(param_1 + 2);
      *(int *)(param_2 + 0x10) = temp_v1;
      strAssign(temp_v5,*(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x18) + temp_v1,
                   (char)param_1[2],0xffffffff);
      temp_v2 = (**(romwright_code **)(*param_1 + 0x1c))(param_1);
      FUN_002e7614(temp_v4,temp_v2);
      (**(romwright_code **)(*param_1 + 8))(param_1,param_2,temp_v4);
      temp_v3 = (**(romwright_code **)(*param_1 + 0x1c))(param_1);
      if (*(unsigned char *)(param_1 + 2) < temp_v3) {
        FUN_002fd03a(param_1,temp_v4);
      }
      temp_v1 = stringRefEqual(temp_v5,temp_v4);
      if (temp_v1 != 0) {
        strDestroy(temp_v4);
        strDestroy(temp_v5);
        return 1;
      }
      strDestroy(temp_v4);
      strDestroy(temp_v5);
    }
  }
  return 0;
}

} /* extern "C" */
