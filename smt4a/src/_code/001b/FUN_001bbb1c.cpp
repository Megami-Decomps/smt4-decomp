/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001bbb1c` (_code @ 0x1bbb1c, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int wstrlen(...);
int nn_boss_TaskOption_TaskOption(char [255], char *, int);

typedef int romwright_code(...);
/* stack frame of param_6: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp39; /* 0x39: local_39 */
    unsigned int sp148; /* 0x148: local_148 */
} param_6_stack;

/* Supplied declaration required: wstrlen. */
/* Supplied declaration required: nn_boss_TaskOption_TaskOption. */


void FUN_001bbb1c(int *param_1,unsigned int param_2,unsigned int param_3,char *param_4,
                 unsigned long long param_5,unsigned int param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  unsigned int temp_v3;
  unsigned int temp_v4;
  char acStack_138 [255];
  unsigned char temp_v5;
  
  if (*param_4 != '/') {
    temp_v0 = wstrlen(param_4);
    temp_v1 = wstrlen(param_1 + 3);
    if ((unsigned int)(temp_v0 + temp_v1) >= 0x100) {
      return;
    }
    temp_v2 = temp_v1 + 1;
    pcVar6 = acStack_138;
    piVar4 = param_1 + 3;
    temp_v3 = 0;
    if ((temp_v2 >= 0xff) || (temp_v2 != 0)) {
      pcVar5 = pcVar6;
      do {
        temp_v3 = temp_v3 + 1;
        pcVar6 = pcVar5 + 1;
        *pcVar5 = (char)*piVar4;
        piVar4 = (int *)((int)piVar4 + 1);
        if (*(char *)piVar4 == '\0') break;
        temp_v4 = 0xff;
        if (temp_v2 < 0xff) {
          temp_v4 = temp_v2;
        }
        pcVar5 = pcVar6;
      } while (temp_v3 < temp_v4);
    }
    temp_v0 = temp_v0 + 1;
    *pcVar6 = '\0';
    temp_v1 = wstrlen(acStack_138);
    if ((unsigned int)(temp_v1 + temp_v0) >= 0x100) {
      temp_v0 = 0xff - temp_v1;
    }
    nn_boss_TaskOption_TaskOption(acStack_138,param_4,temp_v0);
    param_4 = acStack_138;
    temp_v5 = 0;
  }
  (**(romwright_code **)(*param_1 + 0x14))
            (param_1,param_2,param_3,param_4,(int)param_5,(int)((unsigned long long)param_5 >> 0x20),param_6)
  ;
  return;
}

} /* extern "C" */
