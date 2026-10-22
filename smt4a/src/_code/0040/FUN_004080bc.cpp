/* NON_MATCHING: retail keeps the route pointer in r0 and copies the direction using paired loads; this source reloads r0 for the call. */
#include "shard/S1Mover.h"

struct RouteNode {
    u8 unk00[0x1c];
    Vec3f position; // 0x1c
    u8 unk28[8];
    Vec3f *direction; // 0x30
};
struct RouteNodeTable {
    u8 unk00[0x48];
    RouteNode **nodes; // 0x48
};
struct RouteResource {
    u8 unk00[0x34];
    RouteNodeTable *table; // 0x34
};
struct RouteActor {
    u32 unk00;
    u32 controller; // 0x04
};
struct RouteController {
    s32 nodeCount; // 0x000
    s32 selectedNode; // 0x004
    u8 unk008[8];
    u32 elapsed; // 0x010
    u8 active; // 0x014
    u8 restorePosition; // 0x015
    u8 unk016[6];
    RouteActor *actor; // 0x01c
    u8 unk020[0x574];
    RouteResource *resource; // 0x594
    s32 mode; // 0x598
    u8 unk59c[0x18];
    Vec3f position; // 0x5b4
    Vec3f direction; // 0x5c0
    u8 unk5cc[0x3c];
    Vec3f currentPosition; // 0x608
    Vec3f savedPosition; // 0x614
};
extern "C" {
void FUN_00407598(RouteController *route);
void controllerSetDestination(u32 controller, const Vec3f *position);

// Select an interior route node and restore the actor's saved position when requested.
void FUN_004080bc(RouteController *route, s32 index, s32 mode)
{
    route->elapsed = 0;
    route->active = 0;
    if (index >= 0 && index != route->nodeCount && index <= route->nodeCount) {
        route->selectedNode = index;
        route->mode = mode;
        RouteNode *node = route->resource->table->nodes[index];
        route->position = node->position;
        route->direction = *node->direction;
        FUN_00407598(route);
    }
    if (route->restorePosition) {
        route->currentPosition = route->savedPosition;
        controllerSetDestination(route->actor->controller, &route->currentPosition);
    }
}
}
