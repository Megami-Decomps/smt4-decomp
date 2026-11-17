#include "common.h"
#include "gamedata/ConsumableRecordA.h"
extern "C" {
/* Tests either accepted record category in the supported ID ranges. */
int FUN_0047fbb4(u32 id){if(id-1<=59 || id-1951<=63){u32 category=itemTableGetItemRecord(id)->type;if(category==2||category==3)return 1;}return 0;}
}
