/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003989d4` (_code @ 0x3989d4, 0xcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002327e0(int, unsigned int *);
int FUN_00296ee0(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002327e0. */
extern unsigned int *FUN_0024bb38(void);
extern unsigned int *FUN_00288f60(void);
/* Supplied declaration required: FUN_00296ee0. */
extern unsigned int *FUN_002bd1fc(void);
extern int FUN_002bf818(int);


void FUN_003989d4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_002bf818(param_1 + 0x794);
  if (temp_v0 != 0) {
    if (*(char *)(param_1 + 0x649) == '\0' || *(unsigned char *)(param_1 + 0x649) == 0xff) {
      puVar2 = (unsigned int *)FUN_002bd1fc();
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(unsigned short *)(puVar2 + 4) = 0;
      FUN_002327e0(param_1,puVar2);
    }
    if (*(char *)(param_1 + 0x649) == '\x01') {
      puVar2 = (unsigned int *)FUN_00288f60();
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(unsigned short *)(puVar2 + 4) = 0;
      FUN_002327e0(param_1,puVar2);
    }
    if (*(char *)(param_1 + 0x649) == '\x02') {
      puVar2 = (unsigned int *)FUN_0024bb38();
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(unsigned short *)(puVar2 + 4) = 0;
      FUN_002327e0(param_1,puVar2);
    }
    FUN_00296ee0(param_1,8);
    return;
  }
  return;
}

} /* extern "C" */
