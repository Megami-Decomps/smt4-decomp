/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023fb84` (_code @ 0x23fb84, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj42072cC1Ei(void);
int asdOperatorNewB(void);
int asdOperatorNew(void);
int FUN_0035708c(void);
int nn_gr_CTR_Shader_SearchBindSymbol(unsigned char *, unsigned char *, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_004208cc; /* 0x4208cc */
extern unsigned char DAT_0047e554; /* 0x47e554 */

/* Supplied declaration required: _ZN9Obj42072cC1Ei. */
/* Supplied declaration required: asdOperatorNewB. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: FUN_0035708c. */
extern int FUN_0023b020(int, int, unsigned int);
extern int FUN_003deaa4(int);
/* Supplied declaration required: nn_gr_CTR_Shader_SearchBindSymbol. */


void FUN_0023fb84(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char uStack_90;
  unsigned char uStack_8f;
  unsigned char uStack_8e;
  unsigned char uStack_8d;
  unsigned int uStack_8c;
  unsigned char uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned char *apuStack_68 [12];
  unsigned char uStack_38;
  unsigned char uStack_37;
  unsigned char uStack_36;
  unsigned char uStack_35;
  unsigned int uStack_34;
  unsigned char uStack_30;
  unsigned char uStack_2f;
  unsigned char uStack_2e;
  unsigned char uStack_2d;
  unsigned int uStack_2c;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    return;
  }
  puVar1 = (unsigned int *)0x14;
  asdOperatorNew();
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = (unsigned int)&DAT_004208cc;
    puVar1[3] = 0;
    puVar1[4] = 0;
  }
  *(unsigned int **)(param_1 + 0x44) = puVar1;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_90 = 0;
  uStack_2f = 1;
  uStack_37 = 1;
  uStack_8f = 1;
  uStack_2e = 0xff;
  uStack_36 = 0xff;
  uStack_8e = 0xff;
  uStack_2d = 0xff;
  uStack_35 = 0xff;
  uStack_8d = 0xff;
  uStack_34 = 0;
  uStack_8c = 0;
  nn_gr_CTR_Shader_SearchBindSymbol(&DAT_0047e554,&uStack_30,0x349cb4);
  nn_gr_CTR_Shader_SearchBindSymbol(&DAT_0047e554,&uStack_38,0x349cc4);
  nn_gr_CTR_Shader_SearchBindSymbol(&DAT_0047e554,&uStack_90,0x349ccc);
  temp_v2 = 0;
  temp_v0 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  do {
    temp_v3 = temp_v2 + 1;
    temp_v0 = temp_v0 + 2;
    apuStack_68[temp_v2] = (unsigned char *)0x0;
    temp_v2 = temp_v2 + 2;
    apuStack_68[temp_v3] = (unsigned char *)0x0;
  } while (temp_v0 < 0xc);
  apuStack_68[2] = &uStack_30;
  uStack_78 = 3;
  apuStack_68[0] = &uStack_90;
  apuStack_68[1] = &uStack_38;
  uStack_74 = 0xb0f07;
  temp_v2 = FUN_003deaa4(param_1);
  puVar1[4] = temp_v2;
  temp_v2 = temp_v2 << 2;
  asdOperatorNewB();
  puVar1[2] = temp_v2;
  temp_v2 = puVar1[4] << 2;
  asdOperatorNewB();
  puVar1[1] = temp_v2;
  temp_v2 = puVar1[4] << 2;
  asdOperatorNewB();
  puVar1[3] = temp_v2;
  temp_v2 = 0;
  if (temp_v2 < (int)puVar1[4]) {
    do {
      *(unsigned int *)(puVar1[2] + temp_v2 * 4) = 0;
      *(unsigned int *)(puVar1[1] + temp_v2 * 4) = 0;
      *(unsigned int *)(puVar1[3] + temp_v2 * 4) = 0;
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < (int)puVar1[4]);
  }
  temp_v2 = 0;
  if (0 < (int)puVar1[4]) {
    temp_v3 = 0x7ac;
    do {
      temp_v1 = FUN_0023b020(param_1,temp_v2,5);
      if (temp_v1 != 0) {
        temp_v1 = temp_v3;
        asdOperatorNew();
        if (temp_v1 != 0) {
          _ZN9Obj42072cC1Ei();
        }
        *(int *)(puVar1[2] + temp_v2 * 4) = temp_v1;
        FUN_0035708c();
      }
      temp_v1 = FUN_0023b020(param_1,temp_v2,4);
      if (temp_v1 != 0) {
        temp_v1 = temp_v3;
        asdOperatorNew();
        if (temp_v1 != 0) {
          _ZN9Obj42072cC1Ei();
        }
        *(int *)(puVar1[1] + temp_v2 * 4) = temp_v1;
        FUN_0035708c();
      }
      temp_v1 = FUN_0023b020(param_1,temp_v2,6);
      if (temp_v1 != 0) {
        temp_v1 = temp_v3;
        asdOperatorNew();
        if (temp_v1 != 0) {
          _ZN9Obj42072cC1Ei();
        }
        *(int *)(puVar1[3] + temp_v2 * 4) = temp_v1;
        FUN_0035708c();
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < (int)puVar1[4]);
  }
  return;
}

} /* extern "C" */
