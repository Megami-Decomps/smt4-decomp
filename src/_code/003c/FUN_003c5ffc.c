/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c5ffc` (_code @ 0x3c5ffc, 0x3ac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern int DAT_004342c8; /* 0x4342c8 */
extern unsigned int DAT_004342d4; /* 0x4342d4 */
extern unsigned int DAT_004342d8; /* 0x4342d8 */
extern unsigned int DAT_004342e0; /* 0x4342e0 */
extern unsigned int DAT_004342e4; /* 0x4342e4 */
extern unsigned int DAT_004342e8; /* 0x4342e8 */
extern unsigned int DAT_004342ec; /* 0x4342ec */
extern unsigned int DAT_004342f0; /* 0x4342f0 */
extern unsigned int DAT_00434310; /* 0x434310 */
extern unsigned int DAT_00434314; /* 0x434314 */
extern unsigned int DAT_00434318; /* 0x434318 */
extern unsigned int DAT_0043431c; /* 0x43431c */
extern unsigned int DAT_00434320; /* 0x434320 */
extern unsigned int DAT_00434324; /* 0x434324 */
extern unsigned int DAT_00434328; /* 0x434328 */
extern unsigned int DAT_0043432c; /* 0x43432c */
extern unsigned int DAT_00434330; /* 0x434330 */
extern unsigned int DAT_00434334; /* 0x434334 */
extern unsigned int DAT_00434338; /* 0x434338 */
extern unsigned int DAT_0043433c; /* 0x43433c */
extern unsigned int DAT_00434340; /* 0x434340 */
extern unsigned int DAT_00434344; /* 0x434344 */
extern unsigned int DAT_00434348; /* 0x434348 */
extern unsigned int DAT_0043434c; /* 0x43434c */
extern unsigned int DAT_00434350; /* 0x434350 */
extern unsigned int DAT_00434354; /* 0x434354 */
extern unsigned int DAT_00439cec; /* 0x439cec */
extern unsigned int DAT_00493554; /* 0x493554 */
extern unsigned int DAT_0049355c; /* 0x49355c */

extern unsigned int *FUN_0022a344(unsigned int);
extern int FUN_0022a444(unsigned int);
extern unsigned int *FUN_0022a464(unsigned int, unsigned int);


void FUN_003c5ffc(int param_1,int param_2,unsigned int param_3)

{
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  switch(param_3) {
  case 0:
    temp_v0 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10));
    if (temp_v0 != 0) {
      temp_v2 = *(unsigned int *)(DAT_004342c8 + 0x634) | 0x100;
    }
    else {
      temp_v2 = *(unsigned int *)(DAT_004342c8 + 0x634) & 0xfffffeff;
    }
    *(unsigned int *)(DAT_004342c8 + 0x634) = temp_v2;
    return;
  case 1:
    puVar2 = (unsigned int *)FUN_0022a344(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_004342c8 + 0x560) = *puVar2;
    return;
  case 2:
    temp_v0 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10));
    temp_v2 = *(unsigned int *)(param_2 + 0x44a8);
    if (temp_v0 != 0) {
      temp_v2 = temp_v2 | 0x40000000;
    }
    else {
      temp_v2 = temp_v2 & 0xbfffffff;
    }
    *(unsigned int *)(param_2 + 0x44a8) = temp_v2;
    return;
  case 3:
    puVar2 = (unsigned int *)FUN_0022a344(*(unsigned int *)(param_1 + 0x10));
    DAT_00493554 = *puVar2;
    return;
  case 4:
    puVar2 = (unsigned int *)FUN_0022a344(*(unsigned int *)(param_1 + 0x10));
    DAT_0049355c = *puVar2;
    return;
  case 5:
    puVar2 = (unsigned int *)FUN_0022a344(*(unsigned int *)(param_1 + 0x10));
    temp_v1 = *puVar2;
    puVar2 = &DAT_00434310;
    break;
  case 6:
    puVar2 = (unsigned int *)FUN_0022a344(*(unsigned int *)(param_1 + 0x10));
    temp_v1 = *puVar2;
    puVar2 = &DAT_00434314;
    break;
  case 7:
    puVar2 = (unsigned int *)FUN_0022a344(*(unsigned int *)(param_1 + 0x10));
    temp_v1 = *puVar2;
    puVar2 = &DAT_00434318;
    break;
  case 8:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar2;
    puVar2 = &DAT_0043431c;
    break;
  case 9:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar2;
    puVar2 = &DAT_004342d4;
    break;
  case 10:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar2;
    puVar2 = &DAT_004342d8;
    break;
  case 0xb:
    puVar2 = (unsigned int *)FUN_0022a344(*(unsigned int *)(param_1 + 0x10));
    temp_v1 = *puVar2;
    puVar2 = &DAT_00434320;
    break;
  case 0xc:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar2;
    puVar2 = &DAT_00434324;
    break;
  case 0xd:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar2;
    puVar2 = &DAT_004342e0;
    break;
  case 0xe:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar2;
    puVar2 = &DAT_00434328;
    break;
  case 0xf:
    puVar2 = (unsigned int *)FUN_0022a344(*(unsigned int *)(param_1 + 0x10));
    temp_v1 = *puVar2;
    puVar2 = &DAT_0043432c;
    break;
  case 0x10:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar2;
    puVar2 = &DAT_00434330;
    break;
  case 0x11:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar2;
    puVar2 = &DAT_004342e4;
    break;
  case 0x12:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar2;
    puVar2 = &DAT_00434334;
    break;
  case 0x13:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar2;
    puVar2 = &DAT_00434338;
    break;
  case 0x14:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar2;
    puVar2 = &DAT_004342e8;
    break;
  case 0x15:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar2;
    puVar2 = &DAT_0043433c;
    break;
  case 0x16:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar2;
    puVar2 = &DAT_00434340;
    break;
  case 0x17:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar2;
    puVar2 = &DAT_004342ec;
    break;
  case 0x18:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar2;
    puVar2 = &DAT_00434344;
    break;
  case 0x19:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar2;
    puVar2 = &DAT_00434348;
    break;
  case 0x1a:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar2;
    puVar2 = &DAT_0043434c;
    break;
  case 0x1b:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar2;
    puVar2 = &DAT_00434350;
    break;
  case 0x1c:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar2;
    puVar2 = &DAT_00434354;
    break;
  case 0x1d:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar2;
    puVar2 = &DAT_00439cec;
    break;
  case 0x1e:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar2;
    puVar2 = &DAT_004342f0;
    break;
  default:
    return;
  }
  *puVar2 = temp_v1;
  return;
}
