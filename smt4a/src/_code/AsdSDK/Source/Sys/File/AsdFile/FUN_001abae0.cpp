/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001abae0` (_code @ 0x1abae0, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int syncWaitHandleForever(unsigned int *);
int asdMemoryAllocTracked(int, int, int, int);
int FUN_0019a364(unsigned int *, unsigned int, int);
int FUN_002e3140(void);
int FUN_002e59f8(unsigned int, int, int);
int sysMemClear(void);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern int DAT_005b3fbc; /* 0x5b3fbc */
extern unsigned int g_asdFileMutex; /* 0x5b3fc0 */

/* Supplied declaration required: syncWaitHandleForever. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: FUN_0019a364. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002e59f8. */
/* Supplied declaration required: sysMemClear. */


int FUN_001abae0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  
  puVar4 = (unsigned int *)&temp_v3;
  temp_v3 = param_4;
  syncWaitHandleForever(&g_asdFileMutex);
  temp_v3 = 1;
  temp_v1 = 0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0x154);
  sysMemClear();
  temp_v0 = DAT_005b3fbc;
  temp_v2 = temp_v1;
  if (DAT_005b3fbc != 0) {
    do {
      temp_v2 = temp_v0;
      temp_v0 = *(int *)(temp_v2 + 0x14c);
    } while (*(int *)(temp_v2 + 0x14c) != 0);
    *(int *)(temp_v2 + 0x14c) = temp_v1;
    *(int *)(temp_v1 + 0x150) = temp_v2;
    temp_v2 = DAT_005b3fbc;
  }
  DAT_005b3fbc = temp_v2;
  FUN_002e59f8(param_1,temp_v1,0x14c);
  FUN_0019a364(puVar4,g_asdFileMutex,1);
  if ((int)puVar4 < 0) {
    FUN_002e3140();
  }
  return temp_v1;
}

} /* extern "C" */
