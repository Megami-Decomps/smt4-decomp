/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fce8c` (_code @ 0x3fce8c, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163060(...);
int FUN_0019d4d8(...);
int FUN_002f5020(unsigned char *, int, int, int);
int FUN_0042c8f8(...);
int nn_gr_CTR_Shader_SearchBindSymbol(...);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned char DAT_005cc554; /* 0x5cc554 */

/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_0019d4d8. */
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: FUN_0042c8f8. */
extern int func_0x004ff3c0(int, int, unsigned int);
extern unsigned int func_0x004ff4a4(int);
/* Supplied declaration required: nn_gr_CTR_Shader_SearchBindSymbol. */


void FUN_003fce8c(int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7 [4];
  unsigned char uStack_8c;
  unsigned char uStack_8b;
  unsigned char uStack_8a;
  unsigned char *puStack_80;
  unsigned char *puStack_7c;
  unsigned char *puStack_78;
  unsigned char uStack_50;
  unsigned char uStack_4f;
  unsigned char uStack_4e;
  unsigned char uStack_4d;
  unsigned int uStack_4c;
  unsigned char uStack_48;
  unsigned char uStack_47;
  unsigned char uStack_46;
  unsigned char uStack_45;
  unsigned int uStack_44;
  unsigned char uStack_38;
  unsigned char uStack_37;
  unsigned char uStack_36;
  unsigned char uStack_35;
  unsigned int uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  unsigned int temp_v8;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    if (param_2 != 0) {
      temp_v0 = 0x100;
      temp_v8 = 1;
      FUN_00163060(0x100,0x100,0,0x14);
      *(int *)(param_1 + 0x44) = temp_v0;
    }
    else {
      temp_v0 = 0x10000;
      temp_v8 = 1;
      FUN_00163060(0x10000,0x100,0,0x14);
      *(int *)(param_1 + 0x44) = temp_v0;
    }
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_37 = 1;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_4f = 1;
    uStack_47 = 1;
    uStack_36 = 0xff;
    uStack_35 = 0xff;
    uStack_4e = 0xff;
    uStack_46 = 0xff;
    uStack_4d = 0xff;
    uStack_45 = 0xff;
    uStack_4c = 0;
    uStack_44 = 0;
    iStack_30 = temp_v0;
    iStack_2c = param_1;
    iStack_28 = param_2;
    nn_gr_CTR_Shader_SearchBindSymbol(&DAT_005cc554,&uStack_38,0x41982c,temp_v8);
    nn_gr_CTR_Shader_SearchBindSymbol(&DAT_005cc554,&uStack_50,0x41983c);
    nn_gr_CTR_Shader_SearchBindSymbol(&DAT_005cc554,&uStack_48,0x419844);
    puVar2 = &uStack_8c;
    FUN_002f5020(puVar2,0x5157dc,1,0xc);
    puVar2 = puVar2 + -4;
    *puVar2 = 0;
    temp_v4 = 0;
    do {
      temp_v3 = temp_v4 + 1;
      puVar2[temp_v4 + 4] = 0;
      temp_v4 = temp_v3;
    } while (temp_v3 < 0xc);
    temp_v5 = 0;
    temp_v4 = 0;
    do {
      temp_v6 = temp_v5 + 1;
      temp_v4 = temp_v4 + 2;
      *(unsigned int *)(puVar2 + temp_v5 * 4 + 0x10) = 0;
      temp_v5 = temp_v5 + 2;
      *(unsigned int *)(puVar2 + temp_v6 * 4 + 0x10) = 0;
    } while (temp_v4 < 0xc);
    temp_v7[0] = 3;
    puStack_80 = &uStack_48;
    uStack_8c = 7;
    puStack_7c = &uStack_50;
    uStack_8b = 0xf;
    puStack_78 = &uStack_38;
    uStack_8a = 0xb;
    temp_v1 = func_0x004ff4a4(iStack_2c);
    *(unsigned int *)(temp_v0 + 0x10) = temp_v1;
    if (param_2 != 0) {
      temp_v1 = 0x100;
      FUN_00163060(0x100,0x100,0,*(int *)(temp_v0 + 0x10) << 2,1);
      *(unsigned int *)(temp_v0 + 8) = temp_v1;
      temp_v1 = 0x100;
      FUN_00163060(0x100,0x100,0,*(int *)(temp_v0 + 0x10) << 2,1);
      *(unsigned int *)(temp_v0 + 4) = temp_v1;
      temp_v1 = 0x100;
      FUN_00163060(0x100,0x100,0,*(int *)(temp_v0 + 0x10) << 2,1);
      *(unsigned int *)(temp_v0 + 0xc) = temp_v1;
    }
    else {
      temp_v1 = 0x10000;
      FUN_00163060(0x10000,0x100,0,*(int *)(temp_v0 + 0x10) << 2,1);
      *(unsigned int *)(temp_v0 + 8) = temp_v1;
      temp_v1 = 0x10000;
      FUN_00163060(0x10000,0x100,0,*(int *)(temp_v0 + 0x10) << 2,1);
      *(unsigned int *)(temp_v0 + 4) = temp_v1;
      temp_v1 = 0x10000;
      FUN_00163060(0x10000,0x100,0,*(int *)(temp_v0 + 0x10) << 2,1);
      *(unsigned int *)(temp_v0 + 0xc) = temp_v1;
    }
    temp_v5 = 0;
    if (temp_v5 < *(int *)(temp_v0 + 0x10)) {
      do {
        *(unsigned int *)(*(int *)(temp_v0 + 8) + temp_v5 * 4) = 0;
        *(unsigned int *)(*(int *)(temp_v0 + 4) + temp_v5 * 4) = 0;
        *(unsigned int *)(*(int *)(temp_v0 + 0xc) + temp_v5 * 4) = 0;
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < *(int *)(temp_v0 + 0x10));
    }
    temp_v5 = 0;
    if (temp_v5 < *(int *)(temp_v0 + 0x10)) {
      do {
        temp_v6 = func_0x004ff3c0(iStack_2c,temp_v5,5);
        if (temp_v6 != 0) {
          if (param_2 != 0) {
            temp_v2 = 0x100;
            FUN_00163060(0x100,0x100,0,0x7ac,1);
            *(int *)(*(int *)(temp_v0 + 8) + temp_v5 * 4) = temp_v2;
            *(int *)(temp_v2 + 4) = temp_v6;
            temp_v1 = 0x10000;
            FUN_0019d4d8(0x10000,0x100,0,*(int *)(temp_v2 + 4) * 0x90,0x80,1);
            *(unsigned int *)(temp_v2 + 8) = temp_v1;
            temp_v1 = 0x10000;
            FUN_0019d4d8(0x10000,0x100,0,*(int *)(temp_v2 + 4) * 0xc,0x80,1);
            *(unsigned int *)(temp_v2 + 0xc) = temp_v1;
          }
          else {
            temp_v2 = 0x10000;
            FUN_00163060(0x10000,0x100,0,0x7ac,1);
            *(int *)(*(int *)(temp_v0 + 8) + temp_v5 * 4) = temp_v2;
            *(int *)(temp_v2 + 4) = temp_v6;
            temp_v1 = 0x10000;
            FUN_0019d4d8(0x10000,0x100,0,*(int *)(temp_v2 + 4) * 0x90,0x80,1);
            *(unsigned int *)(temp_v2 + 8) = temp_v1;
            temp_v1 = 0x10000;
            FUN_0019d4d8(0x10000,0x100,0,*(int *)(temp_v2 + 4) * 0xc,0x80,1);
            *(unsigned int *)(temp_v2 + 0xc) = temp_v1;
          }
          FUN_0042c8f8(*(unsigned int *)(*(int *)(temp_v0 + 8) + temp_v5 * 4),temp_v7,iStack_2c,temp_v5,5
                      );
        }
        temp_v6 = func_0x004ff3c0(iStack_2c,temp_v5,4);
        if (temp_v6 != 0) {
          if (param_2 != 0) {
            temp_v2 = 0x100;
            FUN_00163060(0x100,0x100,0,0x7ac,1);
            *(int *)(*(int *)(temp_v0 + 4) + temp_v5 * 4) = temp_v2;
            *(int *)(temp_v2 + 4) = temp_v6;
            temp_v1 = 0x10000;
            FUN_0019d4d8(0x10000,0x100,0,*(int *)(temp_v2 + 4) * 0x90,0x80,1);
            *(unsigned int *)(temp_v2 + 8) = temp_v1;
            temp_v1 = 0x10000;
            FUN_0019d4d8(0x10000,0x100,0,*(int *)(temp_v2 + 4) * 0xc,0x80,1);
            *(unsigned int *)(temp_v2 + 0xc) = temp_v1;
          }
          else {
            temp_v2 = 0x10000;
            FUN_00163060(0x10000,0x100,0,0x7ac,1);
            *(int *)(*(int *)(temp_v0 + 4) + temp_v5 * 4) = temp_v2;
            *(int *)(temp_v2 + 4) = temp_v6;
            temp_v1 = 0x10000;
            FUN_0019d4d8(0x10000,0x100,0,*(int *)(temp_v2 + 4) * 0x90,0x80,1);
            *(unsigned int *)(temp_v2 + 8) = temp_v1;
            temp_v1 = 0x10000;
            FUN_0019d4d8(0x10000,0x100,0,*(int *)(temp_v2 + 4) * 0xc,0x80,1);
            *(unsigned int *)(temp_v2 + 0xc) = temp_v1;
          }
          FUN_0042c8f8(*(unsigned int *)(*(int *)(temp_v0 + 4) + temp_v5 * 4),temp_v7,iStack_2c,temp_v5,4
                      );
        }
        temp_v6 = func_0x004ff3c0(iStack_2c,temp_v5,6);
        if (temp_v6 != 0) {
          if (param_2 != 0) {
            temp_v2 = 0x100;
            FUN_00163060(0x100,0x100,0,0x7ac,1);
            *(int *)(*(int *)(temp_v0 + 0xc) + temp_v5 * 4) = temp_v2;
            *(int *)(temp_v2 + 4) = temp_v6;
            temp_v1 = 0x10000;
            FUN_0019d4d8(0x10000,0x100,0,*(int *)(temp_v2 + 4) * 0x90,0x80,1);
            *(unsigned int *)(temp_v2 + 8) = temp_v1;
            temp_v1 = 0x10000;
            FUN_0019d4d8(0x10000,0x100,0,*(int *)(temp_v2 + 4) * 0xc,0x80,1);
            *(unsigned int *)(temp_v2 + 0xc) = temp_v1;
          }
          else {
            temp_v2 = 0x10000;
            FUN_00163060(0x10000,0x100,0,0x7ac,1);
            *(int *)(*(int *)(temp_v0 + 0xc) + temp_v5 * 4) = temp_v2;
            *(int *)(temp_v2 + 4) = temp_v6;
            temp_v1 = 0x10000;
            FUN_0019d4d8(0x10000,0x100,0,*(int *)(temp_v2 + 4) * 0x90,0x80,1);
            *(unsigned int *)(temp_v2 + 8) = temp_v1;
            temp_v1 = 0x10000;
            FUN_0019d4d8(0x10000,0x100,0,*(int *)(temp_v2 + 4) * 0xc,0x80,1);
            *(unsigned int *)(temp_v2 + 0xc) = temp_v1;
          }
          FUN_0042c8f8(*(unsigned int *)(*(int *)(temp_v0 + 0xc) + temp_v5 * 4),temp_v7,iStack_2c,temp_v5
                       ,6);
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < *(int *)(temp_v0 + 0x10));
    }
    return;
  }
  return;
}

} /* extern "C" */
