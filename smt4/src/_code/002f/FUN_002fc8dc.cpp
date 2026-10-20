/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fc8dc` (_code @ 0x2fc8dc, 0x170 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002579bc(int);
int FUN_002a8740(...);
int FUN_0031c274(void);

typedef struct fn_002fc8dc_arg0 fn_002fc8dc_arg0;
struct fn_002fc8dc_arg0 {
    unsigned char pad_0x0[0x104];
    int field_0x104; /* +0x104 */
    unsigned char pad_0x108[0x8];
    undefined4 field_0x110; /* +0x110 */
    unsigned char pad_0x114[0xc];
    short field_0x120; /* +0x120 */
};

/* Supplied declaration required: FUN_002579bc. */
extern int FUN_0029ebac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002a8740. */
extern int FUN_002a8764(void);
/* Supplied declaration required: FUN_0031c274. */


int FUN_002fc8dc(fn_002fc8dc_arg0 *param_1)

{
/* irregular: 3 unstructured edge(s); 3 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v5 = 0;
  temp_v1 = FUN_0031c274();
  if (temp_v1 != 0) {
    temp_v0 = FUN_0031c274();
    param_1->field_0x120 = temp_v0;
    param_1->field_0x104 = -1;
    temp_v1 = FUN_002a8764();
    do {
      temp_v2 = temp_v1 + temp_v5;
      if ((-1 < *(char *)(temp_v2 + 0x9108)) &&
         (temp_v3 = FUN_002a8740(), (unsigned int)*(unsigned short *)(temp_v3 + 0x46) == (int)param_1->field_0x120)) {
        temp_v4 = FUN_002a8740((int)*(char *)(temp_v2 + 0x9108));
        temp_v3 = FUN_0029ebac(temp_v4,10);
        if (temp_v3 == 0) {
          temp_v4 = FUN_002a8740((int)*(char *)(temp_v2 + 0x9108));
          temp_v2 = FUN_0029ebac(temp_v4,1);
          if (temp_v2 == 0) {
            temp_v1 = 5;
            param_1->field_0x104 = temp_v1;
            temp_v5 = 2;
            param_1->field_0x110 = 2;
            return temp_v5;
          }
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 3);
    if (param_1->field_0x104 != -1) {
      temp_v5 = 2;
      param_1->field_0x110 = 2;
      return temp_v5;
    }
    temp_v5 = 0;
    do {
      temp_v2 = temp_v1 + temp_v5;
      if ((-1 < *(char *)(temp_v2 + 0x90f0)) &&
         (temp_v3 = FUN_002a8740(), (unsigned int)*(unsigned short *)(temp_v3 + 0x46) == (int)param_1->field_0x120)) {
        temp_v4 = FUN_002a8740((int)*(char *)(temp_v2 + 0x90f0));
        temp_v3 = FUN_0029ebac(temp_v4,10);
        if (temp_v3 != 0) {
          param_1->field_0x104 = 2;
          temp_v5 = 2;
          param_1->field_0x110 = 2;
          return temp_v5;
        }
        temp_v4 = FUN_002a8740((int)*(char *)(temp_v2 + 0x90f0));
        temp_v2 = FUN_0029ebac(temp_v4,1);
        if (temp_v2 != 0) {
          param_1->field_0x104 = 2;
          temp_v5 = 2;
          param_1->field_0x110 = 2;
          return temp_v5;
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 0x18);
    if (param_1->field_0x104 == -1) {
      FUN_002579bc(0);
      temp_v1 = 4;
      param_1->field_0x104 = temp_v1;
    }
    temp_v5 = 2;
    param_1->field_0x110 = 2;
  }
  return temp_v5;
}

} /* extern "C" */
