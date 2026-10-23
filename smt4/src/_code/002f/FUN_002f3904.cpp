/* NON_MATCHING: bounds case placement, geometry-base folding, coalesced vector argument loads and normal-line VMLA scheduling differ. */
#include "shard/W6_W6Match6_CollisionQuad.h"

struct RegisteredBoundsShape { s32 type; };
struct RegisteredBoundsSource {
    u32 unk00;
    s32 kind;
    u8 unk08[0x14];
    RegisteredBoundsShape *shape;
};
struct RegisteredBoundsObject {
    u8 unk00[0x14];
    RegisteredBoundsSource *source;
};
struct RegisteredBoundsRecord {
    CollisionVector corners[8];
    CollisionVector center;
    CollisionVector direction;
    u8 unk78[0x100];
};
struct RegisteredBoundsRegistry {
    RegisteredBoundsObject *objects[160];
    RegisteredBoundsRecord records[160];
};
typedef char RegisteredBoundsOffsets[
    sizeof(RegisteredBoundsRecord) == 0x178 &&
    offsetof(RegisteredBoundsRecord, center) == 0x60 &&
    offsetof(RegisteredBoundsSource, shape) == 0x1c &&
    offsetof(RegisteredBoundsRegistry, records) == 0x280 ? 1 : -1];
extern "C" {
extern s32 DAT_00447a28;
extern RegisteredBoundsRegistry DAT_004a0fe4;
void rectangleForwardExpanded(u32, f32, f32, f32, f32, f32, f32);
}

static inline void drawRegisteredBoundsEdge(u32 color, const CollisionVector &first,
    const CollisionVector &second)
{
    rectangleForwardExpanded(color, first.x, first.y, first.z, second.x, second.y, second.z);
}

static inline void drawRegisteredBoundsNormal(const RegisteredBoundsRecord *record)
{
    CollisionVector endpoint = {
        record->center.x + record->direction.x * 300.0f,
        record->center.y + record->direction.y * 300.0f,
        record->center.z + record->direction.z * 300.0f
    };
    drawRegisteredBoundsEdge(0xff0000ff, record->center, endpoint);
}

extern "C" void FUN_002f3904()
{
    for (s32 index = 0; index < DAT_00447a28; ++index) {
        const RegisteredBoundsSource *source = DAT_004a0fe4.objects[index]->source;
        switch (source->shape->type) {
        case 1: {
            const RegisteredBoundsRecord *record = &DAT_004a0fe4.records[index];
            if (source->kind == 0x27) {
                drawRegisteredBoundsEdge(0xff00ff, record->corners[0], record->corners[1]);
                drawRegisteredBoundsEdge(0xff00ff, record->corners[0], record->corners[2]);
                drawRegisteredBoundsEdge(0xff00ff, record->corners[1], record->corners[3]);
            }
            drawRegisteredBoundsEdge(0xff00ff, record->corners[2], record->corners[3]);
            drawRegisteredBoundsNormal(record);
            break;
        }
        case 2: {
            const RegisteredBoundsRecord *record = &DAT_004a0fe4.records[index];
            drawRegisteredBoundsEdge(0xff00ff, record->corners[4], record->corners[5]);
            drawRegisteredBoundsEdge(0xff00ff, record->corners[5], record->corners[7]);
            drawRegisteredBoundsEdge(0xff00ff, record->corners[6], record->corners[7]);
            drawRegisteredBoundsEdge(0xff00ff, record->corners[4], record->corners[6]);
            drawRegisteredBoundsNormal(record);
            break;
        }
        }
    }
}
