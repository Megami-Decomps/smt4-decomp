/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039c348` (_code @ 0x39c348, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00231240(uint *, unsigned int, unsigned int);
int FUN_00233240(uint *, int);
int FUN_002b827c(int);

typedef struct fn_0039c348_arg0 fn_0039c348_arg0;
struct fn_0039c348_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    int field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    uint field_0x10; /* +0x10 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char g_gameState; /* 0x49f91c */

/* Supplied declaration required: FUN_00231240. */
/* Supplied declaration required: FUN_00233240. */
extern int FUN_0026b564(void);
/* Supplied declaration required: FUN_002b827c. */
extern unsigned int vec2GetYInt(int *);
extern unsigned int vec2GetXInt(int *);
extern int FUN_002bf818(int *);


void FUN_0039c348(fn_0039c348_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  
  if (param_1->field_0x8 != 0) {
    if (param_1->field_0x8 == 1) {
      piVar4 = &param_1[0x1b].field_0x8;
      temp_v0 = FUN_002bf818(piVar4);
      if ((temp_v0 != 0) && (temp_v0 = FUN_0026b564(), temp_v0 != 0)) {
        param_1->field_0x8 = 2;
        param_1->field_0x10 = param_1->field_0x10 | 2;
      }
      temp_v1 = vec2GetYInt(piVar4);
      temp_v2 = vec2GetXInt(piVar4);
      FUN_00231240(&param_1[0x11].field_0x10,temp_v2,temp_v1);
      return;
    }
  }
  else {
    FUN_00233240(&param_1[0x12].field_0x10,1);
    if ((*(signed char *)((unsigned char *)&g_gameState + 0x251)) == '\0') {
      FUN_002b827c(0x1b);
    }
    param_1->field_0x10 = param_1->field_0x10 | 0x1000000;
    param_1->field_0x8 = 1;
  }
  return;
}

} /* extern "C" */
