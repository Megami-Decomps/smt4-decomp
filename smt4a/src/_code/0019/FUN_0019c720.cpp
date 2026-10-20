/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019c720` (_code @ 0x19c720, 0x198 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a7f4(...);
int FUN_0019d96c(...);
int FUN_001a6568(...);
int FUN_001acf98(...);
int FUN_001b2d54(...);

typedef struct fn_0019c720_arg0 fn_0019c720_arg0;
struct fn_0019c720_arg0 {
    unsigned char pad_0x0[0x5];
    unsigned char field_0x5; /* +0x5 */
    unsigned char pad_0x6[0x6];
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x3];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x3];
    int field_0x14; /* +0x14 */
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0xf];
    unsigned char field_0x28; /* +0x28 */
    unsigned char pad_0x29[0x7];
    unsigned char field_0x30; /* +0x30 */
    unsigned char pad_0x31[0x4b];
    byte field_0x7c; /* +0x7c */
    unsigned char pad_0x7d[0x3];
    int field_0x80; /* +0x80 */
    int field_0x84; /* +0x84 */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern unsigned int DAT_00570280; /* 0x570280 */

extern int FUN_00162ea4(void);
extern int FUN_0018206c(unsigned int);
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_0019d96c. */
extern int FUN_001a6508(unsigned int, unsigned int, int, unsigned int);
/* Supplied declaration required: FUN_001a6568. */
/* Supplied declaration required: FUN_001acf98. */
/* Supplied declaration required: FUN_001b2d54. */


void FUN_0019c720(fn_0019c720_arg0 *param_1,int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (param_1->field_0x14 != param_2) {
    if (param_1->field_0x7c != 0) {
      if (param_1->field_0x84 != -1) {
        FUN_0019a7f4(*(unsigned int *)&param_1->field_0x10);
        FUN_001b2d54(DAT_00570280,*(unsigned int *)&param_1->field_0x10,param_1->field_0x84);
        param_1->field_0x84 = -1;
        param_1->field_0x80 = 0;
      }
      param_1->field_0x14 = param_2;
    }
    else if (param_1[1].field_0x5 == '\0') {
      if ((param_1->field_0x14 != -1) &&
         (temp_v0 = FUN_0018206c(*(unsigned int *)&param_1->field_0x10), temp_v0 == 0)) {
        if (*(int *)&param_1->field_0x18 == -1) {
          *(int *)&param_1->field_0x18 = param_2;
        }
        return;
      }
      if (((param_1->field_0x30 == '\0') || (*(float *)&param_1->field_0x28 == 0.0f)) &&
         (*(int *)&param_1->field_0xc != 0)) {
        FUN_0019a7f4(*(unsigned int *)&param_1->field_0x10,param_1->field_0x14);
        FUN_001b2d54(DAT_00570280,*(unsigned int *)&param_1->field_0x10,param_1->field_0x14);
        *(unsigned int *)&param_1->field_0xc = 0;
      }
      temp_v0 = FUN_00162ea4();
      if (temp_v0 != 0) {
        param_1->field_0x7c = 1;
      }
      else {
        if (*(int *)&param_1->field_0xc != 0) {
          param_1->field_0x80 = *(int *)&param_1->field_0xc;
          param_1->field_0x84 = param_1->field_0x14;
        }
        param_1->field_0x14 = param_2;
        temp_v0 = FUN_001a6508(DAT_00570280,*(unsigned int *)&param_1->field_0x10,param_2,1);
        if (temp_v0 != 0) {
          temp_v1 = DAT_00570280;
          FUN_001a6568(DAT_00570280,*(unsigned int *)&param_1->field_0x10,param_1->field_0x14,0x10000)
          ;
        }
        else {
          temp_v1 = *(unsigned int *)&param_1->field_0x10;
          FUN_001acf98(temp_v1,param_1->field_0x14);
        }
        *(unsigned int *)&param_1->field_0xc = temp_v1;
        if (param_1->field_0x80 != 0) {
          if (-1 < param_3) {
            FUN_0019d96c(param_1,4,0);
            return;
          }
          FUN_0019d96c(param_1,3,0);
          return;
        }
      }
    }
  }
  return;
}

} /* extern "C" */
