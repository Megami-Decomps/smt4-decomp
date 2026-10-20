/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dc530` (_code @ 0x3dc530, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00151408(unsigned int, int, int);
int FUN_001527d8(...);
int FUN_0020214c(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_003dc600; /* 0x3dc600 */
extern int g_uiQuest; /* 0x57f28c */

extern unsigned int spriteHandleCreate(unsigned int);
/* Supplied declaration required: FUN_00151408. */
/* Supplied declaration required: FUN_001527d8. */
/* Supplied declaration required: FUN_0020214c. */


void FUN_003dc530(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = g_uiQuest;
  puVar2 = &LAB_003dc600;
  FUN_0020214c();
  *(unsigned char **)(temp_v0 + 0x930) = puVar2;
  temp_v1 = spriteHandleCreate(0);
  *(unsigned int *)(temp_v0 + 0x91c) = temp_v1;
  FUN_001527d8(temp_v1,0xffffffff);
  FUN_00151408(*(unsigned int *)(temp_v0 + 0x91c),0,0x646464ff);
  temp_v1 = spriteHandleCreate(0);
  *(unsigned int *)(temp_v0 + 0x920) = temp_v1;
  FUN_001527d8(temp_v1,0x5eaabaff);
  FUN_00151408(*(unsigned int *)(temp_v0 + 0x920),0,0x646464ff);
  temp_v1 = spriteHandleCreate(0);
  *(unsigned int *)(temp_v0 + 0x924) = temp_v1;
  FUN_001527d8(temp_v1,0xffffffff);
  FUN_00151408(*(unsigned int *)(temp_v0 + 0x924),0,0x646464ff);
  temp_v1 = spriteHandleCreate(0);
  *(unsigned int *)(temp_v0 + 0x928) = temp_v1;
  FUN_001527d8(temp_v1,0xffffffff);
  FUN_00151408(*(unsigned int *)(temp_v0 + 0x928),0,0x646464ff);
  return;
}

} /* extern "C" */
