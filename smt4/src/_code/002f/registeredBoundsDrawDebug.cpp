/* NON_MATCHING: retail hoists the record array's base (the array is its own global, defined with the object
 * table in the original file) and loads each edge's second vector first (rectangleForwardExpanded probably takes
 * two by-value vectors); the normal line's centre and direction load in the other order. */
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
extern s32 g_entryTableInfo;
extern RegisteredBoundsRegistry DAT_004a0fe4;
void rectangleForwardExpanded(u32, f32, f32, f32, f32, f32, f32);
}

static inline void drawRegisteredBoundsEdge(u32 color, const CollisionVector &first, const CollisionVector &second)
{
    rectangleForwardExpanded(color, first.x, first.y, first.z, second.x, second.y, second.z);
}

/* Draws the record's direction as a 300-unit line from its centre. */
static inline void drawRegisteredBoundsNormal(const RegisteredBoundsRecord *record)
{
    CollisionVector offset = {
        record->direction.x * 300.0f, record->direction.y * 300.0f, record->direction.z * 300.0f
    };
    CollisionVector endpoint = {
        record->center.x + offset.x, record->center.y + offset.y, record->center.z + offset.z
    };
    drawRegisteredBoundsEdge(0xff0000ff, record->center, endpoint);
}

/* Draws the edge between two corners of the record at index. */
static inline void drawRegisteredBoundsCorners(s32 index, s32 first, s32 second)
{
    drawRegisteredBoundsEdge(0xff00ff, DAT_004a0fe4.records[index].corners[first],
                             DAT_004a0fe4.records[index].corners[second]);
}

/* Draws the outlines and directions of the registered bounds (debug view). */
extern "C" void registeredBoundsDrawDebug()
{
    for (s32 index = 0; index < g_entryTableInfo; ++index) {
        const RegisteredBoundsSource *source = DAT_004a0fe4.objects[index]->source;
        switch (source->shape->type) {
        case 0:
            break;
        case 1:
            if (source->kind == 0x27) {
                drawRegisteredBoundsCorners(index, 0, 1);
                drawRegisteredBoundsCorners(index, 0, 2);
                drawRegisteredBoundsCorners(index, 1, 3);
                drawRegisteredBoundsCorners(index, 2, 3);
            } else {
                drawRegisteredBoundsCorners(index, 2, 3);
            }
            drawRegisteredBoundsNormal(&DAT_004a0fe4.records[index]);
            break;
        case 2:
            drawRegisteredBoundsCorners(index, 4, 5);
            drawRegisteredBoundsCorners(index, 5, 7);
            drawRegisteredBoundsCorners(index, 6, 7);
            drawRegisteredBoundsCorners(index, 4, 6);
            drawRegisteredBoundsNormal(&DAT_004a0fe4.records[index]);
            break;
        }
    }
}
