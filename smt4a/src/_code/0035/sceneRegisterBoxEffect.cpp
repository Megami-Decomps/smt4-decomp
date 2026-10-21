/* NON_MATCHING: GPR allocation and name-pointer spill add two instructions; all seven VFP inputs/layouts recovered. Legacy callers still need their missing FP paths recovered. Alternate optimization candidate. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"

namespace {
struct SceneShapeConfig {
    u32 kind;
    f32 first;
    f32 second;
    f32 third;
    u8 unk10[0xc];
};
struct SceneDrawConfig {
    u32 kind;
    u32 resource;
    u32 data[3];
    u8 options[6];
    u16 enabled;
    SceneShapeConfig* shape; // 0x1c
};
struct SceneRegistration {
    u32 unk00;
    u32 unk04;
    const char* name;
    BattleVector3* position;
    u32 unk10;
    SceneDrawConfig* draw;
};
struct ScenePlacementSlot {
    u8 unk00[8];
    SceneShapeConfig shape; // 0x08
    SceneDrawConfig draw; // 0x24
    BattleVector3 position; // 0x44
    BattleVector3 rotation; // 0x50
    SceneRegistration registration; // 0x5c
    u8 unk74[0x18];
}; // 0x8c
struct SceneRecord {
    u8 unk000[0x124];
    s32 handle;
    u8 option;
    u8 unk129[3];
    u32 id;
    u32 value;
    s32 status;
    u8 unk138[0x24];
    u16 field15c;
    u16 field15e;
    u16 field160;
    u16 field162;
    u8 field164;
    u8 unk165[7];
    u8 field16c;
    u8 field16d;
    u8 field16e;
    u8 unk16f[5];
    u32 data;
    u8 unk178[4];
}; // 0x17c
struct SceneRecordCounters {
    u32 unk00;
    s32 placements;
};
}

extern "C" {
extern SceneRecordCounters DAT_00580c90;
extern ScenePlacementSlot DAT_00602020[];
extern SceneRecord DAT_005f32a0[];
s32 FUN_00305760(SceneRegistration*);
s32 FUN_00244c70(u32 id, u32 effect, s32 variant, u32 priority,
                 f32 x, f32 y, f32 z, f32 yaw);

s32 sceneRegisterBoxEffect(u32 id, u32 value, const char* name, u32 resource,
                 u32 effect, s32 variant, u8 option0, u8 option1, u8 option2,
                 u8 option3, u8 option4, u8 option5, u8 flag0, u8 flag1, u8 option,
                 u32 data0, u32 data1, u32 data2, u32 priority,
                 f32 x, f32 y, f32 z, f32 extent0, f32 extent1, f32 extent2, f32 yaw)
{
    const s32 placementIndex = DAT_00580c90.placements;
    ScenePlacementSlot& slot = DAT_00602020[placementIndex];
    slot.shape.kind = 2;
    slot.shape.second = extent0;
    slot.shape.first = extent1;
    slot.shape.third = extent2;
    slot.draw.resource = resource;
    slot.draw.kind = 1;
    slot.draw.data[0] = data0;
    slot.draw.data[1] = data1;
    slot.draw.data[2] = data2;
    slot.draw.options[0] = option0;
    slot.draw.options[1] = option1;
    slot.draw.options[2] = option2;
    slot.draw.options[3] = option3;
    slot.draw.options[4] = option4;
    slot.draw.options[5] = option5;
    slot.draw.enabled = 1;
    slot.registration.draw = &slot.draw;
    slot.draw.shape = &slot.shape;
    slot.registration.position = &slot.position;
    slot.rotation.x = 0.0f;
    slot.rotation.y = yaw;
    slot.rotation.z = 0.0f;
    slot.position.x = x;
    slot.position.y = y;
    slot.position.z = z;
    slot.registration.name = name;
    const s32 recordIndex = FUN_00305760(&slot.registration);
    const s32 handle = FUN_00244c70(id, effect, variant, priority, x, y, z, yaw);
    SceneRecord& record = DAT_005f32a0[recordIndex];
    record.handle = handle;
    record.field16c = flag0;
    DAT_005f32a0[placementIndex].field16d = flag1;
    record.id = id;
    record.value = value;
    record.status = -1;
    record.field15c = 0;
    record.field15e = 0xffff;
    record.field164 = 0;
    record.option = option;
    record.field16e = 0;
    record.field160 = 0;
    record.field162 = 0;
    record.data = data0;
    ++DAT_00580c90.placements;
    return recordIndex;
}
} // extern "C"
