/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128ff0` (_code @ 0x128ff0, 0x148 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern int FUN_00128ec0(char, unsigned int);
extern char *FUN_00128f34(unsigned int);
extern int FUN_00128f44(unsigned int);
extern int FUN_00128f58(unsigned int, int);
/* Supplied declaration required: FUN_00129404. */
extern int FUN_0013a5dc(unsigned int, int);
/* Supplied declaration required: FUN_001564f8. */
/* Supplied declaration required: FUN_002bd448. */


unsigned int FUN_00128ff0(int param_1,unsigned int param_2,int *param_3,int *param_4,int param_5)

{
/* irregular: 3 native warning(s); review required */
  char *pcVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  pcVar1 = (char *)FUN_00128f34(param_2);
  temp_v2 = 0;
  temp_v0 = FUN_00128f44(param_2);
  if (((param_5 <= temp_v0 - 1) && (param_3 != (int *)0x0)) &&
     ((pcVar1[1] == '\0' || (param_4 != (int *)0x0)))) {
    temp_v0 = FUN_00128f58(param_2,param_5);
    if (*pcVar1 == '\x02') {
      temp_v2 = FUN_0013a5dc(param_2,param_5);
    }
    FUN_002bd448(param_3);
    *param_3 = temp_v0;
    param_3[1] = *(int *)(pcVar1 + 0xc);
    *(unsigned char *)(param_3 + 4) = 0;
    if (temp_v2 != 0) {
      param_3[2] = temp_v2 + 0x20;
    }
    FUN_001564f8(*(unsigned int *)(param_1 + 0x68),param_3);
    if (param_4 != (int *)0x0) {
      FUN_002bd448();
    }
    if (pcVar1[1] != '\0') {
      temp_v1 = FUN_00128ec0(*pcVar1,*(unsigned int *)(pcVar1 + 8));
      *param_4 = temp_v0 + temp_v1;
      param_4[1] = *(int *)(pcVar1 + 0xc) - *(int *)(pcVar1 + 8);
      *(unsigned char *)(param_4 + 4) = 1;
      if (temp_v2 != 0) {
        param_4[2] = temp_v2 + 0x26;
      }
      FUN_001564f8(*(unsigned int *)(param_1 + 0x68),param_4);
    }
    FUN_00129404(*(unsigned int *)(param_1 + 0x68),param_2,param_3,param_4,param_5);
    return 1;
  }
  return 0;
}
