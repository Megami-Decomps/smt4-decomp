#include "shard/W6_W6Match6_CollisionQuad.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);

/* Allocates the collision quad buffers. */
void mapCollisionAllocBuffers(void)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\collision.cpp", 987);
    g_mapCollision.triangles = (CollisionQuad *)asdMemoryAlloc(0x100, 0x100, 0, sizeof(CollisionQuad) * 512, 1);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\collision.cpp", 988);
    g_mapCollision.quads = (CollisionQuad *)asdMemoryAlloc(0x100, 0x100, 0, sizeof(CollisionQuad) * 384, 1);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\collision.cpp", 989);
    g_mapCollision.second = (CollisionQuad *)asdMemoryAlloc(0x100, 0x100, 0, sizeof(CollisionQuad) * 160, 1);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\collision.cpp", 990);
    g_mapCollision.unk24 = (CollisionQuad *)asdMemoryAlloc(0x100, 0x100, 0, sizeof(CollisionQuad) * 768, 1);
}

} /* extern "C" */
