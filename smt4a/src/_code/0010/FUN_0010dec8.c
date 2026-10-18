/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010dec8` (_code @ 0x10dec8, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_0010a34d; /* 0x10a34d */
extern unsigned char LAB_0010dc81; /* 0x10dc81 */
extern unsigned char LAB_0010de71; /* 0x10de71 */
extern unsigned char LAB_0010dfd0; /* 0x10dfd0 */
extern unsigned int DAT_00594a60; /* 0x594a60 */
extern unsigned int DAT_00594a64; /* 0x594a64 */

extern unsigned int FUN_0010dfdc(unsigned int *);
extern unsigned int FUN_002e6e26(void);
extern int FUN_002e760a(unsigned int);
extern int FUN_002e789a(int);
/* Supplied declaration required: FUN_002e78d0. */
/* Supplied declaration required: FUN_002e9af4. */
/* Supplied declaration required: FUN_002e9c0c. */
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002ea3c0. */
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea704. */
extern int FUN_002eb5f4(void);
/* Supplied declaration required: FUN_002f7c94. */
/* Supplied declaration required: FUN_002f7cb0. */
/* Supplied declaration required: FUN_002f7cba. */
/* Supplied declaration required: FUN_002f8174. */
/* Supplied declaration required: FUN_002f81c8. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0010dec8(int param_1)

{
/* irregular: 13 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3 [5];
  
  temp_v0 = FUN_002eb5f4();
  if ((temp_v0 != 0) && (temp_v0 = FUN_002ea704(), temp_v0 != 0)) {
    temp_v0 = FUN_002e9af4();
    FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x114));
    if (temp_v0 != 0) {
      temp_v0 = 0;
      do {
        temp_v1 = FUN_0010dfdc(temp_v3);
        rt_memcpy_w(temp_v0 * 0x14 + param_1 + 0x118,temp_v1,0x14);
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 3);
      temp_v0 = FUN_002ea704(temp_v3);
      if ((temp_v0 != 0) && (temp_v0 = FUN_002ea704(), *(char *)(temp_v0 + 0x10c) != '\0')) {
        temp_v1 = 1;
        puVar3 = (unsigned char *)0x34;
        temp_v1 = FUN_002ea3c0(temp_v3,puVar3,temp_v1,&LAB_0010dfd0);
        FUN_002ea3d0(param_1,temp_v1);
        return;
      }
      FUN_002e9c0c();
      temp_v0 = FUN_002e789a(param_1 + 0x220);
      if (temp_v0 != 0) {
        temp_v0 = FUN_002e760a(0xc0);
        if (temp_v0 != 0) {
          temp_v3[0] = 0;
          FUN_002f8174(temp_v0,DAT_00594a60,DAT_00594a64,&LAB_0010a34d);
        }
        FUN_002f81c8();
        temp_v1 = FUN_002e6e26();
        FUN_002e78d0(temp_v1,temp_v0,1);
        temp_v2 = *(unsigned int *)(param_1 + 0x264);
        temp_v1 = FUN_002e9af4();
        FUN_002f7c94(temp_v1,*(unsigned int *)(param_1 + 0x114),temp_v2);
        FUN_002f7cb0(param_1);
        temp_v0 = FUN_002e760a(0x10);
        temp_v1 = 0;
        if (temp_v0 != 0) {
          temp_v1 = FUN_002ea3c0(temp_v0,&LAB_0010de71,0,&LAB_0010dfd0);
        }
        FUN_002f7cba(param_1,param_1 + 0x220,temp_v1);
        return;
      }
    }
  }
  temp_v1 = 0;
  puVar3 = &LAB_0010dc81;
  temp_v1 = FUN_002ea3c0(temp_v3,puVar3,temp_v1,&LAB_0010dfd0);
  FUN_002ea3d0(param_1,temp_v1);
  return;
}
