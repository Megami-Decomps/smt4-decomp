/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e2144` (_code @ 0x1e2144, 0xbc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_001d3cd8(); /* 0x1d3cd8 */
extern unsigned char LAB_001e2208; /* 0x1e2208 */
extern int FUN_0021ec00(); /* 0x21ec00 */
extern unsigned char DAT_004009d4; /* 0x4009d4 */
extern unsigned int *DAT_00435d48; /* 0x435d48 */

/* Supplied declaration required: FUN_002aa7f4. */
extern int FUN_002bf41c(unsigned int);
extern int FUN_002c3290(unsigned int *);
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */


void FUN_001e2144(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  temp_v0 = FUN_002bf41c(param_1[0x14]);
  if (temp_v0 == 0) {
    puVar2 = &LAB_001e2208;
    FUN_002c4c00(&LAB_001e2208,2,0,0,FUN_001d3cd8,FUN_0021ec00,param_1,*param_1);
    param_1[0x14] = (unsigned int)puVar2;
    puVar3 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x30,1);
    DAT_00435d48 = puVar3;
    *puVar3 = 0;
    puVar4 = param_1 + 0x40;
    FUN_002aa7f4(puVar4,&DAT_004009d4);
    if ((puVar4 != (unsigned int *)0x0) && (temp_v0 = FUN_002c3290(param_1 + 0x40), temp_v0 != 0)) {
      *puVar3 = 1;
      *(unsigned char *)(puVar3 + 0xb) = 0;
    }
  }
  return;
}
