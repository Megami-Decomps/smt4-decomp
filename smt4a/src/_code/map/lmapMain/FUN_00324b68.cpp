#include "map/LmapViewGlobals.h"

struct LocalCamera;

extern "C" {
extern LocalCamera g_localCamera;
void FUN_0014f0dc(LocalCamera *, const MapVector *, const MapVector *,
                  const MapVector *);

void FUN_00324b68(MapVector eye, MapVector target)
{
    MapVector destination = target;
    MapVector position = eye;
    LmapViewA *view = g_lmapViewHolder.view;
    destination.x += view->targetOffset.x;
    destination.y += view->targetOffset.y;
    destination.z += view->targetOffset.z;
    FUN_0014f0dc(&g_localCamera, &position, &destination, &view->up);
}
}
