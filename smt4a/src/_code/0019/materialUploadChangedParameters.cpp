#include "gfx/MaterialParameterWork.h"
#include "code/Code0019_Smt4a.h"

// Upload the parameter block when its float value changes or it is marked dirty.
extern "C" void materialUploadChangedParameters(MaterialParameterWork* work, f32 value)
{
    if (work->dirty != 0 || work->parameters.values[3] != value) {
        work->parameters.values[3] = value;
        gpuWriteVertexUniformVec4(work->handle, reinterpret_cast<const u32 *>(work->parameters.values));
    }
    work->dirty = 0;
}
