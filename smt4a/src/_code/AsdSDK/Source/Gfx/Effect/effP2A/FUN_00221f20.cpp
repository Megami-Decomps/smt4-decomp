/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00221f20` (_code @ 0x221f20, 0x1b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memAlloc(int, int, int, int, int, int);
int FUN_00271f24(void);
int asdEffectTextureCreate(void);
int rt_memcpy(int *, int *, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Supplied declaration required: memAlloc. */
extern int FUN_0025cc50(int);
/* Supplied declaration required: FUN_00271f24. */
extern unsigned int textureCreateFromImage(void);
/* Supplied declaration required: asdEffectTextureCreate. */
/* Supplied declaration required: rt_memcpy. */


unsigned int * FUN_00221f20(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  int *piVar5;
  int *piVar6;
  int temp_v3;
  int temp_v4;
  
  piVar5 = (int *)0x0;
  if (param_1 != (int *)0x0) {
    piVar6 = (int *)(*param_1 + (int)param_1);
    temp_v3 = *piVar6;
    piVar5 = (int *)0x10000;
    memAlloc(0x10000,0x100,0,*param_1 + temp_v3 * 4 + 0x1c,0x10,1);
    piVar5[6] = (int)piVar5;
    rt_memcpy(piVar5 + 7,param_1,*param_1);
    piVar5[3] = temp_v3;
    *piVar5 = (int)(piVar5 + 7);
    piVar5[1] = (int)(piVar5 + 9);
    temp_v2 = 0;
    piVar5[5] = (int)(piVar5 + 7) + piVar5[7] + 8;
    if (0 < temp_v3) {
      do {
        piVar6 = piVar6 + 1;
        temp_v4 = *piVar6 + (int)param_1;
        temp_v0 = FUN_0025cc50(temp_v4);
        if (temp_v0 != 0) {
          asdEffectTextureCreate();
          *(int *)(piVar5[5] + temp_v2 * 4) = temp_v4;
        }
        else {
          temp_v1 = textureCreateFromImage();
          *(unsigned int *)(piVar5[5] + temp_v2 * 4) = temp_v1;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < temp_v3);
    }
    piVar5[4] = 1;
    piVar5[2] = 1;
    temp_v2 = 0;
    temp_v3 = *(int *)(*piVar5 + 4);
    if (0 < temp_v3) {
      do {
        temp_v0 = piVar5[1] + temp_v2 * 0x14;
        if ((*(unsigned int *)(temp_v0 + 0x10) & 0x10000000) != 0) {
          piVar5[2] = *(int *)(temp_v0 + 0xc);
        }
        else if ((*(unsigned int *)(temp_v0 + 8) & 0x40) != 0 || (*(unsigned int *)(temp_v0 + 8) & 0x80) != 0) {
          piVar5[2] = 2;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < temp_v3);
    }
  }
  puVar3 = (unsigned int *)0x10000;
  memAlloc(0x10000,0x100,0,piVar5[2] * 0x14 + 0x18,0x10,1);
  puVar3[4] = (unsigned int)(puVar3 + 6);
  *puVar3 = (unsigned int)piVar5;
  FUN_00271f24();
  *(unsigned short *)(puVar3 + 5) = 1;
  return puVar3;
}

} /* extern "C" */
