/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012630c` (_code @ 0x12630c, 0xf8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ae8e4(unsigned int, unsigned int, unsigned int, int);
int FUN_002c58c8(unsigned int, unsigned int);

typedef struct fn_0012630c_arg0 fn_0012630c_arg0;
struct fn_0012630c_arg0 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x8];
    undefined4 field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x18];
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    unsigned char pad_0x3c[0x4];
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    unsigned char pad_0x50[0x4];
    ushort *field_0x54; /* +0x54 */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern unsigned int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_002ae8e4. */
extern int FUN_002ae98c(unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned short *FUN_002aecd8(int, unsigned int);
extern int FUN_002c08f0(void);
extern int FUN_002c1d5c(void);
/* Supplied declaration required: FUN_002c58c8. */


void FUN_0012630c(fn_0012630c_arg0 *param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned short *puVar2;
  int temp_v1;
  
  temp_v0 = FUN_002c08f0();
  if ((*(int *)(temp_v0 + 0x54) != 0) && (*(int *)(temp_v0 + 0x48) == 0)) {
    if (param_3 == 0) {
      *(unsigned int *)(temp_v0 + 0x34) = 0;
    }
    else if (*(int *)(temp_v0 + 0x34) == 1) {
      return;
    }
    puVar2 = (unsigned short *)FUN_002aecd8(*(int *)(temp_v0 + 0x54),param_2);
    if (*(unsigned int *)(temp_v0 + 0x40) != (unsigned int)*puVar2) {
      if (param_3 != 0) {
        *(unsigned int *)(temp_v0 + 0x34) = 1;
      }
      *(unsigned int *)(temp_v0 + 0x44) = *(unsigned int *)(temp_v0 + 0x40);
      *(unsigned int *)(temp_v0 + 0x40) = (unsigned int)*puVar2;
      if (*(int *)(temp_v0 + 0xc) == 1) {
        *(unsigned int *)(temp_v0 + 0x44) = 0xffffffff;
      }
      else {
        temp_v1 = FUN_002c1d5c();
        if (temp_v1 == 0) {
          *(unsigned int *)(temp_v0 + 0xc) = 0;
          *(unsigned int *)(temp_v0 + 0x2c) = 0x3f800000;
          temp_v1 = FUN_002ae98c(DAT_00433158,*(unsigned int *)(temp_v0 + 0x3c),
                               *(unsigned int *)(temp_v0 + 0x40),1);
          if (temp_v1 != 0) {
            FUN_002ae8e4(DAT_00433158,*(unsigned int *)(temp_v0 + 0x3c),*(unsigned int *)(temp_v0 + 0x40),
                         0x10000);
            return;
          }
          FUN_002c58c8(*(unsigned int *)(temp_v0 + 0x3c),*(unsigned int *)(temp_v0 + 0x40));
          return;
        }
        *(unsigned int *)(temp_v0 + 0xc) = 1;
        *(unsigned int *)(temp_v0 + 0x44) = 0xffffffff;
      }
    }
  }
  return;
}

} /* extern "C" */
