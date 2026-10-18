/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00167cf8` (_code @ 0x167cf8, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00167cf8_arg0 fn_00167cf8_arg0;
struct fn_00167cf8_arg0 {
    unsigned char pad_0x0[0x8];
    void *field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    undefined4 field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x1c];
    undefined4 field_0x38; /* +0x38 */
    unsigned char pad_0x3c[0x8];
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    undefined4 field_0x50; /* +0x50 */
    unsigned char pad_0x54[0x4];
    ushort *field_0x58; /* +0x58 */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern unsigned int DAT_00570280; /* 0x570280 */

/* Supplied declaration required: FUN_0014afd0. */
extern int FUN_00162ea4(void);
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_00191e00. */
extern unsigned short *FUN_0019e378(int, unsigned int);
extern int FUN_001a6508(unsigned int, unsigned int, unsigned int, unsigned int);


void FUN_00167cf8(fn_00167cf8_arg0 *param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned short *puVar2;
  int temp_v1;
  
  temp_v0 = FUN_00164a9c();
  if ((*(int *)(temp_v0 + 0x58) != 0) && (*(int *)(temp_v0 + 0x4c) == 0)) {
    if (param_3 == 0) {
      *(unsigned int *)(temp_v0 + 0x38) = 0;
    }
    else if (*(int *)(temp_v0 + 0x38) == 1) {
      return;
    }
    puVar2 = (unsigned short *)FUN_0019e378(*(int *)(temp_v0 + 0x58),param_2);
    if (*(unsigned int *)(temp_v0 + 0x44) != (unsigned int)*puVar2) {
      if (param_3 != 0) {
        *(unsigned int *)(temp_v0 + 0x38) = 1;
      }
      *(unsigned int *)(temp_v0 + 0x48) = *(unsigned int *)(temp_v0 + 0x44);
      *(unsigned int *)(temp_v0 + 0x44) = (unsigned int)*puVar2;
      if (*(int *)(temp_v0 + 0xc) == 1) {
        *(unsigned int *)(temp_v0 + 0x48) = 0xffffffff;
      }
      else {
        temp_v1 = FUN_00162ea4();
        if (temp_v1 == 0) {
          *(unsigned int *)(temp_v0 + 0xc) = 0;
          *(unsigned int *)(temp_v0 + 0x2c) = 0x3f800000;
          temp_v1 = FUN_001a6508(DAT_00570280,*(unsigned int *)(temp_v0 + 0x40),
                               *(unsigned int *)(temp_v0 + 0x44),1);
          if (temp_v1 != 0) {
            FUN_00191e00(DAT_00570280,*(unsigned int *)(temp_v0 + 0x40),*(unsigned int *)(temp_v0 + 0x44),
                         0x10000);
            return;
          }
          FUN_0014afd0(*(unsigned int *)(temp_v0 + 0x40),*(unsigned int *)(temp_v0 + 0x44));
          return;
        }
        *(unsigned int *)(temp_v0 + 0xc) = 1;
        *(unsigned int *)(temp_v0 + 0x48) = 0xffffffff;
      }
    }
  }
  return;
}
