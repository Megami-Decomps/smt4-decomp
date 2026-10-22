#include "shard/W6_W6Match6_CollisionQuad.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);

/* Allocates the collision quad buffers. */
void mapCollisionAllocBuffers(void)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\map\\collision.cpp", 887);
    g_mapCollision.triangles =
        (CollisionQuad *)asdMemoryAlloc(0x100, 0x100, 0, 512 * sizeof(CollisionQuad), 1);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\map\\collision.cpp", 888);
    g_mapCollision.quads =
        (CollisionQuad *)asdMemoryAlloc(0x100, 0x100, 0, 384 * sizeof(CollisionQuad), 1);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\map\\collision.cpp", 889);
    g_mapCollision.second =
        (CollisionQuad *)asdMemoryAlloc(0x100, 0x100, 0, 160 * sizeof(CollisionQuad), 1);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\map\\collision.cpp", 890);
    g_mapCollision.unk24 =
        (CollisionQuad *)asdMemoryAlloc(0x100, 0x100, 0, 768 * sizeof(CollisionQuad), 1);
}

} /* extern "C" */
