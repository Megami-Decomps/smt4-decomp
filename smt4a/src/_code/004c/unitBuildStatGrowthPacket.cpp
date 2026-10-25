#include "romwright_types.h"
#include "shard/W6_W6Match8_StatGrowth.h"
#include "shard/W6_W6Match8_DevilRecordA.h"
#include <string.h>

extern "C" {

u32 FUN_003daaf8(s32 level, const StatGrowthParameters *parameters);

typedef struct fn_004ccb0c_arg1 fn_004ccb0c_arg1;
struct fn_004ccb0c_arg1 {
    unsigned char pad_0x0[0x6];
    ushort field_0x6; /* +0x6 */
    unsigned char pad_0x8[0x10];
    ushort field_0x18; /* +0x18 */
    ushort field_0x1a; /* +0x1a */
    byte field_0x1c; /* +0x1c */
    byte field_0x1d; /* +0x1d */
    unsigned char pad_0x1e[0xa];
    byte field_0x28; /* +0x28 */
    byte field_0x29; /* +0x29 */
    byte field_0x2a; /* +0x2a */
    byte field_0x2b; /* +0x2b */
    byte field_0x2c; /* +0x2c */
};

extern int saveSlotIsActiveWithId(fn_004ccb0c_arg1 *);


void unitBuildStatGrowthPacket(unsigned int *param_1, fn_004ccb0c_arg1 *param_2)
{
    const fn_004ccb0c_arg1 *record = (const fn_004ccb0c_arg1 *)
        FUN_00184310((u32)param_2);
    StatGrowthParameters parameters = {};
    parameters.baseHp = record->field_0x18;
    parameters.baseMp = record->field_0x1a;
    parameters.stats[0] = record->field_0x28;
    parameters.stats[1] = record->field_0x29;
    parameters.stats[2] = record->field_0x2a;
    parameters.stats[3] = record->field_0x2b;
    parameters.stats[4] = record->field_0x2c;
    parameters.hpGrowth = record->field_0x1c;
    parameters.mpGrowth = record->field_0x1d;
    parameters.hp = (u16)unitComputeMaximumHpAtLevel(record->field_0x6, &parameters);
    parameters.mp = (u16)FUN_003daaf8(record->field_0x6, &parameters);
    parameters.kind = saveSlotIsActiveWithId(param_2) != 0 ? 3 : 2;
    const u8 *bytes = reinterpret_cast<const u8 *>(&parameters);
    // Publish the packed packet without assuming a wider alignment for its two-byte tail.
    memcpy(param_1, bytes, 4);
    memcpy(param_1 + 1, bytes + 4, 4);
    memcpy(param_1 + 2, bytes + 8, 4);
    memcpy(param_1 + 3, bytes + 12, 4);
    memcpy(param_1 + 4, bytes + 16, 2);
}

} /* extern "C" */
