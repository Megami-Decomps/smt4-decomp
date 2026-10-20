/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f2708` (_code @ 0x4f2708, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_004f2708_arg1 fn_004f2708_arg1;
struct fn_004f2708_arg1 {
    unsigned char pad_0x0[0x110];
    uint field_0x110; /* +0x110 */
    unsigned char pad_0x114[0x448c];
    uint field_0x45a0; /* +0x45a0 */
    uint field_0x45a4; /* +0x45a4 */
    uint field_0x45a8; /* +0x45a8 */
    uint field_0x45ac; /* +0x45ac */
};

extern unsigned int DAT_0057113c; /* 0x57113c */
extern int DAT_00571508; /* 0x571508 */
extern unsigned int DAT_00571550; /* 0x571550 */
extern unsigned int DAT_00571554; /* 0x571554 */
extern unsigned int DAT_00571558; /* 0x571558 */
extern unsigned int DAT_0057155c; /* 0x57155c */
extern unsigned int DAT_00571560; /* 0x571560 */
extern unsigned int DAT_00571564; /* 0x571564 */
extern unsigned int DAT_00571568; /* 0x571568 */
extern unsigned int DAT_0057156c; /* 0x57156c */

extern int FUN_003eb1cc(void);
extern unsigned int *FUN_004ee568(unsigned int);


unsigned int FUN_004f2708(unsigned int param_1,fn_004f2708_arg1 *param_2,int param_3)

{
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v1 = param_2->field_0x45a0;
  if (((((param_2->field_0x45ac & DAT_0057156c) == 0 && (DAT_00571568 & param_2->field_0x45a8) == 0)
       || ((DAT_00571564 & param_2->field_0x45a4) == 0 && (DAT_00571560 & temp_v1) == 0)) &&
      ((DAT_00571550 & temp_v1) == 0 && (param_2->field_0x45a4 & DAT_00571554) == 0)) &&
     ((param_2->field_0x110 & 0x10) == 0)) {
    temp_v0 = FUN_003eb1cc();
    if (temp_v0 != 0) {
      return 1;
    }
    if ((param_2->field_0x45a4 & DAT_0057155c) != 0 || (param_2->field_0x45a0 & DAT_00571558) != 0)
    {
      return 0;
    }
    puVar2 = (unsigned int *)FUN_004ee568(DAT_0057113c);
    if ((puVar2 != (unsigned int *)0x0) && ((*puVar2 & 0x2000) != 0)) {
      return 0;
    }
    if (param_3 != 0) {
      if (DAT_00571508 == 0) {
        return 1;
      }
      if ((*(unsigned int *)(DAT_00571508 + 0x64c) & 0x2000000) != 0) {
        return 0;
      }
    }
    else if (DAT_00571508 == 0) {
      return 1;
    }
    if ((*(unsigned int *)(DAT_00571508 + 0x64c) & 0x10000000) == 0) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
