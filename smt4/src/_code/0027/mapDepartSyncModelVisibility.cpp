#include "map/mapDepart.h"
#include "shard/W6_W6Match3_NodeEnable.h"

extern "C" {
extern MapDepartWork *g_mapDepartWork;
void nodeSetPropertyScale(NodeEnableResource *resource, f32 scale);
void FUN_0029bb14(NodeEnableResource *resource, f32 scale);

void mapDepartSyncModelVisibility()
{
    NodeEnableNode *node = g_mapDepartWork->nodeA;
    if (node != NULL) {
        if (g_mapDepartWork->modelsVisible != 0) {
            if ((node->flags & 2) != 0) {
                node->flags &= ~2u;
                node->resource->target->enabled = 1;
                FUN_0029bb14(g_mapDepartWork->nodeA->resource, 1.0f);
                nodeSetPropertyScale(g_mapDepartWork->nodeA->resource, 1.0f);
            }
        } else if ((node->flags & 2) == 0) {
            node->flags |= 2;
            node->resource->target->enabled = 0;
            FUN_0029bb14(g_mapDepartWork->nodeA->resource, 0.0f);
            nodeSetPropertyScale(g_mapDepartWork->nodeA->resource, 0.0f);
        }
    }
    node = g_mapDepartWork->nodeB;
    if (node != NULL) {
        if (g_mapDepartWork->modelsVisible != 0) {
            if ((node->flags & 2) != 0) {
                node->flags &= ~2u;
                node->resource->target->enabled = 1;
                FUN_0029bb14(g_mapDepartWork->nodeB->resource, 1.0f);
                nodeSetPropertyScale(g_mapDepartWork->nodeB->resource, 1.0f);
            }
        } else if ((node->flags & 2) == 0) {
            node->flags |= 2;
            node->resource->target->enabled = 0;
            FUN_0029bb14(g_mapDepartWork->nodeB->resource, 0.0f);
            nodeSetPropertyScale(g_mapDepartWork->nodeB->resource, 0.0f);
        }
    }
}
}
