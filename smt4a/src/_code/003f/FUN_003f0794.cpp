/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f0794` (_code @ 0x3f0794, 0x35c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0020214c(void);
int btlStageLoadTable(void);
int FUN_00275bc8(void);
int FUN_002cc92c(void);
int FUN_003cdb28(void);
int FUN_003ce360(void);
int loadSlotEnsureLoaded(int);
int FUN_00470e64(unsigned int);
int FUN_0047ec9c(void);
int callJyoucyuGetTableEntry1B(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int g_aocSystem; /* 0x570280 */
extern char *DAT_00573948; /* 0x573948 */
extern char *DAT_0057394c; /* 0x57394c */
extern char *DAT_00573950; /* 0x573950 */
extern char *DAT_00573954; /* 0x573954 */
extern char *DAT_00573958; /* 0x573958 */
extern char *DAT_0057395c; /* 0x57395c */
extern char *DAT_00573960; /* 0x573960 */
extern char *DAT_00573964; /* 0x573964 */
extern char *DAT_00573968; /* 0x573968 */
extern char *DAT_0057396c; /* 0x57396c */

/* Supplied declaration required: FUN_0020214c. */
/* Supplied declaration required: btlStageLoadTable. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_002cc92c. */
/* Supplied declaration required: FUN_003cdb28. */
/* Supplied declaration required: FUN_003ce360. */
/* Supplied declaration required: loadSlotEnsureLoaded. */
/* Supplied declaration required: FUN_00470e64. */
/* Supplied declaration required: FUN_0047ec9c. */
/* Supplied declaration required: callJyoucyuGetTableEntry1B. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_003f0794(int param_1)

{
/* irregular: 7 unstructured edge(s); 8 goto(s); 10 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  char *pcVar3;
  char *pcVar4;
  
  nn_os_CriticalSection_Enter(param_1 + 0x4d0c);
  do {
    temp_v0 = *(unsigned short *)(param_1 + 0x4d0a);
    temp_v1 = (unsigned int)temp_v0;
    switch(temp_v1) {
    case 0:
      callJyoucyuGetTableEntry1B();
      loadSlotEnsureLoaded(7);
      loadSlotEnsureLoaded(0x3e);
      loadSlotEnsureLoaded(0x3b);
      loadSlotEnsureLoaded(0x16);
      loadSlotEnsureLoaded(0x13);
      loadSlotEnsureLoaded(0x48);
      FUN_00470e64(g_aocSystem);
      pcVar3 = "battle/Legion/LegionMsg.mbm";
      FUN_0020214c();
      pcVar4 = "battle/Legion/LegionMsgTable.tbb";
      DAT_00573948 = pcVar3;
      FUN_0020214c();
      pcVar3 = "battle/Legion/LegionScr.bf";
      DAT_0057394c = pcVar4;
      FUN_0020214c();
      pcVar4 = "battle/Common/common.mbm";
      DAT_00573950 = pcVar3;
      FUN_0020214c();
      pcVar3 = "battle/talk/TalkSystem.mbm";
      DAT_00573954 = pcVar4;
      FUN_0020214c();
      pcVar4 = "battle/talk/TalkBaseData.tbb";
      DAT_00573958 = pcVar3;
      FUN_0020214c();
      pcVar3 = "battle/Systematic.tbb";
      DAT_0057395c = pcVar4;
      FUN_0020214c();
      pcVar4 = "event/quest/SubQuestGuest.mbm";
      DAT_00573960 = pcVar3;
      FUN_0020214c();
      pcVar3 = "battle/BossDeadTable.tbb";
      DAT_00573964 = pcVar4;
      FUN_0020214c();
      pcVar4 = "battle/PartnerAttack.mbm";
      DAT_00573968 = pcVar3;
      FUN_0020214c();
      DAT_0057396c = pcVar4;
      btlStageLoadTable();
      FUN_002cc92c();
      temp_v1 = *(unsigned short *)(param_1 + 0x4d0a) + 1;
      *(short *)(param_1 + 0x4d0a) = (short)temp_v1;
    case 1:
      FUN_0047ec9c();
      if (temp_v1 != 0) {
        *(char **)(param_1 + 0x2280) = DAT_00573948;
        *(char **)(param_1 + 0x2284) = DAT_0057394c;
        pcVar3 = DAT_00573950;
        *(char **)(param_1 + 0x2288) = DAT_00573950;
        FUN_00275bc8();
        *(char **)(param_1 + 0x228c) = pcVar3;
        pcVar3[0x108] = '\0';
        pcVar3[0x109] = '\0';
        pcVar3[0x10a] = '\0';
        pcVar3[0x10b] = '\0';
        *(short *)(param_1 + 0x4d0a) = *(short *)(param_1 + 0x4d0a) + 1;
        goto LAB_003f0948;
      }
      break;
    case 2:
LAB_003f0948:
      if (*(int *)(param_1 + 0x2288) != 0) {
        *(char **)(param_1 + 0x2268) = DAT_00573954;
        *(short *)(param_1 + 0x4d0a) = *(short *)(param_1 + 0x4d0a) + 1;
        goto LAB_003f0970;
      }
      break;
    case 3:
LAB_003f0970:
      if (*(int *)(param_1 + 0x2268) != 0) {
        *(char **)(param_1 + 0x226c) = DAT_00573958;
        *(short *)(param_1 + 0x4d0a) = *(short *)(param_1 + 0x4d0a) + 1;
        goto LAB_003f0998;
      }
      break;
    case 4:
LAB_003f0998:
      if (*(int *)(param_1 + 0x226c) != 0) {
        *(char **)(param_1 + 0x2270) = DAT_0057395c;
        *(short *)(param_1 + 0x4d0a) = *(short *)(param_1 + 0x4d0a) + 1;
        goto LAB_003f09c0;
      }
      break;
    case 5:
LAB_003f09c0:
      if (*(int *)(param_1 + 0x2270) != 0) {
        *(char **)(param_1 + 0x2278) = DAT_00573964;
        *(short *)(param_1 + 0x4d0a) = *(short *)(param_1 + 0x4d0a) + 1;
        goto LAB_003f09e8;
      }
      break;
    case 6:
LAB_003f09e8:
      if (*(int *)(param_1 + 0x2278) != 0) {
        *(char **)(param_1 + 0x2274) = DAT_00573960;
        *(short *)(param_1 + 0x4d0a) = *(short *)(param_1 + 0x4d0a) + 1;
        goto LAB_003f0a10;
      }
      break;
    case 7:
LAB_003f0a10:
      if (*(int *)(param_1 + 0x2274) != 0) {
        *(char **)(param_1 + 0x227c) = DAT_00573968;
        *(short *)(param_1 + 0x4d0a) = *(short *)(param_1 + 0x4d0a) + 1;
        goto LAB_003f0a38;
      }
      break;
    case 8:
LAB_003f0a38:
      if (*(int *)(param_1 + 0x227c) != 0) {
        temp_v0 = *(short *)(param_1 + 0x4d0a) + 1;
        *(unsigned short *)(param_1 + 0x4d0a) = temp_v0;
        goto LAB_003f0a54;
      }
      break;
    case 9:
LAB_003f0a54:
      *(unsigned short *)(param_1 + 0x4d0a) = temp_v0 + 1;
    case 10:
      FUN_003cdb28();
      *(short *)(param_1 + 0x4d0a) = *(short *)(param_1 + 0x4d0a) + 1;
    case 0xb:
      FUN_003ce360();
      *(short *)(param_1 + 0x4d0a) = *(short *)(param_1 + 0x4d0a) + 1;
    case 0xc:
      *(char **)(param_1 + 0x4d64) = DAT_0057396c;
      *(short *)(param_1 + 0x4d0a) = *(short *)(param_1 + 0x4d0a) + 1;
    case 0xd:
      if (*(int *)(param_1 + 0x4d64) != 0) {
        temp_v0 = *(short *)(param_1 + 0x4d0a) + 1;
        *(unsigned short *)(param_1 + 0x4d0a) = temp_v0;
        *(unsigned short *)(param_1 + 0x4d0a) = temp_v0 + 1;
        *(unsigned short *)(param_1 + 0x4d08) = *(unsigned short *)(param_1 + 0x4d08) | 1;
      }
      break;
    case 0xe:
      *(unsigned short *)(param_1 + 0x4d0a) = temp_v0 + 1;
      *(unsigned short *)(param_1 + 0x4d08) = *(unsigned short *)(param_1 + 0x4d08) | 1;
    }
    if ((*(unsigned short *)(param_1 + 0x4d08) & 1) != 0) {
      nn_os_CriticalSection_Leave(param_1 + 0x4d0c);
      return;
    }
  } while( 1 );
}

} /* extern "C" */
