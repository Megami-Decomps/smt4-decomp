/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a9d68` (_code @ 0x4a9d68, 0x190 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiSpriteSelectAnim(unsigned int *, int);
int FUN_002a1850(int *, int, unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern unsigned int *g_btlUiBlock; /* 0x57a9c8 */
extern unsigned int DAT_0057a9f0; /* 0x57a9f0 */
extern unsigned int DAT_0057a9f4; /* 0x57a9f4 */

extern unsigned int FUN_00152f54(void);
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: FUN_002a1850. */
extern int btlScriptUnitHasFlags(unsigned int);


unsigned int FUN_004a9d68(unsigned int param_1,unsigned int *param_2)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int uStack_34;
  unsigned int uStack_30;
  
  puVar1 = g_btlUiBlock;
  temp_v2 = 0;
  do {
    if (*(short *)(g_btlUiBlock + temp_v2 * 0x53 + 0x468b) == 0) {
      if (temp_v2 >= 0xc) {
        return 0xffffffff;
      }
      temp_v4 = 0;
      *(unsigned short *)(g_btlUiBlock + temp_v2 * 0x53 + 0x468b) = 2;
      *(unsigned short *)((int)puVar1 + temp_v2 * 0x14c + 0x11a2e) = 0;
      puVar1[temp_v2 * 0x53 + 0x468c] = 0;
      *(unsigned char *)(puVar1 + temp_v2 * 0x53 + 0x468d) = 0;
      temp_v5 = in_s0;
      uStack_34 = in_s1;
      uStack_30 = in_s2;
      temp_v0 = FUN_00152f54();
      FUN_002a1850(&temp_v5,0,temp_v0);
      puVar1[temp_v2 * 0x53 + 0x468e] = temp_v5;
      puVar1[temp_v2 * 0x53 + 0x468f] = uStack_34;
      puVar1[temp_v2 * 0x53 + 0x4690] = uStack_30;
      puVar1[temp_v2 * 0x53 + 0x4693] = temp_v4;
      puVar1[temp_v2 * 0x53 + 0x4692] = temp_v4;
      puVar1[temp_v2 * 0x53 + 0x4691] = temp_v4;
      puVar1[temp_v2 * 0x53 + 0x4696] = temp_v4;
      puVar1[temp_v2 * 0x53 + 0x4695] = temp_v4;
      puVar1[temp_v2 * 0x53 + 0x4694] = temp_v4;
      puVar1[temp_v2 * 0x53 + 0x4697] = (unsigned int)param_2;
      temp_v3 = ~DAT_0057a9f0;
      param_2[1] = param_2[1] & ~DAT_0057a9f4;
      *param_2 = *param_2 & temp_v3;
      temp_v1 = btlScriptUnitHasFlags(*puVar1);
      if (temp_v1 != 0) {
        *(unsigned char *)(puVar1 + temp_v2 * 0x53 + 0x468d) = 0;
        *(unsigned short *)(puVar1 + temp_v2 * 0x53 + 0x468b) = 5;
        puVar4 = (unsigned int *)puVar1[temp_v2 * 0x53 + 0x4697];
        temp_v3 = puVar4[1] | DAT_0057a9f4;
        *puVar4 = DAT_0057a9f0 | *puVar4;
        puVar4[1] = temp_v3;
      }
      else {
        uiSpriteSelectAnim(puVar1 + temp_v2 * 0x53 + 0x4645,10);
        uiSpriteSelectAnim(puVar1 + temp_v2 * 0x53 + 0x4668,0xb);
      }
      return temp_v2;
    }
    temp_v2 = temp_v2 + 1;
  } while ((int)temp_v2 < 0xc);
  return 0xffffffff;
}

} /* extern "C" */
