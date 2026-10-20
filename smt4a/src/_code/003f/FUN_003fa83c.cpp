/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fa83c` (_code @ 0x3fa83c, 0x300 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010d300(void);
int FUN_0010d35c(void);
int asdOperatorDelete(void);
int vectorCopyHeader(unsigned int *, int *);
int FUN_003f2d7c(int, unsigned int *, unsigned int *);
int FUN_003fa1c8(unsigned int *);
int FUN_00414a24(void);
int FUN_004321a0(void);
int FUN_00432998(void);
int FUN_00441f84(void);
int FUN_00442630(void);
int FUN_00442a94(void);
int nexUtilInit(void);
int nexUtilShutdown(void);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_00594968; /* 0x594968 */

/* Supplied declaration required: FUN_0010d300. */
/* Supplied declaration required: FUN_0010d35c. */
extern unsigned int FUN_00111800(unsigned int *);
extern int FUN_00122220(void);
extern int FUN_001224a0(void);
/* Supplied declaration required: asdOperatorDelete. */
/* Supplied declaration required: vectorCopyHeader. */
extern int refIsNonNegative(unsigned int *);
/* Supplied declaration required: FUN_003f2d7c. */
/* Supplied declaration required: FUN_003fa1c8. */
extern unsigned int *FUN_003fa580(unsigned int *);
/* Supplied declaration required: FUN_00414a24. */
/* Supplied declaration required: FUN_004321a0. */
/* Supplied declaration required: FUN_00432998. */
/* Supplied declaration required: FUN_00441f84. */
/* Supplied declaration required: FUN_00442630. */
/* Supplied declaration required: FUN_00442a94. */
/* Supplied declaration required: nexUtilInit. */
/* Supplied declaration required: nexUtilShutdown. */


unsigned int * FUN_003fa83c(unsigned int *param_1)

{
/* irregular: 14 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned int uStack_14;
  unsigned int temp_v3;
  
  temp_v0 = *param_1;
  puVar3 = (unsigned int *)0x1;
  switch(temp_v0) {
  case 0:
    temp_v0 = 1;
    break;
  case 1:
    temp_v1 = param_1[0xc];
    FUN_003f2d7c(temp_v1,param_1 + 6,param_1 + 10);
    if (temp_v1 == 0) {
      if ((int)param_1[6] < 0) {
        *(unsigned char *)(param_1 + 3) = 1;
        *(unsigned char *)((int)param_1 + 0xd) = 1;
        *(unsigned char *)((int)param_1 + 0xe) = 1;
        param_1[4] = 0xe;
      }
      puVar3 = (unsigned int *)0x0;
      return puVar3;
    }
    temp_v0 = 2;
    break;
  case 2:
    puVar3 = param_1 + 6;
    FUN_00432998();
    if (puVar3 == (unsigned int *)0x0) {
      return (unsigned int *)0x1;
    }
    temp_v0 = 3;
    break;
  case 3:
    nexUtilInit();
    temp_v0 = 4;
    break;
  case 4:
    FUN_00441f84();
    param_1[1] = 5;
    param_1[6] = temp_v0;
    return (unsigned int *)0x1;
  case 5:
    FUN_0010d300();
    DAT_00594968 = 2;
    temp_v1 = FUN_00122220();
    *(unsigned char *)(temp_v1 + 0x10) = 1;
    temp_v1 = FUN_001224a0();
    *(unsigned int *)(temp_v1 + 0x10) = *(unsigned int *)(temp_v1 + 0x10) | 1;
    temp_v1 = FUN_00122220();
    *(unsigned char *)(*(int *)(temp_v1 + 8) + 0xf) = 1;
    temp_v1 = FUN_001224a0();
    *(unsigned char *)(*(int *)(temp_v1 + 8) + 0xf) = 1;
    temp_v0 = 6;
    break;
  case 6:
    FUN_003fa1c8(param_1);
    return param_1;
  case 7:
    puVar3 = (unsigned int *)FUN_003fa580(param_1);
    return puVar3;
  case 8:
    temp_v1 = param_1[0xf];
    if (*(char *)(temp_v1 + 0x10) != '\x01') {
      temp_v3 = *(unsigned int *)(temp_v1 + 0x40);
      temp_v2 = *(unsigned int *)(temp_v1 + 0x38);
      uStack_14 = *(unsigned int *)(temp_v1 + 0x3c);
      vectorCopyHeader(param_1 + 7,&temp_v2);
      temp_v1 = refIsNonNegative(param_1 + 7);
      if (temp_v1 != 0) {
        temp_v0 = 9;
        break;
      }
      temp_v0 = FUN_00111800(param_1 + 7);
      param_1[10] = temp_v0;
      FUN_00442630();
      *(unsigned char *)(param_1 + 3) = 1;
      *(unsigned char *)((int)param_1 + 0xd) = 1;
      *(unsigned char *)((int)param_1 + 0xe) = 1;
      param_1[4] = 9;
    }
  case 0xe:
    puVar3 = (unsigned int *)0x0;
    return puVar3;
  case 9:
    if ((int *)param_1[0xf] != (int *)0x0) {
      (**(romwright_code **)(*(int *)param_1[0xf] + 4))();
      param_1[0xf] = 0;
    }
    if ((int *)param_1[0x10] != (int *)0x0) {
      (**(romwright_code **)(*(int *)param_1[0x10] + 4))();
      param_1[0x10] = 0;
    }
    if ((int *)param_1[0xd] != (int *)0x0) {
      (**(romwright_code **)(*(int *)param_1[0xd] + 4))();
      param_1[0xd] = 0;
    }
    if (param_1[0x11] != 0) {
      FUN_00414a24();
      asdOperatorDelete();
      param_1[0x11] = 0;
    }
    temp_v0 = 10;
    break;
  case 10:
    FUN_0010d35c();
    temp_v0 = 0xb;
    break;
  case 0xb:
    FUN_00442a94();
    temp_v0 = 0xc;
    break;
  case 0xc:
    nexUtilShutdown();
    temp_v0 = 0xd;
    break;
  case 0xd:
    FUN_004321a0();
    param_1[1] = 0xe;
    return (unsigned int *)0x1;
  default:
    return puVar3;
  }
  puVar3 = (unsigned int *)0x1;
  param_1[1] = temp_v0;
  return puVar3;
}

} /* extern "C" */
