/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e071c` (_code @ 0x1e071c, 0x694 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025ccac(...);
int FUN_0025d1c4(...);
int FUN_0025ee64(...);
int FUN_0025f300(...);
int campDrawPartyComparisonIndicators(...);
int FUN_0025f6b8(...);
int FUN_002bed3c(...);
int FUN_002c18e4(...);
int FUN_002c198c(...);
int FUN_002c39a4(...);
int FUN_002dc120(...);
int FUN_002f1558(...);

typedef struct fn_001e071c_arg0 fn_001e071c_arg0;
struct fn_001e071c_arg0 {
    unsigned char pad_0x0[0xc];
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x24];
    unsigned char field_0x31; /* +0x31 */
    unsigned char pad_0x32[0x1310];
    char field_0x1342; /* +0x1342 */
    unsigned char pad_0x1343[0x1585];
    unsigned char field_0x28c8; /* +0x28c8 */
    unsigned char pad_0x28c9[0x77b];
    unsigned char field_0x3044; /* +0x3044 */
    unsigned char pad_0x3045[0x3];
    int field_0x3048; /* +0x3048 */
    int field_0x304c; /* +0x304c */
};

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_0025ccac. */
/* Supplied declaration required: FUN_0025d1c4. */
/* Supplied declaration required: FUN_0025ee64. */
/* Supplied declaration required: FUN_0025f300. */
/* Supplied declaration required: campDrawPartyComparisonIndicators. */
/* Supplied declaration required: FUN_0025f6b8. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c39a4. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002dc120. */
/* Supplied declaration required: FUN_002f1558. */


void FUN_001e071c(fn_001e071c_arg0 *param_1)

{
/* irregular: 1 goto(s); 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  
  FUN_002c39a4(g_titleScene);
  FUN_002bed3c();
  if (param_1->field_0x3048 == 6) {
    if (*(int *)&param_1[1].field_0x28c8 == 3) {
      if (param_1->field_0x1342 != '\0') {
        return;
      }
      goto LAB_001e076c;
    }
  }
  else {
LAB_001e076c:
    if ((param_1->field_0x3048 == 0x2b || param_1->field_0x3048 == 0x2c) &&
       (param_1->field_0x1342 != '\0')) {
      return;
    }
  }
  temp_v0 = param_1->field_0x3048;
  if (temp_v0 == 2) {
    temp_v0 = param_1->field_0x304c;
  }
  if ((temp_v0 == 6 || temp_v0 == 3) || (temp_v0 == 4 || temp_v0 == 5)) {
    temp_v0 = param_1->field_0x304c;
  }
  if (temp_v0 == 0x2b || temp_v0 == 0x2c) {
    temp_v0 = param_1->field_0x304c;
  }
  switch(temp_v0) {
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x14:
  case 0x15:
    FUN_0025f6b8(param_1,0,0,0);
    campDrawPartyComparisonIndicators(param_1,0);
    FUN_0025f300(param_1);
    FUN_0025ee64(param_1);
    FUN_0025d1c4(param_1);
    break;
  case 0x10:
    FUN_0025f6b8(param_1,1,1,*(unsigned int *)&param_1->field_0x3044);
    campDrawPartyComparisonIndicators(param_1,1);
    FUN_0025ee64(param_1);
    FUN_0025d1c4(param_1);
    break;
  case 0x11:
  case 0x29:
    FUN_0025f6b8(param_1,0,0,0);
    campDrawPartyComparisonIndicators(param_1,0);
    FUN_0025ee64(param_1);
    FUN_0025d1c4(param_1);
    break;
  case 0x12:
  case 0x13:
    FUN_0025f6b8(param_1,0,0,0);
    campDrawPartyComparisonIndicators(param_1,0);
    FUN_0025f300(param_1);
    FUN_0025ee64(param_1);
    FUN_0025d1c4(param_1);
    FUN_002f1558(param_1);
    break;
  case 0x16:
    FUN_0025f6b8(param_1,0,1,0);
    campDrawPartyComparisonIndicators(param_1,0);
    FUN_0025ee64(param_1);
    FUN_0025ccac(param_1,1);
    break;
  case 0x18:
  case 0x19:
  case 0x1c:
    temp_v1 = 8 - *(int *)&param_1->field_0x3044;
    temp_v0 = param_1->field_0x304c;
    if (temp_v1 < 0) {
      temp_v1 = 0;
    }
    if (!((temp_v0 == 0x22 || temp_v0 == 0x23) || temp_v0 == 0x24)) {
      FUN_0025f6b8(param_1,1,0,temp_v1);
    }
    else {
      FUN_0025f6b8(param_1,1,1,temp_v1);
    }
    break;
  case 0x1d:
    temp_v0 = param_1->field_0x304c;
    if (!((temp_v0 == 0x22 || temp_v0 == 0x23) || temp_v0 == 0x24)) {
      FUN_0025f6b8(param_1,1,0,0);
      campDrawPartyComparisonIndicators(param_1,0);
    }
    else {
      FUN_0025f6b8(param_1,1,1,0);
      campDrawPartyComparisonIndicators(param_1,1);
    }
    if ((param_1->field_0x304c == 0x1a) && (*(int *)&param_1[1].field_0xc != 0)) break;
    FUN_002dc120(param_1,0);
    break;
  case 0x1f:
    FUN_0025f6b8(param_1,1,0,0);
    break;
  case 0x20:
    if (param_1[1].field_0x31 != '\0') {
      FUN_0025f6b8(param_1,1,0,0);
      break;
    }
  case 0xe:
  case 0xf:
  case 0x1e:
  case 0x21:
  case 0x2a:
    FUN_0025f6b8(param_1,1,1,0);
    break;
  case 0x22:
    FUN_0025f6b8(param_1,0,1);
    campDrawPartyComparisonIndicators(param_1,1);
    FUN_0025ee64(param_1);
    FUN_0025ccac(param_1,0);
    break;
  case 0x23:
    FUN_0025f6b8(param_1,0,1);
    campDrawPartyComparisonIndicators(param_1,1);
    FUN_0025ee64(param_1);
    FUN_0025ccac(param_1,1);
    break;
  case 0x24:
    FUN_0025f6b8(param_1,0,0,0);
    campDrawPartyComparisonIndicators(param_1,0);
    FUN_0025ee64(param_1);
    FUN_0025ccac(param_1,0);
    break;
  case 0x25:
  case 0x26:
    temp_v0 = param_1->field_0x304c;
    if ((temp_v0 != 0x22 && temp_v0 != 0x23) && temp_v0 != 0x24) {
      FUN_0025f6b8(param_1,0,0,0);
      campDrawPartyComparisonIndicators(param_1,0);
      FUN_0025f300(param_1);
      FUN_0025ee64(param_1);
      break;
    }
    FUN_0025f6b8(param_1,0,1);
    campDrawPartyComparisonIndicators(param_1,1);
    FUN_0025f300(param_1);
    FUN_0025ee64(param_1);
    break;
  case 0x27:
    temp_v0 = param_1->field_0x304c;
    if ((temp_v0 == 0x1d || temp_v0 == 0x20) || (temp_v0 == 0x1e || temp_v0 == 0x19)) {
      FUN_0025f6b8(param_1,1,0,0);
      break;
    }
  case 1:
  case 0x17:
  case 0x1a:
  case 0x1b:
  case 0x2d:
    FUN_0025f6b8(param_1,0,0,0);
    campDrawPartyComparisonIndicators(param_1,0);
    FUN_0025f300(param_1);
    FUN_0025ee64(param_1);
    break;
  case 0x28:
    FUN_0025f6b8(param_1,1,0,0);
    campDrawPartyComparisonIndicators(param_1,0);
    FUN_002dc120(param_1,0);
  }
  if (param_1->field_0x3048 == 6) {
    FUN_002f1558(param_1);
  }
  temp_v0 = g_titleScene;
  temp_v1 = packNibblesAndByte(6,7,0);
  piVar4 = (int *)(temp_v0 + 0x12ac);
  temp_v2 = piVar4[*piVar4 + 2];
  piVar4[*piVar4 + 2] = temp_v1;
  if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v2 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x12c8))();
    *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  }
  FUN_002c198c(g_titleScene);
  FUN_002c18e4(g_titleScene);
  return;
}

} /* extern "C" */
