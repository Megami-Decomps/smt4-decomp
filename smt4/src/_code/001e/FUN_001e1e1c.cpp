/* NON_MATCHING: restored global load still differs from retail instruction scheduling. */
#include "romwright_types.h"

extern "C" {

int dataTable19ResolveVariants(void);
int fileSlotReloadRaw(int);
int libc_strcpy(unsigned char *, unsigned int *);
int taskCreateDraw(...);
int asdProcessCreateSimple(...);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int FUN_0019f3dc(...); /* 0x19f3dc */
extern unsigned char LAB_001e1fb8; /* 0x1e1fb8 */
extern unsigned char LAB_001e1fc8; /* 0x1e1fc8 */
extern unsigned char LAB_001e1fe0; /* 0x1e1fe0 */
extern unsigned char LAB_001e1ffc; /* 0x1e1ffc */
extern int FUN_001e4d70(...); /* 0x1e4d70 */
extern unsigned char campQueryFalse; /* 0x20f6c0 */
extern unsigned char aocJobEnable; /* 0x2ca064 */
extern unsigned char FUN_002ca07c; /* 0x2ca07c */
extern unsigned char noopCallback; /* 0x2e081c */
extern unsigned char FUN_002f4b28; /* 0x2f4b28 */
extern unsigned int DAT_004937c4; /* 0x4937c4 */
extern int DAT_004937c8; /* 0x4937c8 */
extern unsigned char DAT_004937cc; /* 0x4937cc */

/* Supplied declaration required: dataTable19ResolveVariants. */
/* Supplied declaration required: fileSlotReloadRaw. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: taskCreateDraw. */
extern int jyoucyuGetTableEntry(unsigned int);
/* Supplied declaration required: asdProcessCreateSimple. */


extern unsigned int *g_aocJob;
void FUN_001e1e1c(unsigned int *param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  
  unsigned int *param_2 = g_aocJob;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  *(unsigned char *)(param_2 + 8) = 0;
  *(unsigned char *)((int)param_2 + 0x21) = 0;
  *(unsigned char *)((int)param_2 + 0x22) = 0;
  *(unsigned char *)((int)param_2 + 0x23) = 0;
  *(unsigned char *)(param_2 + 9) = 0;
  *(unsigned char *)(param_2 + 1) = 0;
  if (param_1 == (unsigned int *)0x0) {
    temp_v0 = jyoucyuGetTableEntry(2);
    if (temp_v0 == 0) {
      fileSlotReloadRaw(0x19);
      fileSlotReloadRaw(0x1b);
      fileSlotReloadRaw(0x1c);
      dataTable19ResolveVariants();
    }
    puVar1 = &LAB_001e1fc8;
    asdProcessCreateSimple(&LAB_001e1fc8,2,0,0,FUN_001e4d70,&aocJobEnable,0);
    *param_2 = (unsigned int)puVar1;
    taskCreateDraw(&LAB_001e1fe0,0x73,0,0,&campQueryFalse,&noopCallback,0,puVar1);
    taskCreateDraw(&LAB_001e1ffc,0xe6,0,0,&FUN_002ca07c,&FUN_002f4b28,0,*param_2);
    return;
  }
  DAT_004937c4 = *param_1;
  DAT_004937c8 = param_1[1];
  if (DAT_004937c8 != -1) {
    DAT_004937cc = 0;
  }
  else {
    libc_strcpy(&DAT_004937cc,param_1 + 2);
  }
  puVar1 = &LAB_001e1fb8;
  asdProcessCreateSimple(&LAB_001e1fb8,2,0,0,FUN_0019f3dc,&aocJobEnable,0);
  *param_2 = (unsigned int)puVar1;
  return;
}

} /* extern "C" */
