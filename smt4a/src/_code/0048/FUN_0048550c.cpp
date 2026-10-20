/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048550c` (_code @ 0x48550c, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00484264(int, unsigned int *);
int FUN_004853fc(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int *FUN_0015687c(void);
extern int FUN_00163aa4(int);
extern unsigned int *FUN_00261828(void);
extern unsigned int *gameBlockGetArea221AA(void);
/* Supplied declaration required: FUN_00484264. */
/* Supplied declaration required: FUN_004853fc. */


void FUN_0048550c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_00163aa4(param_1 + 0x3ac);
  if (temp_v0 != 0) {
    if (*(char *)(param_1 + 0x261) == '\0' || *(unsigned char *)(param_1 + 0x261) == 0xff) {
      puVar2 = (unsigned int *)FUN_0015687c();
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(unsigned short *)(puVar2 + 4) = 0;
      FUN_00484264(param_1,puVar2);
    }
    if (*(char *)(param_1 + 0x261) == '\x01') {
      puVar2 = (unsigned int *)FUN_00261828();
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(unsigned short *)(puVar2 + 4) = 0;
      FUN_00484264(param_1,puVar2);
    }
    if (*(char *)(param_1 + 0x261) == '\x02') {
      puVar2 = (unsigned int *)gameBlockGetArea221AA();
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(unsigned short *)(puVar2 + 4) = 0;
      FUN_00484264(param_1,puVar2);
    }
    if (*(char *)(param_1 + 0x261) == '\x04') {
      puVar2 = (unsigned int *)gameBlockGetArea221AA();
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(unsigned short *)(puVar2 + 4) = 0;
      FUN_00484264(param_1,puVar2);
    }
    FUN_004853fc(param_1,8);
    return;
  }
  return;
}

} /* extern "C" */
