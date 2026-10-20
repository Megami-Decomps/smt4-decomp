/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019102c` (_code @ 0x19102c, 0x178 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a5db8(...);
int FUN_001aa14c(void);

typedef struct fn_0019102c_arg0 fn_0019102c_arg0;
struct fn_0019102c_arg0 {
    uint field_0x0; /* +0x0 */
    unsigned char pad_0x4[0xb0];
    void *field_0xb4; /* +0xb4 */
    unsigned char pad_0xb8[0x4];
    undefined4 field_0xbc; /* +0xbc */
    unsigned char pad_0xc0[0xb8];
    int field_0x178; /* +0x178 */
    int field_0x17c; /* +0x17c */
    uint field_0x180; /* +0x180 */
    undefined4 field_0x184; /* +0x184 */
    undefined4 field_0x188; /* +0x188 */
    byte field_0x18c; /* +0x18c */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int FUN_001911a4(fn_0019102c_arg0 *, unsigned int);
/* Supplied declaration required: FUN_001a5db8. */
/* Supplied declaration required: FUN_001aa14c. */
extern int nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryDequeue(void **, int **);


void FUN_0019102c(fn_0019102c_arg0 *param_1,unsigned int param_2,unsigned int param_3,int *param_4)

{
/* irregular: 3 goto(s); 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  void **ppvVar3;
  void **ppvVar4;
  int temp_v1;
  fn_0019102c_arg0 *pfVar6;
  int *piVar7;
  void **ppvVar8;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int *temp_v4;
  
  pfVar6 = param_1;
  temp_v4 = param_4;
  FUN_001a5db8();
  if (pfVar6 == (fn_0019102c_arg0 *)0x0) {
    while (temp_v0 = nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryDequeue
                             (&param_1->field_0xb4,&temp_v4), temp_v0 != 0) {
      param_1->field_0x178 = temp_v4[2];
      piVar7 = temp_v4;
      if (temp_v4 != (int *)0x0) {
        do {
          piVar2 = piVar7;
          piVar7 = (int *)*piVar2;
        } while (piVar7 != (int *)0x0);
        temp_v0 = piVar2[3];
        param_1->field_0x188 = temp_v0;
        param_1->field_0x18c = 0;
        if (param_1->field_0x184 == temp_v0) {
          param_1->field_0x188 = 0;
          param_1->field_0x184 = 0;
        }
      }
    }
    pfVar6 = param_1;
    FUN_001a5db8(param_1,param_2);
joined_r0x001910b4:
    if (pfVar6 == (fn_0019102c_arg0 *)0x0) {
      do {
        do {
          temp_v0 = FUN_001911a4(param_1,1);
          do {
            ppvVar3 = &param_1->field_0xb4;
            FUN_001aa14c();
            param_1->field_0x178 = (int)ppvVar3[2];
            ppvVar8 = ppvVar3;
            if (ppvVar3 != (void **)0x0) {
              do {
                ppvVar4 = ppvVar8;
                ppvVar8 = (void **)*ppvVar4;
              } while (ppvVar8 != (void **)0x0);
              temp_v1 = (int)ppvVar4[3];
              param_1->field_0x188 = temp_v1;
              param_1->field_0x18c = 0;
              if (param_1->field_0x184 == temp_v1) {
                param_1->field_0x188 = 0;
                param_1->field_0x184 = 0;
              }
            }
          } while (ppvVar3[2] != (void *)temp_v0);
          pfVar6 = (fn_0019102c_arg0 *)0x0;
        } while (param_1->field_0x18c != 0);
        temp_v2 = param_1->field_0x184;
        temp_v3 = param_1->field_0x188;
        if (temp_v2 < temp_v3) {
          if (temp_v3 < temp_v2 + param_2) goto joined_r0x001910b4;
          param_1->field_0x184 = temp_v2 + param_2;
          pfVar6 = (fn_0019102c_arg0 *)(param_1->field_0x17c + temp_v2 * 4);
        }
        else {
          if (temp_v2 + param_2 <= param_1->field_0x180) {
            param_1->field_0x184 = temp_v2 + param_2;
            pfVar6 = (fn_0019102c_arg0 *)(param_1->field_0x17c + temp_v2 * 4);
            continue;
          }
          if (temp_v3 < param_2) goto joined_r0x001910b4;
          param_1->field_0x184 = param_2;
          pfVar6 = (fn_0019102c_arg0 *)param_1->field_0x17c;
        }
      } while (pfVar6 == (fn_0019102c_arg0 *)0x0);
      if (param_1->field_0x184 == param_1->field_0x188) {
        param_1->field_0x18c = 1;
      }
      goto joined_r0x001910b4;
    }
  }
  return;
}

} /* extern "C" */
