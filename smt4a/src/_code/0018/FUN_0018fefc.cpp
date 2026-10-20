/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018fefc` (_code @ 0x18fefc, 0x1e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a6350(unsigned int, int);
int nw_ut_internal_LinkListImpl_insert(...);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

/* Supplied declaration required: FUN_001a6350. */
extern int FUN_001a64bc(unsigned int, unsigned int *);
extern unsigned int FUN_001b1f04(void);
extern unsigned int *FUN_001b95dc(void);
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


unsigned int FUN_0018fefc(int param_1,int param_2,unsigned int *param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int *piVar3;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v3 = *param_3;
  if ((temp_v3 & 0x1f) == 0) {
    temp_v0 = (param_2 * 0x1e8 + 0x1fU) & 0xffffffe0;
    temp_v6 = temp_v3 + temp_v0;
    if ((int)(temp_v6 - param_4) < 1) {
      temp_v5 = 0;
      temp_v4 = temp_v3;
      if (temp_v0 / 0x1e8 != 0) {
        do {
          if (temp_v4 == 0) {
            temp_v2 = 0;
          }
          else {
            temp_v2 = FUN_001a64bc(temp_v4,(unsigned int *)(param_1 + 0x6c));
          }
          nw_ut_internal_LinkListImpl_insert(param_1 + 0x80,param_1 + 0x84,temp_v2 + 0xf8);
          temp_v5 = temp_v5 + 1;
          temp_v4 = temp_v4 + 0x1e8;
        } while (temp_v5 < temp_v0 / 0x1e8);
      }
      *(unsigned int *)(param_1 + 0x6c) = temp_v3;
      *(unsigned int *)(param_1 + 0x70) = temp_v0;
      *param_3 = temp_v6;
      temp_v3 = (param_2 * 0x4c + 0x1fU) & 0xffffffe0;
      if ((int)((temp_v6 + temp_v3) - param_4) < 1) {
        temp_v5 = 0;
        temp_v0 = (unsigned int)(((unsigned long long)temp_v3 * 0xd79435e5 + 0xd79435e5) >> 0x26);
        temp_v4 = temp_v6;
        if (temp_v0 != 0) {
          do {
            puVar2 = (unsigned int *)0x0;
            if (temp_v4 != 0) {
              puVar2 = (unsigned int *)FUN_001b95dc();
              puVar2[7] = 0;
              *puVar2 = 0x55c1d8;
              puVar2[8] = 0;
              puVar2[9] = 0;
              puVar2[10] = 0xffffffff;
              puVar2[0xb] = 0;
              puVar2[0xc] = 0;
              puVar2[0xd] = 0;
              puVar2[0xe] = 0;
              puVar2[0x11] = 0;
              puVar2[0x12] = 0;
            }
            nw_ut_internal_LinkListImpl_insert(param_1 + 0xa0,param_1 + 0xa4,puVar2 + 0x11);
            temp_v5 = temp_v5 + 1;
            temp_v4 = temp_v4 + 0x4c;
          } while (temp_v5 < temp_v0);
        }
        *(unsigned int *)(param_1 + 0x98) = temp_v6;
        *(unsigned int *)(param_1 + 0x9c) = temp_v3;
        *param_3 = temp_v6 + temp_v3;
        piVar3 = *(int **)(param_1 + 0x84);
        if (piVar3 != (int *)(param_1 + 0x84)) {
          do {
            piVar3[0x34] = param_1 + 0x8c;
            piVar3 = (int *)*piVar3;
          } while (piVar3 != (int *)(param_1 + 0x84));
        }
        temp_v1 = FUN_001b1f04();
        FUN_001a6350(temp_v1,param_1 + 0x8c);
        return 1;
      }
    }
  }
  return 0;
}

} /* extern "C" */
