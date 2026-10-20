/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00288e68` (_code @ 0x288e68, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b4504(void);
int libc_bsearch(unsigned char *, unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_001264b4; /* 0x1264b4 */
extern unsigned char *g_aocSystem; /* 0x433158 */

/* Supplied declaration required: FUN_002b4504. */
/* Supplied declaration required: libc_bsearch. */
extern unsigned int dataTableGetCount(int);
extern unsigned int dataTableGetEntries(void);
extern int dataTableGet(unsigned int, unsigned int);


unsigned short FUN_00288e68(unsigned short param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned short temp_v4;
  
  temp_v4 = param_1;
  if (((*(int *)(g_aocSystem + 0x3dc) == 0) ||
      (puVar1 = g_aocSystem, FUN_002b4504(), puVar1 == (unsigned char *)0x0)) &&
     (temp_v0 = dataTableGet(8,5), puVar1 = (unsigned char *)0x0, temp_v0 != 0)) {
    temp_v1 = dataTableGetEntries();
    temp_v2 = dataTableGetCount(temp_v0);
    puVar1 = temp_v3;
    libc_bsearch(puVar1,temp_v1,temp_v2,0x2c,&LAB_001264b4);
  }
  return *(unsigned short *)(puVar1 + 0x26);
}

} /* extern "C" */
