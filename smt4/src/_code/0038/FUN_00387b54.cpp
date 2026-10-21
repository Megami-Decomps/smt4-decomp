/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00387b54` (_code @ 0x387b54, 0x104 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int recordClearWideHandle(int);
int FUN_0023499c(int *, int, int);
int jyoucyuGetTableEntry(int);
int FUN_00354608(int *, int, int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int g_aocMain; /* 0x432fc8 */

/* Supplied declaration required: recordClearWideHandle. */
/* Supplied declaration required: FUN_0023499c. */
extern unsigned char *FUN_002a1130(unsigned int, unsigned int);
extern int FUN_002a12d8(unsigned char *);
/* Supplied declaration required: jyoucyuGetTableEntry. */
/* Supplied declaration required: FUN_00354608. */


void FUN_00387b54(unsigned int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int uStack_14;
  
  puVar1 = (unsigned char *)FUN_002a1130(param_1,0);
  FUN_00354608(&temp_v1,param_2 + 8,param_2);
  *(unsigned int *)(puVar1 + 4) = temp_v1;
  *(unsigned int *)(puVar1 + 8) = uStack_14;
  temp_v0 = FUN_002a12d8(puVar1 + 4);
  if (temp_v0 < 0) {
    *puVar1 = 100;
    temp_v0 = FUN_002a12d8(puVar1 + 4);
    if (((temp_v0 == -0x377ec76c) || (temp_v0 = FUN_002a12d8(puVar1 + 4), temp_v0 == -0x377ec779)) ||
       (temp_v0 = FUN_002a12d8(puVar1 + 4), temp_v0 == -0x36bec6eb)) {
      jyoucyuGetTableEntry(0);
      return;
    }
    *puVar1 = 0x6a;
    *(unsigned int *)(puVar1 + 0x10) = 0x96;
  }
  else {
    FUN_0023499c(&temp_v1,g_aocMain + 0x28,g_aocMain + 0x18);
    *(unsigned int *)(puVar1 + 4) = temp_v1;
    *(unsigned int *)(puVar1 + 8) = uStack_14;
    temp_v0 = FUN_002a12d8(puVar1 + 4);
    if (-1 < temp_v0) {
      recordClearWideHandle(g_aocMain + 0x28);
      *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) | 0x10000;
      return;
    }
    *puVar1 = 100;
  }
  return;
}

} /* extern "C" */
