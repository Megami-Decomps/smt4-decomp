/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00398bf0` (_code @ 0x398bf0, 0xcc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_00232974. */
extern unsigned int *FUN_0024bd4c(void);
extern unsigned int *FUN_002891c8(void);
/* Supplied declaration required: FUN_00297178. */
extern unsigned int *FUN_002bd3ec(void);
extern int FUN_002bf9f0(int);


void FUN_00398bf0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_002bf9f0(param_1 + 0x794);
  if (temp_v0 != 0) {
    if (*(char *)(param_1 + 0x649) == '\0' || *(unsigned char *)(param_1 + 0x649) == 0xff) {
      puVar2 = (unsigned int *)FUN_002bd3ec();
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(unsigned short *)(puVar2 + 4) = 0;
      FUN_00232974(param_1,puVar2);
    }
    if (*(char *)(param_1 + 0x649) == '\x01') {
      puVar2 = (unsigned int *)FUN_002891c8();
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(unsigned short *)(puVar2 + 4) = 0;
      FUN_00232974(param_1,puVar2);
    }
    if (*(char *)(param_1 + 0x649) == '\x02') {
      puVar2 = (unsigned int *)FUN_0024bd4c();
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(unsigned short *)(puVar2 + 4) = 0;
      FUN_00232974(param_1,puVar2);
    }
    FUN_00297178(param_1,8);
    return;
  }
  return;
}
