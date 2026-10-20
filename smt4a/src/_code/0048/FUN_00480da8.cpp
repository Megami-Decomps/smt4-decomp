/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00480da8` (_code @ 0x480da8, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100854(unsigned char *, unsigned int, unsigned int, int, unsigned char *);
int FUN_00471e80(void);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_0035fd50; /* 0x35fd50 */
extern unsigned char *g_aocSystem; /* 0x570280 */

/* Supplied declaration required: FUN_00100854. */
extern int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(int);
extern unsigned int dataTableGetEntries(void);
/* Supplied declaration required: FUN_00471e80. */


unsigned short FUN_00480da8(unsigned short param_1)

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
      (puVar1 = g_aocSystem, FUN_00471e80(), puVar1 == (unsigned char *)0x0)) &&
     (temp_v0 = dataTableGet(8,5), puVar1 = (unsigned char *)0x0, temp_v0 != 0)) {
    temp_v1 = dataTableGetEntries();
    temp_v2 = dataTableGetCount(temp_v0);
    puVar1 = temp_v3;
    FUN_00100854(puVar1,temp_v1,temp_v2,0x2c,&LAB_0035fd50);
  }
  return *(unsigned short *)(puVar1 + 0x26);
}

} /* extern "C" */
