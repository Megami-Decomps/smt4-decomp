/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00136df8` (_code @ 0x136df8, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014287c(void);
int FUN_00146720(void);
int resourceCallDefaultOptions(int, int, int);
int FUN_00146808(void);
int FUN_0014685c(int, int, unsigned int, unsigned int);
int FUN_0014a930(int *, int, int);
int asdMemoryAlloc(int, int, int, unsigned int);
int FUN_0019a364(int *, int, int);
int nn_os_LightEvent_Initialize(unsigned int *, int);
int FUN_002e3140(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int DAT_005b3fb8; /* 0x5b3fb8 */
extern unsigned int DAT_005b3fbc; /* 0x5b3fbc */
extern int g_asdFileMutex; /* 0x5b3fc0 */
extern unsigned int g_asdFileEvent; /* 0x5b3fd4 */

/* Supplied declaration required: FUN_0014287c. */
/* Supplied declaration required: FUN_00146720. */
/* Supplied declaration required: resourceCallDefaultOptions. */
/* Supplied declaration required: FUN_00146808. */
/* Supplied declaration required: FUN_0014685c. */
/* Supplied declaration required: FUN_0014a930. */
/* Supplied declaration required: asdMemoryAlloc. */
/* Supplied declaration required: FUN_0019a364. */
/* Supplied declaration required: nn_os_LightEvent_Initialize. */
/* Supplied declaration required: FUN_002e3140. */


void FUN_00136df8(void)

{
/* irregular: irregular input(s): in_r3; 11 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  int *piVar4;
  int in_r3;
  int temp_v2;
  
  piVar4 = &temp_v2;
  DAT_005b3fbc = 0;
  temp_v2 = in_r3;
  FUN_00146720();
  temp_v0 = 0x10;
  resourceCallDefaultOptions(0x10,0x10,1);
  temp_v1 = 0x100;
  temp_v2 = 1;
  asdMemoryAlloc(0x100,0x100,0,temp_v0);
  temp_v2 = 1;
  DAT_005b3fb8 = temp_v1;
  FUN_0014685c(0x10,0x10,temp_v1,temp_v0);
  temp_v2 = 0;
  if (g_asdFileMutex != 0) {
    piVar3 = (int *)0xe0a0183b;
  }
  else {
    piVar3 = piVar4;
    FUN_0014a930(piVar4,0,2);
    if (-1 < (int)piVar3) {
      piVar3 = (int *)0x0;
      g_asdFileMutex = temp_v2;
    }
  }
  if ((int)piVar3 < 0) {
    FUN_002e3140();
  }
  FUN_0019a364(piVar4,g_asdFileMutex,1);
  if ((int)piVar4 < 0) {
    FUN_002e3140();
  }
  nn_os_LightEvent_Initialize(&g_asdFileEvent,0);
  FUN_0014287c();
  FUN_00146808();
  return;
}

} /* extern "C" */
