/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00158bb4` (_code @ 0x158bb4, 0x154 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015c81c(int *, int *);
int FUN_002bb150(unsigned char *, int);
int FUN_002c40f8(unsigned char *, int *, int, int);
int FUN_002c5254(int *, int, int);
int FUN_002c526c(void);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_002dc6c0; /* 0x2dc6c0 */

/* Supplied declaration required: FUN_0015c81c. */
/* Supplied declaration required: FUN_002bb150. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c5254. */
/* Supplied declaration required: FUN_002c526c. */


void FUN_00158bb4(int *param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  int *piVar4;
  int temp_v1;
  unsigned int uStack_24;
  int iStack_20;
  unsigned char temp_v2 [4];
  
  while (*param_1 != param_1[1]) {
    piVar4 = param_1 + 0x1148;
    while (*param_1 != param_1[1]) {
      iStack_20 = *piVar4;
      temp_v1 = 0xffffffff;
      uStack_24 = 0xffffffff;
      puVar1 = temp_v2;
      FUN_002c40f8(puVar1,&iStack_20,1,0);
      if ((int)puVar1 < 0) {
        FUN_002c526c();
      }
      temp_v0 = *param_1;
      puVar3 = (unsigned int *)&temp_v1;
      FUN_002c5254(&temp_v1,*piVar4,1);
      if ((int)puVar3 < 0) {
        FUN_002c526c();
      }
      FUN_0015c81c(param_1,param_1 + temp_v0 * 0x2e + 3);
      iStack_20 = *piVar4;
      temp_v1 = 0xffffffff;
      uStack_24 = 0xffffffff;
      puVar1 = temp_v2;
      FUN_002c40f8(puVar1,&iStack_20,1,0);
      if ((int)puVar1 < 0) {
        FUN_002c526c();
      }
      if ((char)param_1[temp_v0 * 0x2e + 5] == '\x03') {
        (**(romwright_code **)param_1[*param_1 * 0x2e + 3])();
        temp_v0 = *param_1;
        *param_1 = temp_v0 + 1;
        if (temp_v0 + 1 >= 0x60) {
          *param_1 = 0;
        }
      }
      puVar3 = (unsigned int *)&temp_v1;
      FUN_002c5254(&temp_v1,*piVar4,1);
      if ((int)puVar3 < 0) {
        FUN_002c526c();
      }
    }
    FUN_002bb150(&LAB_002dc6c0,0);
  }
  return;
}

} /* extern "C" */
