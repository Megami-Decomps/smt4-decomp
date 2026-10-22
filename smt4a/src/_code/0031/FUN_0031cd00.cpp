/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031cd00` (_code @ 0x31cd00, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00231464(...);
int btlCreateGameOverJobs(...);
int gameFlagSetValue(...);

typedef struct fn_0031cd00_arg0 fn_0031cd00_arg0;
struct fn_0031cd00_arg0 {
    unsigned char pad_0x0[0x4c];
    undefined4 field_0x4c; /* +0x4c */
    unsigned char pad_0x50[0x58];
    int field_0xa8; /* +0xa8 */
    unsigned char pad_0xac[0x44f4];
    uint field_0x45a0; /* +0x45a0 */
    uint field_0x45a4; /* +0x45a4 */
    uint field_0x45a8; /* +0x45a8 */
    uint field_0x45ac; /* +0x45ac */
};

extern unsigned int *DAT_0057f678; /* 0x57f678 */
extern unsigned int DAT_0057f680; /* 0x57f680 */
extern unsigned int DAT_0057f684; /* 0x57f684 */
extern unsigned int DAT_0057f688; /* 0x57f688 */
extern unsigned int DAT_0057f68c; /* 0x57f68c */
extern unsigned int DAT_0057f690; /* 0x57f690 */
extern unsigned int DAT_0057f694; /* 0x57f694 */

extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_00231464. */
/* Supplied declaration required: btlCreateGameOverJobs. */
extern int gameDataFlagTestBit(unsigned int);
/* Supplied declaration required: gameFlagSetValue. */


void FUN_0031cd00(fn_0031cd00_arg0 *param_1)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  FUN_00231464();
  puVar1 = DAT_0057f678;
  if (param_1->field_0xa8 == 2) {
    if (!((param_1->field_0x45a8 & DAT_0057f690) == 0 && (param_1->field_0x45ac & DAT_0057f694) == 0
         )) {
      temp_v0 = gameFlagIsSet(0x1fc);
      if ((temp_v0 != 0) || (temp_v0 = gameDataFlagTestBit(0x80), temp_v0 != 0)) {
        temp_v0 = gameFlagIsSet(0x1fe);
joined_r0x0031ce38:
        if (temp_v0 != 0) {
          gameFlagSetValue(0x1fe,0,1);
          gameFlagSetValue(0x1fc,0,1);
        }
        *(unsigned char *)(puVar1 + 2) = 2;
        *(unsigned char *)((int)puVar1 + 0x25) = 0;
        puVar1[3] = 2;
        puVar1[4] = 0;
        param_1->field_0x4c = *puVar1;
        return;
      }
      *(unsigned char *)(puVar1 + 2) = 1;
    }
    else {
      if (((DAT_0057f680 & param_1->field_0x45a0) != 0 ||
           (DAT_0057f684 & param_1->field_0x45a4) != 0) ||
         ((DAT_0057f68c & param_1->field_0x45a4) != 0 || (param_1->field_0x45a0 & DAT_0057f688) != 0
         )) {
        puVar1[3] = 3;
        puVar1[4] = 0;
        return;
      }
      temp_v0 = gameFlagIsSet(0x1fc);
      if ((temp_v0 != 0) || (temp_v0 = gameDataFlagTestBit(0x80), temp_v0 != 0)) {
        temp_v0 = gameFlagIsSet(0x1fe);
        goto joined_r0x0031ce38;
      }
      *(unsigned char *)(puVar1 + 2) = 1;
    }
    if (param_1 != (fn_0031cd00_arg0 *)0x0) {
      btlCreateGameOverJobs(param_1);
      puVar1[1] = param_1->field_0x4c;
      puVar1[3] = 0;
      puVar1[4] = 0;
      return;
    }
  }
  puVar1[3] = 3;
  puVar1[4] = 0;
  return;
}

} /* extern "C" */
