/* NON_MATCHING: repaired contiguous player growth packet and result handoffs; remaining player initialization code generation is unverified. */
#include "romwright_types.h"
#include "shard/W6_W6Match8_StatGrowth.h"
#include "gamedata/DataTable.h"

struct PlayerGrowthDefaults {
    s8 initialStats[5];
    u8 growth[5];
    u8 baseHp;
    u8 baseMp;
    u8 hpGrowth;
    u8 mpGrowth;
};

extern "C" {

u32 FUN_003daaf8(s32 level, const StatGrowthParameters *parameters);
int FUN_003df7c4(int);

extern int gameGetPlayerData(void);
/* Supplied declaration required: FUN_003df7c4. */


void FUN_004ccf78(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned short temp_v1;
  int temp_v2;
  void *temp_v3;
  char *pcVar5;
  void *temp_v4;
  
  temp_v2 = gameGetPlayerData();
  *(unsigned short *)(temp_v2 + 0x62) = 1;
  *(unsigned int *)(temp_v2 + 0x30) = 0;
  *(unsigned short *)(temp_v2 + 0x5e) = 0;
  temp_v3 = dataTableGet(9,0);
  dataTableGetCount(temp_v3);
  pcVar5 = (char *)dataTableGetEntries(temp_v3);
  *(short *)(temp_v2 + 0x12) = (short)*pcVar5;
  *(short *)(temp_v2 + 0x14) = (short)pcVar5[1];
  *(short *)(temp_v2 + 0x16) = (short)pcVar5[2];
  *(short *)(temp_v2 + 0x18) = (short)pcVar5[3];
  *(short *)(temp_v2 + 0x1a) = (short)pcVar5[4];
  temp_v4 = dataTableGet(9,0);
  dataTableGetCount(temp_v4);
  const PlayerGrowthDefaults *defaults =
      (const PlayerGrowthDefaults *)dataTableGetEntries(temp_v4);
  StatGrowthParameters parameters = {};
  parameters.baseHp = defaults->baseHp;
  parameters.baseMp = defaults->baseMp;
  for (s32 index = 0; index < 5; ++index) {
      parameters.stats[index] = defaults->growth[index];
  }
  parameters.hpGrowth = defaults->hpGrowth;
  parameters.mpGrowth = defaults->mpGrowth;
  parameters.kind = 1;
  temp_v1 = *(unsigned short *)(temp_v2 + 0x62);
  *(unsigned short *)(temp_v2 + 0xe) = (u16)unitComputeMaximumHpAtLevel(temp_v1, &parameters);
  *(unsigned short *)(temp_v2 + 0x10) = (u16)FUN_003daaf8(temp_v1, &parameters);
  FUN_003df7c4(0);
  *(unsigned short *)(temp_v2 + 0x2a) = *(unsigned short *)(temp_v2 + 0x1c);
  *(unsigned short *)(temp_v2 + 0x2c) = *(unsigned short *)(temp_v2 + 0x1e);
  return;
}

} /* extern "C" */
