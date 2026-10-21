/* NON_MATCHING: composite-state pointer stores become STRD and resource pointer loads/register allocation differ; active=1 is materialized late instead of retained across branches. */
#include "shard/W6_W6Match7_SpriteGroups.h"

// Select a single, paired, or composite sprite group and reset its playback states.
extern "C" void spriteGroupPlayerSelect(SpriteGroupPlayer *player, s32 group)
{
    SpriteGroupResource *resource = player->resource;
    SpriteGroupDefinition *definition = &resource->groups[group];
    if (definition->count != 0) {
        if (definition->kind & 0x10000000) {
            player->group = group;
            player->flags = 0x10000000;
            player->count = definition->count;
            SpriteGroupChild *children = reinterpret_cast<SpriteGroupChild *>(resource->data + definition->offset);
            for (u32 index = 0; index < definition->count; ++index) {
                spriteGroupStateInitialize(resource, children[index].group, &player->states[index]);
                player->states[index].frame = -children[index].startFrame;
            }
        } else if (definition->flags & 0xc0) {
            player->flags = definition->flags;
            player->group = group;
            player->count = 2;
            spriteGroupStateInitialize(resource, group, &player->states[0]);
            spriteGroupStateInitialize(resource, group + 1, &player->states[1]);
        } else {
            player->flags = 0;
            player->group = group;
            player->count = 1;
            spriteGroupStateInitialize(resource, group, &player->states[0]);
        }
        player->active = 1;
    }
}
