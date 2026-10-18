/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b0ce` (_code @ 0x11b0ce, 0x7a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0011b0ce_arg0 fn_0011b0ce_arg0;
struct fn_0011b0ce_arg0 {
    unsigned char pad_0x0[0x50];
    void *field_0x50; /* +0x50 */
    unsigned char pad_0x54[0x24];
    int field_0x78; /* +0x78 */
    int field_0x7c; /* +0x7c */
};

typedef int romwright_code();
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_0011b020. */
extern int FUN_001320e2(int *, void **);


void FUN_0011b0ce(fn_0011b0ce_arg0 *param_1,int param_2,int param_3,void *param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  fn_0011b0ce_arg0 *pfVar2;
  int temp_v1;
  int temp_v2;
  void *temp_v3;
  
  if (((param_1->field_0x78 == param_2) && (param_1->field_0x7c == param_3)) &&
     (pfVar2 = param_1, temp_v2 = param_3, temp_v3 = param_4, FUN_0011b020(param_1,param_4),
     pfVar2 != (fn_0011b0ce_arg0 *)0x0)) {
    temp_v1 = *(int *)((int)param_1->field_0x50 + 8);
    do {
      temp_v2 = temp_v1;
      do {
        while( 1 ) {
          temp_v3 = param_1->field_0x50;
          temp_v1 = FUN_001320e2(&temp_v2,&temp_v3);
          if (temp_v1 == 0) {
            return;
          }
          (**(romwright_code **)(**(int **)(temp_v2 + 0x10) + 8))(*(int **)(temp_v2 + 0x10),param_4);
          temp_v0 = *(int *)(temp_v2 + 0xc);
          temp_v1 = temp_v2;
          if (*(int *)(temp_v2 + 0xc) == 0) break;
          do {
            temp_v2 = temp_v0;
            temp_v0 = *(int *)(temp_v2 + 8);
          } while (*(int *)(temp_v2 + 8) != 0);
        }
        do {
          temp_v2 = temp_v1;
          temp_v1 = *(int *)(temp_v2 + 4);
        } while (temp_v2 == *(int *)(temp_v1 + 0xc));
      } while (*(int *)(temp_v2 + 0xc) == temp_v1);
    } while( 1 );
  }
  return;
}
