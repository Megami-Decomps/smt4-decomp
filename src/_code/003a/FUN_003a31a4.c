/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a31a4` (_code @ 0x3a31a4, 0x1a0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003a31a4_arg0 fn_003a31a4_arg0;
struct fn_003a31a4_arg0 {
    unsigned char pad_0x0[0x10];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0xb];
    unsigned char field_0x1c; /* +0x1c */
    unsigned char field_0x1d; /* +0x1d */
    unsigned char pad_0x1e[0x11ae];
    undefined4 field_0x11cc; /* +0x11cc */
    undefined4 field_0x11d0; /* +0x11d0 */
    undefined4 field_0x11d4; /* +0x11d4 */
    undefined4 field_0x11d8; /* +0x11d8 */
    undefined1 field_0x11dc; /* +0x11dc */
};

typedef int romwright_code();
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

extern int FUN_001c87b8(void);
extern int FUN_001dd7e8(void);
extern int FUN_001dd808(void);
/* Supplied declaration required: FUN_002bef14. */
/* Supplied declaration required: FUN_002bf558. */
extern int FUN_002bf6d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c1abc. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: FUN_002c3ba8. */
extern int FUN_002c5f7c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003a39f8. */


void FUN_003a31a4(fn_003a31a4_arg0 *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned char temp_v4;
  unsigned int temp_v5 [2];
  
  FUN_002c3ba8(DAT_0044ea00);
  FUN_002bef14();
  temp_v1 = DAT_0044ea00;
  temp_v0 = FUN_002c5f7c(1,0);
  piVar5 = (int *)(temp_v1 + 0x124c);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v0;
  if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v3 != temp_v0) {
    (**(romwright_code **)(temp_v1 + 0x1268))();
    *(unsigned char *)(temp_v1 + 0x1264) = 0;
  }
  if (*(int *)&param_1->field_0x10 != 1) {
    FUN_003a39f8(param_1);
    temp_v1 = FUN_001c87b8();
    if (temp_v1 != 0) {
      temp_v1 = FUN_001dd7e8();
      temp_v0 = FUN_001dd808();
      temp_v5[0] = 0xf5;
      temp_v5[1] = 0xf6;
      temp_v4 = param_1->field_0x1d != '\0';
      if (temp_v4) {
        temp_v2 = FUN_002bf6d0(0x2b,0xf5);
        FUN_002bf558(2,0x2b,6,*(short *)(temp_v2 + 8) + temp_v1,*(short *)(temp_v2 + 10) + temp_v0,0xd);
      }
      if (param_1->field_0x1c != '\0') {
        temp_v2 = FUN_002bf6d0(0x2b,temp_v5[temp_v4]);
        FUN_002bf558(2,0x2b,7,*(short *)(temp_v2 + 8) + temp_v1,*(short *)(temp_v2 + 10) + temp_v0,0xd);
      }
    }
  }
  temp_v1 = DAT_0044ea00;
  piVar5 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v0 = *piVar5;
  temp_v2 = piVar5[temp_v0 + 2];
  *piVar5 = temp_v0 - 1;
  if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v2 != piVar5[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v1 + 0x1268))();
    *(unsigned char *)(temp_v1 + 0x1264) = 0;
  }
  FUN_002c1b64(DAT_0044ea00);
  FUN_002c1abc(DAT_0044ea00);
  return;
}
