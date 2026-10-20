/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f6998` (_code @ 0x1f6998, 0x1c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int mtx44Copy(int *, unsigned int *);
int memAlloc(int, int, int, unsigned int, int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned int DAT_00476638; /* 0x476638 */
extern unsigned int DAT_004efd9c; /* 0x4efd9c */
extern unsigned int DAT_004efda0; /* 0x4efda0 */
extern unsigned int DAT_004efda4; /* 0x4efda4 */
extern unsigned int DAT_004efda8; /* 0x4efda8 */
extern unsigned int DAT_004efdac; /* 0x4efdac */
extern unsigned int DAT_004efdb0; /* 0x4efdb0 */
extern unsigned int DAT_004efdb4; /* 0x4efdb4 */
extern unsigned int DAT_004efdb8; /* 0x4efdb8 */
extern unsigned int DAT_004efdbc; /* 0x4efdbc */
extern unsigned int DAT_004efdc0; /* 0x4efdc0 */
extern unsigned int DAT_004efdc4; /* 0x4efdc4 */
extern unsigned int DAT_004efdc8; /* 0x4efdc8 */
extern unsigned int DAT_004efdcc; /* 0x4efdcc */
extern unsigned int DAT_004efdd0; /* 0x4efdd0 */
extern unsigned int DAT_004efdd4; /* 0x4efdd4 */
extern unsigned int DAT_004efdd8; /* 0x4efdd8 */

/* Supplied declaration required: mtx44Copy. */
extern int FUN_002bfefc(unsigned int *);
/* Supplied declaration required: memAlloc. */
extern int FUN_002d58b4(unsigned int, unsigned int);


int * FUN_001f6998(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  if ((param_2 & 1) != 0) {
    temp_v2 = 0xc;
  }
  if ((param_2 & 2) != 0) {
    temp_v2 = temp_v2 + 4;
  }
  if ((param_2 & 4) != 0) {
    temp_v2 = temp_v2 + 8;
  }
  if ((param_2 & 8) != 0) {
    temp_v2 = temp_v2 + 0x40;
  }
  if ((param_2 & 0x20) != 0) {
    temp_v2 = temp_v2 + 4;
  }
  if ((param_2 & 0x80) != 0) {
    temp_v2 = temp_v2 + 0x10;
  }
  piVar1 = (int *)0x10000;
  memAlloc(0x10000,0x100,0,temp_v2 * param_1 + 200,0x10,1);
  if (((DAT_00476638 & 1) == 0) && (temp_v0 = FUN_002bfefc(&DAT_00476638), temp_v0 != 0)) {
    DAT_004efd9c = 0x3f800000;
    DAT_004efda0 = 0;
    DAT_004efda4 = 0;
    DAT_004efda8 = 0;
    DAT_004efdac = 0;
    DAT_004efdb0 = 0x3f800000;
    DAT_004efdb4 = 0;
    DAT_004efdb8 = 0;
    DAT_004efdbc = 0;
    DAT_004efdc0 = 0;
    DAT_004efdc4 = 0x3f800000;
    DAT_004efdc8 = 0;
    DAT_004efdcc = 0;
    DAT_004efdd0 = 0;
    DAT_004efdd4 = 0;
    DAT_004efdd8 = 0x3f800000;
  }
  mtx44Copy(piVar1 + 0x1a,&DAT_004efd9c);
  *piVar1 = (int)(piVar1 + 0x2e);
  piVar1[3] = 1;
  *(unsigned char *)(piVar1 + 0x19) = 0xff;
  *(unsigned char *)((int)piVar1 + 0x65) = 0xff;
  *(unsigned char *)((int)piVar1 + 0x66) = 0xff;
  *(unsigned char *)((int)piVar1 + 0x67) = 0xff;
  piVar1[1] = param_1;
  piVar1[2] = temp_v2;
  piVar1[5] = param_2;
  piVar1[0x2a] = param_3;
  temp_v2 = FUN_002d58b4(param_1 & 0xffff,0x25);
  piVar1[6] = temp_v2;
  temp_v2 = 0;
  temp_v1 = (*piVar1 + 0xfU) & 0xfffffff0;
  if ((param_2 & 1) != 0) {
    temp_v2 = 0xc;
    piVar1[7] = temp_v1;
  }
  if ((param_2 & 2) != 0) {
    temp_v0 = temp_v1 + temp_v2;
    temp_v2 = temp_v2 + 4;
    piVar1[0xb] = temp_v0;
  }
  if ((param_2 & 4) != 0) {
    temp_v0 = temp_v1 + temp_v2;
    temp_v2 = temp_v2 + 8;
    piVar1[10] = temp_v0;
  }
  if ((param_2 & 8) != 0) {
    temp_v0 = temp_v1 + temp_v2;
    temp_v2 = temp_v2 + 0x40;
    piVar1[8] = temp_v0;
  }
  if ((param_2 & 0x20) != 0) {
    temp_v0 = temp_v1 + temp_v2;
    temp_v2 = temp_v2 + 4;
    piVar1[0xd] = temp_v0;
  }
  if ((param_2 & 0x80) != 0) {
    piVar1[0xe] = temp_v2 + temp_v1;
  }
  return piVar1;
}

} /* extern "C" */
