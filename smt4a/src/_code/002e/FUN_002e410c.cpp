/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e410c` (_code @ 0x2e410c, 0x76 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

void _ZN4__rw10__rw_throwEiz(int kind, ...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern unsigned char LAB_002e4184; /* 0x2e4184 */
extern unsigned char DAT_0064c004; /* 0x64c004 */

extern unsigned int *_ZN4__rw13__rw_allocateEji(int, unsigned int);
/* Supplied declaration required: _ZN4__rw10__rw_throwEiz. */


unsigned int * FUN_002e410c(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (0xfffffff1 < param_2) {
    _ZN4__rw10__rw_throwEiz(8,&LAB_002e4184,&LAB_002e4184,param_2,0xfffffff1);
  }
  if (param_2 < param_3) {
    _ZN4__rw10__rw_throwEiz(8,&LAB_002e4184,&LAB_002e4184,param_3,param_2);
  }
  if (param_2 != 0) {
    puVar1 = (unsigned int *)_ZN4__rw13__rw_allocateEji(param_2 + 0xe,0);
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
