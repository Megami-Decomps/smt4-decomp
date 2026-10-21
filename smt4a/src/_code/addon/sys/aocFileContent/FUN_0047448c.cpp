/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047448c` (_code @ 0x47448c, 0x150 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int asdMemoryAlloc(...);
int jyoucyuGetTableEntry(...);
int asdMemFree(...);
int FUN_001b57a8(...);
int rt_memclr(...);
int FUN_0042a410(...);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int g_aocMain; /* 0x570260 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: asdMemoryAlloc. */
/* Supplied declaration required: jyoucyuGetTableEntry. */
/* Supplied declaration required: asdMemFree. */
extern int FUN_001af210(int);
/* Supplied declaration required: FUN_001b57a8. */
extern unsigned int *FUN_001b5acc(unsigned char *);
extern int FUN_001d25ec(unsigned int *);
/* Supplied declaration required: rt_memclr. */
/* Supplied declaration required: FUN_0042a410. */


void FUN_0047448c(unsigned char *param_1,int param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int uStack_24;
  int temp_v3;
  unsigned int uStack_1c;
  
  puVar2 = (unsigned int *)&temp_v2;
  if (*(int *)(param_2 + 0x20) != 0) {
    asdMemFree();
    *(unsigned int *)(param_2 + 0x20) = 0;
  }
  *param_1 = 0;
  puVar1 = (unsigned int *)FUN_001b5acc(param_1 + 4);
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_001b57a8(&temp_v2,0);
  temp_v1 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = temp_v1;
  temp_v2 = 2;
  uStack_24 = 0;
  temp_v0 = param_2 + 0x34;
  FUN_0042a410(temp_v0,0x19a2,param_3,2);
  FUN_001b57a8(&temp_v3,temp_v0);
  temp_v0 = FUN_001d25ec((unsigned int *)&temp_v3);
  if (temp_v0 < 0) {
    jyoucyuGetTableEntry(0);
    *(unsigned char *)(puVar1 + -1) = 100;
    *puVar1 = temp_v3;
    puVar1[1] = uStack_1c;
    temp_v0 = FUN_001d25ec((unsigned int *)&temp_v3);
    if ((temp_v0 != -0x36bec76f) && (temp_v0 = FUN_001af210(g_aocMain + 0x98), temp_v0 != 0)) {
      *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff;
      *(unsigned char *)(puVar1 + -1) = 200;
    }
    return;
  }
  temp_v2 = 1;
  temp_v1 = 0x100;
  asdMemoryAlloc(0x100,0x100,0,*(unsigned int *)(param_2 + 0x34));
  *(unsigned int *)(param_2 + 0x20) = temp_v1;
  rt_memclr();
  textFormatBuffer(param_2 + 0x24,"aoc%d:",param_3);
  return;
}

} /* extern "C" */
