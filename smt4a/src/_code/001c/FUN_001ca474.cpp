/* NON_MATCHING: typed light ranges become counted loops; pointer-copy instructions and registers differ. */
#include "gfx/SceneLightSelection.h"

extern "C" {
// Select the set's enabled ambient/hemisphere lights and bounded vertex/fragment light lists.
void FUN_001ca474(SceneLightSelection *selection, s32 index)
{
    SceneLightSet *set = selection->sets[index];
    if (!set || selection->selected == index)
        return;
    selection->selected = index;
    AsdSceneLightObject *ambient = set->ambient;
    if (selection->ambient != ambient) {
        selection->ambientDirty = 1;
        if (!ambient || !ambient->parameters->visibility.enabled)
            ambient = 0;
        selection->ambient = ambient;
    }
    AsdSceneLightObject *hemisphere = set->hemisphere;
    if (selection->hemisphere != hemisphere) {
        selection->hemisphereDirty = 1;
        if (!hemisphere || !hemisphere->parameters->visibility.enabled)
            hemisphere = 0;
        selection->hemisphere = hemisphere;
    }
    selection->vertexCount = 0;
    AsdSceneLightObject **vertexEnd = set->vertexEnd;
    u32 capacity = selection->vertexCapacityAndFlags & 0x3FFFFFFF;
    for (AsdSceneLightObject **light = set->vertexBegin; light != vertexEnd; ++light) {
        selection->vertexDirty = 1;
        if (selection->vertexCount == capacity)
            break;
        if ((*light)->parameters->visibility.enabled) {
            selection->vertex[selection->vertexCount] = *light;
            ++selection->vertexCount;
        }
    }
    selection->fragmentCount = 0;
    AsdSceneLightObject **fragmentEnd = set->fragmentEnd;
    for (AsdSceneLightObject **light = set->fragmentBegin; light != fragmentEnd; ++light) {
        selection->fragmentDirty = 1;
        if (selection->fragmentCount == 8)
            break;
        if ((*light)->parameters->visibility.enabled) {
            selection->fragment[selection->fragmentCount] = *light;
            ++selection->fragmentCount;
        }
    }
}
}
