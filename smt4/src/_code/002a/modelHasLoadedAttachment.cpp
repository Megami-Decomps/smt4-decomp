#include "gfx/ModelBoneAttachment.h"
extern "C" s32 modelHasLoadedAttachment(const ModelBoneAttachmentRoot *object)
{
    if (object == NULL)
        return 0;
    if (object->model == NULL)
        return 0;
    return object->model->file != NULL;
}
