#include "map/MapIfGlobals.h"
#include "map/LmapPlayerModel.h"

extern "C" {

/* Creates the map action-up marker model at the given position (xyz, w) and starts it. */
void mapIfShowActionMarker(MapMarkerPosition position)
{
    MapIfModelSlot *block = mapIfStartMarkerSlot(4, position);
    NodeVec3 rotation;

    block->model = asdMdlManagerCreateLoaded("map/all/action_up.bam", 7);
    lightOwnerRegister(block->model, 1);
    nodeSetTranslation(block->model->node, 0, &block->position.x);
    rotation.x = 0.0f;
    rotation.y = block->position.w;
    rotation.z = 0.0f;
    modelPartSetRotationDegrees(block->model->node, 0, rotation);
}

} /* extern "C" */
