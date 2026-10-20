/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e410c` (_code @ 0x2e410c, 0x76 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e32a4(int, unsigned char *, unsigned char *, unsigned int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern unsigned char LAB_002e4184; /* 0x2e4184 */
extern unsigned char DAT_0064c004; /* 0x64c004 */

extern unsigned int *FUN_001006c2(int, unsigned int);
/* Supplied declaration required: FUN_002e32a4. */


unsigned int * FUN_002e410c(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (0xfffffff1 < param_2) {
    FUN_002e32a4(8,&LAB_002e4184,&LAB_002e4184,param_2,0xfffffff1);
  }
  if (param_2 < param_3) {
    FUN_002e32a4(8,&LAB_002e4184,&LAB_002e4184,param_3,param_2);
  }
  if (param_2 != 0) {
    puVar1 = (unsigned int *)FUN_001006c2(param_2 + 0xe,0);
    if (puVar1 != (unsigned int *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    puVar1[2] = param_3;
    puVar2 = (unsigned char *)((int)puVar1 + param_3 + 0xc);
    *puVar1 = 0;
    puVar1[1] = param_2;
    if (puVar2 != (unsigned char *)0x0) {
      *puVar2 = 0;
    }
    return puVar1;
  }
  return (unsigned int *)&DAT_0064c004;
}

} /* extern "C" */
