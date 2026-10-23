/* NON_MATCHING: transform constant-load scheduling, stack base preservation and owner/object saved registers differ. */
#include "map/mapDepart.h"

struct EnemySpawnRecord { u16 unk00; s16 x, y, z; u16 id, kind; };
struct EnemySpawnOwner {
    u32 unk00, id, variant;
    u8 unk0C[0x8c];
    u32 context;
    u8 unk9C[0x806];
    u16 registeredIds[32];
};
struct EnemySpawnObject {
    u8 prefix[0x20];
    u32 id, sourceIndex;
    u8 unk28[0x3c];
    u32 category, currentValue;
    u8 unk6C[4];
    u32 kind;
};
typedef char EnemySpawnOwnerOffsetsCheck[offsetof(EnemySpawnOwner, context) == 0x98 &&
    offsetof(EnemySpawnOwner, registeredIds) == 0x8a2 ? 1 : -1];
extern "C" {
const EnemySpawnRecord *FUN_00356308(u32 index);
s32 gameFlagIsSet(u32 flag);
u32 FUN_004bc420(u32 id, u32 variant, s32 mode);
EnemySpawnObject *FUN_00482b08(EnemySpawnOwner *owner, s32 kind, s32 mode);
void FUN_004824fc(EnemySpawnObject *object, u32 context);
void FUN_00482414(EnemySpawnObject *object, const MapVector *position);
void FUN_00482428(EnemySpawnObject *object, const MapVector *rotation);
void FUN_0048269c(EnemySpawnObject *object, const MapVector *scale);
u32 mapEnemyLookupByte(u32 id);
u32 dataTable00GetCurrentValue(u32 id);
s32 table29ApplyEntry(EnemySpawnObject *object, u32 id);

void FUN_00483304(EnemySpawnOwner *owner, u32 sourceIndex)
{
    const EnemySpawnRecord *record = FUN_00356308(sourceIndex);
    if (record->kind != 1 || (gameFlagIsSet(0x137) != 0 && gameFlagIsSet(0x147) == 0)) {
        struct Transform { MapVector position, rotation, scale; } transform;
        transform.position.x = static_cast<f32>(record->x);
        transform.position.y = static_cast<f32>(record->y);
        transform.position.z = static_cast<f32>(record->z);
        transform.rotation.x = 0.0f;
        transform.rotation.y = 0.0f;
        transform.rotation.z = 0.0f;
        transform.scale.x = 50.0f;
        transform.scale.y = 50.0f;
        transform.scale.z = 50.0f;
        u16 id = record->id;
        for (s32 index = 0; index < 32; ++index) {
            if (owner->registeredIds[index] == id) {
                return;
            }
        }
        u32 enemy = FUN_004bc420(owner->id, owner->variant, 0);
        EnemySpawnObject *object = FUN_00482b08(owner, 0, 0);
        if (object != NULL) {
            FUN_004824fc(object, owner->context);
            FUN_00482414(object, &transform.position);
            FUN_00482428(object, &transform.rotation);
            FUN_0048269c(object, &transform.scale);
            object->id = enemy;
            object->sourceIndex = sourceIndex;
            object->category = mapEnemyLookupByte(enemy);
            object->currentValue = dataTable00GetCurrentValue(enemy);
            object->kind = record->kind;
            if (table29ApplyEntry(object, id) != 0) {
                for (s32 index = 0; index < 32; ++index) {
                    if (owner->registeredIds[index] == 0) {
                        owner->registeredIds[index] = id;
                        return;
                    }
                }
            }
        }
    }
}
}
