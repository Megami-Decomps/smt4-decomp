/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a37dc` (_code @ 0x3a37dc, 0x134 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003a37dc_arg0 fn_003a37dc_arg0;
struct fn_003a37dc_arg0 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x99b];
    unsigned char field_0x9a0; /* +0x9a0 */
    unsigned char pad_0x9a1[0x3];
    unsigned char field_0x9a4; /* +0x9a4 */
    unsigned char pad_0x9a5[0x827];
    undefined4 field_0x11cc; /* +0x11cc */
    undefined4 field_0x11d0; /* +0x11d0 */
    undefined4 field_0x11d4; /* +0x11d4 */
    undefined4 field_0x11d8; /* +0x11d8 */
    undefined1 field_0x11dc; /* +0x11dc */
};

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_00285584. */
/* Supplied declaration required: FUN_002bed3c. */
extern int FUN_002bf244(unsigned int);
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);


void FUN_003a37dc(fn_003a37dc_arg0 *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  if ((0 < *(int *)&param_1->field_0x4) && (*(int *)&param_1->field_0x4 < 0x12)) {
    FUN_002c39a4(DAT_0044ea00);
    FUN_002bed3c();
    temp_v1 = DAT_0044ea00;
    temp_v0 = FUN_002c5d80(1,0);
    piVar5 = (int *)(temp_v1 + 0x124c);
    temp_v2 = *piVar5;
    temp_v3 = piVar5[temp_v2 + 2];
    *piVar5 = temp_v2 + 1;
    piVar5[temp_v2 + 3] = temp_v0;
    if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v3 != temp_v0) {
      (**(romwright_code **)(temp_v1 + 0x1268))();
      *(unsigned char *)(temp_v1 + 0x1264) = 0;
    }
    temp_v1 = FUN_002bf244(*(unsigned int *)&param_1[0x13].field_0x9a0);
    if (temp_v1 != 0) {
      FUN_00285584(*(unsigned int *)&param_1[0x13].field_0x9a0,0);
    }
    temp_v1 = FUN_002bf244(*(unsigned int *)&param_1[0x13].field_0x9a4);
    if (temp_v1 != 0) {
      FUN_00285584(*(unsigned int *)&param_1[0x13].field_0x9a4,0);
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
    FUN_002c198c(DAT_0044ea00);
    FUN_002c18e4(DAT_0044ea00);
    return;
  }
  return;
}
