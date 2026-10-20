/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00139838` (_code @ 0x139838, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013c174(int, unsigned char [8], int);
int FUN_00163060(int, int, int, int, int);
int FUN_0019a5a0(int);
int rt_memcpy(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_0059dbb8; /* 0x59dbb8 */
extern int DAT_0059dbbc; /* 0x59dbbc */

/* Supplied declaration required: FUN_0013c174. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: rt_memcpy. */


void FUN_00139838(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned char temp_v2 [8];
  
  FUN_0013c174(param_1,temp_v2,0);
  if (param_1 != 0) {
    temp_v0 = 0x100;
    FUN_00163060(0x100,0x100,0,0x104,1);
    DAT_0059dbbc = temp_v0;
    rt_memcpy();
    temp_v1 = 0x100;
    FUN_00163060(0x100,0x100,0,*(int *)(DAT_0059dbbc + 0x100) * 0x18,1);
    puVar4 = (unsigned int *)(param_1 + 0x104);
    temp_v0 = 0;
    DAT_0059dbb8 = temp_v1;
    if (0 < *(int *)(DAT_0059dbbc + 0x100)) {
      do {
        temp_v1 = temp_v0 + 1;
        puVar5 = (unsigned int *)(DAT_0059dbb8 + temp_v0 * 0x18);
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = *puVar4;
        puVar5[3] = puVar4[1];
        puVar5[4] = puVar4[2];
        puVar1 = puVar4 + 3;
        puVar4 = puVar4 + 0x18;
        puVar5[5] = *puVar1;
        temp_v0 = temp_v1;
      } while (temp_v1 < *(int *)(DAT_0059dbbc + 0x100));
    }
    FUN_0019a5a0(param_1);
  }
  return;
}

} /* extern "C" */
