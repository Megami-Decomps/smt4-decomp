/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00291728` (_code @ 0x291728, 0x1d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int asdMemFree(void);
int scrScriptProcessDestroy(void);
int dataTableResolveEntryVariants(void);
int libc_strcpy(unsigned char *, unsigned int *);
int rt_aeabi_memclr(unsigned int *, int);
int FUN_003f876c(int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_00225ddc(...); /* 0x225ddc */
extern unsigned char LAB_00291910; /* 0x291910 */
extern unsigned char LAB_00291920; /* 0x291920 */
extern unsigned char LAB_00291938; /* 0x291938 */
extern unsigned char LAB_00291954; /* 0x291954 */
extern int FUN_00298978(...); /* 0x298978 */
extern unsigned char LAB_002df90c; /* 0x2df90c */
extern unsigned char LAB_00328774; /* 0x328774 */
extern unsigned char LAB_0032878c; /* 0x32878c */
extern unsigned char LAB_00357f98; /* 0x357f98 */
extern unsigned char LAB_00379d54; /* 0x379d54 */
extern unsigned int *g_aocJob; /* 0x57f568 */
extern unsigned int DAT_005e1f70; /* 0x5e1f70 */
extern int DAT_005e1f74; /* 0x5e1f74 */
extern unsigned char DAT_005e1f78; /* 0x5e1f78 */

/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
extern int jyoucyuGetTableEntry(unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: dataTableResolveEntryVariants. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: rt_aeabi_memclr. */
/* Supplied declaration required: FUN_003f876c. */


void FUN_00291728(unsigned int *param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  
  puVar1 = g_aocJob;
  if (g_aocJob[0xc] != 0) {
    scrScriptProcessDestroy();
    puVar1[0xc] = 0;
  }
  if (puVar1[0xb] != 0) {
    asdMemFree();
    puVar1[0xb] = 0;
  }
  if (puVar1[0xd] != 0) {
    asdMemFree();
    puVar1[0xd] = 0;
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(unsigned char *)(puVar1 + 8) = 0;
  *(unsigned char *)((int)puVar1 + 0x21) = 0;
  *(unsigned char *)((int)puVar1 + 0x22) = 0;
  *(unsigned char *)((int)puVar1 + 0x23) = 0;
  *(unsigned char *)(puVar1 + 9) = 0;
  *(unsigned char *)(puVar1 + 0xe) = 0;
  *(unsigned char *)(puVar1 + 0x1f) = 0;
  rt_aeabi_memclr(puVar1 + 0xf,0x40);
  *(unsigned char *)(puVar1 + 1) = 0;
  if (param_1 == (unsigned int *)0x0) {
    temp_v0 = jyoucyuGetTableEntry(0);
    if (temp_v0 != 0) {
      FUN_003f876c(0x19);
      FUN_003f876c(0x1b);
      FUN_003f876c(0x1c);
      dataTableResolveEntryVariants();
    }
    puVar2 = &LAB_00291920;
    asdProcessCreateSimple(&LAB_00291920,4,0,0,FUN_00298978,&LAB_00328774,0);
    *puVar1 = (unsigned int)puVar2;
    taskCreateDraw(&LAB_00291938,0x75,0,0,&LAB_002df90c,&LAB_00357f98,0,puVar2);
    taskCreateDraw(&LAB_00291954,0xea,0,0,&LAB_0032878c,&LAB_00379d54,0,*puVar1);
    return;
  }
  DAT_005e1f70 = *param_1;
  DAT_005e1f74 = param_1[1];
  if (DAT_005e1f74 != -1) {
    DAT_005e1f78 = 0;
  }
  else {
    libc_strcpy(&DAT_005e1f78,param_1 + 2);
  }
  puVar2 = &LAB_00291910;
  asdProcessCreateSimple(&LAB_00291910,4,0,0,FUN_00225ddc,&LAB_00328774,0);
  *puVar1 = (unsigned int)puVar2;
  return;
}

} /* extern "C" */
