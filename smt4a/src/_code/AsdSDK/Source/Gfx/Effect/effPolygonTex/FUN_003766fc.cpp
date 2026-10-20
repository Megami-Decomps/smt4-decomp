/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003766fc` (_code @ 0x3766fc, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167ab4(int, int, int, int, int, int);
int FUN_00212500(void);
int FUN_00221f20(void);
int FUN_00222290(void);
int FUN_002b3b58(int, int, int, unsigned char *, int);
int FUN_002e6354(void);
int FUN_00381830(unsigned int, unsigned int *);
int rt_memcpy(unsigned int *, unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_005c1f82; /* 0x5c1f82 */

/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_00212500. */
/* Supplied declaration required: FUN_00221f20. */
/* Supplied declaration required: FUN_00222290. */
extern unsigned int *FUN_002721e4(int);
/* Supplied declaration required: FUN_002b3b58. */
extern unsigned int FUN_002b41c4(int);
/* Supplied declaration required: FUN_002e6354. */
extern unsigned int FUN_0037a834(unsigned int);
/* Supplied declaration required: FUN_00381830. */
/* Supplied declaration required: rt_memcpy. */


unsigned int * FUN_003766fc(int param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int *puVar3;
  int temp_v1;
  
  puVar1 = (unsigned int *)0x10000;
  FUN_00167ab4(0x10000,0x100,0,0xd4,0x10,1);
  FUN_002e6354();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[3] = 0x3f800000;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[7] = 0x3f800000;
  puVar1[9] = 0xffffffff;
  puVar1[8] = 0x3f800000;
  if (param_1 != 0) {
    temp_v0 = 1;
    FUN_002b3b58(1,2,4,&DAT_005c1f82,0x4c);
    puVar1[0x32] = temp_v0;
    puVar1[10] = (unsigned int)*(unsigned short *)(param_1 + 0xc);
    temp_v0 = FUN_002b41c4(param_1);
    rt_memcpy(puVar1 + 0xc,temp_v0,0x98);
    puVar3 = (unsigned int *)FUN_002721e4(param_1);
    if (puVar3 != (unsigned int *)0x0) {
      switch(*(unsigned short *)(param_1 + 0x1c)) {
      case 1:
      case 9:
        FUN_00381830(puVar1[0x32],puVar3);
        break;
      case 2:
        FUN_00221f20();
        puVar1[0x34] = (unsigned int)puVar3;
        break;
      case 4:
        temp_v1 = puVar1[0x32];
        temp_v0 = FUN_0037a834(*puVar3 & 0xffff);
        *(unsigned int *)(temp_v1 + 4) = temp_v0;
        FUN_00212500();
        break;
      case 7:
        FUN_00222290();
        puVar1[0x33] = (unsigned int)puVar3;
      }
    }
  }
  return puVar1;
}

} /* extern "C" */
