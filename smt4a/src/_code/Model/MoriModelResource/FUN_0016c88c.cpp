/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016c88c` (_code @ 0x16c88c, 0x214 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match7_MaterialTextures.h"

extern "C" {

int FUN_00178b04(int, unsigned char *, int);
int FUN_00187e08(int, unsigned int, unsigned int, unsigned int);
int FUN_0018f69c(...);
int FUN_0018f9c0(int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char LAB_0016caa4; /* 0x16caa4 */
extern int g_handleRegistry; /* 0x56fcc0 */

/* Supplied declaration required: FUN_00178b04. */
extern unsigned int FUN_00186118(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_00187e08. */
extern unsigned int _ZN9Obj557dccC1Ev(void);
/* Supplied declaration required: FUN_0018f69c. */
/* Supplied declaration required: FUN_0018f9c0. */


void FUN_0016c88c(unsigned int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 goto(s); 5 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int *piVar4;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  
  if (*(char *)(param_1 + 1) != '\0') {
    temp_v1 = *param_1;
  }
  else {
    temp_v6 = param_4;
    temp_v1 = FUN_00186118(*param_1,(unsigned int *)&temp_v6);
  }
  temp_v6 = param_1[4];
  FUN_00187e08(param_2,temp_v1,param_1[2],param_1[3]);
  temp_v2 = 0;
  *(unsigned int *)(param_2 + 8) = (unsigned int)*(unsigned char *)(param_1 + 5);
  *(unsigned int *)(param_2 + 0x40) = *param_1;
  *(unsigned char *)(param_2 + 4) = *(unsigned char *)(param_1 + 1);
  temp_v4 = (unsigned int)*(unsigned short *)(*(int *)(param_2 + 0x3c) + 4);
  if (temp_v4 != 0) {
    do {
      FUN_0018f69c(*(unsigned int *)(**(int **)(param_2 + 0x3c) + temp_v2 * 4),param_2 + 0xc,
                   *(unsigned int *)(param_2 + 0x7c),*(unsigned int *)(param_2 + 100));
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < temp_v4);
  }
  temp_v2 = 0;
  temp_v4 = (unsigned int)*(unsigned short *)(*(int *)(param_2 + 0x3c) + 0x40);
  if (temp_v4 != 0) {
    do {
      temp_v0 = *(int *)(*(int *)(*(int *)(param_2 + 0x3c) + 0x3c) + temp_v2 * 4);
      if ((*(unsigned char *)(temp_v0 + 0x28) & 8) != 0) {
        FUN_0018f9c0(temp_v0,param_2 + 0xc);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < temp_v4);
  }
  if (g_handleRegistry != 0) {
    if ((*(unsigned int *)(param_2 + 8) & 2) != 0) {
      temp_v0 = *(int *)(*(int *)(g_handleRegistry + 0x14) + 0x1c);
      if (temp_v0 != 0) {
        temp_v2 = 0;
        temp_v4 = (unsigned int)*(unsigned short *)(*(int *)(param_2 + 0x3c) + 4);
        if (temp_v4 != 0) {
          do {
            temp_v6 = *(unsigned int *)(param_2 + 100);
            gfxModelBindTextureByName(
                reinterpret_cast<ModelTextureBindings*>(
                    *(unsigned int *)(**(int **)(param_2 + 0x3c) + temp_v2 * 4)),
                reinterpret_cast<const char*>(*(unsigned int *)(temp_v0 + 0x1c)),
                reinterpret_cast<NamedModelTexture*>(temp_v0),
                reinterpret_cast<u8*>(*(unsigned int *)(param_2 + 0x7c)),
                reinterpret_cast<const u8*>(temp_v6));
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < temp_v4);
        }
      }
      if (g_handleRegistry == 0) goto LAB_0016ca7c;
    }
    temp_v0 = *(int *)(g_handleRegistry + 8);
    if (temp_v0 != 0) {
      temp_v3 = 0;
      temp_v2 = (unsigned int)*(unsigned short *)(*(int *)(param_2 + 0x3c) + 4);
      if (temp_v2 != 0) {
        do {
          temp_v5 = *(int *)(**(int **)(param_2 + 0x3c) + temp_v3 * 4);
          piVar2 = *(int **)(temp_v5 + 0x34);
          piVar4 = piVar2 + (unsigned int)*(unsigned short *)(temp_v5 + 0x38) * 0xb;
          for (; piVar2 != piVar4; piVar2 = piVar2 + 0xb) {
            if (*(int *)(*piVar2 + 8) == 0) {
              *(unsigned int *)(*piVar2 + 8) = **(unsigned int **)(*(int *)(temp_v0 + 0x3c) + 0x18);
            }
          }
          FUN_0018f69c(temp_v5,temp_v0 + 0xc,*(unsigned int *)(param_2 + 0x7c),
                       *(unsigned int *)(param_2 + 100));
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < (int)temp_v2);
      }
    }
  }
LAB_0016ca7c:
  temp_v0 = 0x18;
  FUN_00178b04(0x18,&LAB_0016caa4,100);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = _ZN9Obj557dccC1Ev();
  }
  *(unsigned int *)(param_2 + 0x88) = temp_v1;
  return;
}

} /* extern "C" */
