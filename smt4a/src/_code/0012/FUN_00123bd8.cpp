/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123bd8` (_code @ 0x123bd8, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int FUN_002e7908(unsigned int, unsigned int *);

typedef struct fn_00123bd8_arg1 fn_00123bd8_arg1;
struct fn_00123bd8_arg1 {
    void *field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x4];
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x88];
    void *field_0x94; /* +0x94 */
    void *field_0x98; /* +0x98 */
};

typedef int romwright_code(...);
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int onlineContextGetInstance(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: FUN_002e7908. */
extern int FUN_002ea704(void);
extern int *FUN_003055cc(fn_00123bd8_arg1 *);


void FUN_00123bd8(unsigned int param_1,fn_00123bd8_arg1 *param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int *puVar3;
  int temp_v1;
  unsigned char temp_v2 [12];
  unsigned int temp_v3 [2];
  
  puVar3 = (unsigned int *)&temp_v1;
  temp_v0 = onlineContextGetInstance();
  FUN_002e6e34(temp_v2,temp_v0 + 0x58);
  if ((((param_2->field_0x98 != (void *)0x0) &&
       (*(char *)((int)param_2->field_0x98 + 0x22) != '\x05')) ||
      (param_2->field_0x94 == (void *)0x0)) ||
     (*(char *)((int)param_2->field_0x94 + 0x22) != '\x05')) {
    temp_v1 = 0x800300d2;
    puVar3 = (unsigned int *)&temp_v1;
  }
  else {
    piVar2 = (int *)FUN_003055cc(param_2);
    if (((piVar2 == (int *)0x0) || (temp_v0 = (**(romwright_code **)(*piVar2 + 0x14))(piVar2), temp_v0 == 0)) ||
       ((temp_v0 = (**(romwright_code **)(*piVar2 + 0x18))(piVar2), temp_v0 != 0 ||
        ((*(int *)(piVar2[2] + 0xc) == 0 ||
         (temp_v0 = FUN_002ea704(), *(char *)(temp_v0 + 0x10e) != '\0')))))) {
      temp_v3[0] = 0x800300d2;
      puVar3 = temp_v3;
    }
    else {
      temp_v1 = 0x10001;
    }
  }
  FUN_002e7908(param_1,puVar3);
  _ZN9Obj55b28cD1Ev(temp_v2);
  return;
}

} /* extern "C" */
