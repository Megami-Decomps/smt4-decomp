/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00499b58` (_code @ 0x499b58, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00499b58_arg0 fn_00499b58_arg0;
struct fn_00499b58_arg0 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0xb97];
    unsigned char field_0xb9c; /* +0xb9c */
    unsigned char pad_0xb9d[0x3];
    unsigned char field_0xba0; /* +0xba0 */
    unsigned char pad_0xba1[0x637];
    undefined4 field_0x11d8; /* +0x11d8 */
    undefined4 field_0x11dc; /* +0x11dc */
    undefined4 field_0x11e0; /* +0x11e0 */
    undefined4 field_0x11e4; /* +0x11e4 */
    undefined1 field_0x11e8; /* +0x11e8 */
};

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
extern int FUN_00163e40(unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c560. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_002609d8. */


void FUN_00499b58(fn_00499b58_arg0 *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  if ((0 < *(int *)&param_1->field_0x4) && (*(int *)&param_1->field_0x4 < 0x14)) {
    FUN_00157558(DAT_0059dbb4);
    FUN_00183bb0();
    temp_v1 = DAT_0059dbb4;
    temp_v0 = FUN_001692ac(1,0);
    piVar5 = (int *)(temp_v1 + 0x1258);
    temp_v2 = *piVar5;
    temp_v3 = piVar5[temp_v2 + 2];
    *piVar5 = temp_v2 + 1;
    piVar5[temp_v2 + 3] = temp_v0;
    if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v3 != temp_v0) {
      (**(romwright_code **)(temp_v1 + 0x1274))();
      *(unsigned char *)(temp_v1 + 0x1270) = 0;
    }
    temp_v1 = FUN_00163e40(*(unsigned int *)&param_1[0x13].field_0xb9c);
    if (temp_v1 != 0) {
      FUN_002609d8(*(unsigned int *)&param_1[0x13].field_0xb9c,0);
    }
    temp_v1 = FUN_00163e40(*(unsigned int *)&param_1[0x13].field_0xba0);
    if (temp_v1 != 0) {
      FUN_002609d8(*(unsigned int *)&param_1[0x13].field_0xba0,0);
    }
    temp_v1 = DAT_0059dbb4;
    piVar5 = (int *)(DAT_0059dbb4 + 0x1258);
    temp_v0 = *piVar5;
    temp_v2 = piVar5[temp_v0 + 2];
    *piVar5 = temp_v0 - 1;
    if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v2 != piVar5[temp_v0 + 1]) {
      (**(romwright_code **)(temp_v1 + 0x1274))();
      *(unsigned char *)(temp_v1 + 0x1270) = 0;
    }
    FUN_0016c560(DAT_0059dbb4);
    FUN_0016c410(DAT_0059dbb4);
    return;
  }
  return;
}
