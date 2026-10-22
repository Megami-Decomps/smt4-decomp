/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019029c` (_code @ 0x19029c, 0x21c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a6350(unsigned int, int);
int __aeabi_vec_ctor_nocookie_nodtor(unsigned int *, unsigned char *, int, int);
int nw_ut_internal_LinkListImpl_insert(...);

/* stack frame of param_4: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

extern unsigned char LAB_001b1aa8; /* 0x1b1aa8 */
extern unsigned char DAT_0055c2f8; /* 0x55c2f8 */

extern int constructObj0055bfc4(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_001a6350. */
extern unsigned int FUN_001b1f04(void);
extern unsigned int *FUN_001b95dc(unsigned int, int);
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


unsigned int FUN_0019029c(int param_1,int param_2,unsigned int *param_3,int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int *piVar3;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  temp_v3 = *param_3;
  if ((temp_v3 & 0x1f) == 0) {
    temp_v8 = (param_2 * 0x2d8 + 0x1fU) & 0xffffffe0;
    temp_v7 = temp_v3 + temp_v8;
    if ((int)(temp_v7 - param_4) < 1) {
      temp_v5 = 0;
      temp_v6 = (unsigned int)(((unsigned long long)temp_v8 * 0x2d02d02d + 0x2d02d02d) >> 0x27);
      temp_v4 = temp_v3;
      if (temp_v6 != 0) {
        do {
          if (temp_v4 == 0) {
            temp_v2 = 0;
          }
          else {
            temp_v2 = constructObj0055bfc4(temp_v4,(unsigned int *)(param_1 + 0x20));
          }
          nw_ut_internal_LinkListImpl_insert(param_1 + 0x34,param_1 + 0x38,temp_v2 + 0xf8);
          temp_v5 = temp_v5 + 1;
          temp_v4 = temp_v4 + 0x2d8;
        } while (temp_v5 < temp_v6);
      }
      *(unsigned int *)(param_1 + 0x20) = temp_v3;
      *(unsigned int *)(param_1 + 0x24) = temp_v8;
      *param_3 = temp_v7;
      temp_v3 = (param_2 * 0x88 + 0x1fU) & 0xffffffe0;
      if ((int)((temp_v7 + temp_v3) - param_4) < 1) {
        temp_v6 = 0;
        temp_v2 = temp_v3 * -0xf0f0f0f;
        temp_v8 = temp_v7;
        if (temp_v3 / 0x88 != 0) {
          do {
            puVar2 = (unsigned int *)0x0;
            if (temp_v8 != 0) {
              puVar1 = (unsigned int *)FUN_001b95dc(temp_v8,temp_v2);
              *puVar1 = (unsigned int)&DAT_0055c2f8;
              puVar1[7] = 0;
              puVar1[8] = 0;
              puVar1[9] = 0;
              puVar1[10] = 0xffffffff;
              puVar1[0xb] = 0;
              puVar1 = puVar1 + 0xc;
              __aeabi_vec_ctor_nocookie_nodtor(puVar1,&LAB_001b1aa8,8,4);
              puVar2 = puVar1 + -0xc;
              puVar1[8] = 0;
              puVar1[9] = 0;
              puVar1[0xd] = 0;
              *(unsigned char *)(puVar1 + 0x11) = 0;
              puVar1[10] = 0;
              puVar1[0xe] = 0;
              *(unsigned char *)((int)puVar1 + 0x45) = 0;
              puVar1[0xb] = 0;
              puVar1[0xf] = 0;
              *(unsigned char *)((int)puVar1 + 0x46) = 0;
              puVar1[0xc] = 0;
              puVar1[0x10] = 0;
              *(unsigned char *)((int)puVar1 + 0x47) = 0;
              puVar1[0x14] = 0;
              puVar1[0x15] = 0;
            }
            nw_ut_internal_LinkListImpl_insert(param_1 + 0x54,param_1 + 0x58,puVar2 + 0x20);
            temp_v6 = temp_v6 + 1;
            temp_v2 = temp_v1;
            temp_v8 = temp_v8 + 0x88;
          } while (temp_v6 < temp_v3 / 0x88);
        }
        *(unsigned int *)(param_1 + 0x4c) = temp_v7;
        *(unsigned int *)(param_1 + 0x50) = temp_v3;
        *param_3 = temp_v7 + temp_v3;
        piVar3 = *(int **)(param_1 + 0x38);
        if (piVar3 != (int *)(param_1 + 0x38)) {
          do {
            piVar3[0x69] = param_1 + 0x40;
            piVar3 = (int *)*piVar3;
          } while (piVar3 != (int *)(param_1 + 0x38));
        }
        temp_v0 = FUN_001b1f04();
        FUN_001a6350(temp_v0,param_1 + 0x40);
        return 1;
      }
    }
  }
  return 0;
}

} /* extern "C" */
