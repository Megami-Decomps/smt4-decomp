/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001381dc` (_code @ 0x1381dc, 0x2ec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013ea48(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, int);
int FUN_00140728(...);
int FUN_00159110(int, unsigned int, unsigned int, int);
int FUN_00159138(int, unsigned int, int);
int FUN_00163060(int, int, int, int, int);
int FUN_001630d4(...);
int FUN_00188b60(int);
int FUN_002e6dd4(unsigned int, unsigned int);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned char DAT_00557c80; /* 0x557c80 */
extern unsigned char DAT_00557dbc; /* 0x557dbc */
extern unsigned char DAT_005b406c; /* 0x5b406c */
extern int DAT_005b4070; /* 0x5b4070 */
extern unsigned int *DAT_005b4074; /* 0x5b4074 */
extern unsigned int *DAT_005b4078; /* 0x5b4078 */
extern unsigned int *DAT_005b407c; /* 0x5b407c */
extern unsigned int *DAT_005b4080; /* 0x5b4080 */
extern unsigned int *DAT_005b4084; /* 0x5b4084 */
extern unsigned int DAT_005b4088; /* 0x5b4088 */
extern unsigned char DAT_00640518; /* 0x640518 */
extern unsigned char DAT_00640534; /* 0x640534 */

/* Supplied declaration required: FUN_0013ea48. */
/* Supplied declaration required: FUN_00140728. */
/* Supplied declaration required: FUN_00159110. */
/* Supplied declaration required: FUN_00159138. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_001630d4. */
/* Supplied declaration required: FUN_00188b60. */
extern unsigned int FUN_00188c94(void);
extern unsigned int FUN_00188ca4(void);
extern unsigned int FUN_001c44b4(unsigned int);
/* Supplied declaration required: FUN_002e6dd4. */
extern unsigned int nn_fnd_ExpHeapBase_Allocate(unsigned int, unsigned int, int, unsigned char, int, unsigned char);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
extern int nngxGetVramEndAddr(unsigned int);


void FUN_001381dc(void)

{
/* irregular: 8 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = FUN_00188ca4();
  *(unsigned int *)(DAT_005b4070 + 0x80) = temp_v0;
  temp_v0 = FUN_00188c94();
  temp_v3 = DAT_005b4070;
  *(unsigned int *)(DAT_005b4070 + 0x84) = temp_v0;
  FUN_002e6dd4(*(unsigned int *)(temp_v3 + 0x80),temp_v0);
  temp_v3 = DAT_005b4070;
  FUN_00159110(DAT_005b4070 + 0x88,*(unsigned int *)(DAT_005b4070 + 0x80),
               *(unsigned int *)(DAT_005b4070 + 0x84),0x100);
  FUN_00188b60(temp_v3 + 0xe0);
  temp_v1 = *(unsigned int *)(DAT_005b4070 + 0x84);
  if (temp_v1 >= 0x2000101) {
    temp_v4 = DAT_005b4070 + 0x88;
    temp_v3 = DAT_005b4070 + 0xe0;
    nn_os_CriticalSection_Enter(temp_v3);
    temp_v0 = nn_fnd_ExpHeapBase_Allocate(temp_v4,temp_v1 + 0xfe000080,-0x80,0,0,0);
    nn_os_CriticalSection_Leave(temp_v3);
    temp_v4 = DAT_005b4070 + 0x88;
    temp_v3 = DAT_005b4070 + 0xe0;
    DAT_005b4088 = temp_v0;
    nn_os_CriticalSection_Enter(temp_v3);
    FUN_00159138(temp_v4,temp_v0,0x100);
    nn_os_CriticalSection_Leave(temp_v3);
  }
  temp_v0 = FUN_001c44b4(0x20000);
  *(unsigned int *)(DAT_005b4070 + 0xec) = temp_v0;
  temp_v4 = nngxGetVramEndAddr(0x20000);
  temp_v3 = DAT_005b4070;
  piVar1 = (int *)(DAT_005b4070 + 0xec);
  *(int *)(DAT_005b4070 + 0xf0) = temp_v4 - *piVar1;
  *(int *)(temp_v3 + 0xf4) = *piVar1;
  temp_v0 = FUN_001c44b4(0x30000);
  *(unsigned int *)(DAT_005b4070 + 0xf8) = temp_v0;
  temp_v4 = nngxGetVramEndAddr(0x30000);
  temp_v3 = DAT_005b4070;
  temp_v2 = *(int *)(DAT_005b4070 + 0xf8);
  *(int *)(DAT_005b4070 + 0xfc) = temp_v4 - temp_v2;
  *(int *)(temp_v3 + 0x100) = temp_v2;
  FUN_0013ea48(*(unsigned int *)(temp_v3 + 0x14),*(unsigned int *)(temp_v3 + 0x18),
               *(unsigned int *)(temp_v3 + 0x80),*(unsigned int *)(temp_v3 + 0x84),
               *(unsigned int *)(temp_v3 + 0xec),*(unsigned int *)(temp_v3 + 0xf0),temp_v2,temp_v4 - temp_v2);
  puVar3 = (unsigned int *)0x100;
  FUN_00163060(0x100,0x100,0,8,1);
  temp_v0 = 0x100;
  DAT_005b4084 = puVar3;
  FUN_00163060(0x100,0x100,0,0x2800,1);
  puVar3 = DAT_005b4084;
  *DAT_005b4084 = temp_v0;
  puVar3[1] = 0;
  FUN_00140728(&DAT_00640518,*(unsigned int *)(DAT_005b4070 + 0xec),
               *(unsigned int *)(DAT_005b4070 + 0xf0));
  FUN_00140728(&DAT_00640534,*(unsigned int *)(DAT_005b4070 + 0xf8),
               *(unsigned int *)(DAT_005b4070 + 0xfc));
  puVar3 = (unsigned int *)0x100;
  FUN_001630d4(0x100,0x100,0,4,1);
  if (puVar3 != (unsigned int *)0x0) {
    *puVar3 = (unsigned int)&DAT_00557dbc;
  }
  puVar4 = (unsigned int *)0x100;
  DAT_005b4074 = puVar3;
  FUN_001630d4(0x100,0x100,0,4,1);
  if (puVar4 != (unsigned int *)0x0) {
    *puVar4 = (unsigned int)&DAT_00557c80;
  }
  DAT_005b406c = 0;
  puVar3 = (unsigned int *)0x100;
  DAT_005b4078 = puVar4;
  FUN_001630d4(0x100,0x100,0,4,1);
  if (puVar3 != (unsigned int *)0x0) {
    *puVar3 = (unsigned int)"禘A禐A";
  }
  puVar4 = (unsigned int *)0x100;
  DAT_005b407c = puVar3;
  FUN_001630d4(0x100,0x100,0,4,1);
  if (puVar4 != (unsigned int *)0x0) {
    *puVar4 = (unsigned int)"갰A갨A";
  }
  DAT_005b4080 = puVar4;
  return;
}

} /* extern "C" */
