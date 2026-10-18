/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039723c` (_code @ 0x39723c, 0x22c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0039723c_arg0 fn_0039723c_arg0;
struct fn_0039723c_arg0 {
    unsigned char pad_0x0[0x20];
    unsigned char field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x7];
    unsigned char field_0x28; /* +0x28 */
    unsigned char field_0x29; /* +0x29 */
    unsigned char pad_0x2a[0x7a];
    unsigned char field_0xa4; /* +0xa4 */
    unsigned char pad_0xa5[0x7];
    unsigned char field_0xac; /* +0xac */
    unsigned char pad_0xad[0x111f];
    undefined4 field_0x11cc; /* +0x11cc */
    undefined4 field_0x11d0; /* +0x11d0 */
    undefined4 field_0x11d4; /* +0x11d4 */
    undefined4 field_0x11d8; /* +0x11d8 */
    undefined1 field_0x11dc; /* +0x11dc */
};

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf538. */
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00397db0. */


void FUN_0039723c(fn_0039723c_arg0 *param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  
  FUN_002c39a4(DAT_0044ea00);
  FUN_002bed3c();
  temp_v0 = DAT_0044ea00;
  temp_v2 = FUN_002c5d80(1,0);
  piVar6 = (int *)(temp_v0 + 0x124c);
  temp_v3 = *piVar6;
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v2;
  if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(temp_v0 + 0x1268))();
    *(unsigned char *)(temp_v0 + 0x1264) = 0;
  }
  FUN_002c1b64(DAT_0044ea00,0);
  FUN_002bf538();
  FUN_002bf380(2,0x2e,0,*(unsigned int *)&param_1->field_0xac,0,0xb);
  temp_v0 = DAT_0044ea00;
  temp_v2 = FUN_002c5da8(6,1,0);
  piVar6 = (int *)(temp_v0 + 0x12ac);
  temp_v3 = piVar6[*piVar6 + 2];
  piVar6[*piVar6 + 2] = temp_v2;
  if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v3 != temp_v2) {
    (**(romwright_code **)(temp_v0 + 0x12c8))();
    *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  }
  if (param_1->field_0x29 != '\0') {
    FUN_002bf288(2,0x2e,0x3f,*(unsigned int *)&param_1->field_0xa4,0,0xb);
  }
  else {
    FUN_002bf288(2,0x2e,0x3d,*(unsigned int *)&param_1->field_0xa4,0,0xb);
    FUN_002bf288(2,0x2e,0x3e,*(unsigned int *)&param_1->field_0xa4,0,0xb);
  }
  temp_v0 = DAT_0044ea00;
  temp_v2 = FUN_002c5da8(6,7,0);
  piVar6 = (int *)(temp_v0 + 0x12ac);
  temp_v3 = piVar6[*piVar6 + 2];
  piVar6[*piVar6 + 2] = temp_v2;
  if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v3 != temp_v2) {
    (**(romwright_code **)(temp_v0 + 0x12c8))();
    *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  }
  temp_v1 = param_1->field_0x20;
  if (param_1->field_0x28 != '\0') {
    temp_v1 = temp_v1 + '\x04';
  }
  FUN_00397db0(param_1,temp_v1);
  FUN_002bf538();
  temp_v0 = DAT_0044ea00;
  piVar6 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 - 1;
  if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v3 != piVar6[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1268))();
    *(unsigned char *)(temp_v0 + 0x1264) = 0;
  }
  FUN_002c198c(DAT_0044ea00);
  FUN_002c18e4(DAT_0044ea00);
  return;
}
