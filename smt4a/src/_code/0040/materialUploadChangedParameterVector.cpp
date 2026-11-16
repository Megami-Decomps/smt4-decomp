#include "gfx/MaterialParameterWork.h"
#include "code/Code0019_Smt4a.h"

// Upload the four-float parameter block when it changes or is marked dirty, then clear the flag.
extern "C" void materialUploadChangedParameterVector(MaterialParameterWork *work, const MaterialParameterVector *values)
{
    if (work->dirty != 0 ||
        values->values[0] != work->parameters.values[0] ||
        values->values[1] != work->parameters.values[1] ||
        values->values[2] != work->parameters.values[2] ||
        values->values[3] != work->parameters.values[3]) {
        work->parameters = *values;
        gpuWriteVertexUniformVec4(work->handle, reinterpret_cast<const u32 *>(work->parameters.values));
    }
    work->dirty = 0;
}
