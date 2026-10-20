/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f9086` (_code @ 0x2f9086, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00105348(int *, int);
int FUN_002e7232(int *);
int FUN_002e995c(unsigned char [32]);
int FUN_002eb17c(int *, unsigned char [32]);
int FUN_002fd394(int, int, unsigned char [32]);

typedef struct fn_002f9086_arg0 fn_002f9086_arg0;
struct fn_002f9086_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    unsigned char pad_0x8[0xe];
    ushort field_0x16; /* +0x16 */
    uint field_0x18; /* +0x18 */
};

typedef int romwright_code(...);
/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_4_stack;

/* Supplied declaration required: FUN_00105348. */
/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: FUN_002e995c. */
/* Supplied declaration required: FUN_002eb17c. */
extern int FUN_002eb83c(void);
/* Supplied declaration required: FUN_002fd394. */


unsigned int FUN_002f9086(fn_002f9086_arg0 *param_1,int *param_2,int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int *piVar5;
  unsigned char temp_v3 [32];
  fn_002f9086_arg0 *pfStack_24;
  int *piStack_20;
  int iStack_1c;
  unsigned int temp_v4;
  
  pfStack_24 = param_1;
  piStack_20 = param_2;
  iStack_1c = param_3;
  temp_v4 = param_4;
  FUN_002e995c(temp_v3);
  FUN_002fd394((int)param_1->field_0x4 + 0x10,param_3,temp_v3);
  piVar1 = param_2;
  FUN_00105348(param_2,0);
  if (piVar1 != (int *)0x0) {
    temp_v0 = FUN_002eb83c();
    if (temp_v0 != 0) {
      FUN_002e7232(param_2);
      FUN_002eb17c(piVar1,temp_v3);
      *(unsigned char *)(piVar1 + 0x4c) = 1;
      temp_v1 = param_1->field_0x18;
      piVar1[0x29] = (temp_v1 << 0x18) | (((temp_v1 >> 8) & 0xff) << 0x10) |
                     (((temp_v1 >> 0x10) & 0xff) << 8) | (temp_v1 >> 0x18);
      *(unsigned short *)(piVar1 + 0x2b) = (param_1->field_0x16 << 8) | (param_1->field_0x16 >> 8);
      piVar1[0x2c] = *(int *)((int)param_1->field_0x4 + 0x40);
      piVar1[0x2d] = *(int *)((int)param_1->field_0x4 + 0x44);
      temp_v1 = *(unsigned int *)(param_3 + 8);
      piVar1[0x2a] = (temp_v1 << 0x18) | (((temp_v1 >> 8) & 0xff) << 0x10) |
                     (((temp_v1 >> 0x10) & 0xff) << 8) | (temp_v1 >> 0x18);
      *(unsigned short *)((int)piVar1 + 0xae) =
           (*(unsigned short *)(param_3 + 6) << 8) | (*(unsigned short *)(param_3 + 6) >> 8);
      piVar5 = *(int **)((int)param_1->field_0x4 + 8);
      temp_v2 = (**(romwright_code **)(*piVar5 + 0x20))
                        (piVar5,temp_v4,*(unsigned char *)((int)param_1->field_0x4 + 4),0xf,0xf,piVar1
                         ,1);
      FUN_002e7232(piVar1);
      return temp_v2;
    }
    FUN_002e7232(param_2);
    (**(romwright_code **)(*piVar1 + 4))(piVar1);
  }
  else {
    FUN_002e7232(param_2);
  }
  return 0;
}

} /* extern "C" */
