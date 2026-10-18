/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00499e00` (_code @ 0x499e00, 0x1d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_00184528. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_00224880. */
/* Supplied declaration required: FUN_003491e8. */
/* Supplied declaration required: FUN_0037c8b4. */
/* Supplied declaration required: FUN_0038b010. */
extern int FUN_004954e8(int);
/* Supplied declaration required: FUN_0049706c. */
/* Supplied declaration required: FUN_00498494. */
/* Supplied declaration required: FUN_00498994. */
extern unsigned int FUN_0049cad0(unsigned short *);
extern int FUN_0049cbac(unsigned short, unsigned int);
extern int FUN_004cfe4c(int);
/* Supplied declaration required: FUN_004d0434. */
/* Supplied declaration required: FUN_004d044c. */
extern int FUN_004d04f4(void);
extern int FUN_004d0554(void);
extern int FUN_004d0584(void);
/* Supplied declaration required: FUN_004d06e4. */
/* Supplied declaration required: FUN_004d097c. */


void FUN_00499e00(int param_1)

{
/* irregular: 14 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned short *puVar5;
  
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) != 1) {
      return;
    }
    temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 0x18c));
    if (temp_v0 != 2) {
      return;
    }
    FUN_0019de98(0,0xf4f4f4ff);
    *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 4);
    *(unsigned int *)(param_1 + 4) = 5;
    *(unsigned int *)(param_1 + 8) = 0;
    return;
  }
  FUN_00224880(*(unsigned int *)(param_1 + 0x18c));
  FUN_0037c8b4(0);
  temp_v0 = FUN_004954e8(param_1);
  FUN_00498994(param_1);
  if ((0 < *(int *)(param_1 + *(int *)(param_1 + 0xb40) * 0x74 + 0xb68)) &&
     (temp_v1 = FUN_004d0584(), temp_v1 != 0)) {
    temp_v0 = 1;
  }
  temp_v1 = *(int *)(param_1 + 0xb40);
  temp_v2 = FUN_004cfe4c(param_1 + temp_v1 * 0x74 + 0xb60);
  puVar5 = (unsigned short *)(param_1 + temp_v1 * 0x1002 + 0xf74 + temp_v2 * 4);
  if (*(int *)(param_1 + 0xb40) != 8) {
    temp_v3 = FUN_0049cad0(puVar5);
    temp_v1 = FUN_0049cbac(*puVar5,temp_v3);
    if (temp_v1 != 0) {
      if (temp_v0 != 0) {
        FUN_004d044c();
        FUN_00498494(param_1,0xc);
        return;
      }
    }
  }
  else if (temp_v0 != 0) {
    FUN_004d044c();
    FUN_00498494(param_1,0xc);
    return;
  }
  temp_v0 = FUN_004d0554();
  if (temp_v0 != 0) {
    *(unsigned int *)(param_1 + 0x16040) = 0;
    FUN_0038b010(0);
    FUN_004d0434();
    FUN_00184528(param_1 + 0x3cc,1);
    FUN_003491e8();
    FUN_004d097c(*(unsigned int *)(param_1 + 0xb3c));
    FUN_004d06e4(param_1 + 0xb08);
    temp_v0 = 0;
    if (temp_v0 < *(short *)(param_1 + 0x16030)) {
      do {
        FUN_001641c4();
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < *(short *)(param_1 + 0x16030));
    }
    *(unsigned int *)(param_1 + 8) = 1;
    return;
  }
  temp_v0 = FUN_004d04f4();
  if (temp_v0 == 0) {
    return;
  }
  FUN_004d044c();
  FUN_0049706c(param_1);
  return;
}
