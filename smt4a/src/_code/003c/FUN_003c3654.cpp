/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c3654` (_code @ 0x3c3654, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b30e4(void);
int libc_strcpy(unsigned int *, unsigned int);
int FUN_0037cdcc(unsigned char *, int, unsigned char [256]);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_003c36c8; /* 0x3c36c8 */
extern unsigned char LAB_00400001; /* 0x400001 */
extern unsigned char LAB_00400002; /* 0x400002 */
extern unsigned char g_effectEditor; /* 0x59dbe0 */

/* Supplied declaration required: FUN_002b30e4. */
/* Supplied declaration required: libc_strcpy. */
extern unsigned int *FUN_0037667c(int, unsigned char *);
/* Supplied declaration required: FUN_0037cdcc. */


unsigned char * FUN_003c3654(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned char *puVar3;
  unsigned char temp_v0 [256];
  int temp_v1;
  
  puVar3 = &LAB_00400001;
  FUN_0037cdcc(&LAB_003c36c8,0x20,temp_v0);
  if (temp_v1 == 2) {
    puVar3 = (unsigned char *)0x400000;
  }
  else if (temp_v1 == 1) {
    if ((*(int *)((unsigned char *)&g_effectEditor + 0x14)) != 0) {
      puVar1 = (unsigned int *)FUN_0037667c((*(int *)((unsigned char *)&g_effectEditor + 0x14)),temp_v0);
      puVar2 = puVar1;
      FUN_002b30e4();
      libc_strcpy(puVar1 + 0x27,*puVar2);
    }
    puVar3 = &LAB_00400002;
  }
  return puVar3;
}

} /* extern "C" */
