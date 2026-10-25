#include "map/mapDepart.h"

extern "C" {

f32 scriptReadStackValueAsFloat(s32 index);
void lmapSetSecondTransform(f32 a, f32 b, f32 c, f32 d, f32 e, f32 f);

/* Script command: sets the second map transform from six float arguments. */
u32 scrLmapSetSecondTransform(void)
{
    MapVector position;
    position.x = scriptReadStackValueAsFloat(0);
    position.y = scriptReadStackValueAsFloat(1);
    position.z = scriptReadStackValueAsFloat(2);
    MapVector rotation;
    rotation.x = scriptReadStackValueAsFloat(3);
    rotation.y = scriptReadStackValueAsFloat(4);
    rotation.z = scriptReadStackValueAsFloat(5);
    lmapSetSecondTransform(position.x, position.y, position.z, rotation.x, rotation.y, rotation.z);
    return 1;
}

} /* extern "C" */
