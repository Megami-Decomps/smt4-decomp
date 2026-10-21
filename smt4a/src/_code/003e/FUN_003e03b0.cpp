/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e03b0` (_code @ 0x3e03b0, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(unsigned char [132], unsigned char *, int, int);
int dataTable00FindById(void);
int asdLoadFileAsyncSimple(unsigned char [132], int *, int);
int sysMemClear(unsigned char [132], int);
int FUN_003e12a8(unsigned int *, int);
int FUN_003e3188(unsigned int *, int);
int FUN_003eebf4(int, int);
int aocQueueType38(unsigned int, int, int *, unsigned char [132]);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_2_stack;

extern unsigned char LAB_003e04ec; /* 0x3e04ec */
extern unsigned int g_aocSystem; /* 0x570280 */
extern unsigned int DAT_00573880; /* 0x573880 */
extern unsigned int DAT_00573884; /* 0x573884 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: dataTable00FindById. */
/* Supplied declaration required: asdLoadFileAsyncSimple. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_003e12a8. */
/* Supplied declaration required: FUN_003e3188. */
/* Supplied declaration required: FUN_003eebf4. */
extern int aocReadyAndAccepts(unsigned int, unsigned short);
/* Supplied declaration required: aocQueueType38. */


void FUN_003e03b0(unsigned int *param_1,int param_2)

{
/* irregular: 8 native warning(s); review required */
  unsigned short *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int *piVar4;
  unsigned char temp_v2 [132];
  
  temp_v0 = param_2;
  FUN_003eebf4(param_2,1);
  if (-1 < temp_v0) {
    temp_v1 = DAT_00573884 | *(unsigned int *)(param_2 + 0x45a4);
    *(unsigned int *)(param_2 + 0x45a0) = DAT_00573880 | *(unsigned int *)(param_2 + 0x45a0);
    *(unsigned int *)(param_2 + 0x45a4) = temp_v1;
    puVar1 = (unsigned short *)(unsigned int)*(unsigned short *)(*(int *)(param_2 + 0x1ffc) + temp_v0 * 0x408 + 0x166);
    dataTable00FindById();
    sysMemClear(temp_v2,0x80);
    textFormatBuffer(temp_v2,&LAB_003e04ec,*(unsigned char *)(puVar1 + 0x51),
                 *(unsigned char *)((int)puVar1 + 0xa3));
    temp_v0 = aocReadyAndAccepts(g_aocSystem,*puVar1);
    piVar4 = (int *)(param_2 + 0x1ec4);
    if (temp_v0 != 0) {
      aocQueueType38(g_aocSystem,*puVar1,piVar4,temp_v2);
    }
    else {
      asdLoadFileAsyncSimple(temp_v2,piVar4,0);
    }
    *param_1 = 9;
    param_1[4] = 0;
    param_1[3] = 0;
    if (*piVar4 != 0) {
      *param_1 = 10;
      FUN_003e12a8(param_1,param_2);
    }
    return;
  }
  param_1[4] = 0;
  *param_1 = 0x11;
  param_1[3] = 0;
  FUN_003e3188(param_1,param_2);
  return;
}

} /* extern "C" */
