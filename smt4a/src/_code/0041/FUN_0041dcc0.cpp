/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041dcc0` (_code @ 0x41dcc0, 0x1a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001386e8(int);
int FUN_001681cc(int);
int FUN_00224880(unsigned int);
int FUN_00275f44(unsigned int, int);
int FUN_002c76d8(void);
int FUN_003a76a8(int);
int FUN_003c12d8(int, int);
int SBORROW4(int, int);
int rt_memcpy_w(int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_00588e14; /* 0x588e14 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_001386e8. */
extern int FUN_0014af84(void);
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_00224880. */
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_002c76d8. */
extern int FUN_0035d734(void);
extern int FUN_0038b320(void);
/* Supplied declaration required: FUN_003a76a8. */
extern int FUN_003b70c0(void);
/* Supplied declaration required: FUN_003c12d8. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0041dcc0(int param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  if (*(char *)(param_1 + 0xf) != '\0') {
    temp_v0 = FUN_0035d734();
    if ((temp_v0 == 0) && (temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 0x40)), temp_v0 == 2)) {
      temp_v0 = FUN_003b70c0();
      if (temp_v0 != 0) {
        DAT_00588e14 = 1;
      }
      else {
        *(unsigned char *)(param_1 + 0x11) = 1;
      }
    }
  }
  else if (*(char *)(param_1 + 0x10) != '\0') {
    *(int *)(param_1 + 0x450) = *(int *)(param_1 + 0x450) + 1;
    temp_v0 = FUN_0035d734();
    if (temp_v0 != 0) {
      if (*(char *)(param_1 + 0xe) != '\0') {
        *(unsigned char *)(param_1 + 0xf) = 1;
      }
    }
    else {
      FUN_00224880(*(unsigned int *)(param_1 + 0x40));
    }
    temp_v0 = FUN_0038b320();
    if (temp_v0 != 0) {
      if (*(int *)(param_1 + 0x450) < 0x1f) {
        FUN_002c76d8();
      }
      else {
        FUN_001386e8(1);
      }
    }
    temp_v0 = FUN_0038b320();
    temp_v2 = temp_v0 != 0;
    temp_v0 = 0;
    temp_v1 = 0;
    if (temp_v2) {
      temp_v1 = *(int *)(param_1 + 0x450);
      temp_v0 = temp_v1 - 0x1e;
    }
    if ((temp_v2 && temp_v1 != 0x1e) && temp_v0 < 0 == (temp_v2 && SBORROW4(temp_v1,0x1e))) {
      FUN_003a76a8(1);
      FUN_001681cc(0xa0);
      *(unsigned char *)(param_1 + 0xf) = 1;
      temp_v0 = FUN_003b70c0();
      if (temp_v0 != 0) {
        FUN_001386e8(1);
        temp_v0 = FUN_0014af84();
        rt_memcpy_w(param_1 + *(int *)(param_1 + 0x2f8) * 0x80 + 0x6c,temp_v0 + 0x27044,0x80);
        *(unsigned char *)(*(int *)(param_1 + 0x2f8) + param_1 + 0x2ec) = 1;
        FUN_00275f44(*(unsigned int *)(param_1 + 0x40),5);
        return;
      }
      FUN_001386e8(1);
      FUN_00275f44(*(unsigned int *)(param_1 + 0x40),6);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x5c) == '\0') {
    *(unsigned char *)(param_1 + 0x10) = 1;
    FUN_003c12d8(*(int *)(param_1 + 0x2f8) + 1,0);
    FUN_00224880(*(unsigned int *)(param_1 + 0x40));
    *(unsigned int *)(param_1 + 0x450) = 0;
    return;
  }
  return;
}

} /* extern "C" */
