/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00291bd4` (_code @ 0x291bd4, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int libc_strcmp(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_002761fc(...); /* 0x2761fc */
extern unsigned char LAB_00291c98; /* 0x291c98 */
extern int btlEventDestroy(...); /* 0x314fd4 */
extern unsigned char DAT_005285d8; /* 0x5285d8 */
extern unsigned int *g_btlEvent; /* 0x573898 */

/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */
extern int jobIsValid(unsigned int);
extern int wstrlen(unsigned int *);
/* Supplied declaration required: libc_strcmp. */


void FUN_00291bd4(unsigned int *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  temp_v0 = jobIsValid(param_1[0x1d]);
  if (temp_v0 == 0) {
    puVar2 = &LAB_00291c98;
    taskCreateDraw(&LAB_00291c98,4,0,0,FUN_002761fc,btlEventDestroy,param_1,*param_1);
    param_1[0x1d] = (unsigned int)puVar2;
    puVar3 = (unsigned int *)0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x30,1);
    g_btlEvent = puVar3;
    *puVar3 = 0;
    puVar4 = param_1 + 0x4c;
    libc_strcmp(puVar4,&DAT_005285d8);
    if ((puVar4 != (unsigned int *)0x0) && (temp_v0 = wstrlen(param_1 + 0x4c), temp_v0 != 0)) {
      *puVar3 = 1;
      *(unsigned char *)(puVar3 + 0xb) = 0;
    }
  }
  return;
}

} /* extern "C" */
