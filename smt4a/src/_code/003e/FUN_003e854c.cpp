/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e854c` (_code @ 0x3e854c, 0x1a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(...);
int sysMemClear(...);
int FUN_0039587c(unsigned int, int);
int FUN_003e9fe4(int, int, int);
int FUN_003eb314(int, unsigned char [676], int);
int FUN_004ca63c(int, unsigned char [676], int, int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp428; /* 0x428: local_428 */
} param_1_stack;

extern unsigned char g_btlMain; /* 0x573920 */

/* Supplied declaration required: FUN_0019cac4. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_0039587c. */
/* Supplied declaration required: FUN_003e9fe4. */
/* Supplied declaration required: FUN_003eb314. */
/* Supplied declaration required: FUN_004ca63c. */


void FUN_003e854c(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned short temp_v3;
  unsigned int *puVar5;
  unsigned char temp_v4 [676];
  
  temp_v2 = 0;
  temp_v0 = 0;
  do {
    puVar5 = (unsigned int *)(temp_v2 * 0x408 + 0x1020 + *(int *)(param_1 + 0x1ffc));
    *puVar5 = 0;
    puVar5[1] = 0;
    temp_v0 = temp_v0 + 2;
    puVar5 = (unsigned int *)((temp_v2 + 1) * 0x408 + 0x1020 + *(int *)(param_1 + 0x1ffc));
    temp_v2 = temp_v2 + 2;
    *puVar5 = 0;
    puVar5[1] = 0;
  } while (temp_v0 < 0x32);
  sysMemClear((unsigned int *)(param_1 + 0xf4),0x84);
  *(unsigned int *)(param_1 + 0xf4) = 0;
  *(unsigned int *)(param_1 + 0xf8) = 0;
  *(unsigned int *)(param_1 + 0xfc) = 0;
  *(unsigned int *)(param_1 + 0x100) = 0;
  *(unsigned int *)(param_1 + 0x104) = 0;
  *(unsigned int *)(param_1 + 0x108) = 0;
  *(unsigned int *)(param_1 + 0x124) = 0x3f800000;
  *(unsigned int *)(param_1 + 0x128) = 0x3f800000;
  FUN_003e9fe4(param_1,param_1 + 0xf4,1);
  if ((int)(*(unsigned int *)((unsigned char *)&g_btlMain + 0x50)) < 1) {
    temp_v3 = 0;
    do {
      if (*(int *)(param_1 + 0xf4 + temp_v3 * 4) != 0) {
        temp_v1 = *(unsigned int *)(param_1 + temp_v3 * 4 + 0xf4);
        FUN_0019cac4();
        if (temp_v1 != 0) {
          FUN_003eb314(param_1,temp_v4,temp_v1);
          FUN_004ca63c(param_1,temp_v4,1,temp_v3 + 4,0);
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 6);
  }
  else {
    temp_v3 = (*(unsigned int *)((unsigned char *)&g_btlMain + 0x50));
    FUN_0019cac4(temp_v3);
    FUN_003eb314(param_1,temp_v4,temp_v3);
    FUN_004ca63c(param_1,temp_v4,1,4,0);
  }
  if (*(char *)(param_1 + 0x158) == '\x01') {
    FUN_0039587c(*(unsigned int *)(param_1 + 0x15c),param_1 + 0x160);
  }
  *(unsigned int *)(param_1 + 0x4c6c) = 0;
  sysMemClear(param_1 + 0x4bc4,0xa8);
  return;
}

} /* extern "C" */
