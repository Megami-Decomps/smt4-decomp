/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bb200` (_code @ 0x4bb200, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00316750(char [46], unsigned int, int, unsigned int, int);
int asdCecCopySettings(int);
int cecWriteMessageBoxNameAndData(unsigned int, unsigned int, char [34], unsigned int, int);
int cecSettingsSet(int, int, int, int, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned int g_resourceDispatchContext; /* 0x57f2c8 */
extern char s_You_have_received_ca_0057f2ee[46]; /* 0x57f2ee */
extern char s_Shin_Megami_Tensei_I_0057f34a[34]; /* 0x57f34a */

/* Supplied declaration required: FUN_00316750. */
/* Supplied declaration required: asdCecCopySettings. */
/* Supplied declaration required: cecWriteMessageBoxNameAndData. */
/* Supplied declaration required: cecSettingsSet. */
extern unsigned int FUN_0042d694(unsigned int);


unsigned int FUN_004bb200(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  char *pcVar2;
  char *pcVar3;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  cecSettingsSet(2,3,0xff,0,param_4);
  temp_v0 = FUN_0042d694(0x19a2);
  cecWriteMessageBoxNameAndData(temp_v0,g_resourceDispatchContext,s_Shin_Megami_Tensei_I_0057f34a,*(unsigned int *)(param_1 + 4),
               0x1200);
  pcVar2 = s_You_have_received_ca_0057f2ee;
  FUN_00316750(s_You_have_received_ca_0057f2ee,*(unsigned int *)(param_1 + 8),0xc80,param_2,100);
  if ((int)pcVar2 < 0) {
    if (pcVar2 == (char *)0xe0a1086c) {
      temp_v1 = 5;
    }
    else if (pcVar2 == (char *)0xe0a1086d) {
      temp_v1 = 9;
    }
    else {
      pcVar3 = (char *)0xc8e10865;
      if (pcVar2 != (char *)0xc8e10865) {
        pcVar3 = (char *)0xc8e10866;
      }
      if (!(pcVar2 != (char *)0xc8e10865 && pcVar2 != pcVar3)) {
        temp_v1 = 0x41;
      }
      else if (pcVar2 == (char *)0xc8a10bf0) {
        temp_v1 = 0x21;
      }
      else {
        temp_v1 = 0x11;
      }
    }
  }
  else {
    asdCecCopySettings(param_1 + 0xc);
  }
  return temp_v1;
}

} /* extern "C" */
