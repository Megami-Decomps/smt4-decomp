#include "classes/MoriModelShadowMap.h"

/* Constructs the tuning block with its defaults (the state bytes and tuning values construct
 * themselves). */
MoriModelShadowMap::MoriModelShadowMap()
    : target(0), textureCommands(0), pixels(0), commands(0), commandCount(0), commandBuffer(0), targetLists(0),
      unkAc(0.0f), unkB0(0.0f), unkB4(0.0f), unkB8(0.0f), unkBc(0.0f), unkC0(0.0f), ready(1)
{
}
