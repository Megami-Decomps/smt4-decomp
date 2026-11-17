#include "map/mapDepart.h"
#include "shard/W6_W6Match3_NodeEnable.h"

extern "C" {
extern MapDepartWork *g_mapDepartWork;
void nodeSetPropertyScale(AsdMdlNode *resource, f32 scale);
void modelSetScale(AsdMdlNode *resource, f32 scale);

void mapDepartSyncModelVisibility()
{
    AsdMdlObject *node = g_mapDepartWork->nodeA;
    if (node != NULL) {
        if (g_mapDepartWork->modelsVisible != 0) {
            if ((node->flags & 2) != 0) {
                node->flags &= ~2u;
                node->node->sceneNode->positionFollowed = 1;
                modelSetScale(g_mapDepartWork->nodeA->node, 1.0f);
                nodeSetPropertyScale(g_mapDepartWork->nodeA->node, 1.0f);
            }
        } else if ((node->flags & 2) == 0) {
            node->flags |= 2;
            node->node->sceneNode->positionFollowed = 0;
            modelSetScale(g_mapDepartWork->nodeA->node, 0.0f);
            nodeSetPropertyScale(g_mapDepartWork->nodeA->node, 0.0f);
        }
    }
    node = g_mapDepartWork->nodeB;
    if (node != NULL) {
        if (g_mapDepartWork->modelsVisible != 0) {
            if ((node->flags & 2) != 0) {
                node->flags &= ~2u;
                node->node->sceneNode->positionFollowed = 1;
                modelSetScale(g_mapDepartWork->nodeB->node, 1.0f);
                nodeSetPropertyScale(g_mapDepartWork->nodeB->node, 1.0f);
            }
        } else if ((node->flags & 2) == 0) {
            node->flags |= 2;
            node->node->sceneNode->positionFollowed = 0;
            modelSetScale(g_mapDepartWork->nodeB->node, 0.0f);
            nodeSetPropertyScale(g_mapDepartWork->nodeB->node, 0.0f);
        }
    }
}
}
